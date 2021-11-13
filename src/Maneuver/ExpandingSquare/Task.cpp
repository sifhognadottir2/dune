//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Sif Hognadottir                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <cmath>
#include <DUNE/Coordinates/WGS84.hpp>
#include <DUNE/Math/Angles.hpp>

using namespace DUNE::Math;
using namespace DUNE::Coordinates;

namespace Maneuver
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Sif Hognadottir
  namespace ExpandingSquare
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Maneuver 
      IMC::ExpandingSquare m_maneuver;
      //! EstimatedState
      //IMC::EstimatedState m_state;
      //! DesiredPath
      IMC::DesiredPath m_path;
      //! Waypoints
      std::vector<double> m_waypoints_lon;
      std::vector<double> m_waypoints_lat;
      //! hstep
      double m_hstep;
      //! Waypoint Counter
      int m_waypoint_count; 
      //! Curve right
      bool m_curve_right;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        bindToManeuver<Task, IMC::ExpandingSquare>();
      }

      void consume(const IMC::ExpandingSquare* maneuver) {
        if (maneuver->getSource() != getSystemId())
          return;

        m_maneuver = *maneuver;
        m_hstep = maneuver->hstep;
        m_curve_right = maneuver->curve_right;

        double x_next = 0;
        double y_next = 0;
        double x_prev = 0;
        double y_prev = 0;
        
        int iteration = 0;
        int x_dir;
        int y_dir;

        // Centre of expanding square maneuver
        double lat = maneuver->lat; 
        double lon = maneuver->lon;

        m_waypoints_lon.push_back(lon); 
        m_waypoints_lat.push_back(lat);
        

        int step_amount = 1; 

        if (m_curve_right) {
          x_dir = 1;
          y_dir = 1;
        } else {
          x_dir = 1;
          y_dir = -1;
        }

        
        while ((x_prev <= maneuver->width/2) && (y_prev <= maneuver->width/2)) {
          
          lat = maneuver->lat; 
          lon = maneuver->lon;
          
          if (iteration % 2 == 0) {
            x_next = x_dir*step_amount*m_hstep + x_prev;
            y_next = y_prev;
            x_dir = -1*x_dir;

          } else if (iteration % 2 != 0) {
            x_next = x_prev;
            y_next = y_dir*step_amount*m_hstep + y_prev;
            y_dir = -1*y_dir;

            step_amount++;
          }

          x_prev = x_next;
          y_prev = y_next;
          
          // Rotate w.r.t. bearing angle
          Angles::rotate(maneuver->bearing,false,x_next,y_next);

          // Add offset
          Coordinates::WGS84::displace(x_next,y_next,&lat,&lon);

          m_waypoints_lon.push_back(lon); 
          m_waypoints_lat.push_back(lat);

          iteration++;
        } 
        
        inf("List of waypoints complete");

        setControl(IMC::CL_PATH);
        m_path.speed = maneuver->speed;
        m_path.speed_units = maneuver->speed_units;
        m_path.end_z = maneuver->z;
        m_path.end_z_units = maneuver->z_units;
        

        m_waypoint_count = 0;
        sendPath(m_waypoints_lat[m_waypoint_count],m_waypoints_lon[m_waypoint_count]);
        inf("Sent first path");
      }

      void onPathControlState(const IMC::PathControlState* pcs) {
        if (pcs->flags & IMC::PathControlState::FL_NEAR)
        {
          if (m_waypoint_count < m_waypoints_lat.size()) {

            sendPath(m_waypoints_lat[m_waypoint_count],m_waypoints_lon[m_waypoint_count]);
            m_waypoint_count++;

          } else {

            signalCompletion();
            return;
          }
        }
      }

      //! Send new desired path
      //! @param[in] lat latitude for new desired path
      //! @param[in] lon longitude for new desired path
      void
      sendPath(double lat, double lon)
      {
        // Calculate WGS-84 coordinates and fill DesiredPath message
        m_path.end_lat = lat;
        m_path.end_lon = lon;
        m_path.flags = 0;
        dispatch(m_path);
      }
    };
  }
}

DUNE_TASK
