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
#include<cmath>
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
      std::vector<int> m_waypoints_lon;
      std::vector<int> m_waypoints_lat;
      //! hstep
      unsigned int m_hstep;
      //! Waypoint Counter
      int m_waypoint_count; 
      
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        bindToManeuver<Task, IMC::ExpandingSquare>();
        
      }

      // For cleanp or reset local helper variables
      void onManeuverDeactivation(void) {

      }

      void consume(const IMC::ExpandingSquare* maneuver) {
        if (maneuver->getSource() != getSystemId())
          return;

        m_maneuver = *maneuver;
        m_hstep = maneuver->hstep;
        double x_first_pair = 0;
        double y_first_pair = 0;
        double x_second_pair = 0;
        double y_second_pair = 0;
        double x_prev = 0;
        double y_prev = 0;
        uint8_t iteration = 0;
        uint8_t select_x_dir;
        uint8_t select_y_dir;

        // Calculates two waypoint pairs (x,y) at each iteration
        while (x_prev <= maneuver->width/2 && y_prev <= maneuver->width/2) {
          if (maneuver->FLG_CURVE_RIGHT){
            select_x_dir = pow(-1,iteration);
            select_y_dir = pow(-1,iteration);
          } else {
            select_x_dir = pow(-1,iteration);
            select_y_dir = pow(-1,iteration+1);
          }
          
          x_first_pair = select_x_dir*iteration*m_hstep + x_prev;
          y_first_pair = y_prev;

          x_second_pair = x_first_pair;
          y_second_pair = select_y_dir*iteration*m_hstep + y_prev;

          x_prev = x_second_pair;
          y_prev = y_second_pair; 

          // Rotate w.r.t. bearing angle
          Angles::rotate(maneuver->bearing,false,x_first_pair,y_first_pair);
          Angles::rotate(maneuver->bearing,false,x_second_pair,y_second_pair);

          double *lat_first_pair;// = maneuver->lat;
          double *lon_first_pair;// = maneuver->lon;
          double *lat_second_pair;// = maneuver->lat;
          double *lon_second_pair;// = maneuver->lon;
          // Add offset
          Coordinates::WGS84::displace(x_first_pair,y_first_pair,lat_first_pair,lon_first_pair);
          Coordinates::WGS84::displace(x_second_pair,y_second_pair,lat_second_pair,lon_second_pair);

          m_waypoints_lon.push_back(*lon_first_pair);
          m_waypoints_lon.push_back(*lon_second_pair);

          m_waypoints_lat.push_back(*lat_first_pair);
          m_waypoints_lat.push_back(*lat_second_pair);
        
        } 

        setControl(IMC::CL_PATH);
        m_path.speed = maneuver->speed;
        m_path.speed_units = maneuver->speed_units;
        m_path.end_z = maneuver->z;
        m_path.end_z_units = maneuver->z_units;

        m_waypoint_count = 0;
        sendPath(m_waypoints_lat[0],m_waypoints_lon[0]);

          // Set up local variables
          // start sending the first DesiredPath IMC message
        
          // Calculate ExpandingSquare pattern points
            // Given maneuver configuration return list of lat/loin points to guide vehicle 
      }

      void onPathControlState(const IMC::PathControlState* pcs) {
          // Here we monitor the execution of the command. Check if vehicle is near the desired point
          // if near: send next point in list (similar to RowsCoverage maneuver)
        if (IMC::PathControlState::FL_NEAR)
        {
          if (m_waypoint_count < m_waypoints_lat.size()) {
            double lat;
            double lon;
            lat = m_waypoints_lat[m_waypoint_count];
            lon = m_waypoints_lon[m_waypoint_count];
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

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
