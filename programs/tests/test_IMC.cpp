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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: cdbdee4b3f5278d2b2c54f0cc0052430                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.443822263044);
    msg.setSource(45669U);
    msg.setSourceEntity(171U);
    msg.setDestination(905U);
    msg.setDestinationEntity(103U);
    msg.state = 112U;
    msg.flags = 252U;
    msg.description.assign("MXWPKGTCAVDADBVXUUNJZLHVZQRJEQPAUEFHDZYMWUYRIBIITSLOQLOPBHVBCCJNBSJCOCSPJFIINYRQEUKTJOFFPRZPACEZHTQQFGTOEKXYDAQWMZBXSFYVGHGHAMYPJZFZSAYTHEONTGWM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.63703638826);
    msg.setSource(11749U);
    msg.setSourceEntity(56U);
    msg.setDestination(46549U);
    msg.setDestinationEntity(129U);
    msg.state = 31U;
    msg.flags = 18U;
    msg.description.assign("LHEHTZIAYUMNMZGKCZAOPHIDJZWCCGVTYUMJDHNJHQFGTRMEAOIRFDIVHWTSVVDCOBXKTSZEQVNZFWIVMGEJKLTCNFKFJVCAYIXILPUSQZKXGZXQOCTVPEYCQLPSJBSGJMGQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.0914582354776);
    msg.setSource(20152U);
    msg.setSourceEntity(18U);
    msg.setDestination(21455U);
    msg.setDestinationEntity(186U);
    msg.state = 240U;
    msg.flags = 17U;
    msg.description.assign("RYNYGIEQSACBDIIQAFVKNBGRVHPTKKSDCNCIYCPFUPFRLVNSPZEQFDPHSKDGJJLWOAHLKZGEUEVUWTJKTVRGNAHTULFHMLYXNXZFUBXMLDTWMWTMUKBWDHAELMIEMJGJAAELJSIVMFNWEPQODSHBJYSCZUCRVYTOIGWWZCFVJBOGOUZON");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.573194150101);
    msg.setSource(21987U);
    msg.setSourceEntity(132U);
    msg.setDestination(21645U);
    msg.setDestinationEntity(235U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.48777654977);
    msg.setSource(18014U);
    msg.setSourceEntity(128U);
    msg.setDestination(34897U);
    msg.setDestinationEntity(4U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.216518365217);
    msg.setSource(12522U);
    msg.setSourceEntity(180U);
    msg.setDestination(367U);
    msg.setDestinationEntity(67U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.482301695749);
    msg.setSource(28186U);
    msg.setSourceEntity(82U);
    msg.setDestination(34148U);
    msg.setDestinationEntity(246U);
    msg.id = 28U;
    msg.label.assign("UBXXBVRYQKOQHVNWDBWCCFMBUCJYCVNEXZDTIOOPZRFHGYSFAHXOYDTKHHLBZXUYDPAPICBSUZPWWJHIYVJSNKGAKUSEMJSZLQEVWMKFKCTQYDKBGMHSGNEWWUNWBZTJTHONRAAMQJKITYLSJFOSM");
    msg.component.assign("GZTBQEECBTQBXTQNJQYWWHCBZHOPHWIZAQSDYTLCNCWKTDZVHPMLUULYVVSJMMLXUQYSGIAURMONYDIMDIOVBMXEPRBFJGJTDXTIWKCPJGNNDURGORLXNKDLONBWWEUVAQGVLEFKCTLZXGFRCYSEAW");
    msg.act_time = 1161U;
    msg.deact_time = 63916U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.822356031015);
    msg.setSource(35109U);
    msg.setSourceEntity(58U);
    msg.setDestination(56426U);
    msg.setDestinationEntity(246U);
    msg.id = 84U;
    msg.label.assign("NKIAZLPKLOABTUQCYVAHICKOPCHNKOWTRYWLUQULFRUVFPTONJNJZHHMHJOMZUEWGTFGTWTURTSQCWBNRMIRBLHAVIMLVGEJAEWVUQTIXZJGFNCKVCXWNELDHGRDHVYS");
    msg.component.assign("KBMGWXEROYGAZWQNJFUECTRJKSUPPNLACPCU");
    msg.act_time = 38345U;
    msg.deact_time = 15030U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.680860050356);
    msg.setSource(44863U);
    msg.setSourceEntity(67U);
    msg.setDestination(53091U);
    msg.setDestinationEntity(232U);
    msg.id = 121U;
    msg.label.assign("ZUOQWGXNCPXKJJQSPYKWXGKNZYPTTJKIVUQLBOZRWACEWEWBTDBFDKRFPUVIDVFRYGNOTRKLITFRRDASLBHTWPFPYPV");
    msg.component.assign("APLQVZADTJBQMUCHMWJVODCNJKDXHYPZOBVZPGYDFFETLTSMAOTJBJUAJXHOLBUSARKIMKKVECDLXWGQVFVHWXJGGSPVEBHDZTHRCWPGKELYYTNIWTRRM");
    msg.act_time = 23958U;
    msg.deact_time = 42429U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.928666710089);
    msg.setSource(50609U);
    msg.setSourceEntity(206U);
    msg.setDestination(47183U);
    msg.setDestinationEntity(4U);
    msg.id = 161U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.387002470209);
    msg.setSource(62771U);
    msg.setSourceEntity(99U);
    msg.setDestination(55584U);
    msg.setDestinationEntity(73U);
    msg.id = 160U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.222183310781);
    msg.setSource(56635U);
    msg.setSourceEntity(144U);
    msg.setDestination(46763U);
    msg.setDestinationEntity(126U);
    msg.id = 36U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.412753801073);
    msg.setSource(1727U);
    msg.setSourceEntity(42U);
    msg.setDestination(24756U);
    msg.setDestinationEntity(109U);
    msg.op = 117U;
    msg.list.assign("SKLMDOBRRWLLCXXUBBKUFTHSLWYR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.788339423916);
    msg.setSource(10993U);
    msg.setSourceEntity(17U);
    msg.setDestination(48266U);
    msg.setDestinationEntity(55U);
    msg.op = 192U;
    msg.list.assign("BDVRNVOACIXRXMQWYQJOGBWITAETTQUVJDEUUGZADKGCCDNBPWVTRWKYVPVKPUXFKCHKBMDNSGDHSXALSOSZOPGONZWUEATVHBOJWFARXQFCTQAHOCBCGMLULZJEWJQMUXIGLINJRPLIGKJFLTWSPCWIPFIZDJXKXHSNTURYWEMLFGQBEGYOMDXNSDKTNCONBEKDNQYZZHXMFICYRMSMUVKPYLPRH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.0273901706402);
    msg.setSource(46012U);
    msg.setSourceEntity(9U);
    msg.setDestination(52347U);
    msg.setDestinationEntity(240U);
    msg.op = 123U;
    msg.list.assign("DDYDCKAIPGEAZGHZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.861442685119);
    msg.setSource(23500U);
    msg.setSourceEntity(254U);
    msg.setDestination(29651U);
    msg.setDestinationEntity(103U);
    msg.value = 195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.433153880086);
    msg.setSource(22187U);
    msg.setSourceEntity(229U);
    msg.setDestination(56339U);
    msg.setDestinationEntity(36U);
    msg.value = 160U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.502276718999);
    msg.setSource(58572U);
    msg.setSourceEntity(152U);
    msg.setDestination(44249U);
    msg.setDestinationEntity(56U);
    msg.value = 93U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.447787299435);
    msg.setSource(22404U);
    msg.setSourceEntity(173U);
    msg.setDestination(25723U);
    msg.setDestinationEntity(185U);
    msg.consumer.assign("PAXKPWCAJVNNUCIDXKQIHDFRGTPCZBYUQLUVQKZJDSTLWTLPENHWUEMBBXMJVFQXHMEQZTELAEWIAUDFOXSRGVTPYXIAYDJXJYOWMHVZUIQBSBPQDZATGPKHMMBGWNXBTYVVMSKDXQLCNHHWIOGGOOWSRFFSBHWCUUEPZCMRTKTOVLOZIEHNFEMGQKDIFWBVJPRHZMAKTSPBJFO");
    msg.message_id = 53498U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.106263587999);
    msg.setSource(1005U);
    msg.setSourceEntity(194U);
    msg.setDestination(45946U);
    msg.setDestinationEntity(201U);
    msg.consumer.assign("RLVXLHZDYZDCDJFQNWDOURBSAB");
    msg.message_id = 58242U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.634989805532);
    msg.setSource(56812U);
    msg.setSourceEntity(140U);
    msg.setDestination(40391U);
    msg.setDestinationEntity(227U);
    msg.consumer.assign("OWBKJMWYZJCHZZEZGBYPMZNKXRIKXVMDJMCVBFRDZMTHOGALTODJSUQFGHYVVWVNDWKHSPLEFDERZQNMBNXMGYHJLOVNWHTSLGDLLFGRWYMETKQUZVGHFXYP");
    msg.message_id = 15351U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.768792492418);
    msg.setSource(46814U);
    msg.setSourceEntity(125U);
    msg.setDestination(6581U);
    msg.setDestinationEntity(142U);
    msg.type = 119U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.293739292363);
    msg.setSource(62100U);
    msg.setSourceEntity(196U);
    msg.setDestination(58U);
    msg.setDestinationEntity(29U);
    msg.type = 89U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.41433041757);
    msg.setSource(48979U);
    msg.setSourceEntity(78U);
    msg.setDestination(53558U);
    msg.setDestinationEntity(197U);
    msg.type = 169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.649552115582);
    msg.setSource(6737U);
    msg.setSourceEntity(239U);
    msg.setDestination(42977U);
    msg.setDestinationEntity(2U);
    msg.op = 101U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.653342793424);
    msg.setSource(31065U);
    msg.setSourceEntity(96U);
    msg.setDestination(43413U);
    msg.setDestinationEntity(63U);
    msg.op = 38U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.397312446665);
    msg.setSource(1383U);
    msg.setSourceEntity(253U);
    msg.setDestination(41731U);
    msg.setDestinationEntity(12U);
    msg.op = 123U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.406944654789);
    msg.setSource(23394U);
    msg.setSourceEntity(154U);
    msg.setDestination(25137U);
    msg.setDestinationEntity(10U);
    msg.total_steps = 76U;
    msg.step_number = 9U;
    msg.step.assign("JUGPQPUCWLSMGIOKQJOMHCEFCWLMAMGFELILFZFGVVYXHBVRAMLDJCAUOLBREHZOIXGKITHOPMBJNYYZXTAMQNSAZYJXNPNWEBENRCTVXMZDSKJUWUOUKHXAMHVDWGUBMXCRZKAQGIB");
    msg.flags = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.882911633255);
    msg.setSource(13430U);
    msg.setSourceEntity(118U);
    msg.setDestination(57913U);
    msg.setDestinationEntity(51U);
    msg.total_steps = 78U;
    msg.step_number = 28U;
    msg.step.assign("NQUBQWVNHVXFNBKCURLPKDVVCDUWUVDCTWNNBJWXCGWFKFXZYHZWVRGJRWNWKZHHPUOEOZXEYLJVEMYZOMUQJFHDAKDDBMLFANJVKTPYSRRQWLEAMPDLZCGRJUSIPFZIJSAAUTMLTJPHIBSAYIHQTEZAMUGVCZBDASRILTBGPGBFCXJQZUNKGETGEQQIOJXRFXMDRPMCYCMRLOLPEQOWFGDMPIIXKIAKEABOOOSGBETSYLYNT");
    msg.flags = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.655669041058);
    msg.setSource(14315U);
    msg.setSourceEntity(17U);
    msg.setDestination(44550U);
    msg.setDestinationEntity(164U);
    msg.total_steps = 152U;
    msg.step_number = 90U;
    msg.step.assign("PGXEBLLIDBKKKGFEKXFMHVLVBIXGDPSSNHIHQKYSUWZMEXLNVOZMURKUPOZKYUTZHETXFAMOGMGIIOTHVORPRWEBVAJJXWWNDXFFDZRQLQAVRZIRLICTTXBTCRTCOTFGUVGGWJBAZHUFQVIMRSCPLJEQALHAPYLHDNDVMNIQKFSXCJZDMCQYJBPCUKPLSWJDMJYWPDGOI");
    msg.flags = 84U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.290446805907);
    msg.setSource(63811U);
    msg.setSourceEntity(125U);
    msg.setDestination(44960U);
    msg.setDestinationEntity(19U);
    msg.state = 234U;
    msg.error.assign("NCUBRHRTJMOMKZTEIWRAVCBCGHDVQLIEJBTVYIUFXSCADSXPKQBYMLDOAHOYTNEVJXGIPKASOYWYRTHJFWCXHBUAMHWCGNKKQKYCWNDSUIUQCPANDZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.0809924828007);
    msg.setSource(30579U);
    msg.setSourceEntity(88U);
    msg.setDestination(40982U);
    msg.setDestinationEntity(187U);
    msg.state = 118U;
    msg.error.assign("ELPYESUARAMHWDGSMXIHROOINNJYKCPCFDRLUPMTFEXFNLUMIWBZCJNFIJQXAUQPCJFVEPZGQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.589466002631);
    msg.setSource(65485U);
    msg.setSourceEntity(73U);
    msg.setDestination(16719U);
    msg.setDestinationEntity(145U);
    msg.state = 112U;
    msg.error.assign("PGJLZSCOKHSHWTNGVJEAVRHQIIPADDPMHYBCIRCZHMWKLJHBCOTDCKLOTAFGFUDMNWVBDNLGOJSJGGXQIFGRTCRCLZMXMUBUABDDEOQEEZJQYVYEUJXMWQYRQPTUARGSYYIZEQRZEMKJGYVLXSA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.0583072188747);
    msg.setSource(7331U);
    msg.setSourceEntity(139U);
    msg.setDestination(33656U);
    msg.setDestinationEntity(137U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.42262308433);
    msg.setSource(43275U);
    msg.setSourceEntity(213U);
    msg.setDestination(21253U);
    msg.setDestinationEntity(241U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.59358241902);
    msg.setSource(12035U);
    msg.setSourceEntity(185U);
    msg.setDestination(55376U);
    msg.setDestinationEntity(138U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.766467958579);
    msg.setSource(11349U);
    msg.setSourceEntity(129U);
    msg.setDestination(31722U);
    msg.setDestinationEntity(228U);
    msg.op = 54U;
    msg.speed_min = 0.328996159053;
    msg.speed_max = 0.8317630782;
    msg.long_accel = 0.0763724512712;
    msg.alt_max_msl = 0.674421627484;
    msg.dive_fraction_max = 0.980852598253;
    msg.climb_fraction_max = 0.627431309038;
    msg.bank_max = 0.37616537455;
    msg.p_max = 0.971206506611;
    msg.pitch_min = 0.227173961227;
    msg.pitch_max = 0.940682880286;
    msg.q_max = 0.00765870019601;
    msg.g_min = 0.752294889645;
    msg.g_max = 0.929383980413;
    msg.g_lat_max = 0.359722977489;
    msg.rpm_min = 0.754858865705;
    msg.rpm_max = 0.208586324371;
    msg.rpm_rate_max = 0.528109284276;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.799195692741);
    msg.setSource(33900U);
    msg.setSourceEntity(116U);
    msg.setDestination(51179U);
    msg.setDestinationEntity(144U);
    msg.op = 170U;
    msg.speed_min = 0.0808757572019;
    msg.speed_max = 0.619538698044;
    msg.long_accel = 0.335534694637;
    msg.alt_max_msl = 0.502094951422;
    msg.dive_fraction_max = 0.555925440676;
    msg.climb_fraction_max = 0.085271467379;
    msg.bank_max = 0.386134036452;
    msg.p_max = 0.509549701132;
    msg.pitch_min = 0.316076716861;
    msg.pitch_max = 0.399623406828;
    msg.q_max = 0.390673667763;
    msg.g_min = 0.122970536574;
    msg.g_max = 0.538866076538;
    msg.g_lat_max = 0.381287157691;
    msg.rpm_min = 0.466946712181;
    msg.rpm_max = 0.14005278262;
    msg.rpm_rate_max = 0.213245170067;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.278246093679);
    msg.setSource(19U);
    msg.setSourceEntity(34U);
    msg.setDestination(10396U);
    msg.setDestinationEntity(109U);
    msg.op = 182U;
    msg.speed_min = 0.291774005486;
    msg.speed_max = 0.598172549013;
    msg.long_accel = 0.359383251183;
    msg.alt_max_msl = 0.738024091742;
    msg.dive_fraction_max = 0.212663623751;
    msg.climb_fraction_max = 0.515471510808;
    msg.bank_max = 0.106579112067;
    msg.p_max = 0.213632925745;
    msg.pitch_min = 0.543803144751;
    msg.pitch_max = 0.288361865601;
    msg.q_max = 0.386559163826;
    msg.g_min = 0.575951278344;
    msg.g_max = 0.655238832299;
    msg.g_lat_max = 0.725694375879;
    msg.rpm_min = 0.218120392279;
    msg.rpm_max = 0.39885970965;
    msg.rpm_rate_max = 0.43912466072;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.735981536982);
    msg.setSource(23139U);
    msg.setSourceEntity(97U);
    msg.setDestination(1784U);
    msg.setDestinationEntity(154U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.627830365594);
    msg.setSource(23919U);
    msg.setSourceEntity(198U);
    msg.setDestination(10470U);
    msg.setDestinationEntity(158U);
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 122U;
    tmp_msg_0.longain = 0.159785485;
    tmp_msg_0.latgain = 0.25948825179;
    tmp_msg_0.bondthick = 1612061819U;
    tmp_msg_0.leadgain = 0.00502706247185;
    tmp_msg_0.deconflgain = 0.0468174090317;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.591685687838);
    msg.setSource(64547U);
    msg.setSourceEntity(129U);
    msg.setDestination(37286U);
    msg.setDestinationEntity(43U);
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 224U;
    tmp_msg_0.htime = 0.555734912588;
    tmp_msg_0.context.assign("COBQFYZWNFWWDKBZMJYPLDGQBHRSXWHJIFILFTPSMKONKELHUPVZEAVUEXMKGAGVZDAFRMPCNUQNCWQJHQGUWDEOHNAWRCFZDLPOTIHZCUCOCVSERDXQXNTETOYML");
    tmp_msg_0.text.assign("TBOSDJIVCENMMGZYPJKQWWMLYEPCZEIFFASGZIH");
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.674702799325);
    msg.setSource(22380U);
    msg.setSourceEntity(78U);
    msg.setDestination(45031U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.436157181082;
    msg.lon = 0.610825352891;
    msg.height = 0.932582611837;
    msg.x = 0.356166638022;
    msg.y = 0.741054229257;
    msg.z = 0.850606638895;
    msg.phi = 0.819698461699;
    msg.theta = 0.167303874574;
    msg.psi = 0.991779611733;
    msg.u = 0.757190963685;
    msg.v = 0.351642198359;
    msg.w = 0.654017895101;
    msg.p = 0.72594726161;
    msg.q = 0.585864940558;
    msg.r = 0.916746919082;
    msg.svx = 0.333557391295;
    msg.svy = 0.387968632847;
    msg.svz = 0.907954912346;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.16527254106);
    msg.setSource(8363U);
    msg.setSourceEntity(38U);
    msg.setDestination(6616U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.0328137150691;
    msg.lon = 0.243081056907;
    msg.height = 0.0702340210525;
    msg.x = 0.825447731626;
    msg.y = 0.399658006744;
    msg.z = 0.00276549241875;
    msg.phi = 0.754297614015;
    msg.theta = 0.833800727435;
    msg.psi = 0.873040835308;
    msg.u = 0.903987150783;
    msg.v = 0.620163778284;
    msg.w = 0.828612638887;
    msg.p = 0.849731352263;
    msg.q = 0.80314971356;
    msg.r = 0.70854494527;
    msg.svx = 0.81188976181;
    msg.svy = 0.589146174337;
    msg.svz = 0.889338483509;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.0386103792033);
    msg.setSource(58726U);
    msg.setSourceEntity(30U);
    msg.setDestination(60995U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.596677361555;
    msg.lon = 0.135527925151;
    msg.height = 0.142113779914;
    msg.x = 0.736186671522;
    msg.y = 0.663619581616;
    msg.z = 0.652767970947;
    msg.phi = 0.702792297067;
    msg.theta = 0.231069509683;
    msg.psi = 0.142309799795;
    msg.u = 0.295209595612;
    msg.v = 0.446022154514;
    msg.w = 0.526230448078;
    msg.p = 0.845027473031;
    msg.q = 0.601773438081;
    msg.r = 0.753606739258;
    msg.svx = 0.433142926154;
    msg.svy = 0.509105410952;
    msg.svz = 0.648472918572;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.390904900518);
    msg.setSource(61463U);
    msg.setSourceEntity(162U);
    msg.setDestination(39681U);
    msg.setDestinationEntity(198U);
    msg.op = 60U;
    msg.entities.assign("XRSBGSEPBLLTLHFOAPEZYURSZWRGATGYJHNJADS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.897700041941);
    msg.setSource(31276U);
    msg.setSourceEntity(219U);
    msg.setDestination(17237U);
    msg.setDestinationEntity(115U);
    msg.op = 221U;
    msg.entities.assign("JPWREQHLOQAIRTPEITOYKKBJMPPWUPLMLAXHYQUNMFCBKYULZVSFNGFHOPIFIUNAAHISWAPQCDLAWERBZVJGVESFCZUWKECMSHZXMIXMJLJD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.323369774844);
    msg.setSource(61945U);
    msg.setSourceEntity(92U);
    msg.setDestination(51387U);
    msg.setDestinationEntity(56U);
    msg.op = 149U;
    msg.entities.assign("AXWLVDUPBRTDIEHQBGYUFYFQOKVRZJJUDWXLJAXJXZHNMDCRUPPONOHDFOHSHKHSYYOFLSANRCRXUNWIKMSKM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.636071178334);
    msg.setSource(31833U);
    msg.setSourceEntity(80U);
    msg.setDestination(57186U);
    msg.setDestinationEntity(87U);
    msg.type = 102U;
    msg.speed = 55324U;
    const char tmp_msg_0[] = {-81, -15, 77, -49, 18, 18, -103, -31, 14, -26, -39, -17, -18, 110, 61, -119, 14, -6, -57, 73, 70, 86, -64, 109, -2, 30, 80, 24, 111, -20, 89, 106, -108, -102, -82, -42, -10, -20, 30, 97, 38, 58, -90, 96, -16, 7, -57, -69, 103, -100, 26, -125, 97, -119, -95, -29, -113, 117, 29, 78, 29, 126, -99, -28, -73, 79, 73, 100, 47, 48, -45, -127, -21, -87, -84, 75, 83, -117, -100, 60, -41, 97, 118, -107, -65, 79, -63, 14, 87, -65, -11, -4, 103, 85, 125, 28, 111, 49, 63, 15, 123, 22, -67, -8, -17, 101, -121, -28, -4, 76, -32, 56, 16, 21, 24, -28, -9, 98, -101, 39, 101, -21, -102, -117, -88, -94, 106, -25, -77, -54, 24, 84, -3, 124, 112, -92, 8, 34, -123, -72, -26, 51, -55, -115, -7, -82, 54, -42, -24, -102, 122, 25, 81, -49, 65, 84, 11, 119, 94, 17, -97, -49, -61, 17, 85, -41, 88, -36, 4, 7, -18, -126, -35, -38, 96, -35, -123, -125, 99, -64, -117, 29, 91, -100, 73, -106, -123, 25, -44, 15, 79, -61, -59, -101, 119, -25, -115, -119, -89, -71, -13, -49, 28, 28, -26, -79, -102, -77, -6, 114, -104, -70, 67, 38, -99, 1, -116, 88, -70, 106, -33, -16, -44, -100, -115, -112, -47, -101, 21};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.305750995358);
    msg.setSource(41632U);
    msg.setSourceEntity(81U);
    msg.setDestination(26991U);
    msg.setDestinationEntity(221U);
    msg.type = 175U;
    msg.speed = 18070U;
    const char tmp_msg_0[] = {-124, -70, -73, -83, 45, -27, 118, 53, 53, -43, 85, 120, -73, -48, 22, 45, -58, -23, 56, 108, -72, -114, 114, 62, -120, -81, 30, -77, -89, -106, -10, -103, -113, -38, -86, 69, 60, -108, -105, 31, 111, 57, -74, -115, -11, -81, -90, -13, -91, -14, 48, -119, -55, -123, -122, 57, 16, -126, -58, 80, -29, -84, -67, 16, -107, 38, -47, -17, -19, -62, -36, 113, -16, 13, -36, 77, 48, 7, 70, 25, 90, -75, 66, 24, -9, -88, -82, -89, -80, -52, -4, 89, -101, -122, 112, 26, 46, 20, -113, 5, 47, 78, 24, -33, -70, -54, -46, -16, -49, 42, 21, 65, 72, 75, -101, 81, 87, 81, 58, -25, 52, 72, -57, -69, -64, -19, 66, 27, -111, -36, -41, 78, 120, -8, 105, -95, -10, -68, 79, 72, -8, 79, -29, 66, 82, -38, -3, 109, -107, -7, -104, -126, -120, 81, 48, 65, 96, 52, -65, 26, -15, -21, 35, -27, -21, -31, -46, 20, -85, 69, 25, 125, -48, -28, -28, 111, -27, 15, 56, -62, -77, 103, -25, 105, -51, 74, -44, 105, 24, 120, 55, 122, -78, -39, 17, 109, 14, -105, 66, -94, 0, -66, -31, -46, 69, -92, -28, 88, 33, 3, 3, -75, 95, -80, 28, -74, -41, -28, 80, 35, -52, -52, -36, -91, -115, 11, -111, -90, 12, 63, 67};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.866256928318);
    msg.setSource(41069U);
    msg.setSourceEntity(0U);
    msg.setDestination(61463U);
    msg.setDestinationEntity(32U);
    msg.type = 85U;
    msg.speed = 22764U;
    const char tmp_msg_0[] = {36, -53, -25, 19, 1, 50, -8, 99, 38, -45, 88, 114, -9, -52, -104, 90, 1, 91, -27, -46, 13, -61, 53, -2, 46, 47, -106, 73, -25, 49, 44, 102, -99, 76, 35, -108, 1, -123, -46, -21, 108, 67, -31, 115, 21, -19, 99, -94, 32, -48, -34, 27, -14, 36, -24, 101, -87, 112, -106, 29, 77, 28, -79, -11, 109, 100, -36, -95, -70, 120, -117, 117, -85, 41, -26, -94, 56, 97, -27, 26, -9, -4, -68, -85, 97, -32, -16, 108, -33, 123, -117, -66, 108, -27, 51, 70, -49, -11, -88, 41, 105, -22, 90, 66, 93, -27, -111, -17, -16, 52, -21, 100};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.987345355279);
    msg.setSource(34369U);
    msg.setSourceEntity(221U);
    msg.setDestination(30661U);
    msg.setDestinationEntity(50U);
    msg.op = 133U;
    msg.tas2acc_pgain = 0.0235388278369;
    msg.bank2p_pgain = 0.370080512144;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.265508056417);
    msg.setSource(36275U);
    msg.setSourceEntity(179U);
    msg.setDestination(37298U);
    msg.setDestinationEntity(47U);
    msg.op = 202U;
    msg.tas2acc_pgain = 0.658050055833;
    msg.bank2p_pgain = 0.598692234189;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.3044017426);
    msg.setSource(56833U);
    msg.setSourceEntity(236U);
    msg.setDestination(50149U);
    msg.setDestinationEntity(182U);
    msg.op = 188U;
    msg.tas2acc_pgain = 0.260112513297;
    msg.bank2p_pgain = 0.418154468312;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.863218089862);
    msg.setSource(21582U);
    msg.setSourceEntity(207U);
    msg.setDestination(46568U);
    msg.setDestinationEntity(185U);
    msg.available = 1801615900U;
    msg.value = 250U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.443176291242);
    msg.setSource(51113U);
    msg.setSourceEntity(236U);
    msg.setDestination(46447U);
    msg.setDestinationEntity(185U);
    msg.available = 620112306U;
    msg.value = 56U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.397570835382);
    msg.setSource(47734U);
    msg.setSourceEntity(78U);
    msg.setDestination(64940U);
    msg.setDestinationEntity(128U);
    msg.available = 3147050881U;
    msg.value = 249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.302715179131);
    msg.setSource(32520U);
    msg.setSourceEntity(1U);
    msg.setDestination(30744U);
    msg.setDestinationEntity(107U);
    msg.op = 35U;
    msg.snapshot.assign("BXTRUCRCETGPATUCZELLDEWPPGGTDOLRFVUCCMIQBSJOOBHLDKOPKBHYSVYNGTPJRLFWPMHWSWYNNZFMVLCYVFLXWMKKAJZEEURTUMKDVXYQNFDGBIGLFMCZYJNNQASNLDTIMQSKENACXHQZEOCACAABH");
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("USKHVWWDYXXDGZAQGLFUYKIZNKFFCNNLUYGTLJJJKDXHSEZUMFYOSGZPCEDBIQVETFHRWNNKTYDYNRGURJWSIHMYAFRTKFNGWJVXEEDXMZSMFPMQWHCGZMVUTPGMLKQIIVKECJRKOOKHLVBTOYCTEDPOZTRBBJAOYHXDSJSLSWDZCHRFIHQXPAYSMQWWIPBPPRAUOXILAZLNBVMGRPVNZGJEPQRATEXOXEQBUAQ");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("UDLCZEUCCYAIEPJYBBTKSFVGDWJTJAXOLIGIRIXRMKPELJWETUQVWEUSNPOUCGKWKCGRFIMIJRHHWOPMZXDAQLBBYAHLBCJSZ");
    tmp_tmp_msg_0_0.sys_type = 244U;
    tmp_tmp_msg_0_0.owner = 56150U;
    tmp_tmp_msg_0_0.lat = 0.235524374502;
    tmp_tmp_msg_0_0.lon = 0.96405697201;
    tmp_tmp_msg_0_0.height = 0.952296341939;
    tmp_tmp_msg_0_0.services.assign("QPYVIZBZGJPNOMCIBGYTXHWMQHLLUYGHAFADOSUZJOZWVQJAMKYUWNCHPW");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.95610409573);
    msg.setSource(28028U);
    msg.setSourceEntity(118U);
    msg.setDestination(46527U);
    msg.setDestinationEntity(111U);
    msg.op = 190U;
    msg.snapshot.assign("ZGULCZNIGQDEIQHRLWXVEBUAYXMJWUIOD");
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.0601873330088;
    tmp_msg_0.lon = 0.933173292155;
    tmp_msg_0.depth = 0.374725240223;
    tmp_msg_0.roll = 0.512155590384;
    tmp_msg_0.pitch = 0.348586443677;
    tmp_msg_0.yaw = 0.452201971176;
    tmp_msg_0.rcp_time = 0.334763148032;
    tmp_msg_0.sid.assign("LYKUZNVDMQCFSNBLBVJFZOXTHIEWKGBSPUFMLPNEZETCPKJQXEJAOTLFLWVVADLRECCYJWPOZPQRDTMMBHWABYQWKQYMHJJWWZYKFTPPBSIZXQEAGSXVKALHCVAMXXUDEACOMSFUMNGRRTGHNWKITPGDZBIVXYRAEYFRWZGNJNINUHFEGUFIZQLBQGWROVMJNXZMUAOHBCSYYGOIPGKKCQUOYRLXHSCUSAFNLRTCTDEHVH");
    tmp_msg_0.s_type = 148U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.880897602056);
    msg.setSource(36234U);
    msg.setSourceEntity(182U);
    msg.setDestination(20723U);
    msg.setDestinationEntity(29U);
    msg.op = 16U;
    msg.snapshot.assign("NCRQOKDGLFJBPVVGLOSBZKUHAKWMLLVCBKJKMOFTSPEHCZVCQPQXLCXQL");
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 125U;
    tmp_msg_0.actions.assign("YTBGNBIGVOVRQQBYECNGVEBGVVLTPYIZOYHKSPLWSROEOHXSEFGGAEMRTWHENIIPBFCUYCTZHDYQKXAOIJVUIJFJLUANIWKNEXQZDEFXAIDNKLKCSKAHBZKMCUWTIRUJGYFYWULJQSAMUCHVDEDPVACXGRTWQNWHMGZXPAWBTHOLZNAQRFOPJLWJXPFDNCSQLTFTZSXDJYPGRBXRUHUMJKTCQZPOVXMQDVOUCBKDHALOFI");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.155586899275);
    msg.setSource(57010U);
    msg.setSourceEntity(235U);
    msg.setDestination(50081U);
    msg.setDestinationEntity(172U);
    msg.op = 128U;
    msg.name.assign("TPAJKMYILLEQWPGJHOSIPJJVYWXDHXBUYZFKUUAOVSLROYASVFUWTCGDWHAQMGTBBZYXUEDSLYDMSQCCSANRVLMMAOPIRIVZPVTT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.698829815891);
    msg.setSource(49284U);
    msg.setSourceEntity(20U);
    msg.setDestination(25049U);
    msg.setDestinationEntity(107U);
    msg.op = 140U;
    msg.name.assign("ZKLNPQAQYZCBUEPMPBWKPXNGRCRSRNFKYLNGSDAWFVIVJQOZIHWNYJYTMYMGWANQXTPOTSVRLLTKDMMOZKBCSKRBZNDUIQOLQDEYCLHDTQPDHMCFQDAXUCJJFSYIRWMYJKNBOVLEIKFUVPUXEUBXAXXICOWRFMAOXUEVHDHOGUHRWZIZBPIBZREJAEWUMISJFGCFGTANVVGAZETWXVAHJRKSKESVMSFBHLHSWPZOEGDLTGCJYQCDIGBFL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.869358114935);
    msg.setSource(2186U);
    msg.setSourceEntity(8U);
    msg.setDestination(20921U);
    msg.setDestinationEntity(119U);
    msg.op = 253U;
    msg.name.assign("SMCDWWTUXYECZPMDGKDBDLULJWXHMIXRQLJEGKDLARAMIOSNBNLNOUQPBPBQCUEWOYWGDGIFDRUVCAUMNGSNIWTTKZZERQJHFFAKHJZTOXPGGPOWBIKQSRYHVZUKZDVIEGLQMBVQCQXLOEYFZFUSOEHNTFVSPPWSVRMEWNSRKNUHAJCATSDLHFBBHVDQLTHVPEINIPMAFYLZZQR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.027575904397);
    msg.setSource(42382U);
    msg.setSourceEntity(73U);
    msg.setDestination(14996U);
    msg.setDestinationEntity(63U);
    msg.type = 72U;
    msg.htime = 0.583502236782;
    msg.context.assign("CUAPREKGUYYRTOGFUWPLTCHYKBIQKWWPAPGRCMOQHJZNSGSYIYQLIGPOLDLTESDKHVBWIHMXQNNQBRJMZGPRMVJHCHBNQFXJSFMRYFIUDGNDUATJSCXTBLUBEGFAEYAONNNIILXFTBVBECMWVCXAPIAVOHXM");
    msg.text.assign("YGYFFKXBHURKADHBBZCDGYQOSXQZKMHQFMSAKLTXWPBJJIJGZIJYBDTYPBTGEDNTCHDWVOMNYNNAFZSDLILWOKIFPQEMLHWOFHJPUXYUGWCFXLVGEVOLOPRSKUMBSVUOVMMEUEIZUCGVTQQXUDSLMCRBRQDLYJZWNTSRSRTAAVJDJPWCFZQIBHFYFWKGJPAKNONHCCIZEUNEKRJQVKM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.854271350361);
    msg.setSource(30164U);
    msg.setSourceEntity(46U);
    msg.setDestination(16944U);
    msg.setDestinationEntity(140U);
    msg.type = 139U;
    msg.htime = 0.900057975725;
    msg.context.assign("EEJFWPNXVPIDVAZMNDCLANUZLZKSWTFUDMMWULBBHLZBOYFPPZZFKKHYBHXANJKOBGTOXGNQJOWC");
    msg.text.assign("AQTKTUZRTPOCFVJYXZPOTDEJPZVCSVRDDBEMGLIXUOBBWSWMKYDUCTPOQYEVINRHIZIDMAGWNIBMCEHJCPSVAUYGAKYFLZSXUMLGPOTHQVATFFGBXLGKFJCWSQJKPVIMHXRDJSKCZLPKPEFKXTSRDHHCZARWIFAJNQOQLNXJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.559421922293);
    msg.setSource(54231U);
    msg.setSourceEntity(233U);
    msg.setDestination(40596U);
    msg.setDestinationEntity(80U);
    msg.type = 59U;
    msg.htime = 0.560614027494;
    msg.context.assign("UUAZBTLKIEPZLHTCEQYTZTCPFGKUUJODVHXSWTGMSKNNOFDOBXGSWNMHFVGDELWJRYBBXYGMLDUTJQRIZSXQZEROJVZCWLXMEYWZGCPU");
    msg.text.assign("KHJOKJGVWZNNJCREORXYVNQASVRYPHTIINXYDYYTW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.580976052119);
    msg.setSource(63957U);
    msg.setSourceEntity(68U);
    msg.setDestination(41631U);
    msg.setDestinationEntity(156U);
    msg.command = 89U;
    msg.htime = 0.798691213261;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.881655327784);
    msg.setSource(58786U);
    msg.setSourceEntity(50U);
    msg.setDestination(57304U);
    msg.setDestinationEntity(246U);
    msg.command = 174U;
    msg.htime = 0.992667409604;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 239U;
    tmp_msg_0.htime = 0.349896417557;
    tmp_msg_0.context.assign("PZHGUNASKMISRLPQUWOHBZUNTEFGMOIZXDWGKKTRVTBTRJGKXTHTVETXUBGLWUJXARQYFRWLDKOFDSSLZCNCAMESXVSQACXNDGSGLFPQBTBCPJUVQMFYOPIYGKCHJJNHEKICEQSWOMVYYDRFJDXZBHPWQDULIOYXKJPEZKIRADFOQ");
    tmp_msg_0.text.assign("FXYAEYXOQMUTESMRRHYLPVBFCYCGSIBZFUPHSHNMILEGJBAPXJGJGVECVNXOJDADPOIBDLJZPIMZMZNIUYUHPUYGJEQSW");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.700501046773);
    msg.setSource(31323U);
    msg.setSourceEntity(118U);
    msg.setDestination(52204U);
    msg.setDestinationEntity(168U);
    msg.command = 76U;
    msg.htime = 0.0607782902789;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 194U;
    tmp_msg_0.htime = 0.610363137053;
    tmp_msg_0.context.assign("AWFQHYBSYFVKSBQGLQFSAPZIUXCAPCTWKTDVJHQLJLMCXTJWLZWTLIECEHPGIWAVLMFYRHLLJGFSBFRBDDOJPXNXJMTGFMTSZGZCRRTNRXOYBMRCAKUBRBOQOUGVKCNUEVOEIASZAPEEXUYXWIVJHSOPTZBQODOQQYDZQMEZNUDBASFLKNJXIVAUEHUNGZKYNGJMHMITUZSHNPRVWPKYDOIKGIC");
    tmp_msg_0.text.assign("GVXALMKEIJBYJMENLFVVZDPTTRXWCFUVLADZHCAAFJOTPSEPXSHTTWQSYFTMZIKWZBRJFDCLPXWSYYXDUBRAHVGSVOBLGRHGOUARVOTKIMBDYCLSQKEXNKUQUUNTDGPTMHLDAQMYUXPLRGBFUVEHQDJKYQAMFJJJIPIFBKRSCWNCNSKBNIOZWHYIONNQEFRCEKKZRUHFAIVXXQINGYPLWMHCWDDWIOOVTPHOJZS");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.440007958822);
    msg.setSource(17266U);
    msg.setSourceEntity(130U);
    msg.setDestination(456U);
    msg.setDestinationEntity(241U);
    msg.op = 10U;
    msg.file.assign("EDJQHOGVLBTNHMMPJOWPILVMZGEEYSAAHMPUPODKGPWBUYUYFECOVBSIAMDFIRYZYMNKBWKUGQJUKQMTSIJXKTXVBUZRYXARDNMCFPNFCEQSNCCTPJEIJYOLDYOFTRLFLGRENG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.511896934729);
    msg.setSource(49804U);
    msg.setSourceEntity(225U);
    msg.setDestination(54169U);
    msg.setDestinationEntity(218U);
    msg.op = 69U;
    msg.file.assign("YEFWGKGEPJTOVNLMREOSCJMVNXWBZWQWRCGBAGHBJRQCMPDJGLTQHXEZILHZVTYSVYUBZBKJPEKBUADLAVWMUJHBYSAAOKINMKOMVMIWTNDLXOEFFIYCRIWTRPDUTYRUMNKOCTAJGNXHYKCZYSDGSFBPOLKQTCEVZRHYSGOMQODBEHAQZUDFJBWPULRQQFPGUIZLLWSYXZQDLCRINIXFUNKXSCCNDAVJAWPH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.69267030309);
    msg.setSource(28437U);
    msg.setSourceEntity(244U);
    msg.setDestination(44442U);
    msg.setDestinationEntity(221U);
    msg.op = 25U;
    msg.file.assign("ONASIZSKPQDLVMCFFQRYJKONKUHAYUFSJVQNHJAFYOWUXLNYOWPULVBJHSPRFIWALEWVDCWGUZWMPBXVOVVQSFJTTFZDNARTOCURKQVHZVEMERYFYWRQHCZPIUBPNSDAQMEGGFAELTTHBYKNEGAATUYTXEIBCCHTGEVXULBQZHIPDBGKCMXGDXLBLRMDIAGCMJOBGOZRHSNIMMKTSCEQWWZMIYORILSYNPDBDRZNJZEXQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.427487884644);
    msg.setSource(58466U);
    msg.setSourceEntity(67U);
    msg.setDestination(9100U);
    msg.setDestinationEntity(163U);
    msg.op = 20U;
    msg.clock = 0.440600542507;
    msg.tz = 62;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.0231585218603);
    msg.setSource(64082U);
    msg.setSourceEntity(31U);
    msg.setDestination(52747U);
    msg.setDestinationEntity(43U);
    msg.op = 248U;
    msg.clock = 0.302327764346;
    msg.tz = -124;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.557823668573);
    msg.setSource(52038U);
    msg.setSourceEntity(237U);
    msg.setDestination(5963U);
    msg.setDestinationEntity(240U);
    msg.op = 40U;
    msg.clock = 0.589404629368;
    msg.tz = -83;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.213402750492);
    msg.setSource(27100U);
    msg.setSourceEntity(31U);
    msg.setDestination(11729U);
    msg.setDestinationEntity(178U);
    msg.conductivity = 0.217706399754;
    msg.temperature = 0.880198196864;
    msg.depth = 0.82441121815;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.572401128891);
    msg.setSource(48391U);
    msg.setSourceEntity(3U);
    msg.setDestination(62601U);
    msg.setDestinationEntity(103U);
    msg.conductivity = 0.615864722605;
    msg.temperature = 0.225820320444;
    msg.depth = 0.670409507119;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.394165655272);
    msg.setSource(28464U);
    msg.setSourceEntity(239U);
    msg.setDestination(19598U);
    msg.setDestinationEntity(232U);
    msg.conductivity = 0.321757227599;
    msg.temperature = 0.0625223551162;
    msg.depth = 0.911891747128;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.588723193925);
    msg.setSource(57272U);
    msg.setSourceEntity(160U);
    msg.setDestination(64501U);
    msg.setDestinationEntity(61U);
    msg.altitude = 0.9347226885;
    msg.roll = 62005U;
    msg.pitch = 60385U;
    msg.yaw = 28084U;
    msg.speed = -10152;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.187967575571);
    msg.setSource(60022U);
    msg.setSourceEntity(211U);
    msg.setDestination(8698U);
    msg.setDestinationEntity(160U);
    msg.altitude = 0.248964367595;
    msg.roll = 53091U;
    msg.pitch = 63270U;
    msg.yaw = 11512U;
    msg.speed = 1717;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.301667185399);
    msg.setSource(33174U);
    msg.setSourceEntity(106U);
    msg.setDestination(5754U);
    msg.setDestinationEntity(105U);
    msg.altitude = 0.95679483504;
    msg.roll = 36945U;
    msg.pitch = 58974U;
    msg.yaw = 2414U;
    msg.speed = -8418;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.423506193453);
    msg.setSource(1131U);
    msg.setSourceEntity(77U);
    msg.setDestination(6208U);
    msg.setDestinationEntity(141U);
    msg.altitude = 0.790484798428;
    msg.width = 0.485478999052;
    msg.length = 0.838452891414;
    msg.bearing = 0.135291616247;
    msg.pxl = -28521;
    msg.encoding = 101U;
    const char tmp_msg_0[] = {-12, -38, -30, -43, -95, 80, -17, -85, 64, -67, -45, 59, -29, 103, -116, 30, -53, 65, 3, 81, -45, 123, -88, -49, -7, 23, 61, -43, 22, 21, 20, 31, 112, -74, 37, -109, 67, 68, 87, 99, -40, 126, -3, 18, -18, 43, 27, 6, 71, -43, -16, -2, 65, -99, -48, 100, -105, 60, 99, 3, 45, 59, -127, -123, -109, 10, 50, 117, 17, 65, -17, -105, 29, 96, -50, -120, -60, -101, -62, 52, 65, -117, 106, 118, 30, -110, 95, -109, 53, 27, -88, -7, 121, 109, 6, -103, 121, 32, 126, 26, -85, -78, -27, -52, -24, 31, 41, -77, -117, -29, -34, -112, 45, -85, -104, -116, -15, -18, -43, -76, -105, -43, -124, -38, -49, 96, 101, 97, -69, 37, -95, 94, 18, 81, 9, -109, -128, 57, 34, 119, 24, 22, 111, 101, 117, -2, -91, 72, 95, -124, -9, 30, -115, -78, 29, 42, -117, -84, 57, -77, -50, -81, -28, 73, 11, -6};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.885756846348);
    msg.setSource(25013U);
    msg.setSourceEntity(190U);
    msg.setDestination(32344U);
    msg.setDestinationEntity(80U);
    msg.altitude = 0.256905329985;
    msg.width = 0.221039002641;
    msg.length = 0.249377682611;
    msg.bearing = 0.259898210671;
    msg.pxl = -9033;
    msg.encoding = 176U;
    const char tmp_msg_0[] = {-31, -114, -110, 87, -73, -69, 126, 125, 121, -14, -124, 105, 86, 47, 19, -53, 115, 54, -78, 22, 121, -126, 27, -40, 61, -76, -38, -2, -20, 23, 71, 74, -33, 60, -112, -19, 104, -35, 82, -103, 86, 52, -10, 97, 51, -82, -26, -101, 12, -71, 41, -95, -5, 48, -101, -98, 72, -57, 51, -91, -127, 31, 50, -120, -9, 81, -128, 78, -38, -107, 69, 112, 6, 59, -44, 37, -36, -39, -56, 104, 44, -110, -76, 11, 32, -45, -95, 117, 5, 41, 55, -48, -87, 9, 58, -111, -12, 3, 84, 22, 122, 21, 100, 46, 73, 14, 27, 41, -127, 79, 35, 33, -68, -40, -84, 84, 81, 37, 19, -103, -128, -63, -83, -37, -78, 49, -109, -38, -75, 47, 62, 20, -13, 8, -2, -79, 31, 104, -41, 116, 47, 63, 121, 53, 0, 75, 82, -33, 34, 86, 65, 100, 97, 35, -75, 108, -39, -111, 34, 94, -78, 47, -46, -17, -96, -93, -80, 105, 75, -110, -93, -77, 59, 47, 10, 0, -46, -38, -58, -116, 27, -117, 119, 112, -111, 109, 86, -91, -98};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.489870134248);
    msg.setSource(14346U);
    msg.setSourceEntity(216U);
    msg.setDestination(8407U);
    msg.setDestinationEntity(161U);
    msg.altitude = 0.401690571056;
    msg.width = 0.0242719798615;
    msg.length = 0.954138221667;
    msg.bearing = 0.241509729645;
    msg.pxl = 34;
    msg.encoding = 161U;
    const char tmp_msg_0[] = {98, -115, -62, -125, -64, 101, -7, 11, -1, 52, 50, -11, 108, -30, 41, -62, 76, -20, 46, 74, -98, 87, 0, -124, -74, -2, -113, -30, -126, -126, 39, 107, -8, 40, -48, 85, -96, -86, 65, 76, -54, 6, 67, 58, -61, -13, -119, 44, -12, -122, 67, -68, 83, -45, -101, 20, -53, -10, -16, -48, 62, -56, 91, -69, 108, -63, 4, -49, -99, -103, 12, -27, -42, 88, -49, -5, 84, -103, 87, -67, 59, -25, -55, -105, -54, -6, -31, 35, -29, -89, -65, -61, 29, -25, 27, -9, 107, -42, -60, -63, 120, 126, 49, 38, -6, -83, 55, -26, -22, -44, 91, -64, 47, 51, 104, -49, -89, 4, 14, 32, 73, 60, -42, 53, 87, -95, 82, 89, 36, 49, -126, -102, -75, -20, -20, -99, 81, 28, -87, -68, 20, 87, -118, 12, -103, 117, -77, -52, 70, 12, 121, -20, -103, -108, -50, 56, 18, -106};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.17754093371);
    msg.setSource(41086U);
    msg.setSourceEntity(0U);
    msg.setDestination(63055U);
    msg.setDestinationEntity(159U);
    msg.text.assign("PJWBBMWVPTEFUTQDBVPQXFDDAQDUIOHNZHZJLFLGWZIYOSMGDNVUXQVTILPJLQCCIANMZQHOHTYDQYOWMREAUMLQZDAARXRXPAHESIEAGERCANPCWUGLYKXOWMVREMZBWYHJRY");
    msg.type = 225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.711538477715);
    msg.setSource(35332U);
    msg.setSourceEntity(16U);
    msg.setDestination(43677U);
    msg.setDestinationEntity(44U);
    msg.text.assign("QSHBSODCRGKXKMMPYXPBIUEEBTXMPIIRCPZVRNEJYHJMWGFGSHGNXDHDTCTELGQZWOSLFSECKWPVRBMQJVZIUFHMLYZOOXQXPFWSTTQBJHKI");
    msg.type = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.643968565415);
    msg.setSource(60525U);
    msg.setSourceEntity(213U);
    msg.setDestination(9577U);
    msg.setDestinationEntity(41U);
    msg.text.assign("AGAGLFIOFSTOGRNVJZIQYHGLLEHCFNCLPJBJITMSWRLVVMIZUNBSADLSQLNCSKZVJBNLWOXHQKUXQHUNYWMIFXZHBZYYXDHCOKWDOQWVYOGYJURQFPFAEG");
    msg.type = 76U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.672830488804);
    msg.setSource(5227U);
    msg.setSourceEntity(206U);
    msg.setDestination(15905U);
    msg.setDestinationEntity(108U);
    msg.parameter = 200U;
    msg.numsamples = 177U;
    msg.lat = 0.426784167791;
    msg.lon = 0.268368463673;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.459342753667);
    msg.setSource(4290U);
    msg.setSourceEntity(124U);
    msg.setDestination(28533U);
    msg.setDestinationEntity(36U);
    msg.parameter = 103U;
    msg.numsamples = 52U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 39263U;
    tmp_msg_0.avg = 0.641592397324;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.867991769789;
    msg.lon = 0.830435859389;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.509746391822);
    msg.setSource(21583U);
    msg.setSourceEntity(30U);
    msg.setDestination(54510U);
    msg.setDestinationEntity(217U);
    msg.parameter = 172U;
    msg.numsamples = 215U;
    msg.lat = 0.872598707163;
    msg.lon = 0.281919005076;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.857194846991);
    msg.setSource(2972U);
    msg.setSourceEntity(30U);
    msg.setDestination(21156U);
    msg.setDestinationEntity(109U);
    msg.depth = 52225U;
    msg.avg = 0.716954515876;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.949872604701);
    msg.setSource(7036U);
    msg.setSourceEntity(117U);
    msg.setDestination(29795U);
    msg.setDestinationEntity(6U);
    msg.depth = 39764U;
    msg.avg = 0.843548112959;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.64937185252);
    msg.setSource(14215U);
    msg.setSourceEntity(96U);
    msg.setDestination(45283U);
    msg.setDestinationEntity(189U);
    msg.depth = 13083U;
    msg.avg = 0.809675875734;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.952978189244);
    msg.setSource(8801U);
    msg.setSourceEntity(112U);
    msg.setDestination(27266U);
    msg.setDestinationEntity(60U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.539860274381);
    msg.setSource(4012U);
    msg.setSourceEntity(50U);
    msg.setDestination(43527U);
    msg.setDestinationEntity(100U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.949774352788);
    msg.setSource(52683U);
    msg.setSourceEntity(10U);
    msg.setDestination(40608U);
    msg.setDestinationEntity(139U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.090847131668);
    msg.setSource(51371U);
    msg.setSourceEntity(103U);
    msg.setDestination(13951U);
    msg.setDestinationEntity(211U);
    msg.sys_name.assign("WUSSYUZCNLBYDIZZCUQDAYLRJVFWEMQNNDDZVNSBGRHZSJBLGRHC");
    msg.sys_type = 34U;
    msg.owner = 47840U;
    msg.lat = 0.198262296578;
    msg.lon = 0.916522218299;
    msg.height = 0.924004821358;
    msg.services.assign("JBTDVZMMRVKSTTFVWUJRQROEAKPBOWAKIJYXQMHMBYEHEAQDVUMEFCGVXZBVTNSCDLVTDUKOZUXLUYCWXWYNJYJIGIRKUXJFSPRJJMRDQLFUNPNQORQNPLEDAGWCCSAPVZFNKESNJLYYISAFCHXOEVXDDGGTZKXOILWOERUFOIDESSSGHRPWZWLPHMZHQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.191663460141);
    msg.setSource(44884U);
    msg.setSourceEntity(94U);
    msg.setDestination(58470U);
    msg.setDestinationEntity(49U);
    msg.sys_name.assign("DVWCPNVHPFIEGPTEONNYNQODEFBMHSAXBUWWTKGLCNRIZLIRQTJOVMAQLLXUHNDRCCRGTKSQBNBIGLYAMXTXPHYOUVUZMPSZRODOHBJQHTVSSNLFSLFJXYSYYZVNHEHKZODSOWHSUWIFBUJQDXZAMPBOZQKJDYJXKCUCDIRGESXWAEEKBCGDZUFJFCOPGPRIQJEYFTPCWAKLCFZLWLGMDKMRIGZIHRJJYVKAPIAXMGYTNAVWEBBFVMKQQ");
    msg.sys_type = 44U;
    msg.owner = 32625U;
    msg.lat = 0.0438561679977;
    msg.lon = 0.434060869092;
    msg.height = 0.64726990461;
    msg.services.assign("KVXVFMOAIUGBXJQBXCTFPNUBNPFGQDMZGUXSJLJUARTFIXXKGJGKMZLBCPEMWNOXYWGLPVHPMCOYTZKNRR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.45604225545);
    msg.setSource(47511U);
    msg.setSourceEntity(103U);
    msg.setDestination(41129U);
    msg.setDestinationEntity(101U);
    msg.sys_name.assign("JTNLDTSAQGGSTFEPQAXHOIKCAEDKZUWQEDIOIQDHVBMJAVOCLMZUWLYAFGPSERUBURXYVOKDF");
    msg.sys_type = 5U;
    msg.owner = 63323U;
    msg.lat = 0.20612639298;
    msg.lon = 0.221893111736;
    msg.height = 0.918823351243;
    msg.services.assign("IKLSBNIUKKMESGGTIEOXTRLONFAUJZBDXHMMDKEBYEOQBABZRTZFHDVEUIYWHFDYCFZQGLRCHZMJNJESQKUMURSSYVLWDBDKOQBQPPGYJKIGZXVGRXWJJL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.553239742617);
    msg.setSource(60700U);
    msg.setSourceEntity(94U);
    msg.setDestination(8306U);
    msg.setDestinationEntity(68U);
    msg.service.assign("WRMWVTVUUKSZVBATKDEHSEZHBSEBJYXFCXWUXZVGZTGQEMHQZOOPVNOSRCSSOGBVPXKOASKJXPPBBJAAFDEVFKJCCYDGMZRYRITWUACLHCWANXPBOFWQDCQYHUFDVONLFNOQQGMUEAZDYNAPIMQNABMZGLKIJRTVIWIGYSZKLNGWJWDDGEGIMQPPHNQTCRYOJILEBHRRLUXHXEUHLZFTLS");
    msg.service_type = 178U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.815482446865);
    msg.setSource(34105U);
    msg.setSourceEntity(31U);
    msg.setDestination(46867U);
    msg.setDestinationEntity(248U);
    msg.service.assign("RULJTLOTHCTVDRXZQPGYGWBKLDJYCUQOHJXCPARZXBXYXWEDMDQDZSKSXRQTYJOHDEPHZMUSIUYSNSGMRLHILEMTHUEGLZDLBOTMHWVKFFMXSBBGUOAWIECEPUJDXRIENFHLBGKZOFKDOVPCVQAMJUNRAPCBWBMV");
    msg.service_type = 118U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.83267069732);
    msg.setSource(61732U);
    msg.setSourceEntity(176U);
    msg.setDestination(8081U);
    msg.setDestinationEntity(7U);
    msg.service.assign("XKTMXZODRCEUPTYBUBTOLOPQAZINSDVHOGPMSAIZGWWJELCZMLLUPXMSBIVENIDPSSJYBOELBZDNXVCNXNCFDZXYFOBTFRCEBTAGMRKQCYFAOTHAUYRCFUHQHSMRMQKPMLJTBJEKCTWHKMVVESVIPFFTNIHAIQWUDVORJQUSRGGJDXKAPATHIARYKSHGWJJEQSBGNUZIRWPPFNVFNFCNJJILVXGWYU");
    msg.service_type = 7U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.0164840199775);
    msg.setSource(9204U);
    msg.setSourceEntity(96U);
    msg.setDestination(47597U);
    msg.setDestinationEntity(211U);
    msg.value = 0.611095959655;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.590587878716);
    msg.setSource(59595U);
    msg.setSourceEntity(60U);
    msg.setDestination(47418U);
    msg.setDestinationEntity(203U);
    msg.value = 0.713566357525;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.0603383876606);
    msg.setSource(57456U);
    msg.setSourceEntity(96U);
    msg.setDestination(46751U);
    msg.setDestinationEntity(12U);
    msg.value = 0.50122961656;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.341240111037);
    msg.setSource(12683U);
    msg.setSourceEntity(110U);
    msg.setDestination(23654U);
    msg.setDestinationEntity(140U);
    msg.value = 0.810429656173;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.050819297619);
    msg.setSource(55471U);
    msg.setSourceEntity(55U);
    msg.setDestination(30235U);
    msg.setDestinationEntity(231U);
    msg.value = 0.588477933614;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.227063580875);
    msg.setSource(62088U);
    msg.setSourceEntity(215U);
    msg.setDestination(25546U);
    msg.setDestinationEntity(82U);
    msg.value = 0.570249849906;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.344144209838);
    msg.setSource(2288U);
    msg.setSourceEntity(55U);
    msg.setDestination(52694U);
    msg.setDestinationEntity(92U);
    msg.value = 0.113551429967;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.39263784058);
    msg.setSource(38429U);
    msg.setSourceEntity(13U);
    msg.setDestination(3646U);
    msg.setDestinationEntity(119U);
    msg.value = 0.743641112767;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.92301140291);
    msg.setSource(55223U);
    msg.setSourceEntity(228U);
    msg.setDestination(513U);
    msg.setDestinationEntity(90U);
    msg.value = 0.51619921789;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.738371978693);
    msg.setSource(40690U);
    msg.setSourceEntity(134U);
    msg.setDestination(44921U);
    msg.setDestinationEntity(115U);
    msg.number.assign("OECDXUHWBXWIAAYBFQKRNAUTYVEGVTEFSNKHLLVCJUKDLJTMMZWIPBYBOGXMKDSFRPYCLXVWKABJCILCINYURLTQLFZWDXMXHKDCNYSZVJEUTBXBUASTTQFKFN");
    msg.timeout = 7226U;
    msg.contents.assign("STUHXCIDGOMZPZYPOLIRUWQDDFNYDEJGHEJLVWWBLIFUAYWQCQEBGFLJXVYBYNBPSDDRVZJXDKQMKCZOAPXNRQBXHSUAZIXIF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.767552026057);
    msg.setSource(18659U);
    msg.setSourceEntity(201U);
    msg.setDestination(15685U);
    msg.setDestinationEntity(53U);
    msg.number.assign("NTYTEUCIFGNKMPOTFDVUMKXJTVCBOYLAINGUZCLLERHAWOBSYTMMNXSVJEXJYGEYCKDXOPUIPFOJEGWZMZOZDLOEKXE");
    msg.timeout = 48057U;
    msg.contents.assign("KHLQIZNLBWRHWLOXSSUDSBQUFJJGSOQAVMIJXKPHOJTRUBUTKXWBDPCXARZKPPRTTQYTETPCVHGWZQKRFNXHUKSLOXLAKWMMMFCELFVNURSVYIPIYEEDBONMXKJXFMIQPJSNVYIDYIBUVNQYOZXIRAZJONOWMCZCXLNJPFUSODHWGHAS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.550726778023);
    msg.setSource(17785U);
    msg.setSourceEntity(48U);
    msg.setDestination(5690U);
    msg.setDestinationEntity(167U);
    msg.number.assign("JXCIRTSFLMEHMMEHNVHNZNTDYNEMOKAYAEFGGQXIKBZAGVVOTPWCAENRDUGKUIQBUUBOTHYFZCCYOEZFRVOKDRGTMJXSOYQXWRVLNZIUNKKWSAPMLCJKALBXZQJQULJIQLOEYILDPHFSBIVJSGDLEYITPXTXRSXCURNJRYNZQWWZHHDAYMUPKZDLGWCFPFWAQHFUQAPDEMMSS");
    msg.timeout = 3481U;
    msg.contents.assign("ZHHPWPHLMQODJGQRQODQREHMLOKMBTRARFOXCEIAMNIFZIDLVPRTBTAJGBFGWGZSNYCBFWUGCWUPCBOVMSUDNLKUEBBCKHEVSINZWGAOZFWPSCYCIVILKVTJFHWWROEQSEHTIAHFBUYKTVZWYMHADFSVXLB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.638692509017);
    msg.setSource(51262U);
    msg.setSourceEntity(252U);
    msg.setDestination(1891U);
    msg.setDestinationEntity(145U);
    msg.seq = 3408159854U;
    msg.destination.assign("EJSNZXMLHXJPUUFRHEXUAELCVQZNBMQGWOCAYGJFYXKOASLIJGEUKRKOMAHHVTPCYWHGBEKFRTTGGVVBKTRZAPDLBMPCUSSYIOQQXNJANHHWJPNDDDMXSNXRQTCVZBRPTBSAQQOBLYBSYLLTZAAXIFDOSYVYEQGJRFGAPOPCVHWWWROIZLWTVNJFMTKNSBHCHDJEJGQFBUEWIYFVUKIIUZEXDSPNMMTZWNOKDDIQMLCYCGIVLFRIFDEKWXOZPZ");
    msg.timeout = 15246U;
    const char tmp_msg_0[] = {64, 118, -57, -91, 51, -81, -92, -11, 63, -106, -115, -28, -17, 43, 23, -65, -11, -18, -42, 39, -112, 74, 70, -65, -83, 112, 115, -67, -40, 16, -96, -92, -24, -46, 46, -107, 118, 35, -7, 1, -76, -126, -4, 71, 8, -19, -72, -95, 46, -56, -64, 75, 68, -66, -35, -105, -48, 49, -128, -42, -54, 15, -125, -92, 88, -72, -15, -60, 67, -2, 75, 26, -24, -55, -73, -14, 53, -120, -122, -87, 5, -72, -126, 64, 87, -74, -95, -42, -20, -15, 54, -87, -60, 26, 26, 105, -20, 5, 113, 72, 79, -78, -32, 37, 69, 77, 55, 25, 87, 105, 77, -2, -60, 83, 88, -55, -92, 39, 7, 21, 62, 96, -44, -50, 101, -78, 53, -4, 111, -63, 46, -60, -82, 10, -30, 112, 71, -102, 114, 85, -119, 37, -126, -77, -49, 94, -37, 68, -126, -51, -110, 101, -12, 105, -104, 82, 80, 13, 120, 3, 117, 90, -103, 122, -48, 89, 0, -26, 44, -54, 90, 29, 105, 95, 9, -41, 110, -37, -3, 120, 117, -3, -23, 58, 16, 120, 42, 72, -51, -116, -89, -17, -36, -42, -93, -24, 34, 106, -21, 102, 99, 104, -31, 4, 63, 51, 5, 38, 15, 4, 13, -20, 110, -124, 51, 8, 105, -18, 32, -19, -3, -68, 56, 27, -6, -81, -86, -15, -34, -98, -96, 88, 38};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.61138597786);
    msg.setSource(52242U);
    msg.setSourceEntity(82U);
    msg.setDestination(49904U);
    msg.setDestinationEntity(180U);
    msg.seq = 4107588792U;
    msg.destination.assign("CGGBYALKDMZOVFZFHOUQIPCZBGZDODYNBOEPWXBATUQSSJMQONBJJJWRUJFYBTOQNQM");
    msg.timeout = 58844U;
    const char tmp_msg_0[] = {-53, -71, -48, -121, 63, -102, -110, 66, 31, -104, 82, 97, 22, 14, -123, 3, -26, -91, 107, -94, -60, 94, 61, -84, -93, -101, -90, 121, 60, -88, -29, -77, 71, 39, 65, 63, 19, -59, 120, 33, 51, 109, 104, -3, 5, -31, 67, 113, -88, -11, -123, 1, 118, -43, 35, 39, 44, 58, 119, 91, -126, 84, 114, 72, -13, 91, 25, 93, -75, -125, 68, -79, 48, 68, -37, 25, 31, -38, -75, 23, 121, -105, -47, -84, 94, 28, -62, -13, -13, 5, 44, -75, 37, -121, -110, 66, -49, 72, 105, -46, 0, 47, 11, -46, -49, -35, -93, 29, -30, -74, 25, 125, -81, 2, -65, 5, -54, 59, -109, -56, 58, -67, -82, -85, -69, -69, -55, 97, -49, 106, -25, 104, 3, 49, -48, 108, -9, 35, 64, 64, 9, 48, -103, -37, 93, -119, -70, 40, -93, -94, -15, 55, -87, -12, 83, 105, -92, -31, 87, 90, 0, -5, 67, 89, 21, 71, 45, 39, -109, 57, 98, 114, -56};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.999526037659);
    msg.setSource(50169U);
    msg.setSourceEntity(238U);
    msg.setDestination(11442U);
    msg.setDestinationEntity(40U);
    msg.seq = 1567464150U;
    msg.destination.assign("KJQPGAIWLZPYAPPNHNOBLDTOMEZRUXKRVNRCBHJDZXRFMXSPTICNRIKQFSERDHVLIHXSJJGMUFWDKHVMLLUCZBVATBEBCPFKVWCVMICQOBFYWDTQYLAEZZQXFGLBUNKZWXNEEIRZMSDOZLJOBVEEKFPUJWGAYNH");
    msg.timeout = 6095U;
    const char tmp_msg_0[] = {100, -95, 25, 119, -6, 43, -81, -3, -69, 17, 108, -21, 25, -43, 38, -43, -28, 77, 67, 37, -69, -3, -99, -88, -74, 106, 10, 78, -1, -82, 107, -92, 85, -34, 126, -121, -59, 112, -81, 51, -15, -74, 112, -19, 92, -74, 52, 90, -50, -14, -118, -16, 70, 58, 5, -31, 106, 41, -20, -8, 33, 91, 91, 99, 11, -38, 105, 82, 68, -69, 78, 19, 82, 58, 118, 17, -37, 57, -72, -46, -12, -18, 103, -72, 86, 16, 66, 93, 89, 116, -72, -53, 116, 83, 101, 67, -46, -102, -62, 113, -107, -86, -21, 86, 108, 6, -37, 101, 86, -104, -56, -122, 100, -120, -16, 19, 23, -60, -104, -50, 68, 90, 93, 8, 119, -93, 29, -8, 71, 53, -30, 33, -91, -20, 87, -67};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.758284846214);
    msg.setSource(63306U);
    msg.setSourceEntity(120U);
    msg.setDestination(60864U);
    msg.setDestinationEntity(93U);
    msg.source.assign("POKEGARMSQHZIWUUGNMUIYRCYGZKOOWFNHSTDKNWEBADKJLQCTFUYJJUXSHQMPLIAFEJRIMQXJQZMZGAWGEFDGKEETCAVSCPYJNBEVODCFRWXHURPOIUYXZVNXLYBQCATFSRHHJHLLGDBOIZVANQJNQXYBUJFWOXGYRITEZXCSTRIYLCFBPOQNVEWAXBLHPPMVHDULVMPKBQXSPLTNOAZDVCWDTKB");
    const char tmp_msg_0[] = {114, -57, 7, 22, 66, -75, -2, 112, -52, -77, -100, -68, -114, 17, 112, -45, 17, 63, -65, 75, -50, -61, 50, 89, 115, -2, 42, 57, 0, -93, 52, 78, 87, 79, 71, 27, -70, -109, -26, 78, 73, 77, -103, 84, 34, -17, 49, 102, -80, 117, 124, -115, 99, 51, 81, 2, 121, 113, 42, 30, 60, -72, -22, -78, 4, 59, 15, -83, 13, 49, -59, 67, 19, 109, 1, -89, 78, 87, -105, -45, -119, 115, -29, -73, -112, -98, 58, 108, 115, 97, 51, -46, -115, -36, 25, -101, 3, -59, -93, -102, -92, 61, -33, -31, 60, -94, 37, -128, 120, -106, -94, -5, -3, -19, -70, -120, 17, 70, -102, -14, 56, 18, -54, -94, 30, -100, 7, 75, 57, 113, -119, 56, -100, -99, -10, -18, -107, -120, 57, -39, 110, -38, -18, -112, -42, 121, 87, -5, -23, 5, 81, -28, -11, 4, 110, 1, 100, -123, -19, -17, -119, 22, 90, 11, -102, 11, -32, 38, -96, 78, 44, 101, -127, -21, -48, 118, -32, 104, 101, 24, -114, -30, 2, 79, 82, -126, 71, 70, -110, -34, 24, -28, 0, -92, -46, -56, 125, -11, 4, 110, -70, 73, 13, -41, 20, -116, 100, -51, 65, 97, 34, -49, 16, -95, 118, 93, -116, -113, 1, 47, 80, 60, 75, 23, -47, 57, -14, -1, 120, 72, -68, 0, 11, 64, -115, 3, 60, 124, 67, -37, -89, -16, 4, 99, 68};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.134714802596);
    msg.setSource(31395U);
    msg.setSourceEntity(43U);
    msg.setDestination(12374U);
    msg.setDestinationEntity(40U);
    msg.source.assign("NLKDXDNNVIPAHZWJWETHIGCVCZX");
    const char tmp_msg_0[] = {51, 59, -107, -51, 34, 55, -89, -8, -125, 96, 11, 77, -30, 32, 96, -28, -71, 31, -113, -63, 87, -96, 6, 31, -124, 99, -123, 124, 42, -4, -11, 32, 10, 22, -25, -67, 120, -58};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.37207050063);
    msg.setSource(28186U);
    msg.setSourceEntity(100U);
    msg.setDestination(20147U);
    msg.setDestinationEntity(49U);
    msg.source.assign("WNPBYKTSUWRYLERCRLBVNFBJDTTXRIYOOPZZSPUFUMHPRAECELNWBYNZVAIUQCDPIJECROXAXYPPQLUJUGLFMMGWWKQ");
    const char tmp_msg_0[] = {2, -91, -50, -121, 126, -75, -72, 117, 88, 6, -8, -97, -86, -54, -84, 58, 122, 20, 91, -28, 38, 71, 7, -67, 20, 59, -101, -104, -44, -14};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.071631619387);
    msg.setSource(19207U);
    msg.setSourceEntity(150U);
    msg.setDestination(61609U);
    msg.setDestinationEntity(28U);
    msg.seq = 3955530948U;
    msg.state = 223U;
    msg.error.assign("QAZLDCJFYESCRGFJIMIHFJVVTITBWIGHTQNXKFZGPPMEXLENLLCVKZPCBVADKOWEOBEOCNKYSFWJBVLGZPBAZHSXDKWXNRHDRIKWAPKUXWFZDXIHPDHUGSVGNCQSNWYFRTBUHX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.0461924435588);
    msg.setSource(24065U);
    msg.setSourceEntity(173U);
    msg.setDestination(25389U);
    msg.setDestinationEntity(153U);
    msg.seq = 3109656443U;
    msg.state = 65U;
    msg.error.assign("FHGCEQSUVYXLHHKOHRBZPJPNUZIPDNAKJAERIVCVMSEIOAMRKDNPMTFTDGBSFJZWUVHTMWRTZLKWJQIGCYGCVGXJXFLCUYNQCKBNVYVRBXHNSXEFHNTZCZWBLYDDZNOLOWXROBBPAYMQQNWAQCPXAKISONOMJRAYLLQMSDWQTURUPDSBTIXKFAKJPLBEMJQYSKVAGBUOEOOLIITPEUYECTDAULEDK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.324316077967);
    msg.setSource(15262U);
    msg.setSourceEntity(250U);
    msg.setDestination(33652U);
    msg.setDestinationEntity(44U);
    msg.seq = 1838907122U;
    msg.state = 169U;
    msg.error.assign("QEZNBXJVDSDZNDWUQMGSIJMYHLDUQMZHXMSWFETAXLMODMIG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.439811128048);
    msg.setSource(18247U);
    msg.setSourceEntity(136U);
    msg.setDestination(17018U);
    msg.setDestinationEntity(187U);
    msg.origin.assign("PYFEVTFXSXDGJIQYAOVXVQMCZHIGKSWUJIKUTIOKAHKWIFJYBP");
    msg.text.assign("DSLGLURLPPAPZVGMKQODSCRFAOZXPHWJVYKDMPYDORNFJXEBMPHZNBIOPADZCRZVCTEHTLYRENYPINHGKOWYEXVSAIQZRJSBCTATOQYXJLXUIBSEDUMFGYIANTGKMTAUQNR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.0757240705328);
    msg.setSource(26193U);
    msg.setSourceEntity(218U);
    msg.setDestination(52964U);
    msg.setDestinationEntity(40U);
    msg.origin.assign("GOKOVJJGODWSMWJNELIZRRSILLDTCSTXITRUXHERLPLOMXTGMIZCFTI");
    msg.text.assign("EFMSBGASXRQWYWXCTLVZGTYFNHPWUMEIHVZDCJXOKGRSIQHCTIAGELRYXHYXENKVSXTRFCIRWOFRPEVAYJPGQJGEGWNBKDQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.26078192417);
    msg.setSource(32672U);
    msg.setSourceEntity(206U);
    msg.setDestination(27456U);
    msg.setDestinationEntity(126U);
    msg.origin.assign("PESZRCVWDDIHXEFAOZYLRFWYMQVGBOTPBWGZER");
    msg.text.assign("GMDWCNPSZRLOMNMMNUTVHUZVZCWSBXATZGMUOEAIMEEFPVABKVKLKOCWQVXETYHYIZDBGELRGQBYMJOLURSQLWHQIPXDR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.114529758312);
    msg.setSource(13835U);
    msg.setSourceEntity(94U);
    msg.setDestination(24162U);
    msg.setDestinationEntity(140U);
    msg.origin.assign("ZFSPWNFDFIYGDVLJIIXMQHTSOQYFMIDYGDQUAFHZMNUCFBTSHXJQWVCPSXANVBZKPFP");
    msg.htime = 0.401592810044;
    msg.lat = 0.987907559326;
    msg.lon = 0.15649440758;
    const char tmp_msg_0[] = {-96, -25, -18, 121, 20, 26, -83, 90, -70, 18, -94, -59, -10, -111, -77, 67, -3, 62, 4, -66, 80, 51, 124, -44, 76, -125, 39, 10, 116, 63, 5, 90, 71, 24, 38, 3, 28};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.90195752561);
    msg.setSource(28536U);
    msg.setSourceEntity(205U);
    msg.setDestination(7625U);
    msg.setDestinationEntity(9U);
    msg.origin.assign("SLCFAORLCHNBYCGPASFVXNCSLQVCSXXVLPGFBHRUIZFDOYRUU");
    msg.htime = 0.477349702123;
    msg.lat = 0.365753623171;
    msg.lon = 0.566902606376;
    const char tmp_msg_0[] = {-21, 56, 28, 100, -53, -110, 76, 85, 60, -85, -1, 121, -66, -125, -12, -71, 14, 59, -25, -58, -38, 9, 104, 105, 54, 90, -115, -11, 48, 9, 34, 4, 40, 90, 68, -112, -63, -14, 42, -21, -12, 19, -16, -104, -34, 2, 113, -92, 87, 74, 97, 24, 27, -74, 75, 72, -20, -30, 43, 28, 21, 10, -72, 97, -48, 114, -14, -111, 23, -110, -10, 52, -109, -56, 29, -84, -51, 16, -13, -14, -17, 54, -42, -68, -77, -117, 54, -54, -33, 113, -60, -35, 36, -23, 11, 121, 115, -6, 95, 39, -118, 49, 76, 116, 105, 25, -127, 7, -97, -69, 102};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.333373523314);
    msg.setSource(50142U);
    msg.setSourceEntity(89U);
    msg.setDestination(24608U);
    msg.setDestinationEntity(158U);
    msg.origin.assign("BRDVJSQKJCVXFZSERIUYCUIGTMNMKTTEQENIRXCGSUOHTHQSDGMGRMCZUTNYFJQUXYWFRFSBVHBQNOPNDHRWYXQAWRBJWAECPEAGDOJFOZCMOPGFVYUSFPVANQINZDXWSGBWLAMJCMOGKKVOMAZEWSPMPBXEVKPDIOKZJTRJLKOCUKDDKQTIAPVDWRHZYZAHEJXBYPVAWEZLILLKBGLXS");
    msg.htime = 0.719158823417;
    msg.lat = 0.93878994122;
    msg.lon = 0.0925205759526;
    const char tmp_msg_0[] = {-37, -29, -46, 106, 19, 45, 72, 99, 99, -76, -13, -95, 93, -30, -72, 8, -20, 92, -25, -113, 49, 67, 53, -24, -98, 37, 7, 126, -123, -66, 52, -68, -64, -77, -11, 56, 103, -53, 5, -10, -7, 123, 118, 111, 116, 30, -13, 94, 78, -53, 39, 11, 44, -61, 40, 71, 66, -107, -35, -110, 50, 23, -89, -118, 90, -53, -48, -41, 45, 107, 64, -3, 54, 54, -60, -64, -62, -72, -78, -57, -29, 115, 23, -9, -66, -75, 60, 118, 99, 69, -59, -99, 31, -113, -121, -97, 13, -55, 112, -112, -77, -63, -31, -125, 52, 81, 48, -65, -24, 31, -57, 53, -90, -50, 55, 21, 115, -97, -29, 14, -34, -2, 87, -7, 114, -103, 16, -48, 68, 57, 52, -76, 117, 38, 96, 106, 71, 86, -89, 66, 122, -126, -79, -86, -98, -100, 35, -63, 3, 126, -72, -105, -104, -4, 81, -56, 113, 105, -18, 13, -70, 9, -100, -89, -34, -51, 107};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.38080360541);
    msg.setSource(25912U);
    msg.setSourceEntity(45U);
    msg.setDestination(9137U);
    msg.setDestinationEntity(55U);
    msg.req_id = 61076U;
    msg.ttl = 2171U;
    msg.destination.assign("LJNPFLAPDYXAXBFCWZYQQPJNRVYENMUQDXQITJERSOWWRBACBUTZJTYFVVKVCTCRHOTJCHNFACSAABIK");
    const char tmp_msg_0[] = {-121, -58, 98, 49, -83, -62, 29, -89, 7, 23, 95, 117, -26, 14, 28, 115, 44, 39, -57, 23, -3, 0, -45, -87, 42, 125, -107, 16, 49, -14, 28, -24, -51, -123, -27, 111, 27, -109, 106, 109, -108, 101, 103, -88, -13, -97, -46, 87, 113, 9, -60, -44, 108, -106, 32, 99, -115, -28, -76, 4, -100, -94, -102, 110, -61, -109, 55, -120, -38, -119, -25, 49, 15, -23, -94, 3, 41, 73, -128, 102, 115, 111, 121, -121, -111, -86, 1, 96, -23, 64, -65};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.321072823114);
    msg.setSource(20723U);
    msg.setSourceEntity(50U);
    msg.setDestination(36455U);
    msg.setDestinationEntity(58U);
    msg.req_id = 56448U;
    msg.ttl = 9441U;
    msg.destination.assign("LEYHTDKAQDYAEXYVITMAWOZGXIBADVVUYUZZKDXUZBLKMRYLDGNJHLGTMQQTENQQZWSSJNFHVGTQKURZAQMONXPDZNPKKJVOCBFGBBVWXGWHLMGCGDRRYXZUCHXJDIWPLBVRRELTDCMDPIJSSPSUPQWRTJVEWFBATZKF");
    const char tmp_msg_0[] = {-126, 50, -63, -107, -33, 116, -91, -47, -4, 122, -8, -53, 72, 32, 44, -88, 76, 115, -17, -113, -128, 24, 83, -61, -54, -8, 120, -21, 29, 51, 61, -25, 25, -48, -124, 118, 10, -88, -97, -8, -107, -67, -117, 32, 44, 103, 87, -57, 82, -12, -9, -81, -48, 112, 54, -12, 45, 11, -126, 61, -38, 85, 6, 33, -18, 32, -37, 97, 44, -119, -57, 47, -43, 14, -109, -75, -31, -126, 85, -29, 0, 52, 5, 54, 25, 27, 59, 24, -42, 33, -106, -31, -82, 96, -127, 56, -91, -96, 90, 108, 34, 100, -73, -50, 71, 59, -27, -46, 113, 119, -103, 25, -17, 113, 54, 7, 11, -97, 91, 71, -57, 63, 29, -34, 14, -18, 72, -23, 121, 99, 27, -95, -28, 108, -41, -76, 111, -76, -88, -25, -43, -42, 23, -15, 38, -93, -116, 110, 93, 117, -73, 24, -9, -17, -123, 48, 89, -88, -125, -92, -124, -23, -53, -47, -39, 71, 9, -115, -59, 29, -59, 104, 42, 8, -17, 60, -55, 108, -19, 107, 31, 45, 40, -115, 66, 109, -12, -55, -46, -102, 29, -76, -62, -105, 113, -75, -56, 43, 37, 92, 7, -67, 99, 84, 126, 23, -26, -49, -88, 4, 95, 84, 22, -116, 14, -9, 76, 91, 62, -92, 47, 103, 14, -83, -16, -96, 52, 122, 46, -35, 88, -40, -16, 99, -127, 24, -44, 48, 28, 70, 100, -64, 21, 14, 105};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.0183513600443);
    msg.setSource(40143U);
    msg.setSourceEntity(80U);
    msg.setDestination(21408U);
    msg.setDestinationEntity(245U);
    msg.req_id = 58949U;
    msg.ttl = 54977U;
    msg.destination.assign("WFDOLIUIDVADOSVAVMRZEJPRTWWGNCKYAVWLSHCFSZUBPMRELJITZQQBAYEMQXHKTWDGJLCRXDVQOGDHBTRSAKMQNANNUKMXKDNKGYRRWJYBGDYXOPXBTDCFVAIIOGHVBV");
    const char tmp_msg_0[] = {5, 119, -112, 9, -3, 70, -72, -20, 45, 71, 48, -10, 80, -118, -30, -70, 40, 100, 113, 102, -99, 119, 123, -21, -97, 95, 116, -88, 27, -57, 107, 40, -105, 23, 50, 70, 28, 103, -16, 78, 58, 98, 78, 8, 69, 124, 19, 50, 36, -31, 20, -97, 119, 35, 103, 23, -31, -96, -18, -126, -80, 53, -69, 67, -121, -120, -122, -54, -115, -79, 117, -27, -23, -94, 41, 115, -103, 78, -91, -77, -40, 5, -68, 4, -64, 24, 47, 107, -2, -123, -37, 72, 54, -63, -37, 97, -86, 44, 69, -32, 115, 91, 126, -108, 29, -34, 117, -29, -51, -97, 57, -83, 3, 23, 6, -86, 80, 19, 90, -18, -75, -26, 54, 21, 5, -80, -94, 71, 6, -9, -14, -121, -117, -2, -12, 3, -74, -9, 1, -7, 10, 71, 15, 59, 85, -102};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.117955563786);
    msg.setSource(37243U);
    msg.setSourceEntity(190U);
    msg.setDestination(21272U);
    msg.setDestinationEntity(44U);
    msg.req_id = 32810U;
    msg.status = 228U;
    msg.text.assign("NVBPCPNEYCPXBMVSVJTDHGMNDNWYRAHOXBJCAHGXUXUXXJOXLTOHUEODMARSRJUGPUBGKSMFZKAGYSZQFZHTYOSUOENLCYEIVIHGIAQRTDDEFXNKPPUWVERAQNYFXKWRHPCFPYOFX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.865395981429);
    msg.setSource(3561U);
    msg.setSourceEntity(172U);
    msg.setDestination(3924U);
    msg.setDestinationEntity(70U);
    msg.req_id = 43544U;
    msg.status = 206U;
    msg.text.assign("NRZNGOOJCCXDWBXCZKYXBVXYMPJNUETNZUQUYJWFTIFTFUOESPDJBRMJSFTSMBADJLHVTDYESUYRPUCAMCZZLOCNGTNDEEADUEIKQVOIKHKLXPRQYKPBQXHGWRPURNHVWSBMIAMELPUDFBLETKUARFSCOHHIZPXAWWAYNMVNORA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.39925348735);
    msg.setSource(2023U);
    msg.setSourceEntity(128U);
    msg.setDestination(48825U);
    msg.setDestinationEntity(123U);
    msg.req_id = 45661U;
    msg.status = 30U;
    msg.text.assign("AYGTUFYVVGSRFUEQKHQYCOQPXVBFNDJXGGXFAKRDXIRMBQFKVHIQKKSAL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.327781019209);
    msg.setSource(35753U);
    msg.setSourceEntity(82U);
    msg.setDestination(61638U);
    msg.setDestinationEntity(245U);
    msg.group_name.assign("PGOJSJQVTLSDXNQYLAYMCRGRRAZIYXCXFICHATIVPMZMFCNAGZCUWOEPSWRCWGPQDZKVKIVJTBJWTMMGAWSJHSUGZZTNBNPHQKPYLYVEBQYRHGBCNMIJTAUFOBUXWLDKUCBDAFGDUWH");
    msg.links = 1536528606U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.960703538149);
    msg.setSource(58170U);
    msg.setSourceEntity(151U);
    msg.setDestination(53433U);
    msg.setDestinationEntity(136U);
    msg.group_name.assign("GVSCTWMFCPSXVHFJVYDKZNIIUPSKPHCSZALLDLEAPMTKQCBDEAWWGYBDXIKYLNCXRHRLLMHUUYMSJGJXUF");
    msg.links = 3842571471U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.630269847105);
    msg.setSource(11538U);
    msg.setSourceEntity(57U);
    msg.setDestination(42732U);
    msg.setDestinationEntity(212U);
    msg.group_name.assign("DAKRYUKVAVXGKNMMZPACALAPGOYXJFCIJSMPXPJQPXNLQVDPMWEXCNKLUFMWCVTHFVNUHLFSBIJSIUOSOZZYLNJGCRJMTIQWMOBNNWPXRUYDKZQEABIWYKJOACGRXKYTLQOLOGGTRHDGRYCWZOVEYPWEZVCQQTEHIWKOQKHUJUXZBQGUXATLBWNTYAQGHHSUERIDYBZXLIOVTMCZSEEJRTDSLVTGIDBMHFBIAUFWBJSNCPSDMFE");
    msg.links = 3234405984U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.26832886742);
    msg.setSource(55008U);
    msg.setSourceEntity(28U);
    msg.setDestination(9523U);
    msg.setDestinationEntity(88U);
    msg.groupname.assign("TUVPFCRKSTMIPLQCREYZAEWUOVQDKCHRRDARRDXMVOHGLBYWWYZKEQFFJHODMLSQTCAKPOZPFEZIWMCFQQHUWXSKNNNKLIKJJAKGSBUSGDQYYXYHYNFXNMXCDECYOTCCDBOFTUNKUBUAKFTBYPEFHGOBPTVQJXNIGJZBRZJ");
    msg.action = 107U;
    msg.grouplist.assign("EJHZEJNWDTUZSLHMQUWDUSWGXPBEJKPBJWBCAEHLFEKCJEMQOQMLSVZCGMXNCPXHAJNTVKISIEVAYZLTZOVNMZNNVVYALCITHLOQWFQOLUIFXRUHFDCUVFBHYDTLHAKORQKDYBXVPWJWAYZRCYJRQYTXZIMRLNCRCQWAJFXRHIGDBRBU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.0278408278797);
    msg.setSource(53314U);
    msg.setSourceEntity(125U);
    msg.setDestination(52837U);
    msg.setDestinationEntity(16U);
    msg.groupname.assign("EUOTOMOTUSINWMJGHBRYPOQTMFAPKQZOKKZFIDWQXJUYGNHZDKOMBVWZIKVTOINEZJYZBEVSFYLIFDMUYXAMOTEESMJCERCAAJKXINFRLBXBYCRHAXHJWQGCDCPKSWIOGGBDJNPCHNFFSVRJWHZDDQSTAHNLQWNSCIFFAIRTMPGGHAKPSRKGJSTUZAVLUVGXWLDUJYZSY");
    msg.action = 187U;
    msg.grouplist.assign("TLAGKFXVPYYKDDXHWAQCVUCOCSGBFRNPUAGBMHQKTLCREVWLMOQWALELHXRIEWIJZTFRXNAVBLORGDLCEVVKPOIPYDFOZENHQFXZQAMBNF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.936588445103);
    msg.setSource(4085U);
    msg.setSourceEntity(185U);
    msg.setDestination(63982U);
    msg.setDestinationEntity(206U);
    msg.groupname.assign("RWMDQMSOXCAZEUBURYDRJRROUDFZVRRDKEHEIRRLWWUWECDFCNXYTJGKUUWHBMILZINOAMKGJVITDDNAENXBHQXOOBWY");
    msg.action = 146U;
    msg.grouplist.assign("ZBNDRCJQRRAUQCN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.73730878751);
    msg.setSource(44147U);
    msg.setSourceEntity(228U);
    msg.setDestination(35588U);
    msg.setDestinationEntity(142U);
    msg.value = 0.823308020248;
    msg.sys_src = 53452U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.766677776087);
    msg.setSource(47876U);
    msg.setSourceEntity(211U);
    msg.setDestination(24026U);
    msg.setDestinationEntity(15U);
    msg.value = 0.376139169826;
    msg.sys_src = 41909U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.114271461317);
    msg.setSource(18533U);
    msg.setSourceEntity(252U);
    msg.setDestination(40853U);
    msg.setDestinationEntity(174U);
    msg.value = 0.834356753867;
    msg.sys_src = 16351U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.906939709442);
    msg.setSource(47194U);
    msg.setSourceEntity(111U);
    msg.setDestination(52122U);
    msg.setDestinationEntity(71U);
    msg.value = 0.0258545600316;
    msg.units = 179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.2372008911);
    msg.setSource(27677U);
    msg.setSourceEntity(224U);
    msg.setDestination(42992U);
    msg.setDestinationEntity(42U);
    msg.value = 0.913863304156;
    msg.units = 112U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.663049179563);
    msg.setSource(38248U);
    msg.setSourceEntity(237U);
    msg.setDestination(30471U);
    msg.setDestinationEntity(6U);
    msg.value = 0.127990335754;
    msg.units = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.536396630246);
    msg.setSource(50949U);
    msg.setSourceEntity(53U);
    msg.setDestination(18751U);
    msg.setDestinationEntity(10U);
    msg.base_lat = 0.575443108463;
    msg.base_lon = 0.574228318891;
    msg.base_time = 0.982756363588;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 5125U;
    tmp_msg_0.priority = 102;
    tmp_msg_0.x = -12104;
    tmp_msg_0.y = -7494;
    tmp_msg_0.z = -3168;
    tmp_msg_0.t = 15507;
    IMC::Phycocyanin tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.865247471275;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.904484047411);
    msg.setSource(21824U);
    msg.setSourceEntity(228U);
    msg.setDestination(59779U);
    msg.setDestinationEntity(73U);
    msg.base_lat = 0.542160062463;
    msg.base_lon = 0.320465707607;
    msg.base_time = 0.528005362951;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.431550516106);
    msg.setSource(25756U);
    msg.setSourceEntity(106U);
    msg.setDestination(30500U);
    msg.setDestinationEntity(133U);
    msg.base_lat = 0.84129816255;
    msg.base_lon = 0.355098148488;
    msg.base_time = 0.150326925473;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 55150U;
    tmp_msg_0.priority = -124;
    tmp_msg_0.x = 28137;
    tmp_msg_0.y = -3296;
    tmp_msg_0.z = 14851;
    tmp_msg_0.t = -3555;
    IMC::ImageTxSettings tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.fps = 5U;
    tmp_tmp_msg_0_0.quality = 148U;
    tmp_tmp_msg_0_0.reps = 217U;
    tmp_tmp_msg_0_0.tsize = 203U;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.472641500691);
    msg.setSource(13520U);
    msg.setSourceEntity(89U);
    msg.setDestination(28334U);
    msg.setDestinationEntity(139U);
    msg.base_lat = 0.534252191963;
    msg.base_lon = 0.203039310597;
    msg.base_time = 0.848919964753;
    const char tmp_msg_0[] = {-59, 65, 115, 9, 14, -13, -114, 3, 100, -107, 71, 59, 46, 60, -18, -27, -28, -66, 79, 21, -28, 110, -83, 108, -37, -22, -71, 4, 20, -6, -55, -98, -51, 77, -60, -78, 119, -96, -124, 35, 114, -19, 87, 99, -8, 98, -126, 48, -128, 102, 43, 57, -38, -79, -39, 94, -6, 13, -13, -57, 97, 20, 123, -38, -28, -54, 78, 122, -79, 24, 29, -127, 72, 39, 102, -65, 55, -116, -124, 38, 111, -24, 32, -43, 9, -32, 32, -118, 46, 75, 5, 17, -46, 70, -101, 114, -56, -31, -71, -57, 46, 108, -85, 7, -49, 25, 119, -46, 85, 122, -40, -106, 17, 1, 63, -11, 22, -107, -3, 87, -63, 34, 89, 21, 37, 55};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.828345946716);
    msg.setSource(45065U);
    msg.setSourceEntity(0U);
    msg.setDestination(50043U);
    msg.setDestinationEntity(247U);
    msg.base_lat = 0.315625610118;
    msg.base_lon = 0.13652087441;
    msg.base_time = 0.744863181389;
    const char tmp_msg_0[] = {95, 62, 120, -63, -19, 39, 94, 24, 45, 58, 28, 22, -124, -9, -56, 83, -94, -49, 77, 62, -77, 7, -58, 116, 120, -2, -19, 47, 2, 62, 7, 78, 112, -90, -57, 90, 76, 79, 60, -16, -25, 111, -33, -70, 104, -97, 1, 72, 98, 119, 100, -6, 78, 95, -120, -72, 16, 17, 112, -47, -84, -88, 54, -75, -77, 109, -6, -70, -81, -12, -64, 56, 77, -47, -61, 8, 98, -113, 70, -5, 25, -11, -36, 76, 69, -46, 21, 31, -45, 72, -66, 33, -54, -59, -96, 56, -14, -1, -110, 16, 15, -127, -105, -74, -58, -123, 63, 76, -41, -68, -84, 45, -76, 121, -128, 50, -98, 18, -45, 72, 105, -79, -89, 19, -91, -37, 32, 25, 67, 29, 81, 0, -12, 75, -87, 82, -7, -31, 26, -97, 28, 4, -99, 83, 87, -36, -34, 88, -92, 8, -17, 56, 124, 72, 53, -33, 22, 49, -72, 8, -105, 31, -9, 85, -83, 90, 19, -77, -13, -41, -104, 71, 82, -62, 73, 42, -69, -83, 46, 117, 28, -94, -103, 13, -2, 62, 32, -70, -66, 20, -27, 27, 82, 94, -72, -14, -33, -122, 76, -39, -98, -4, -41, -1, 37, -43, 35, 24, -9, 47, 101, -38, -33, 57, -56, 15, 103, -15, 100, -54, 31, 50, 9, 31, 66, 55, -81, 70, -127, -19, 62, 66, -82, -72, 85, 69, -24};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.437007749538);
    msg.setSource(49116U);
    msg.setSourceEntity(232U);
    msg.setDestination(52896U);
    msg.setDestinationEntity(241U);
    msg.base_lat = 0.96394587919;
    msg.base_lon = 0.518759535652;
    msg.base_time = 0.657344148371;
    const char tmp_msg_0[] = {-21, 44, 45, 29, 42, 31, 80, 100, 115, 29, -8, -44, -77, -15, 126, -10, -83, -19, 67, 88, -50, -29, 107, -57, -96, -81, 105, -94, -96, 96, 13, -104, -32, 8, -31, 101, -39, -106, 107, -99, 87, -84, -52, 123, 41, 120, 106, -125, -32, 9, -114, -99, 61, 67, -21, -108, 58, -81, 1, 92, 16, -60, 80, -79, 26, -76, 23, 14, -73, 24, 25, -54, -38, -7, 3, 94, 4, 30, 73, -28, 79, -54, -5, 32, 19, 107, -117, 104, -95, 5, -86, 67, 65, -65, 36, -112, 65, 80, 79, -7, 47, 117, -114, -96, 1, -7, -95, 85, -120, 3, 120, -34, -106, -122, 46, -62, 89, -52, -94, -100, -2, 98, 7, 101, -4, -17, 102, 39, -50, 0, 74, -100, 61, 39, 39, 87, 15, -115, -59, 8, 73, -4, 42, 81, -107, -105, 38, -116, -88, 101, -40, 108, -26, 73, 26, 16, -34, 34, 95, -67, -45, 102, 36, -53, 0, 101, -75, 72, -30, 18, 47, -72, -97, 27, 124, -109, -100, 77, -98, 105, -95, 112, 23, -7, -121, -86, -55, -11, 100, -15, 123, -77, 114, 74, -116, 88, 117, 76, 0, 79, -30, 22, -24, 28, 105, -69, -33, -4, 80, -100, -114, -1, 84, -111, -95, 10, 90, 37, 2, -28, 3, -96, 2, -25, -37, 120, 10, 75, -41, 15};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.231972988786);
    msg.setSource(33190U);
    msg.setSourceEntity(166U);
    msg.setDestination(49873U);
    msg.setDestinationEntity(95U);
    msg.sys_id = 16083U;
    msg.priority = 3;
    msg.x = 27403;
    msg.y = -31306;
    msg.z = -27717;
    msg.t = -31149;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("TIQFKUOBNNZLGCBHMVHZMEXENRLFHZYYNMUTGQVQFSTRWBSAHBCQMGSEOYPXFOWDJRRBGPIJSPMKPVCVKXLEIXOSHSAECNVBNZGPOBMWZMQGXSPDMDYREVLWJFHYJYWTNFJMQJKKPHIARXCWWTJLIBPGOSZJDFUURUGITKXIERCKLAUYHJQUPNLH");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.52613268167);
    msg.setSource(64430U);
    msg.setSourceEntity(205U);
    msg.setDestination(7721U);
    msg.setDestinationEntity(75U);
    msg.sys_id = 2613U;
    msg.priority = 38;
    msg.x = -26176;
    msg.y = -28164;
    msg.z = 19066;
    msg.t = 19911;
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("YVICIOGLWLVLXRGHYCSUJXEQBKGUDBGNDYWBSZCJRBUNLZALAROETZTBIGCWSZTMWSRUPEXQSFYAPMAJIFRMSPSHKEVNPNCEGPVFWBYXCHAOMQDXMGOUEKICYFKJZGZUCNFAFOBWIDZANTEOHQGJMKVTOKH");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("WHSXEIECOVYJVQXTLMFRRPVPTYHRGXMVWUPNBZFZBGXADEJDIYPVDBZUNCNWNFWQPHTJNYCICPBVLIQIHMHLXRAWGFFOTVNMTRLXBCDOQYRVAXLQRJVAKJIHOMZMDEKXXUNUWKIUPXYJCBGSJYZMSTPLZAGLZRGSPENKSBFIBUHMOHUHFBBFQJTWZJMDLNCCSQWVOAHGEGYIULOKLSAGYTOYRPF");
    tmp_tmp_msg_0_0.sys_type = 111U;
    tmp_tmp_msg_0_0.owner = 55898U;
    tmp_tmp_msg_0_0.lat = 0.805048638908;
    tmp_tmp_msg_0_0.lon = 0.659116323141;
    tmp_tmp_msg_0_0.height = 0.839203408921;
    tmp_tmp_msg_0_0.services.assign("VKSNXDSOXUDVFHXTUZRCDOMSACPFZKWFEVESWNEEBPHZOCKRIGRNGCKYHZQYQUZYTGVVREJXCQCLWKXLCQMWLTJALOLQPZFGIMBTUTVHRQUJRHMZXRJCGVPPJYKIPNIFSDWUNWTROIBGMOABNNPWIKOAMYYDQYLANADVBHHLSPONDSXJYGZFIXTHCAAMIKIYDIRGQUFUUWKFSXTQTJHOSLGBQBYCMTARUHVFEMLXDZJKEZAEMSDJN");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.829718639713);
    msg.setSource(33643U);
    msg.setSourceEntity(202U);
    msg.setDestination(158U);
    msg.setDestinationEntity(223U);
    msg.sys_id = 50570U;
    msg.priority = 67;
    msg.x = -4660;
    msg.y = -21230;
    msg.z = -27183;
    msg.t = -749;
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = -1558;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.991992691987);
    msg.setSource(13970U);
    msg.setSourceEntity(177U);
    msg.setDestination(17968U);
    msg.setDestinationEntity(99U);
    msg.req_id = 50500U;
    msg.type = 102U;
    msg.max_size = 59938U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.382869457743;
    tmp_msg_0.base_lon = 0.6771597485;
    tmp_msg_0.base_time = 0.532908412532;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 41301U;
    tmp_tmp_msg_0_0.destination = 13842U;
    tmp_tmp_msg_0_0.timeout = 0.96351148234;
    IMC::PlanControlState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.state = 19U;
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("TCRJBDOHQKPVJXROGTLZUGWIABPILWIVPSALDUSMHOMZXUMMFOIPRIGZJQDICINOPSEWNTUODHBUXMZKUQQMJLSKVNLEDJHSAZKQYRFWGFMTBAPOCLDABYSOAFNXGTCCTAUEXTBHUIZAXJNDWGHKSWHDFYNEMMVCCR");
    tmp_tmp_tmp_msg_0_0_0.plan_eta = -803257125;
    tmp_tmp_tmp_msg_0_0_0.plan_progress = 0.587143128303;
    tmp_tmp_tmp_msg_0_0_0.man_id.assign("UKQNCGWLAHKVZBPCROVBGMIUIOAFMKWXRCPDHADBMYLKFMCJFSDVSZBPZEVAITPAIYEBNXQQCZQNULJRXKNHWCCLVOWFZBREJHKGADUKLNNRGCYXPENGHAFJSHXQWEQGWORYODAMOITSHXYVDIJXCLRETWNPIXJPVUPHBAMFKEWPSMOEOFMYRDTGCOEUKZBHEIOZUXYLSPASJVZLIIGTQWJD");
    tmp_tmp_tmp_msg_0_0_0.man_type = 35758U;
    tmp_tmp_tmp_msg_0_0_0.man_eta = 854803401;
    tmp_tmp_tmp_msg_0_0_0.last_outcome = 57U;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.257009125501);
    msg.setSource(15408U);
    msg.setSourceEntity(107U);
    msg.setDestination(52519U);
    msg.setDestinationEntity(213U);
    msg.req_id = 45808U;
    msg.type = 164U;
    msg.max_size = 59884U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.667295192323;
    tmp_msg_0.base_lon = 0.224190268166;
    tmp_msg_0.base_time = 0.790692842737;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 45212U;
    tmp_tmp_msg_0_0.priority = 13;
    tmp_tmp_msg_0_0.x = 32499;
    tmp_tmp_msg_0_0.y = -516;
    tmp_tmp_msg_0_0.z = 28699;
    tmp_tmp_msg_0_0.t = 31206;
    IMC::EntityInfo tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.id = 197U;
    tmp_tmp_tmp_msg_0_0_0.label.assign("SNRMICLTUBHYPKCMZHCCMEZHWAEADQTCXLSOAQROZWHNPXWBQPUXBKXDGFAPUQAHYGBZXQGLCARSC");
    tmp_tmp_tmp_msg_0_0_0.component.assign("QWOUJMQXCOFFPTNCIVXPKDQTYHKSFWETRIUNYBOMIDJCKVQDOAUDNHJCGDJMEISDWCZRKVZSEHZXEEBECXUOFZFYIBANDAIPBNLWFQFIYLJRNAKZUJPHCJMHRZRQAC");
    tmp_tmp_tmp_msg_0_0_0.act_time = 10812U;
    tmp_tmp_tmp_msg_0_0_0.deact_time = 40975U;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.448674084388);
    msg.setSource(30104U);
    msg.setSourceEntity(220U);
    msg.setDestination(22564U);
    msg.setDestinationEntity(181U);
    msg.req_id = 44916U;
    msg.type = 127U;
    msg.max_size = 63115U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0983452316948;
    tmp_msg_0.base_lon = 0.693034963071;
    tmp_msg_0.base_time = 0.694595987076;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.895914539114);
    msg.setSource(46934U);
    msg.setSourceEntity(129U);
    msg.setDestination(41042U);
    msg.setDestinationEntity(79U);
    msg.original_source = 7675U;
    msg.destination = 58664U;
    msg.timeout = 0.77527859364;
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.200255864011;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.908344963846);
    msg.setSource(23739U);
    msg.setSourceEntity(60U);
    msg.setDestination(15936U);
    msg.setDestinationEntity(231U);
    msg.original_source = 9542U;
    msg.destination = 41989U;
    msg.timeout = 0.590147117106;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 10543U;
    tmp_msg_0.lat = 0.999064938519;
    tmp_msg_0.lon = 0.916907039099;
    tmp_msg_0.z = 0.232685612602;
    tmp_msg_0.z_units = 43U;
    tmp_msg_0.speed = 0.521319945132;
    tmp_msg_0.speed_units = 14U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.56432751396;
    tmp_tmp_msg_0_0.y = 0.832293278408;
    tmp_tmp_msg_0_0.z = 0.46577737358;
    tmp_tmp_msg_0_0.t = 0.577115712392;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("JVSSFOWRATNCPBQIWFSTPBEQFHYOXECLXICRPKJLDGXBYLGAGOGDYIJMUWFZAICREDW");
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.424023676843);
    msg.setSource(5799U);
    msg.setSourceEntity(3U);
    msg.setDestination(53389U);
    msg.setDestinationEntity(65U);
    msg.original_source = 18811U;
    msg.destination = 13634U;
    msg.timeout = 0.195883736625;
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.96008712014;
    tmp_msg_0.x = 0.100279629144;
    tmp_msg_0.y = 0.360620250426;
    tmp_msg_0.z = 0.501564368415;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.599712212342);
    msg.setSource(28071U);
    msg.setSourceEntity(193U);
    msg.setDestination(17181U);
    msg.setDestinationEntity(74U);
    msg.type = 149U;
    msg.comm_interface = 6999U;
    msg.model = 15568U;
    msg.list.assign("DKAEGRZFMXSITNIEVXYAKJTTLIGHDHZEYBWVVLYIRUHDEKEPDSBQPTVAYCVSLNXPOSFMUWAYWKTJBJAMYVXTWPCWDNESZOVHFPESAQQBFTHKFQXAIFOGBLYQUZMNHGJTJJUZFNZMJGNSAGVRNWPAOEPMGAEWBYSEHMPMLJDRWSQUOBQPVHTKRGKLXZIRKXQNXIWCTXUGFFHPLDICRBSMUOOILHZOJQLZCZBGBNYUXLRDR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.903712418096);
    msg.setSource(24420U);
    msg.setSourceEntity(210U);
    msg.setDestination(23512U);
    msg.setDestinationEntity(130U);
    msg.type = 90U;
    msg.comm_interface = 53033U;
    msg.model = 5501U;
    msg.list.assign("RVCWGOLTOCLCMSRGKLUCJRJQUVKAZSAWNVIKNYOCYPJACSFDOMYHHEVJDZKDSJBRGBSYITNWUBOHKSXVHFEDVIYRAOAFLQYSXITPUMUOLFWQEMQUCRXLSILHXJBTRJRAQMRHNOHRFPEVBLFDHANUDUYIQZWTXQDMIMPVTTKPNNYEZYZCUDTXWALZNGXFEXOBZBNZMCQGDGIKWTZWXGZVBP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.796453695005);
    msg.setSource(55223U);
    msg.setSourceEntity(15U);
    msg.setDestination(64428U);
    msg.setDestinationEntity(140U);
    msg.type = 76U;
    msg.comm_interface = 29777U;
    msg.model = 33704U;
    msg.list.assign("MFQUKUXSWWZHLGFFCMRVRZBGXBVKLFYCDRTNJUMQMYCVDSPBUFWDVMEPUDIOOSJADKC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.253062066902);
    msg.setSource(37666U);
    msg.setSourceEntity(74U);
    msg.setDestination(9265U);
    msg.setDestinationEntity(193U);
    msg.type = 240U;
    msg.req_id = 2057028340U;
    msg.ttl = 19290U;
    msg.code = 188U;
    msg.destination.assign("WESXSOKQXJMQNMKQMORRHDGDPHJSXDQGKVSLANVVDGIKPDRRLASNHCLWZAZHTZYCOBWZTQETNSDDBPAMRPRCLAMETMIEMBHCWU");
    msg.source.assign("DSGDXRCNFMYGIVDBIXQOWKMPKXUHCSKQIEXAYTJLEYEFNQTYALJOBXGEDKILFHNCDCGNLOABXJIOCUXEYQAHSDXMPWHTBSUVQZIERJROPRUBWBTYHUURNVWMYJGNUARIPYKZPLCBQFFZUTPZJSBTDJZGALZAWOYSPVNWFWZSHCLGBJRRMM");
    msg.acknowledge = 56U;
    msg.status = 125U;
    const char tmp_msg_0[] = {42, -29, -17, 60, 63, -121, -47, -33, 1, -99, -113, 69, -4, 36, 76, 1, -13, -13, -81, -128, 39, -82, -8, 98, -13, -13, -75, -23, -114, -6, 48, 103, 122, -4, -106, -30, -23, 36, -28, -82, 53, 50, -124, 32, 120, 25, 87, 118, 81, -24, 47, -70, -10, -120, -2, 81, -5, 42, 96, 39, 55, 22, -104, 35, 126, -34, 96, -58, -34, 115, 23, -76, 49, 35, 78, 34, 72, -102, -10, 96, 100, -75, 99, 2, -128, -52, 65, -51, 72, -4};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.905138223205);
    msg.setSource(22174U);
    msg.setSourceEntity(230U);
    msg.setDestination(28771U);
    msg.setDestinationEntity(78U);
    msg.type = 204U;
    msg.req_id = 756674265U;
    msg.ttl = 31666U;
    msg.code = 102U;
    msg.destination.assign("GFTPQIYSAAVNYWARZJTHEJAASRFKWMZTNHFGRQFUBTIGLZJXKDMSCGXBXXLIZGXQRREATZVIENXCIVYTWCBLDBBULVTYHWVEPTWOQBDSNKIFLGWWQQOKUOLQNDFDKCIVAOUJHVKCPMHDJJAMMYJFRPUCGKZMELBPNESHHSYHRLPKDXINSKJMUONEFVYIJKUMPGZACCERMPUEJDSXTXBZQYPWMVZAYYHWWXOOLBF");
    msg.source.assign("USSPKYHQFKDMJPPODMLERASXEIL");
    msg.acknowledge = 169U;
    msg.status = 51U;
    const char tmp_msg_0[] = {-121, -53, 39, 19, -32, 58, -42, 92, 118, -84, 18, 68, 39, 9, -2, -47, 36, -82, -75, -55, -95, 87, -113, 109, 51, 29, -56, -49, 23, 31, -52, -4, 112, -65, -25, 102, 120, -67, 109, 20, 12, 44, -40, 34, 17, 103, 90, -47, -85, 72, 50, 86, -83, 19, -22, 67, 58, 39, -111, 72, -25, -56, -7, -119, -54, 64, 64, 95, -17};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.0649934279752);
    msg.setSource(34306U);
    msg.setSourceEntity(16U);
    msg.setDestination(11157U);
    msg.setDestinationEntity(163U);
    msg.type = 148U;
    msg.req_id = 2649317777U;
    msg.ttl = 26968U;
    msg.code = 107U;
    msg.destination.assign("ABMNZWJLARPOSTOPYXEJCDZHALCRPIDJWXJUDQQMVMKRVCRIBNXHZTZWBJPTSPGGSKWMZXTHKYNVHIRMBBEYKDEEEJXYPRPDHMEOHQDNGOARFFHIENMWBHBGXTTBAQOSNPYMGUZFVNSTWYUSITDTVDAVBZAWUIGXEIFPFJYKWMGIDBUIGQOGZNKLVIUNZCLCNJLKQYWCVE");
    msg.source.assign("GPOUJBLHZPARFXXLBHTVDBRDETCWYJPOLKZNDNODHSRXXXIEJJFXYCZKCYAABUKBZGOHPSJWSUNSGKEVYAPMBETMQWSTLXNHOYPVIQUFMCIJPZOUQGBJNYHKMAMFZDOMQFDNSGQVEQSRDFWIQSOAJORTRCUWUWFEDLKZGAMRVOHGIKQCPKSYUTTCEDJLBIH");
    msg.acknowledge = 160U;
    msg.status = 253U;
    const char tmp_msg_0[] = {56, -11, -30, 22, -99, -102, -22, -91, -1, -24, 95, 126, -89, 82, -127, -84, -98, 95, -40, 90, -25, -28, 106, 14, 7, 7, 116, -49, 113, 51, 28, -75, -101, -58, -87, 72};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.561777952621);
    msg.setSource(44249U);
    msg.setSourceEntity(243U);
    msg.setDestination(15219U);
    msg.setDestinationEntity(192U);
    msg.id = 219U;
    msg.range = 0.12644491056;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.777438923763);
    msg.setSource(57372U);
    msg.setSourceEntity(63U);
    msg.setDestination(20911U);
    msg.setDestinationEntity(122U);
    msg.id = 107U;
    msg.range = 0.54950474611;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.0405588046995);
    msg.setSource(10879U);
    msg.setSourceEntity(204U);
    msg.setDestination(22604U);
    msg.setDestinationEntity(169U);
    msg.id = 178U;
    msg.range = 0.0110062088592;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.842005136186);
    msg.setSource(13322U);
    msg.setSourceEntity(130U);
    msg.setDestination(54173U);
    msg.setDestinationEntity(1U);
    msg.beacon.assign("TGZUXEFFLPXXXVHXBAWQZPWEINSJQOILDBPOTCRULVAZTYFVGTNQUDITPWGGPVAKDMSLAUWMCDOHNRHBPWJOVIBTFHVZCXANYRKJCILRMTKQMGFUEHSBURBMXEOHNOQOZNKECRDSEBDTGEJKNFAHJHQAWWZKJM");
    msg.lat = 0.361985459468;
    msg.lon = 0.612922708277;
    msg.depth = 0.875253331594;
    msg.query_channel = 90U;
    msg.reply_channel = 223U;
    msg.transponder_delay = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.323320256485);
    msg.setSource(2528U);
    msg.setSourceEntity(10U);
    msg.setDestination(41581U);
    msg.setDestinationEntity(52U);
    msg.beacon.assign("JAQXOIWSICJSBJBMGCTGTYUCPPESBNIELOPTGEPCFWMXGYPVIGOQDXUNUOU");
    msg.lat = 0.952223803483;
    msg.lon = 0.431686755227;
    msg.depth = 0.753630276577;
    msg.query_channel = 164U;
    msg.reply_channel = 167U;
    msg.transponder_delay = 187U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.74861774364);
    msg.setSource(41831U);
    msg.setSourceEntity(235U);
    msg.setDestination(54066U);
    msg.setDestinationEntity(29U);
    msg.beacon.assign("EIJBVZQGRYQBOKDNFZNWMBAHSHPSBYEUXJTOVAUNCRTLWGFHLDQXTMTFFXZHSVKELSUFCKWFBLAHNTCGAOCTZCRXCEWDPPYIMHHWGVIDICAXUNPKPHPMIQXYJZOGWBRYJSJYTWQFTJZVKYU");
    msg.lat = 0.356525249774;
    msg.lon = 0.526211017523;
    msg.depth = 0.122328424406;
    msg.query_channel = 163U;
    msg.reply_channel = 173U;
    msg.transponder_delay = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.53084184064);
    msg.setSource(31197U);
    msg.setSourceEntity(79U);
    msg.setDestination(40093U);
    msg.setDestinationEntity(5U);
    msg.op = 69U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.0524225371284);
    msg.setSource(7829U);
    msg.setSourceEntity(6U);
    msg.setDestination(4949U);
    msg.setDestinationEntity(186U);
    msg.op = 114U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FVHFKAUTPTIFRGOVBGONEVUJCCQDNCEHXELCYDZJZDLCKOTMBWYOMXXKZMHPIZXJSAAEHGYCMJEDGNSFWOMYSANVGKBRZKRORFIHBXIXGTBNRPXKPCTFMSUBVHMTBBHPCNDWILGQUGAPQXHOITQJ");
    tmp_msg_0.lat = 0.252266371775;
    tmp_msg_0.lon = 0.700493779265;
    tmp_msg_0.depth = 0.441077755716;
    tmp_msg_0.query_channel = 84U;
    tmp_msg_0.reply_channel = 236U;
    tmp_msg_0.transponder_delay = 200U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.808971663753);
    msg.setSource(61557U);
    msg.setSourceEntity(196U);
    msg.setDestination(51422U);
    msg.setDestinationEntity(156U);
    msg.op = 100U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.946079804496);
    msg.setSource(32656U);
    msg.setSourceEntity(231U);
    msg.setDestination(64636U);
    msg.setDestinationEntity(144U);
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 15593U;
    tmp_msg_0.sys.assign("JBYYRDOOKUQMTQXWJPKJWUNPRNLPQZIRSYJNXTRBSNOAVCIZCDONSKKQFLNTXGVETKHBRGVJSQAXFDHGLMQLECASEKCWIR");
    tmp_msg_0.value = 0.456017684226;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.340301725549);
    msg.setSource(43029U);
    msg.setSourceEntity(146U);
    msg.setDestination(30322U);
    msg.setDestinationEntity(198U);
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 47329U;
    tmp_msg_0.type = 105U;
    tmp_msg_0.max_size = 62572U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.403398942429;
    tmp_tmp_msg_0_0.base_lon = 0.00319487005726;
    tmp_tmp_msg_0_0.base_time = 0.944041788164;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.935421134133);
    msg.setSource(64053U);
    msg.setSourceEntity(252U);
    msg.setDestination(26427U);
    msg.setDestinationEntity(74U);
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("BUFRYWFRDEO");
    const char tmp_tmp_msg_0_0[] = {-14, -123, 61, -104, -60, -41, -81, -82, -95, 116, -113, -37, 8, 1, -91, -41, 67, 105, 119, -104, -70, 88, 36, -101, -97, 23, -50, -14, -94, 31, -125, -13, 84, -80, 55, 84, 48, -70, 27, -116, -2, 94, -98, -95, -5, 114, -52, -42, -14, 27, 117, 19, 116, 82, 104, 33, -35, 68, -6, -27, -26, -48, -33, -113, -104, 94, -83, 8, 118, -16, -80, -113, 26, 17, 108, 9, -108, 88, 17, 58, 30, 126, -31, -15, 82, -108, -108, -49, 103, -69, 99, 91, -11, 115, 105, -123, -78, -127, 43, -15, 60, -114, -26, 101, 12, 16, -45, -111, 11, -99, -24, -21, 46, -27, -13, 2, 46, -83, -24, 123, 71, -123, -102, -15, 29, 3, -39, 62, 56, -7, 35, -46, -15, -39, -7, 122, 120, -112, -43, -58, -72, -84, -44, 114, 100, -45, 89, -32, -7, -116, 67, -13, -95, 18, -17, 84, -66, 95, -114, -82, 44, -57, 24, -14};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.684232031728);
    msg.setSource(36537U);
    msg.setSourceEntity(95U);
    msg.setDestination(16586U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.0735352026579;
    msg.lon = 0.948465511192;
    msg.depth = 0.147193202282;
    msg.sentence.assign("VEPREVGPQRFECFZFIIVOIHRXVUYXCKBMVLELAVJCQZJXBXDXWKBWRDCGIAJNLDPQOGYSNISAIGZBHRZNTZHZGZPPAYSLKBNXQWFDNPMLBKYCDVRJEYAWAJUTFGYRQLMOKOHFLXZROGWSCTBYCAPIVYUCFSGYMMKXUFOTQXGMKLHNNBTQMWVZIBWGUMQOAHU");
    msg.txtime = 0.337956250725;
    msg.modem_type.assign("VUKTZMCOJPGUIEDJYXGRZIUVVVNQMPJOQHQMSWFTZTCISNUOUIOLPDVLTDBSKDSMSOCLZK");
    msg.sys_src.assign("RYPRLRVDKNCOPUOEEPBJPQZDDTIMSRQKQZQMRRHHZPUGKHKZPCGOQBMZIUADDYAOVQDGVJDKFISMNASKSGLHXUHJNSWCTWXVXDKXIRBLGEUYHSODOQIPJTWFLVACNXJEWATNSMENSYCMGZELUHPRIGFDFAIXGLNCWOBF");
    msg.seq = 11439U;
    msg.sys_dst.assign("NVEPGPJXKYIJQISTQECVXHRMRHZCJZKNUPLVBRWBTDCOYKSFZVWGAOZNCBCEDANTMLUHOZRKPCPGUJWJXESVZYSZFENESLWWSYIKGYLEMITRDEXMUQXHFCMZPJSAAUULLBYFKYFAABVSPTHIOXACTNNQDARUGIKQXM");
    msg.flags = 198U;
    const char tmp_msg_0[] = {-47, -82, -55, 66, -45, -92, 106, 67, 33, -110, 111, -89, -26, 9, -10, -10, -111, -78, 56, 115, -74, -35, -114, -90, 106, 68, 14, -96, -51, -103, -44, -97, -69, 126, -2, 113, -45, -98, 68, 120, -10, -89, 95, 87, 43, -26, -116, -18, -66, -51, -48, 7, 61, 69, -49, -2, -123, -113, 47, -65, -81, -97, 121, 34, -71, 65, -75, 62, -105, 48, 116, -36, 46, 120, 39, 67, -107, 31, 47, -18, -47, 54, -82, 14, 107, -50, 116, 43, -57, -51, -82, -57, 77, -103, 59, 9, 126, 45, 18, 97, 91, -112, -28, -21, -123, -81, -63, -99, 101, 55, -115, 10, 17, 24, -1, -72, -68, -104, 126, -48, 106, -100, -42, -59, -54, 15, 54, -78, 116, 110, -95, -1, -86, -33, 90, 125, -12, -110, -81, 14, -41, -80, -102, -90, 74, -44, -38, -25, -117, 39, -119, 16, -68, -87, -79, 56, 49, -107, 32, -114, 85, -11, -27, -42, -47, 62, -107, 22, 114, -52};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.923712703842);
    msg.setSource(15562U);
    msg.setSourceEntity(251U);
    msg.setDestination(32250U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.222102077344;
    msg.lon = 0.126828771651;
    msg.depth = 0.624584475398;
    msg.sentence.assign("NKLOEPONFUFRIAUCMWPPVKZWTIUPPFMIWMCHNSLHSGZBOLSHQKMBMRQBQIKJJWKSMWRLBGCDFMZZEASVVRJFQ");
    msg.txtime = 0.580146960339;
    msg.modem_type.assign("BSSZUGNVGNLZIPLDRUIARWWJYMAQFKYORSSAUJEKPFBXURVWBWBAXTITHXQGXVOPQJMYYFELIBQGZLUAJOQXYNPBVMOSPPKELTIIAVWCWDKCNBKUSZDPIVEFRRMTXTYXBRSSCYLAFD");
    msg.sys_src.assign("PGCFYNQAAMZRCITQSEGBXLW");
    msg.seq = 62873U;
    msg.sys_dst.assign("ILSCXHVYBNFQDYYSSFSEXOXUFGCXZZMUOXEPWDYRTCNWAZTLCNPKTOLOBKSBGTDEYJMWOJEBNPAXXWEVDPOBUIYTIC");
    msg.flags = 101U;
    const char tmp_msg_0[] = {125, 74, 122, -16, -60, 78, -62, 100, 33, -113, 81, -38, 23, 109, 63, -76, 80, 73, -99, 66, -113, 7, 104, -21, -3, 83, -121, 81, -54, 70, -16, 10, -42, -108, 26, 97, 103, 69, 93, -18, -16, -120, 107, 32, 120, -52, 115, -91, -47, 40, 65, -42, -29, 84, -74, -2, -62, 1, 54, -97, 31, 31, -115, -81, -47, 57, -65, 99, 78, -30, 32, -100, 28, -82, 56, -112, -25, 22, -19, -103, -103, -23, 91, 115, -74, -39, 9, 4, -55, -73, -70, 53, -122, 5, 10, 51, 112, -66, -113, 4, 89, -123, 42, -14, 56, -2, -67, -41, 15, 84, 51, 71, 124, -76, 33, 32, -76, 70, -61, 37, -101, -84, -68, 35, -8, -115, 51, -88, -16, -106, 9, 6, -22, -76, 21, -80, 101, 29, -35, -75, -100, 74, 115, 83, -109, -90, -110, -27, -48, -57};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.471992435796);
    msg.setSource(8207U);
    msg.setSourceEntity(156U);
    msg.setDestination(15741U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.0688456701333;
    msg.lon = 0.911390987091;
    msg.depth = 0.524098931145;
    msg.sentence.assign("ZVYSLIDLIWXYPVZUFCVCEVDLGCYWPWIZFZJRQPBXJTTGSKWEIXIPRGPGNPUWUQMMONHANQAFKMCQUJRXOFQFQXTBKHBIDMULNTJFAGSGZVDU");
    msg.txtime = 0.60824500548;
    msg.modem_type.assign("GZALPFASFMOKQLJQEZHUQBIFBTRXIINHKJNUJFKYPWCFWGYHJJLZPLIMRERXTXPRWLMASQTLNYBFZMINJXFRSDYSQBLEGTDUGETQIOUYWMDGPXAJHREREOGLVIBOTOKEVAWINDNCSNMTKQODCYXRNJMJVWZHNYKVHSPDVZBSTHOCM");
    msg.sys_src.assign("YJJWCCCOFXQWDXDDNFHNMHJEAFQAOBBJTEXPOQHERIUPUXYKAMTRGEOVBKATULJSMERLGTKXTPGPOFMMZEYZCRNTSSFRSVYBKUUUWWPLYILHGSXYTZQCLZQRSUEYN");
    msg.seq = 28357U;
    msg.sys_dst.assign("TUPLDFDLGYXLPKCKQRJVSNGCXFBHQCDSPQJRSMOGPVKZJLHKZUWLUHUXNQNTXLIAJUFLJDXJNMXOTWUSWIRFRQYYCTQFCHKUORIRORFNHAAEXBGSWIAMWALPVMQYIEYDRVVSSHDARZOBGBZZ");
    msg.flags = 84U;
    const char tmp_msg_0[] = {16, -19, -40, 72, -14, 78, 3, 55, -121, -29, -49, -79, 39, 15, -3, -19, -53, 98, 94, -120, -83, 85, 66, 90, -37, 3, 17, -90, 101, -29, 10, -108, -62, 83, 31, -37, -14, -81, 113, -64, 63, 14, -124, -52, -95, -91, 101, -55, -94, -41, 101, 43, 57, 105, -6, -55, -126, 108, 70, 17, 107, 81, -8, -87, 85, -101, 34, 37, 80, -88, -21, 66, -94, -82, 90, -54, 122, -114, -2, -22, -99, 35, 78, -1, -40, -82, -28, 21, 5, -109, 51, -60, -39, 53, -80, 77, 122, 23, 77, 40, 103, -101};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.15256105742);
    msg.setSource(20995U);
    msg.setSourceEntity(247U);
    msg.setDestination(55647U);
    msg.setDestinationEntity(105U);
    msg.op = 55U;
    msg.system.assign("DXSCISTGZCKUIFFKSZUOMYBYFAPNAVUVPNZTNQUDXMFGKCGFZZZVHRBPWAKWV");
    msg.range = 0.652510074164;
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.51558597503;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.0144948167581);
    msg.setSource(26442U);
    msg.setSourceEntity(68U);
    msg.setDestination(27130U);
    msg.setDestinationEntity(14U);
    msg.op = 136U;
    msg.system.assign("XYHFESNHQVQFAFRSNPAUUWXVXVFDPCNKHUEVOSFKXMTBGISPHNKYGRHQPFBVJMVIYWCLOEPMOIZTYKDEMRJVZQICJXHCDYTELLQXLIDQWZGXUIDZKJYPSJBABZOPB");
    msg.range = 0.995202923803;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 17248U;
    tmp_msg_0.control_ent = 223U;
    tmp_msg_0.timeout = 0.51146833823;
    tmp_msg_0.loiter_radius = 0.793975556435;
    tmp_msg_0.altitude_interval = 0.57786546324;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.282063127945);
    msg.setSource(32783U);
    msg.setSourceEntity(175U);
    msg.setDestination(19280U);
    msg.setDestinationEntity(127U);
    msg.op = 223U;
    msg.system.assign("RNLLXETDRLYUFQCVPJKTAELHQTWEYZBJIRJSUEMUPDGBLFFOSMIJACTEEZPSFWPNSWBOXCAKQYBUVKLOAGHVJHPDZEXWKDFBUNTQIYNCQGYUXZIIODTFEPUKLIDVHKCYTWNCDASFVNBGCRSTVOJJUGLVAGCVUZWMSGBOARGYQQNKVAHHDZPWPOYRFNYSFHCBJIXOQMEGWMARYMIXTRHPMLMQMUHIZVQANEWBMSNXKDXGLPISJ");
    msg.range = 0.276096525044;
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("RJZLNJJBMYQTFGGNKPQPNOAMIAMZCYRGLVPGBIYUBORXSRNCQUGKPJNAHEZJNFAAIHDHPSCVCWVSQOYWSKFIKPWUPILHFFGTNYXEDHZRFGAJTYOVBRGVAHDXITYPVJCRBOOTDFELXNFOIOVCPPECYACWRQYLXBXMWFLKVITKBBHYRNUVEXWZJXQJMHXWZDDKOUMBWCLIDQVZQS");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.904266824112);
    msg.setSource(57458U);
    msg.setSourceEntity(95U);
    msg.setDestination(48592U);
    msg.setDestinationEntity(90U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.0600489241736);
    msg.setSource(61236U);
    msg.setSourceEntity(96U);
    msg.setDestination(37388U);
    msg.setDestinationEntity(35U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.546025153836);
    msg.setSource(29971U);
    msg.setSourceEntity(220U);
    msg.setDestination(24531U);
    msg.setDestinationEntity(252U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.822115483973);
    msg.setSource(50501U);
    msg.setSourceEntity(205U);
    msg.setDestination(35792U);
    msg.setDestinationEntity(78U);
    msg.list.assign("XSOQZOGZOSOJAHVQIHTFHSIRHYXRJMBAYWDYRFVLVKAWLPUVMUBKSKVICTROTNWDOLDDMSTSVLCKUKEUECJEEPBUMQMAFHCYJIRFQIKSOETTLJWUEWXWBJMDIAFSEDNIAZJPFGRGJYKXNQEUBLDDQXZZYPPGXCCHSZXWCXGIFKDPWUMJCFOHUAVM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.0478761824537);
    msg.setSource(18820U);
    msg.setSourceEntity(227U);
    msg.setDestination(50130U);
    msg.setDestinationEntity(2U);
    msg.list.assign("IKDFZENASZABIJGHSFEJLAPHOLIMAQEADGLCCXBBXKQNFSYVOZYOMGWMXFCKVTUWMXZOGNEPQRTQYKMYXXLJLQEESRJIMMUFCIZCODWVPXRKDUIRYBNGRTLNQCPZUAOBBHTVRGETRHGHZKDJCXSFJHMNVYKGXTEYTNUIPJSLZHRGQJCJMFPFDVUUCTWWBZLPFLBVKQPPEWZGJIIKWOSLCRYAAWDHDNKDXANFSIOMUTOHEUWBTYQWQVYRUAPHDS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.631184663708);
    msg.setSource(9622U);
    msg.setSourceEntity(189U);
    msg.setDestination(3912U);
    msg.setDestinationEntity(165U);
    msg.list.assign("DJHYEEUYBLQHCXWQPSQKLGBJHZTZRSWUHANEYLZRTTCDUTDNIIDKONHGMOLGOVPEISGEJHULNWDGHQEYGRSLLCMWXYJMVXYAVCQNFBWIWHMCNWFPRYRWEQWMKAFNFGCZSDZUAFXLDA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.626497727003);
    msg.setSource(8345U);
    msg.setSourceEntity(140U);
    msg.setDestination(8185U);
    msg.setDestinationEntity(235U);
    msg.peer.assign("PLNYJSWZIWURFVPQTRKYHGNCSJWWBOGGSPBEAKIRKGNKPSDIFXIOYUVUYEDWHWDCKQHFOJFLIRTUIPMADDMENBEQSCEDLIYGYMALHCEQLMBAZEJODMDUJTGXKXTZIFGERZXXBSSXGUHSFWVXWAZSBTFLMGPDKKCZOUYRABBHPBRVJXZLJEKMDC");
    msg.rssi = 0.156602884527;
    msg.integrity = 34628U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.510994026126);
    msg.setSource(46074U);
    msg.setSourceEntity(82U);
    msg.setDestination(5878U);
    msg.setDestinationEntity(182U);
    msg.peer.assign("XXVBTCESUOMUSOKPMEIMKWWIYEGLGXVJQFLPNEPGTXTBPXBHGQYVCVQWEMYNQGNGDPIFSOBQZDJHJLJARAONYREUFXESNHYFVGCNUT");
    msg.rssi = 0.634699148924;
    msg.integrity = 14343U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.153615018629);
    msg.setSource(65108U);
    msg.setSourceEntity(249U);
    msg.setDestination(59445U);
    msg.setDestinationEntity(172U);
    msg.peer.assign("OSRYLFGNDQDHJZCFURQJQJRPA");
    msg.rssi = 0.19943828509;
    msg.integrity = 15977U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.260912922363);
    msg.setSource(21359U);
    msg.setSourceEntity(250U);
    msg.setDestination(12030U);
    msg.setDestinationEntity(46U);
    msg.req_id = 46161U;
    msg.destination.assign("XJMSWJFHOCFOTEIAJIPDLFKKNIQMKIZJGS");
    msg.timeout = 0.812135817443;
    msg.range = 0.458634920777;
    msg.type = 30U;
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("VWUQWZKRESZCGCIDULSPWYGKOHNVSYPPDFBVBHFHUTCDXCWMLJPEETYCMNNTZAEEIXAIANGHDDAF");
    tmp_msg_0.rssi = 0.803935676849;
    tmp_msg_0.integrity = 60804U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.922703233994);
    msg.setSource(46101U);
    msg.setSourceEntity(220U);
    msg.setDestination(60059U);
    msg.setDestinationEntity(177U);
    msg.req_id = 6649U;
    msg.destination.assign("HXANTEUVRVFLXHXFMYUKLZCLNTAEWUKTFWLWRCVBCLYXHGYOMQFZEFMOGPTUVOINTSZNOXADAZVTDMZFKNVHEGALUCHGQVWWZJFVKDSNKDQPYYYULOSQVABHDIJRQXB");
    msg.timeout = 0.887639226937;
    msg.range = 0.950885109999;
    msg.type = 76U;
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("XMRQAKTKERNFEWAYYQBJTKTIVULUDOYUIEPFIIBYZGSJGLZSSLGQLOCKATBR");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.945300533181);
    msg.setSource(46553U);
    msg.setSourceEntity(124U);
    msg.setDestination(46391U);
    msg.setDestinationEntity(31U);
    msg.req_id = 21108U;
    msg.destination.assign("NJSONCZUAUDRZCWGZHOMQWOACBYXBHXKDWWSMWUMYGMGCPLJNANITQJUTTOUIZYHNFAMLRKLSRFELHBDRFZTPXYJWBXCDICCLXOLBYYKVMSGLBVWKYPFBLIXRHCEQDHOIAEYNXZIWJVTJHSCYMIKZFHRKSAPQGMRGTKEPTEEOAPYJNDMFGBZTNWINLVIOQGSBDLAUJBZGWAXJFPNJMORUGUVDDQSAEVFKCHSTQIDVEQFH");
    msg.timeout = 0.89622539859;
    msg.range = 0.479948234164;
    msg.type = 165U;
    IMC::Phycocyanin tmp_msg_0;
    tmp_msg_0.value = 0.339783358811;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.352463596017);
    msg.setSource(34203U);
    msg.setSourceEntity(106U);
    msg.setDestination(3626U);
    msg.setDestinationEntity(108U);
    msg.req_id = 37544U;
    msg.type = 50U;
    msg.status = 242U;
    msg.info.assign("CASSRWEAQCLGFQIGJVJMJOWKSGHRUNRIJDYOMVHDRMWVDYTMVPFCTFBEFSXBZCXRTGZLIRVMCZFHHNXALKQWSPLDBOFXLWRNBGHVTNLVWAULLPPAOKKADDTEZJPSHEXQOHKFAXHPZEYECRHTI");
    msg.range = 0.183454197804;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.520809016759);
    msg.setSource(43194U);
    msg.setSourceEntity(201U);
    msg.setDestination(17865U);
    msg.setDestinationEntity(102U);
    msg.req_id = 30763U;
    msg.type = 230U;
    msg.status = 39U;
    msg.info.assign("MIOUACRKYCJQWVKQFAVKYAUCKCXWDOHVPWSMKGCBBXPPIWFSCFTAWAWMUHXHXGLSGYMMHJQXFRJEVSBNDDPNTYABFDNNJZAXUBHOFXOPJHNYDEPYGIXQTFIJYUIHEVMLMBPTJUJKESTYMTCLOGNIHTQSRORGLMZRLAOMBHPSNPSUWZGVRLZRLYNYIQBGREZVNFILTVGHCIDVZEWSQCDQOUKLFTNWKXSFQJEKZPJAWZEDRLERXBDUBDIQZUEG");
    msg.range = 0.939488818252;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.863534392742);
    msg.setSource(36077U);
    msg.setSourceEntity(79U);
    msg.setDestination(65187U);
    msg.setDestinationEntity(79U);
    msg.req_id = 40028U;
    msg.type = 175U;
    msg.status = 27U;
    msg.info.assign("JKTPLLIRESEWRFOQGUFAXUXCSNIJAUTZGUKIUVIPPXDVJVDOHOGHPCCWZRZFWTSCQRYPSVNYZVOOULINOSWHWOZAIXYMMTXQMQSJLRTYRDUBNXJHMYJAQDBYNLZENANETDGFCMGRSZQWUEINFFDXBVCDAPMMLDEHAOTQSSPPGBNKPWEBKBRDGWHCKLJXYWEQHIUKOFHJZWCTDIUZEQVIALFZYMJTBEXQXHGNKVRBFMPJKYYGBATR");
    msg.range = 0.480572183633;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.462785462267);
    msg.setSource(45380U);
    msg.setSourceEntity(137U);
    msg.setDestination(29172U);
    msg.setDestinationEntity(85U);
    msg.value = -11589;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.241973986824);
    msg.setSource(806U);
    msg.setSourceEntity(88U);
    msg.setDestination(23033U);
    msg.setDestinationEntity(167U);
    msg.value = 29919;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.743719537738);
    msg.setSource(62073U);
    msg.setSourceEntity(162U);
    msg.setDestination(16853U);
    msg.setDestinationEntity(191U);
    msg.value = 24609;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.209300960788);
    msg.setSource(36409U);
    msg.setSourceEntity(13U);
    msg.setDestination(23023U);
    msg.setDestinationEntity(161U);
    msg.value = 0.846483985583;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.127854820897);
    msg.setSource(58984U);
    msg.setSourceEntity(222U);
    msg.setDestination(42685U);
    msg.setDestinationEntity(195U);
    msg.value = 0.839811458558;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.229546496846);
    msg.setSource(15679U);
    msg.setSourceEntity(138U);
    msg.setDestination(61959U);
    msg.setDestinationEntity(216U);
    msg.value = 0.569525215611;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.462983837135);
    msg.setSource(3963U);
    msg.setSourceEntity(171U);
    msg.setDestination(47791U);
    msg.setDestinationEntity(122U);
    msg.value = 0.555744457012;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.315536649713);
    msg.setSource(43329U);
    msg.setSourceEntity(141U);
    msg.setDestination(65519U);
    msg.setDestinationEntity(182U);
    msg.value = 0.112428501147;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.515496705133);
    msg.setSource(1177U);
    msg.setSourceEntity(216U);
    msg.setDestination(30492U);
    msg.setDestinationEntity(157U);
    msg.value = 0.840013780212;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.583409010059);
    msg.setSource(16355U);
    msg.setSourceEntity(113U);
    msg.setDestination(31627U);
    msg.setDestinationEntity(237U);
    msg.validity = 29103U;
    msg.type = 229U;
    msg.utc_year = 41363U;
    msg.utc_month = 53U;
    msg.utc_day = 113U;
    msg.utc_time = 0.734890478577;
    msg.lat = 0.068924323438;
    msg.lon = 0.263607452545;
    msg.height = 0.724681790548;
    msg.satellites = 71U;
    msg.cog = 0.16002673087;
    msg.sog = 0.571361146684;
    msg.hdop = 0.507258272165;
    msg.vdop = 0.776851694706;
    msg.hacc = 0.0554581233276;
    msg.vacc = 0.0392358232896;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.169947534102);
    msg.setSource(28696U);
    msg.setSourceEntity(127U);
    msg.setDestination(40652U);
    msg.setDestinationEntity(15U);
    msg.validity = 65322U;
    msg.type = 101U;
    msg.utc_year = 24224U;
    msg.utc_month = 100U;
    msg.utc_day = 176U;
    msg.utc_time = 0.418535294027;
    msg.lat = 0.79037122338;
    msg.lon = 0.313616011647;
    msg.height = 0.0731846928547;
    msg.satellites = 202U;
    msg.cog = 0.540092755483;
    msg.sog = 0.44696241278;
    msg.hdop = 0.757333695463;
    msg.vdop = 0.067016479842;
    msg.hacc = 0.12408882439;
    msg.vacc = 0.0930017684926;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.467795600488);
    msg.setSource(27535U);
    msg.setSourceEntity(87U);
    msg.setDestination(26971U);
    msg.setDestinationEntity(145U);
    msg.validity = 58512U;
    msg.type = 191U;
    msg.utc_year = 19835U;
    msg.utc_month = 34U;
    msg.utc_day = 140U;
    msg.utc_time = 0.179729036506;
    msg.lat = 0.647706751091;
    msg.lon = 0.101970701907;
    msg.height = 0.360980352372;
    msg.satellites = 147U;
    msg.cog = 0.51718751722;
    msg.sog = 0.912907291822;
    msg.hdop = 0.645731675433;
    msg.vdop = 0.818482130792;
    msg.hacc = 0.359433597875;
    msg.vacc = 0.938184678551;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.0157143743656);
    msg.setSource(39168U);
    msg.setSourceEntity(148U);
    msg.setDestination(9810U);
    msg.setDestinationEntity(117U);
    msg.time = 0.823194410987;
    msg.phi = 0.389660110156;
    msg.theta = 0.860193439227;
    msg.psi = 0.843659500912;
    msg.psi_magnetic = 0.373783939803;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.131715988587);
    msg.setSource(30313U);
    msg.setSourceEntity(238U);
    msg.setDestination(2249U);
    msg.setDestinationEntity(12U);
    msg.time = 0.212826563141;
    msg.phi = 0.0375723648951;
    msg.theta = 0.75471750067;
    msg.psi = 0.446043088166;
    msg.psi_magnetic = 0.094100769995;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.686313913334);
    msg.setSource(2212U);
    msg.setSourceEntity(202U);
    msg.setDestination(24279U);
    msg.setDestinationEntity(186U);
    msg.time = 0.479565165828;
    msg.phi = 0.733244074314;
    msg.theta = 0.430178788332;
    msg.psi = 0.528933926367;
    msg.psi_magnetic = 0.584428059023;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.61251269082);
    msg.setSource(26808U);
    msg.setSourceEntity(63U);
    msg.setDestination(12576U);
    msg.setDestinationEntity(182U);
    msg.time = 0.428298092361;
    msg.x = 0.823892748411;
    msg.y = 0.902837567142;
    msg.z = 0.141219490271;
    msg.timestep = 0.974804078275;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.801804861856);
    msg.setSource(49388U);
    msg.setSourceEntity(17U);
    msg.setDestination(36320U);
    msg.setDestinationEntity(40U);
    msg.time = 0.787855567809;
    msg.x = 0.982352571942;
    msg.y = 0.342043328539;
    msg.z = 0.666237879351;
    msg.timestep = 0.96048855194;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.896259773474);
    msg.setSource(53447U);
    msg.setSourceEntity(30U);
    msg.setDestination(62549U);
    msg.setDestinationEntity(17U);
    msg.time = 0.344592695832;
    msg.x = 0.319881880948;
    msg.y = 0.223165678342;
    msg.z = 0.020105806564;
    msg.timestep = 0.975418829491;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.00083687267571);
    msg.setSource(8674U);
    msg.setSourceEntity(6U);
    msg.setDestination(46857U);
    msg.setDestinationEntity(33U);
    msg.time = 0.826798549929;
    msg.x = 0.432909639515;
    msg.y = 0.346088419549;
    msg.z = 0.203236865551;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.33458000263);
    msg.setSource(2600U);
    msg.setSourceEntity(93U);
    msg.setDestination(3619U);
    msg.setDestinationEntity(54U);
    msg.time = 0.521105961644;
    msg.x = 0.467581418226;
    msg.y = 0.0556414288593;
    msg.z = 0.185198989585;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.648142560375);
    msg.setSource(22533U);
    msg.setSourceEntity(108U);
    msg.setDestination(14379U);
    msg.setDestinationEntity(235U);
    msg.time = 0.412662294834;
    msg.x = 0.347373434811;
    msg.y = 0.0327388012705;
    msg.z = 0.541857231597;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.108673599833);
    msg.setSource(56995U);
    msg.setSourceEntity(110U);
    msg.setDestination(17322U);
    msg.setDestinationEntity(175U);
    msg.time = 0.595305320547;
    msg.x = 0.143906625934;
    msg.y = 0.149877810958;
    msg.z = 0.535208420692;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.388977302182);
    msg.setSource(53325U);
    msg.setSourceEntity(126U);
    msg.setDestination(44527U);
    msg.setDestinationEntity(152U);
    msg.time = 0.129134032018;
    msg.x = 0.279688617534;
    msg.y = 0.251093792592;
    msg.z = 0.0828265361204;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.0931674289883);
    msg.setSource(15830U);
    msg.setSourceEntity(21U);
    msg.setDestination(43444U);
    msg.setDestinationEntity(22U);
    msg.time = 0.0649372492157;
    msg.x = 0.0782908534441;
    msg.y = 0.310291602146;
    msg.z = 0.720192789517;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.22161277259);
    msg.setSource(60365U);
    msg.setSourceEntity(35U);
    msg.setDestination(24673U);
    msg.setDestinationEntity(173U);
    msg.time = 0.319849429274;
    msg.x = 0.389059508592;
    msg.y = 0.55822259211;
    msg.z = 0.309548090861;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.282953360381);
    msg.setSource(36383U);
    msg.setSourceEntity(220U);
    msg.setDestination(40087U);
    msg.setDestinationEntity(233U);
    msg.time = 0.0479541209745;
    msg.x = 0.0634431180085;
    msg.y = 0.926625058441;
    msg.z = 0.105866421102;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.800860246237);
    msg.setSource(40747U);
    msg.setSourceEntity(7U);
    msg.setDestination(46571U);
    msg.setDestinationEntity(222U);
    msg.time = 0.24287600202;
    msg.x = 0.109771823171;
    msg.y = 0.100074954305;
    msg.z = 0.216565704884;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.112032532068);
    msg.setSource(33676U);
    msg.setSourceEntity(119U);
    msg.setDestination(47513U);
    msg.setDestinationEntity(112U);
    msg.validity = 203U;
    msg.x = 0.622453088134;
    msg.y = 0.954644660419;
    msg.z = 0.43736009875;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.262792056421);
    msg.setSource(39294U);
    msg.setSourceEntity(181U);
    msg.setDestination(7262U);
    msg.setDestinationEntity(48U);
    msg.validity = 90U;
    msg.x = 0.352693626021;
    msg.y = 0.396377386363;
    msg.z = 0.999435981641;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.700458129208);
    msg.setSource(60741U);
    msg.setSourceEntity(248U);
    msg.setDestination(39876U);
    msg.setDestinationEntity(45U);
    msg.validity = 221U;
    msg.x = 0.593552020734;
    msg.y = 0.846803692141;
    msg.z = 0.445040055368;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.0990154251105);
    msg.setSource(32765U);
    msg.setSourceEntity(232U);
    msg.setDestination(55852U);
    msg.setDestinationEntity(44U);
    msg.validity = 183U;
    msg.x = 0.551920505051;
    msg.y = 0.0104730829117;
    msg.z = 0.493230437021;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.999033463465);
    msg.setSource(53783U);
    msg.setSourceEntity(43U);
    msg.setDestination(36768U);
    msg.setDestinationEntity(75U);
    msg.validity = 110U;
    msg.x = 0.659326884184;
    msg.y = 0.259252090703;
    msg.z = 0.00920300439805;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.0605945017391);
    msg.setSource(19237U);
    msg.setSourceEntity(181U);
    msg.setDestination(59133U);
    msg.setDestinationEntity(70U);
    msg.validity = 229U;
    msg.x = 0.909781390293;
    msg.y = 0.0635467566447;
    msg.z = 0.0826832030661;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.601148383004);
    msg.setSource(31272U);
    msg.setSourceEntity(121U);
    msg.setDestination(17797U);
    msg.setDestinationEntity(18U);
    msg.time = 0.912244301211;
    msg.x = 0.409998813888;
    msg.y = 0.876265108836;
    msg.z = 0.783311189739;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.0663063012397);
    msg.setSource(42095U);
    msg.setSourceEntity(45U);
    msg.setDestination(62887U);
    msg.setDestinationEntity(33U);
    msg.time = 0.431658689534;
    msg.x = 0.0402286620492;
    msg.y = 0.797803912725;
    msg.z = 0.846265830262;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.48146281048);
    msg.setSource(57507U);
    msg.setSourceEntity(140U);
    msg.setDestination(39021U);
    msg.setDestinationEntity(179U);
    msg.time = 0.647430693751;
    msg.x = 0.998034722463;
    msg.y = 0.738196176433;
    msg.z = 0.753103551039;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.237970224569);
    msg.setSource(4252U);
    msg.setSourceEntity(66U);
    msg.setDestination(47628U);
    msg.setDestinationEntity(158U);
    msg.validity = 126U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.952150439325;
    tmp_msg_0.y = 0.0882133030096;
    tmp_msg_0.z = 0.499396393237;
    tmp_msg_0.phi = 0.720537448894;
    tmp_msg_0.theta = 0.596331064461;
    tmp_msg_0.psi = 0.426780603341;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.982376181441;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.475188497611);
    msg.setSource(20906U);
    msg.setSourceEntity(134U);
    msg.setDestination(11963U);
    msg.setDestinationEntity(174U);
    msg.validity = 12U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.902990762746;
    tmp_msg_0.y = 0.111621821335;
    tmp_msg_0.z = 0.100037727424;
    tmp_msg_0.phi = 0.14252778449;
    tmp_msg_0.theta = 0.225827712867;
    tmp_msg_0.psi = 0.104600119119;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.521057371291;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.181773261108);
    msg.setSource(20880U);
    msg.setSourceEntity(231U);
    msg.setDestination(36671U);
    msg.setDestinationEntity(94U);
    msg.validity = 213U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.350996511444;
    tmp_msg_0.y = 0.981750761103;
    tmp_msg_0.z = 0.456511737795;
    tmp_msg_0.phi = 0.768629851794;
    tmp_msg_0.theta = 0.403523667442;
    tmp_msg_0.psi = 0.800943062514;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.777800063564;
    tmp_msg_1.beam_height = 0.228567750192;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.154146435294;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.282156037865);
    msg.setSource(28288U);
    msg.setSourceEntity(235U);
    msg.setDestination(37566U);
    msg.setDestinationEntity(71U);
    msg.value = 0.690331314734;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.269190329175);
    msg.setSource(61473U);
    msg.setSourceEntity(124U);
    msg.setDestination(43083U);
    msg.setDestinationEntity(16U);
    msg.value = 0.915720751232;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.402806867032);
    msg.setSource(13737U);
    msg.setSourceEntity(53U);
    msg.setDestination(58146U);
    msg.setDestinationEntity(240U);
    msg.value = 0.375107440689;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.2288043191);
    msg.setSource(51843U);
    msg.setSourceEntity(85U);
    msg.setDestination(44563U);
    msg.setDestinationEntity(242U);
    msg.value = 0.663532107451;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.152914012466);
    msg.setSource(30378U);
    msg.setSourceEntity(230U);
    msg.setDestination(42500U);
    msg.setDestinationEntity(42U);
    msg.value = 0.275386811276;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.76263658323);
    msg.setSource(34853U);
    msg.setSourceEntity(184U);
    msg.setDestination(61944U);
    msg.setDestinationEntity(108U);
    msg.value = 0.0989411493463;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.86856295157);
    msg.setSource(47762U);
    msg.setSourceEntity(225U);
    msg.setDestination(25558U);
    msg.setDestinationEntity(86U);
    msg.value = 0.479319449236;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.662631189558);
    msg.setSource(44582U);
    msg.setSourceEntity(76U);
    msg.setDestination(5373U);
    msg.setDestinationEntity(142U);
    msg.value = 0.751412447868;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.655155040496);
    msg.setSource(4470U);
    msg.setSourceEntity(174U);
    msg.setDestination(55504U);
    msg.setDestinationEntity(136U);
    msg.value = 0.739442527628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.827028708848);
    msg.setSource(50157U);
    msg.setSourceEntity(10U);
    msg.setDestination(3512U);
    msg.setDestinationEntity(76U);
    msg.value = 0.70541316808;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.48862715908);
    msg.setSource(55139U);
    msg.setSourceEntity(142U);
    msg.setDestination(29596U);
    msg.setDestinationEntity(243U);
    msg.value = 0.424419121595;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.397899524255);
    msg.setSource(58114U);
    msg.setSourceEntity(167U);
    msg.setDestination(24561U);
    msg.setDestinationEntity(246U);
    msg.value = 0.615591827837;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.946509320299);
    msg.setSource(64994U);
    msg.setSourceEntity(24U);
    msg.setDestination(52625U);
    msg.setDestinationEntity(53U);
    msg.value = 0.988353718129;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.686428697702);
    msg.setSource(19957U);
    msg.setSourceEntity(24U);
    msg.setDestination(1532U);
    msg.setDestinationEntity(218U);
    msg.value = 0.0852312029252;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.0789022112799);
    msg.setSource(26429U);
    msg.setSourceEntity(76U);
    msg.setDestination(48264U);
    msg.setDestinationEntity(204U);
    msg.value = 0.119526422365;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.511569714549);
    msg.setSource(27260U);
    msg.setSourceEntity(225U);
    msg.setDestination(15365U);
    msg.setDestinationEntity(106U);
    msg.value = 0.918975653087;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.891785157068);
    msg.setSource(10752U);
    msg.setSourceEntity(103U);
    msg.setDestination(28887U);
    msg.setDestinationEntity(190U);
    msg.value = 0.529395747569;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.398800089527);
    msg.setSource(4035U);
    msg.setSourceEntity(44U);
    msg.setDestination(50902U);
    msg.setDestinationEntity(194U);
    msg.value = 0.717623825618;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.0392218791605);
    msg.setSource(24605U);
    msg.setSourceEntity(129U);
    msg.setDestination(26285U);
    msg.setDestinationEntity(214U);
    msg.value = 0.566257296983;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.156776565442);
    msg.setSource(6167U);
    msg.setSourceEntity(154U);
    msg.setDestination(48861U);
    msg.setDestinationEntity(189U);
    msg.value = 0.125035687844;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.138243743853);
    msg.setSource(19894U);
    msg.setSourceEntity(142U);
    msg.setDestination(63201U);
    msg.setDestinationEntity(96U);
    msg.value = 0.272117692317;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.632874216628);
    msg.setSource(38505U);
    msg.setSourceEntity(207U);
    msg.setDestination(35338U);
    msg.setDestinationEntity(28U);
    msg.value = 0.808374528084;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.425275048782);
    msg.setSource(38031U);
    msg.setSourceEntity(183U);
    msg.setDestination(9804U);
    msg.setDestinationEntity(254U);
    msg.value = 0.322704199341;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.877303574419);
    msg.setSource(32606U);
    msg.setSourceEntity(13U);
    msg.setDestination(5089U);
    msg.setDestinationEntity(88U);
    msg.value = 0.0288161807506;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.881119642808);
    msg.setSource(55179U);
    msg.setSourceEntity(191U);
    msg.setDestination(57499U);
    msg.setDestinationEntity(29U);
    msg.direction = 0.282035680133;
    msg.speed = 0.59419557432;
    msg.turbulence = 0.271597006536;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.90729035132);
    msg.setSource(1580U);
    msg.setSourceEntity(15U);
    msg.setDestination(31265U);
    msg.setDestinationEntity(191U);
    msg.direction = 0.141486886316;
    msg.speed = 0.917003672303;
    msg.turbulence = 0.00483513957583;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.818350808552);
    msg.setSource(51988U);
    msg.setSourceEntity(59U);
    msg.setDestination(27039U);
    msg.setDestinationEntity(93U);
    msg.direction = 0.169222664643;
    msg.speed = 0.454240653116;
    msg.turbulence = 0.881244691718;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.74236214452);
    msg.setSource(28269U);
    msg.setSourceEntity(198U);
    msg.setDestination(8842U);
    msg.setDestinationEntity(107U);
    msg.value = 0.736004987797;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.975935410688);
    msg.setSource(1653U);
    msg.setSourceEntity(241U);
    msg.setDestination(42919U);
    msg.setDestinationEntity(97U);
    msg.value = 0.025821400579;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.34510496009);
    msg.setSource(58301U);
    msg.setSourceEntity(77U);
    msg.setDestination(38990U);
    msg.setDestinationEntity(227U);
    msg.value = 0.497616517589;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.80609015153);
    msg.setSource(228U);
    msg.setSourceEntity(94U);
    msg.setDestination(19692U);
    msg.setDestinationEntity(198U);
    msg.value.assign("YFTTTXFHHKDHZMVDXHIOLPACVKJFTMRPESSRKGJCWIZQMBGXXOXVMNZXZOBQURWAIBYDLIXTOLKCUVHGCFXAJBNAFQEHTENDSFPHURIBFDKCQLWQMCIWVVSQPNNAEHUQXTJCPSZJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.728889965423);
    msg.setSource(42530U);
    msg.setSourceEntity(83U);
    msg.setDestination(40579U);
    msg.setDestinationEntity(35U);
    msg.value.assign("STEWLUJWMWWKBHBMHWZZAOUEGIILCSIXCIEOZEAHGDODRHAPOQWVTUNJNAVVSBBMJUYYFYJHHYIUEUYCXPLPAODIKXAGBNLGSYTCIDVSLEMNTCFXZYBTCHVXRPFSXDLFTQQTWBSIQKRCUBCDKTZDUJUFASQDDMWGLPPGPMVVQMNGVYKPJXYKHR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.573483663476);
    msg.setSource(59720U);
    msg.setSourceEntity(122U);
    msg.setDestination(31656U);
    msg.setDestinationEntity(154U);
    msg.value.assign("WWVFJXZJFYDRHEVTAJAOBTRAJREVWKRDUKYKMEGIEHNRCPIMONSFWVMPWSXDWKZYIUZEZVKSDQZCTFHNZSQCBBQEFKWMBLFYUOSNNHYWTSGTQZCFQARBOXGAHPTCNFOQPHDIJSMSIBEBTVILLLRRUUCLCJPPPKSLDUQVZOVHLESXQGNGOLNCJRUDOEJPAXKGWMYKVXYGDQPVM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.108686425216);
    msg.setSource(37177U);
    msg.setSourceEntity(2U);
    msg.setDestination(3494U);
    msg.setDestinationEntity(201U);
    const char tmp_msg_0[] = {11, 18, -69, -4, 33, 41, 105, 23, 18, 69, 36, -13, -84, -107, -76, 125, 3, 32, -114, 47, 59, -108, 117, -116, -20, 80, -128, -116, -2, -118, 89, 109, -16, 26, 13, 6, 15, 48, 46, -87, -23, -98, 81, -45, -29, 54, 39, -12, -50, 82, 13, -48, 106, -101, 46, 122, -97, 33, -112, -38, 13, 68, -95, -70, -11, -38, -27};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.1209651698);
    msg.setSource(53165U);
    msg.setSourceEntity(170U);
    msg.setDestination(34591U);
    msg.setDestinationEntity(191U);
    const char tmp_msg_0[] = {104, -54, 114, 30, 22, -31, -101, 46, -120, -39, -100, -84, -53, 92, -106, -104, 46, -30, -53, 3, 101, -58, -108, 83, 69, 121, -21, -30, -53, 106, 31, -87, -7, -116, -115, -43, -81, 50, 99, 53, -101, -117, -74, 112, 76, 107, -18, -96, -6, 58, 17, 46, -87, -67, -9, -65, -15, -87, 116, -65, -21, 101, 39, 86, -61, 86, -18, -24, -57, -114, -4, -12, 75, -81, -52, 78, -19, -54, 59, 33, -25, 83, 38, -24, 43, -101, 63, -108, 56, 93, 34, 72, -101, 111, -103, -16, -21, 30, 39, -128, -119, -96, 125, -31, -101, -83, 48, -106, 24, 32, -50, 73, -4, -125, -28, 73, -67, -125, -56, -84, 71, -74};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.0776138284019);
    msg.setSource(36419U);
    msg.setSourceEntity(8U);
    msg.setDestination(19633U);
    msg.setDestinationEntity(116U);
    const char tmp_msg_0[] = {-22, -31, 119, -65, 35, 114, -19, 78, 51, -76, -109, -127, -39, 126, 100, 1, 99, -80, -13, 43, -116, -74, 95, -96, -16, 66, -75, -13, 74, 124, 119, 37, -36, 86, 61, -51, 41, 105, 69, 30, -88, -38, 17, 18, -26, 103, -18, -24, -80, -50, -54, -47, 70, -16, 120, -64, -26, 118, -1, 12, -16, 36, -12, 95, 78, -90, 2, 109, 31, -116, 6, -113, -69, 38, 58, 55, -34, 25, 63, 84, -65, 110, -57, 49, -55, 123, 100, 40, -47, -117, -55, 19, -39, -68, 28, 63, 37, 115, 3, 48, -102, -69, -50, -7, -105, 91, -104, 60, 56, 27, 3, 98, -71, 32, 73, -122, 126, -100, 28, 51, -114, 90, 122, -66, 75, 69, 19, 80, -78, 58, -43, 80, 15, -24, -82, -91, -5, 67, 53, -42, 97, -96, 28, 71, 90, -62, -1, -30, -98, -4, 81, -72, -47, -84, -80, 27, 62, 122, -68, 96, -13};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.477292485604);
    msg.setSource(36941U);
    msg.setSourceEntity(72U);
    msg.setDestination(52431U);
    msg.setDestinationEntity(180U);
    msg.value = 0.963601213004;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.985201399124);
    msg.setSource(63174U);
    msg.setSourceEntity(172U);
    msg.setDestination(12102U);
    msg.setDestinationEntity(130U);
    msg.value = 0.68713600764;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.366760913143);
    msg.setSource(27382U);
    msg.setSourceEntity(40U);
    msg.setDestination(12141U);
    msg.setDestinationEntity(248U);
    msg.value = 0.919365289936;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.11182897763);
    msg.setSource(480U);
    msg.setSourceEntity(224U);
    msg.setDestination(2125U);
    msg.setDestinationEntity(154U);
    msg.type = 150U;
    msg.frequency = 3303479123U;
    msg.min_range = 52523U;
    msg.max_range = 51875U;
    msg.bits_per_point = 216U;
    msg.scale_factor = 0.95967170718;
    const char tmp_msg_0[] = {113, 42, 82, -110, -16, 13, 112, -59, 22, 100, 91, -29, -106, 125, 56, -26, 3, 126, -60, 40, 21, -32, 21, -15, 53, -45, -4, 50, -5, 94, 93, -22, -79, 90, 108, 36, 38, 30, -63, 29, -86, -30, 92, -12, 33, -87, -88, 19, 43, -118, 43, -72, -25, 36, -83, 82, -123, -105, -44, -121, -83, -105, -116, -60, 97, 29, 99, 101, -35, -85, -17, -77, 90, 41, 34, 74, 40, 76, -69, 16, 111, -93, 104, 57, -117, 111, 96, -77, 46, -35, 54, -73, 26, -104, -55, 83, -65, -15, -74, 20, -10, 44, 24, 13, -48};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.550108244705);
    msg.setSource(17649U);
    msg.setSourceEntity(201U);
    msg.setDestination(49151U);
    msg.setDestinationEntity(98U);
    msg.type = 113U;
    msg.frequency = 931077194U;
    msg.min_range = 56733U;
    msg.max_range = 40829U;
    msg.bits_per_point = 91U;
    msg.scale_factor = 0.663134731835;
    const char tmp_msg_0[] = {75, 24, -104, 123, -72, -105, 83, 107, -119, -16, 81, 112, -15, -108, 42, 103, 28, -93, 30, 75, 115, 30, -17, 101, 33, 70, -61, 74, 51, 125, 2, 96, -82, -32, 68, -30, -54, 76, 8, -79, -70, 119, 115, -81, -16, -13, 35, -113, -38, -14, 121, -33, 65, -4, -12, -32, -119, 68, -86, 104, 20, 57, 11, -87, -90, -58, 66, -86, -13, -33, -16, 20, 79, -81, 25, -112, -44, -78, 6, 124, -28, 49, 86, 126, 4, 75, -93, -62, 47, 60, 46, -110, 68, 122, 13, -50, -14, 122, -1, -41, 112, 65, 40, -41, 98, -67, -14, -123, -44, 77, -85, 3, 2, -107, -59, -68, 22, 95, 40, -75, 105, 27, 109, -68, -57, 111, -38, -12, -4, -110, 30, 48, -18, 15, 17, 76, -81, -12, 18, 78, 71, -124, 92, 17, -80, 36, 82, 1, 70, -77, -16, 9, -93, 39, -48, -97, 10, -29, 15, 126, 123, 90, 18, -120, -61, 71, 126, 87, 87, -60, -73, 81, 57, -28, 5, 9, 23, -77, 5, -79, -50, -50, 50, 123, -103, -81, -88, -89, 54, -61, 61, -100, 106};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.178575840942);
    msg.setSource(44005U);
    msg.setSourceEntity(23U);
    msg.setDestination(33788U);
    msg.setDestinationEntity(98U);
    msg.type = 247U;
    msg.frequency = 3193149529U;
    msg.min_range = 16327U;
    msg.max_range = 15964U;
    msg.bits_per_point = 127U;
    msg.scale_factor = 0.751319945013;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.410361422189;
    tmp_msg_0.beam_height = 0.820552128033;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {89, -20, -18, 48, 23, -20, 93, 2, -30, 85, -24, -49, -89, -89, -74, -24, 44, 31, -65, -80, 54, -35, 117, 78, -75, -55, 111, 95, -5, 61, 22, -121, -87, -79, -51, -3, 40, -117, 21, -64, 82, 25, 28, 52, -104, -16};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.273869025077);
    msg.setSource(65319U);
    msg.setSourceEntity(156U);
    msg.setDestination(4961U);
    msg.setDestinationEntity(129U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.307310532727);
    msg.setSource(63601U);
    msg.setSourceEntity(86U);
    msg.setDestination(17018U);
    msg.setDestinationEntity(204U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.632786094099);
    msg.setSource(44880U);
    msg.setSourceEntity(138U);
    msg.setDestination(55322U);
    msg.setDestinationEntity(38U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.242521217941);
    msg.setSource(25356U);
    msg.setSourceEntity(43U);
    msg.setDestination(55477U);
    msg.setDestinationEntity(184U);
    msg.op = 185U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.825105178966);
    msg.setSource(18624U);
    msg.setSourceEntity(184U);
    msg.setDestination(7282U);
    msg.setDestinationEntity(42U);
    msg.op = 98U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.490545085866);
    msg.setSource(21214U);
    msg.setSourceEntity(6U);
    msg.setDestination(36251U);
    msg.setDestinationEntity(84U);
    msg.op = 26U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.70215158708);
    msg.setSource(63457U);
    msg.setSourceEntity(166U);
    msg.setDestination(13214U);
    msg.setDestinationEntity(16U);
    msg.value = 0.722873449966;
    msg.confidence = 0.865503789499;
    msg.opmodes.assign("RGZYNAFRVQYYYXXSZTODZZNCBPVIKHBMFAYOMKTKSCEQUTCGTEWFXHULENVN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.498652764854);
    msg.setSource(46545U);
    msg.setSourceEntity(147U);
    msg.setDestination(35003U);
    msg.setDestinationEntity(230U);
    msg.value = 0.367937907537;
    msg.confidence = 0.864561704841;
    msg.opmodes.assign("FIJBQLJEATBARTFHEUQYJTTMBWCIMEJQVPXLAVFJLNLGXCDKJMTHEZPVBGSUDXZMXXLDFTNOPHRSOYVSHNOLYCSENGDNEVSCRZXHKORKNSTIXOFOAZINPBVEVBZLBBKRAZQRFDHEOIGAKYWKGKQYEYUWUIUUFPNCPMUFJGIWNICDVXPZGJCDGADLCSLSVIBIMPAJWBQWQDWTRTUHSHDMLYAWNC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.167164127706);
    msg.setSource(13803U);
    msg.setSourceEntity(79U);
    msg.setDestination(16965U);
    msg.setDestinationEntity(142U);
    msg.value = 0.323193443741;
    msg.confidence = 0.269430412863;
    msg.opmodes.assign("VLBJFBXCAOBTLPOLYDYYVOKKQPLOCYSPIEECFRBLUAFVXYJFHICIHNKJDEGZGGHGGPPTEIZGDXRRTHHMZMJMBKLVFESRWKHZAUNQSQHJAQNRYADZVCBSKUMEMFYQQLHHAIJKAMGPCMQCWLTOXNFXQMZY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.793059094044);
    msg.setSource(4866U);
    msg.setSourceEntity(57U);
    msg.setDestination(21141U);
    msg.setDestinationEntity(138U);
    msg.itow = 302740557U;
    msg.lat = 0.285257419133;
    msg.lon = 0.261454429324;
    msg.height_ell = 0.747007520015;
    msg.height_sea = 0.660338189231;
    msg.hacc = 0.0667944144713;
    msg.vacc = 0.416913497885;
    msg.vel_n = 0.121219626131;
    msg.vel_e = 0.962830375652;
    msg.vel_d = 0.295550091998;
    msg.speed = 0.305359889176;
    msg.gspeed = 0.751603429177;
    msg.heading = 0.297656970456;
    msg.sacc = 0.434908609423;
    msg.cacc = 0.710108083417;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.249957918018);
    msg.setSource(22013U);
    msg.setSourceEntity(202U);
    msg.setDestination(62172U);
    msg.setDestinationEntity(239U);
    msg.itow = 200104877U;
    msg.lat = 0.00244744451601;
    msg.lon = 0.29668637256;
    msg.height_ell = 0.190441465737;
    msg.height_sea = 0.261366221863;
    msg.hacc = 0.730984796518;
    msg.vacc = 0.113170725175;
    msg.vel_n = 0.06545228517;
    msg.vel_e = 0.26821889939;
    msg.vel_d = 0.569244872526;
    msg.speed = 0.0282487558186;
    msg.gspeed = 0.127923620879;
    msg.heading = 0.678271334572;
    msg.sacc = 0.248558059797;
    msg.cacc = 0.721055943877;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.0841587041947);
    msg.setSource(62531U);
    msg.setSourceEntity(26U);
    msg.setDestination(49930U);
    msg.setDestinationEntity(153U);
    msg.itow = 3910870529U;
    msg.lat = 0.653881013284;
    msg.lon = 0.420946400471;
    msg.height_ell = 0.666268080488;
    msg.height_sea = 0.196149088011;
    msg.hacc = 0.103562055686;
    msg.vacc = 0.116308059665;
    msg.vel_n = 0.917803199408;
    msg.vel_e = 0.194719476926;
    msg.vel_d = 0.912927592163;
    msg.speed = 0.912250006961;
    msg.gspeed = 0.975912471085;
    msg.heading = 0.7795666446;
    msg.sacc = 0.0389381779289;
    msg.cacc = 0.6803392724;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.454845556168);
    msg.setSource(14234U);
    msg.setSourceEntity(93U);
    msg.setDestination(21314U);
    msg.setDestinationEntity(176U);
    msg.id = 142U;
    msg.value = 0.330839489369;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.846624153811);
    msg.setSource(19554U);
    msg.setSourceEntity(100U);
    msg.setDestination(36528U);
    msg.setDestinationEntity(79U);
    msg.id = 158U;
    msg.value = 0.115553296672;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.925017763047);
    msg.setSource(45792U);
    msg.setSourceEntity(222U);
    msg.setDestination(51403U);
    msg.setDestinationEntity(59U);
    msg.id = 150U;
    msg.value = 0.756321418683;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.580348126788);
    msg.setSource(26095U);
    msg.setSourceEntity(162U);
    msg.setDestination(31248U);
    msg.setDestinationEntity(173U);
    msg.x = 0.165599084611;
    msg.y = 0.862063184566;
    msg.z = 0.760288587986;
    msg.phi = 0.711053427808;
    msg.theta = 0.524908551166;
    msg.psi = 0.128578875729;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.268111651587);
    msg.setSource(43227U);
    msg.setSourceEntity(252U);
    msg.setDestination(30043U);
    msg.setDestinationEntity(165U);
    msg.x = 0.296216290096;
    msg.y = 0.716509058264;
    msg.z = 0.114764958214;
    msg.phi = 0.841584106572;
    msg.theta = 0.150217283225;
    msg.psi = 0.581987359518;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.879870136158);
    msg.setSource(30419U);
    msg.setSourceEntity(95U);
    msg.setDestination(9157U);
    msg.setDestinationEntity(89U);
    msg.x = 0.938881501344;
    msg.y = 0.797376392962;
    msg.z = 0.526698466722;
    msg.phi = 0.560304993234;
    msg.theta = 0.698952228575;
    msg.psi = 0.527478150307;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.426674519475);
    msg.setSource(39537U);
    msg.setSourceEntity(186U);
    msg.setDestination(1551U);
    msg.setDestinationEntity(190U);
    msg.beam_width = 0.354807389391;
    msg.beam_height = 0.277372705973;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.705780186814);
    msg.setSource(18815U);
    msg.setSourceEntity(82U);
    msg.setDestination(429U);
    msg.setDestinationEntity(11U);
    msg.beam_width = 0.495514835059;
    msg.beam_height = 0.76787638314;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.681145732449);
    msg.setSource(55186U);
    msg.setSourceEntity(98U);
    msg.setDestination(10462U);
    msg.setDestinationEntity(61U);
    msg.beam_width = 0.377344484439;
    msg.beam_height = 0.757502553682;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.286911736436);
    msg.setSource(39991U);
    msg.setSourceEntity(137U);
    msg.setDestination(16726U);
    msg.setDestinationEntity(147U);
    msg.sane = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.0717443447701);
    msg.setSource(63245U);
    msg.setSourceEntity(152U);
    msg.setDestination(53361U);
    msg.setDestinationEntity(28U);
    msg.sane = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.897291566792);
    msg.setSource(21170U);
    msg.setSourceEntity(40U);
    msg.setDestination(49335U);
    msg.setDestinationEntity(171U);
    msg.sane = 98U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.30458270447);
    msg.setSource(60880U);
    msg.setSourceEntity(227U);
    msg.setDestination(65459U);
    msg.setDestinationEntity(241U);
    msg.value = 0.137435808137;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.972368497654);
    msg.setSource(47860U);
    msg.setSourceEntity(184U);
    msg.setDestination(49200U);
    msg.setDestinationEntity(252U);
    msg.value = 0.962801268218;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.980965893779);
    msg.setSource(56581U);
    msg.setSourceEntity(60U);
    msg.setDestination(7182U);
    msg.setDestinationEntity(233U);
    msg.value = 0.446569800637;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.225382747773);
    msg.setSource(40541U);
    msg.setSourceEntity(9U);
    msg.setDestination(62232U);
    msg.setDestinationEntity(235U);
    msg.value = 0.63037783382;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.967788093341);
    msg.setSource(60241U);
    msg.setSourceEntity(62U);
    msg.setDestination(57161U);
    msg.setDestinationEntity(141U);
    msg.value = 0.485272462139;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.814285366226);
    msg.setSource(53293U);
    msg.setSourceEntity(95U);
    msg.setDestination(13167U);
    msg.setDestinationEntity(62U);
    msg.value = 0.152330364702;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.690751646354);
    msg.setSource(3202U);
    msg.setSourceEntity(143U);
    msg.setDestination(52510U);
    msg.setDestinationEntity(91U);
    msg.value = 0.0906249190415;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.0365165546126);
    msg.setSource(54088U);
    msg.setSourceEntity(213U);
    msg.setDestination(8169U);
    msg.setDestinationEntity(125U);
    msg.value = 0.390017733856;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.607330098695);
    msg.setSource(11251U);
    msg.setSourceEntity(15U);
    msg.setDestination(63927U);
    msg.setDestinationEntity(208U);
    msg.value = 0.127449350498;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.895824605025);
    msg.setSource(31930U);
    msg.setSourceEntity(51U);
    msg.setDestination(6420U);
    msg.setDestinationEntity(237U);
    msg.value = 0.239915339451;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.193414597632);
    msg.setSource(46651U);
    msg.setSourceEntity(187U);
    msg.setDestination(11768U);
    msg.setDestinationEntity(140U);
    msg.value = 0.271329480739;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.168489604694);
    msg.setSource(47756U);
    msg.setSourceEntity(253U);
    msg.setDestination(14342U);
    msg.setDestinationEntity(64U);
    msg.value = 0.926011871336;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.195641916707);
    msg.setSource(47804U);
    msg.setSourceEntity(247U);
    msg.setDestination(2317U);
    msg.setDestinationEntity(227U);
    msg.value = 0.592119679771;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.928550429306);
    msg.setSource(28418U);
    msg.setSourceEntity(86U);
    msg.setDestination(4238U);
    msg.setDestinationEntity(33U);
    msg.value = 0.467758877413;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.346668546158);
    msg.setSource(10466U);
    msg.setSourceEntity(49U);
    msg.setDestination(945U);
    msg.setDestinationEntity(234U);
    msg.value = 0.00074025846268;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.737726666228);
    msg.setSource(874U);
    msg.setSourceEntity(165U);
    msg.setDestination(53537U);
    msg.setDestinationEntity(64U);
    msg.value = 0.837845507887;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.549087109776);
    msg.setSource(35916U);
    msg.setSourceEntity(2U);
    msg.setDestination(57953U);
    msg.setDestinationEntity(55U);
    msg.value = 0.730825499975;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.28594966521);
    msg.setSource(13769U);
    msg.setSourceEntity(197U);
    msg.setDestination(49933U);
    msg.setDestinationEntity(91U);
    msg.value = 0.777993500266;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.349879471131);
    msg.setSource(21750U);
    msg.setSourceEntity(69U);
    msg.setDestination(37057U);
    msg.setDestinationEntity(252U);
    msg.value = 0.703293951471;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.043583689987);
    msg.setSource(36624U);
    msg.setSourceEntity(184U);
    msg.setDestination(36708U);
    msg.setDestinationEntity(50U);
    msg.value = 0.850278928516;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.977741872322);
    msg.setSource(64213U);
    msg.setSourceEntity(112U);
    msg.setDestination(1482U);
    msg.setDestinationEntity(214U);
    msg.value = 0.470670310527;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.45097585447);
    msg.setSource(14594U);
    msg.setSourceEntity(100U);
    msg.setDestination(19238U);
    msg.setDestinationEntity(74U);
    msg.value = 0.604860429749;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.342384298581);
    msg.setSource(9160U);
    msg.setSourceEntity(248U);
    msg.setDestination(13902U);
    msg.setDestinationEntity(53U);
    msg.value = 0.323592382872;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.0329392922464);
    msg.setSource(16665U);
    msg.setSourceEntity(87U);
    msg.setDestination(17189U);
    msg.setDestinationEntity(198U);
    msg.value = 0.971735194169;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.494770399308);
    msg.setSource(38511U);
    msg.setSourceEntity(132U);
    msg.setDestination(51185U);
    msg.setDestinationEntity(176U);
    msg.validity = 21041U;
    msg.type = 241U;
    msg.tow = 1423081986U;
    msg.base_lat = 0.817224156195;
    msg.base_lon = 0.832218612215;
    msg.base_height = 0.135383878053;
    msg.n = 0.707162490271;
    msg.e = 0.988015804243;
    msg.d = 0.936327589444;
    msg.v_n = 0.719544105196;
    msg.v_e = 0.239398098937;
    msg.v_d = 0.508978656464;
    msg.satellites = 43U;
    msg.iar_hyp = 34821U;
    msg.iar_ratio = 0.230561629019;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.936968279584);
    msg.setSource(48281U);
    msg.setSourceEntity(72U);
    msg.setDestination(37356U);
    msg.setDestinationEntity(49U);
    msg.validity = 58787U;
    msg.type = 99U;
    msg.tow = 3621824114U;
    msg.base_lat = 0.917205132672;
    msg.base_lon = 0.612601874464;
    msg.base_height = 0.152673338928;
    msg.n = 0.536112696746;
    msg.e = 0.849605303506;
    msg.d = 0.251501595517;
    msg.v_n = 0.122000510037;
    msg.v_e = 0.387847585303;
    msg.v_d = 0.0385029214581;
    msg.satellites = 61U;
    msg.iar_hyp = 24462U;
    msg.iar_ratio = 0.456365114678;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.133683889146);
    msg.setSource(8410U);
    msg.setSourceEntity(161U);
    msg.setDestination(7364U);
    msg.setDestinationEntity(70U);
    msg.validity = 7586U;
    msg.type = 27U;
    msg.tow = 3354067711U;
    msg.base_lat = 0.880741083238;
    msg.base_lon = 0.540077618634;
    msg.base_height = 0.686028517608;
    msg.n = 0.68051653585;
    msg.e = 0.607848926279;
    msg.d = 0.712096785412;
    msg.v_n = 0.150966222865;
    msg.v_e = 0.0217542299959;
    msg.v_d = 0.275648605498;
    msg.satellites = 70U;
    msg.iar_hyp = 57974U;
    msg.iar_ratio = 0.680299948757;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.301102640847);
    msg.setSource(36865U);
    msg.setSourceEntity(180U);
    msg.setDestination(11222U);
    msg.setDestinationEntity(229U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.970840421839;
    tmp_msg_0.lon = 0.592897276569;
    tmp_msg_0.height = 0.0142040478269;
    tmp_msg_0.x = 0.289928036818;
    tmp_msg_0.y = 0.265810267866;
    tmp_msg_0.z = 0.298369652126;
    tmp_msg_0.phi = 0.72617126799;
    tmp_msg_0.theta = 0.536493096596;
    tmp_msg_0.psi = 0.329786962939;
    tmp_msg_0.u = 0.0489672215142;
    tmp_msg_0.v = 0.74931209054;
    tmp_msg_0.w = 0.468445916907;
    tmp_msg_0.vx = 0.211195831536;
    tmp_msg_0.vy = 0.882565119337;
    tmp_msg_0.vz = 0.342907375104;
    tmp_msg_0.p = 0.855206234286;
    tmp_msg_0.q = 0.41335559026;
    tmp_msg_0.r = 0.881510474173;
    tmp_msg_0.depth = 0.650067438593;
    tmp_msg_0.alt = 0.958303735087;
    msg.state.set(tmp_msg_0);
    msg.type = 166U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.879345930296);
    msg.setSource(61097U);
    msg.setSourceEntity(144U);
    msg.setDestination(38178U);
    msg.setDestinationEntity(123U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.82560538201;
    tmp_msg_0.lon = 0.342382844277;
    tmp_msg_0.height = 0.364218582391;
    tmp_msg_0.x = 0.260482382589;
    tmp_msg_0.y = 0.985213115254;
    tmp_msg_0.z = 0.526692753428;
    tmp_msg_0.phi = 0.46213208081;
    tmp_msg_0.theta = 0.106024827417;
    tmp_msg_0.psi = 0.523879132645;
    tmp_msg_0.u = 0.619780357673;
    tmp_msg_0.v = 0.362610971607;
    tmp_msg_0.w = 0.64393382318;
    tmp_msg_0.vx = 0.167366249405;
    tmp_msg_0.vy = 0.425791818081;
    tmp_msg_0.vz = 0.482156600638;
    tmp_msg_0.p = 0.137949495911;
    tmp_msg_0.q = 0.164427639358;
    tmp_msg_0.r = 0.961746035726;
    tmp_msg_0.depth = 0.0621416693384;
    tmp_msg_0.alt = 0.0866552392205;
    msg.state.set(tmp_msg_0);
    msg.type = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.24973571993);
    msg.setSource(11225U);
    msg.setSourceEntity(176U);
    msg.setDestination(32926U);
    msg.setDestinationEntity(124U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.00779586506144;
    tmp_msg_0.lon = 0.901142811755;
    tmp_msg_0.height = 0.0313088876057;
    tmp_msg_0.x = 0.707450572509;
    tmp_msg_0.y = 0.687053135955;
    tmp_msg_0.z = 0.928672555318;
    tmp_msg_0.phi = 0.299786473296;
    tmp_msg_0.theta = 0.522427534512;
    tmp_msg_0.psi = 0.247988918479;
    tmp_msg_0.u = 0.67053989267;
    tmp_msg_0.v = 0.579361533558;
    tmp_msg_0.w = 0.103265207868;
    tmp_msg_0.vx = 0.373638258246;
    tmp_msg_0.vy = 0.438239379225;
    tmp_msg_0.vz = 0.0575435421389;
    tmp_msg_0.p = 0.16800291413;
    tmp_msg_0.q = 0.225710177513;
    tmp_msg_0.r = 0.332016806753;
    tmp_msg_0.depth = 0.815195598986;
    tmp_msg_0.alt = 0.313785107943;
    msg.state.set(tmp_msg_0);
    msg.type = 120U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.5863000778);
    msg.setSource(41667U);
    msg.setSourceEntity(119U);
    msg.setDestination(58064U);
    msg.setDestinationEntity(149U);
    msg.value = 0.712070918142;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.730277432926);
    msg.setSource(2474U);
    msg.setSourceEntity(59U);
    msg.setDestination(32555U);
    msg.setDestinationEntity(144U);
    msg.value = 0.386882489983;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.607840905447);
    msg.setSource(33024U);
    msg.setSourceEntity(72U);
    msg.setDestination(11855U);
    msg.setDestinationEntity(70U);
    msg.value = 0.0996165713445;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.414051344075);
    msg.setSource(9253U);
    msg.setSourceEntity(48U);
    msg.setDestination(19525U);
    msg.setDestinationEntity(200U);
    msg.value = 0.786303962823;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.576950778047);
    msg.setSource(421U);
    msg.setSourceEntity(220U);
    msg.setDestination(5333U);
    msg.setDestinationEntity(200U);
    msg.value = 0.739314644485;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.309485893552);
    msg.setSource(17875U);
    msg.setSourceEntity(66U);
    msg.setDestination(52314U);
    msg.setDestinationEntity(235U);
    msg.value = 0.274258570123;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.51536911733);
    msg.setSource(11999U);
    msg.setSourceEntity(169U);
    msg.setDestination(20063U);
    msg.setDestinationEntity(175U);
    msg.value = 0.572724034004;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.816130276173);
    msg.setSource(21425U);
    msg.setSourceEntity(35U);
    msg.setDestination(15647U);
    msg.setDestinationEntity(22U);
    msg.value = 0.1174795631;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.23425022851);
    msg.setSource(44335U);
    msg.setSourceEntity(201U);
    msg.setDestination(54249U);
    msg.setDestinationEntity(187U);
    msg.value = 0.381780667011;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.448127162387);
    msg.setSource(24455U);
    msg.setSourceEntity(45U);
    msg.setDestination(44905U);
    msg.setDestinationEntity(191U);
    msg.value = 0.951997494444;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.664043456661);
    msg.setSource(5722U);
    msg.setSourceEntity(64U);
    msg.setDestination(65105U);
    msg.setDestinationEntity(29U);
    msg.value = 0.783721417568;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.737035588444);
    msg.setSource(9727U);
    msg.setSourceEntity(90U);
    msg.setDestination(3705U);
    msg.setDestinationEntity(13U);
    msg.value = 0.278668887795;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.227755617249);
    msg.setSource(61673U);
    msg.setSourceEntity(5U);
    msg.setDestination(7409U);
    msg.setDestinationEntity(176U);
    msg.value = 0.535747467852;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.427607502084);
    msg.setSource(48565U);
    msg.setSourceEntity(223U);
    msg.setDestination(43581U);
    msg.setDestinationEntity(238U);
    msg.value = 0.420599033058;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.936542887717);
    msg.setSource(63110U);
    msg.setSourceEntity(172U);
    msg.setDestination(25059U);
    msg.setDestinationEntity(109U);
    msg.value = 0.169827722438;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.397908098459);
    msg.setSource(36548U);
    msg.setSourceEntity(227U);
    msg.setDestination(64695U);
    msg.setDestinationEntity(106U);
    msg.id = 141U;
    msg.zoom = 110U;
    msg.action = 219U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.550908106765);
    msg.setSource(4763U);
    msg.setSourceEntity(131U);
    msg.setDestination(2493U);
    msg.setDestinationEntity(23U);
    msg.id = 185U;
    msg.zoom = 46U;
    msg.action = 228U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.17728584449);
    msg.setSource(25934U);
    msg.setSourceEntity(18U);
    msg.setDestination(25588U);
    msg.setDestinationEntity(188U);
    msg.id = 162U;
    msg.zoom = 170U;
    msg.action = 52U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.12171929394);
    msg.setSource(8921U);
    msg.setSourceEntity(182U);
    msg.setDestination(44648U);
    msg.setDestinationEntity(211U);
    msg.id = 177U;
    msg.value = 0.0669525219016;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.836634409628);
    msg.setSource(37316U);
    msg.setSourceEntity(181U);
    msg.setDestination(65184U);
    msg.setDestinationEntity(128U);
    msg.id = 242U;
    msg.value = 0.141089629823;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.500986572106);
    msg.setSource(215U);
    msg.setSourceEntity(52U);
    msg.setDestination(17492U);
    msg.setDestinationEntity(60U);
    msg.id = 139U;
    msg.value = 0.118274451704;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.206221620001);
    msg.setSource(3114U);
    msg.setSourceEntity(97U);
    msg.setDestination(7177U);
    msg.setDestinationEntity(143U);
    msg.id = 74U;
    msg.value = 0.767496574198;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.0870153614062);
    msg.setSource(11369U);
    msg.setSourceEntity(174U);
    msg.setDestination(57557U);
    msg.setDestinationEntity(120U);
    msg.id = 14U;
    msg.value = 0.118005044313;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.901639260494);
    msg.setSource(39848U);
    msg.setSourceEntity(174U);
    msg.setDestination(30003U);
    msg.setDestinationEntity(226U);
    msg.id = 74U;
    msg.value = 0.0787607333039;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.595865825504);
    msg.setSource(16152U);
    msg.setSourceEntity(52U);
    msg.setDestination(59612U);
    msg.setDestinationEntity(203U);
    msg.id = 193U;
    msg.angle = 0.455825683105;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.367716322316);
    msg.setSource(53624U);
    msg.setSourceEntity(95U);
    msg.setDestination(26120U);
    msg.setDestinationEntity(139U);
    msg.id = 229U;
    msg.angle = 0.913684059983;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.0651943997935);
    msg.setSource(41821U);
    msg.setSourceEntity(27U);
    msg.setDestination(7209U);
    msg.setDestinationEntity(84U);
    msg.id = 175U;
    msg.angle = 0.314620416739;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.757954087255);
    msg.setSource(23565U);
    msg.setSourceEntity(246U);
    msg.setDestination(20985U);
    msg.setDestinationEntity(24U);
    msg.op = 93U;
    msg.actions.assign("PAZBXQSZHXITARDXHCKITKBXUNPJQNTCFMYLKJFQXCDOURTMMHGKYNVLTEUEK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.254691579058);
    msg.setSource(22066U);
    msg.setSourceEntity(173U);
    msg.setDestination(56707U);
    msg.setDestinationEntity(201U);
    msg.op = 131U;
    msg.actions.assign("ZKBMDAREIOSNMXEQUGVHVNCAQDRUSFCTVGJHMQHPWVWYBPJOA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.640592166645);
    msg.setSource(32910U);
    msg.setSourceEntity(99U);
    msg.setDestination(64903U);
    msg.setDestinationEntity(40U);
    msg.op = 25U;
    msg.actions.assign("CBGNNERFLCNCEQGAZJQPGVQVBCZALDPGUZYFMMBTWLJNXEICZHOKRMDNAALXLVMRVUXSGTMKYGUTNEYGAQHXTEZEPHO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.932062826069);
    msg.setSource(48433U);
    msg.setSourceEntity(65U);
    msg.setDestination(26134U);
    msg.setDestinationEntity(158U);
    msg.actions.assign("YJRQUSWZHGRMJCKTVKRYIRJXMFLWVEYTSRHHDPAQX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.738463048099);
    msg.setSource(60819U);
    msg.setSourceEntity(178U);
    msg.setDestination(49767U);
    msg.setDestinationEntity(92U);
    msg.actions.assign("MKLWXAHFTUMPEQLPOIHVNKSVQSJSNUVAQOTMFYQBCKIAAVTBRTHOJOGDKTMXD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.720642140654);
    msg.setSource(37195U);
    msg.setSourceEntity(232U);
    msg.setDestination(34326U);
    msg.setDestinationEntity(91U);
    msg.actions.assign("IXSEUQQKWLCGQMLTFBGEAODVLDOHNUBWJYTLORUIPDMJVVZAZJZXDFSGMBFTVPCTCCJHRXRAQBVUUVSYNGPSXLOPXPYRLCHKKDGTIUUSLREWDIZLWWJGEMCJTORJBNYKNWWSGNEFIKVAQDRFEHVFHSCZAWHSOBCMFFIOIDHVFDZZYSAGNTJECZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.375848704212);
    msg.setSource(41094U);
    msg.setSourceEntity(184U);
    msg.setDestination(13956U);
    msg.setDestinationEntity(132U);
    msg.button = 215U;
    msg.value = 15U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.748484970779);
    msg.setSource(21680U);
    msg.setSourceEntity(141U);
    msg.setDestination(24078U);
    msg.setDestinationEntity(115U);
    msg.button = 154U;
    msg.value = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.447300549046);
    msg.setSource(58026U);
    msg.setSourceEntity(33U);
    msg.setDestination(7709U);
    msg.setDestinationEntity(155U);
    msg.button = 18U;
    msg.value = 84U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.933821645566);
    msg.setSource(56015U);
    msg.setSourceEntity(236U);
    msg.setDestination(20805U);
    msg.setDestinationEntity(5U);
    msg.op = 24U;
    msg.text.assign("COHQPWZUFSTSVECHLGQAUZYABNKTFEXABKOTSOZNZWKUOFQFLGENGKVWPRMRNSARDSJBHFQBKQNPKJGTDTJILVVXWQAACUGURKDIAGUQXJZYGRLNPUYLEWJIKMNHDHAFPPFESVLEVRNLMW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.88939093235);
    msg.setSource(17927U);
    msg.setSourceEntity(115U);
    msg.setDestination(22017U);
    msg.setDestinationEntity(207U);
    msg.op = 65U;
    msg.text.assign("SZLNOJFHWAANRKRMQUCOVRONXCEPKUOUPIHEIDVAMILUHQASNCZJZFTIXNPZXDPBGHZYEWSEEBSJINKRJEBORWOJDWYLGVUWKHIFULEYGGDLQNMIMRMVVCQGATPGSLHTPYSMMMT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.243880740611);
    msg.setSource(41558U);
    msg.setSourceEntity(75U);
    msg.setDestination(5087U);
    msg.setDestinationEntity(88U);
    msg.op = 224U;
    msg.text.assign("KUZASZHDWCVZURPHUSUKCVQTHBWQYATONBRXSJVITEPZCDBPNLLXXXIVELDRTEFCWREERMTOAWOMTNNMYNSIZKFHQDXPFYLNPIYIBBBGKKORDELJAIBUXBLXCOSJMQQBZBQPQCHYRAJWAUEDMAORIDOIAZURTMDTGDMNHQYUCCTHGRHIJMILPAPZXVNELZQSCYNJFGHGMVMEYOKWGKTJOSKGFPFOJWGFDZLVKP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.365954004061);
    msg.setSource(39175U);
    msg.setSourceEntity(253U);
    msg.setDestination(36894U);
    msg.setDestinationEntity(157U);
    msg.op = 214U;
    msg.time_remain = 0.0729076269465;
    msg.sched_time = 0.153339722523;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.661881428082);
    msg.setSource(49328U);
    msg.setSourceEntity(117U);
    msg.setDestination(60063U);
    msg.setDestinationEntity(43U);
    msg.op = 231U;
    msg.time_remain = 0.240441327366;
    msg.sched_time = 0.533429241476;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.259183865766);
    msg.setSource(36990U);
    msg.setSourceEntity(213U);
    msg.setDestination(49001U);
    msg.setDestinationEntity(215U);
    msg.op = 170U;
    msg.time_remain = 0.75529200975;
    msg.sched_time = 0.236650775709;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.540311674649);
    msg.setSource(52042U);
    msg.setSourceEntity(118U);
    msg.setDestination(28221U);
    msg.setDestinationEntity(216U);
    msg.name.assign("ENITXTVBIHVNUWSDAWKLMIABSIGOOMRBQSTLEOBCQGADEGEIYMUSKTSJVKGJWFVLSOMCMKQYXHOYFZTIBRCMUZNPWJTNFRTUWVCTQAPXHKSCVCRRUVJXFNPABOMMHBWKBDDWZCMNBYLLJXAADQEKLVQIPEEQEXZEJHFCHVLZWYYPOGQJNKNIGDHWP");
    msg.op = 242U;
    msg.sched_time = 0.456830265423;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.615713528979);
    msg.setSource(38911U);
    msg.setSourceEntity(75U);
    msg.setDestination(40905U);
    msg.setDestinationEntity(30U);
    msg.name.assign("FKOSOVAMVBANCLVNWYWEFPQZSKLGUDKJHORCUHTTNXZFGQJKFTVXERJEMTDFYEMQKUISBLLVKGMBRRRWBXYQOKWDXWVOIBATNRIZYHYFVRGSAGACBVKSOECDSQHTNWAJLAPYJIRXGMLHQRQWFQUIJENPPEUGKTBWNOHCYUMYXUYLHXETZZWPWOHBONNLDBDMZACQPXCLHDKIQMISDIUZAITUMXDYHVGGPDVIJEFNXMPBE");
    msg.op = 151U;
    msg.sched_time = 0.930580915296;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.00911079784638);
    msg.setSource(8558U);
    msg.setSourceEntity(202U);
    msg.setDestination(35708U);
    msg.setDestinationEntity(133U);
    msg.name.assign("GVJWQWMILHPHCLREJKQUJWZSIQYRGQWYVMUBPIAHRVTDEYARKBKPXZJJYCMOTHZAWFDFXHQPINNFDNWGMQFDMGSECUBHMOVZWUSBKLQFPLCXSPPUCNTTBCPVCAHYRAOCXTGANNQNSRFFYUNTJESJAMCEOGKGIZRQGTWWZ");
    msg.op = 146U;
    msg.sched_time = 0.780126411509;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.368625996199);
    msg.setSource(23291U);
    msg.setSourceEntity(60U);
    msg.setDestination(63312U);
    msg.setDestinationEntity(27U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.687251854835);
    msg.setSource(11500U);
    msg.setSourceEntity(49U);
    msg.setDestination(45287U);
    msg.setDestinationEntity(38U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.650339145529);
    msg.setSource(52074U);
    msg.setSourceEntity(109U);
    msg.setDestination(41178U);
    msg.setDestinationEntity(149U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.347855615368);
    msg.setSource(59338U);
    msg.setSourceEntity(133U);
    msg.setDestination(3253U);
    msg.setDestinationEntity(74U);
    msg.name.assign("VZIKJGHHYGPFZZHEMCMCKOIFLHCDEQBERVWWMKAPHRWVKYIREOPVMSFXWWOVZKRQIAGNJPSSFFNWPTPOUUAMLQKIABAOMNAUULLASJJVYVGCNFEHI");
    msg.state = 171U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.973683812966);
    msg.setSource(13758U);
    msg.setSourceEntity(70U);
    msg.setDestination(2690U);
    msg.setDestinationEntity(41U);
    msg.name.assign("QUJJQMCEXEEYZWKQPVQKIFADTNSLNYPPOKSBLLUVAXGMBEUFXCHYDWFJESVTLQBOTOSCHRDLQNLAIHOJDMBGBZSLXYZNQWYNZJUYJFHCQAPNNTJPASKKYUBVXFWRJTHQGRGRGZVVRBVISIHEHMAPZUWGWXYDWQDCMKBSVAGBHZGLOFFUPASDVHITULWMOJJO");
    msg.state = 103U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.340258922772);
    msg.setSource(28129U);
    msg.setSourceEntity(108U);
    msg.setDestination(65034U);
    msg.setDestinationEntity(156U);
    msg.name.assign("ZDCUEIMQICLIYFYIKDZPHKSVGKMUOFLHXHTKHOXUGVKDEGQQPMEJLSWUAADIBHBGGSTGXREUTZXBOYTJEYMAGCAVFCPINVVLTUCAYDCIIRFBSELSUNURFYWVWBOZNAQNLLGOSZOWMSWATDRWVFINEFGOJPCWVKPLCSFE");
    msg.state = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.0603074406856);
    msg.setSource(21355U);
    msg.setSourceEntity(125U);
    msg.setDestination(33924U);
    msg.setDestinationEntity(16U);
    msg.name.assign("RNUKCPDOYBWFWKQWXRXMPWLDIXNOIATGXJOZKSVQGMDBLOCJDCLXFKJEJUDMUUYYNEXVVAHLGHIJIJVINSCQYTEIFYUENSBZDHLAEQWOFGQVVXGMPCYEAUZRAHSZZDGKKRKCSRNTVKDTHOMTSNOAHHFLUTJM");
    msg.value = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.721603780178);
    msg.setSource(19354U);
    msg.setSourceEntity(154U);
    msg.setDestination(56185U);
    msg.setDestinationEntity(217U);
    msg.name.assign("KJJSQXXOQFDLWVZTCYWAGCDZHUMSFPNIDNUXRDZNTUKGUFEPWHILEIGHMBFMZYWOSNKOHIOEFRXBOMILNEGORMAJPCVSPPRFGDTSMDTYBYMSKUMPNKBYHEDTATJYIZKAGPRKESBXUNGWLHGMQIEHKSEUFSJWZAVJPBWY");
    msg.value = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.346143716539);
    msg.setSource(60179U);
    msg.setSourceEntity(248U);
    msg.setDestination(20520U);
    msg.setDestinationEntity(81U);
    msg.name.assign("SIMSMMDEPFHTHPDWQTUDNWUROGHIPQIZLIZGVXKDCJSRTCZLHGIYJQDBBPGLCBJJJNAUNWFROEDDZQCQZCEFGXPSXUOBAZKXENFIXAPZPDYYVVTCIGGARUNJFUYGXIOELKOLNVMKIFTOUUSBYVBDCOWLRREOLCBMROPQIKNEXAFNMKCVUNESWWJBATYQLWVYYYXMFPSMJHRVTSXTFBSMRGKNVHRUWAHXAFPEZAB");
    msg.value = 67U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.88995733564);
    msg.setSource(46778U);
    msg.setSourceEntity(100U);
    msg.setDestination(65349U);
    msg.setDestinationEntity(243U);
    msg.name.assign("IYGDSXQSQMWXADJMGXYERMXUVZQGOSNTHETNYVAONVMKECPVVLIIOHPJTGXEWFABUGZMWHIZYNQSEQPPJFTSMXAGAYPYCTTXCUMITXRKPLKACUWRLRFDDKYBMDONLQNXWCQAFIORFZU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.205362355319);
    msg.setSource(61761U);
    msg.setSourceEntity(198U);
    msg.setDestination(65461U);
    msg.setDestinationEntity(231U);
    msg.name.assign("GRCERWFKTPQBETHLVUNLVSBLSXCVUWYDIRGFYJQFVDQWGQNKDFCXARYXKKIGOVMASMUSJVTITZTIPBYETIDAJQDXLVLWJLNYZNNAOPHTMESMXIZUVXFZOFYKAEDZWCNNSHMOBGSWZICGUMKQLEQMJYNBHBRRCHRHAABZBLCGMXIPOTKWUAXLPEYQXROJEHH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.547963134969);
    msg.setSource(28374U);
    msg.setSourceEntity(32U);
    msg.setDestination(20006U);
    msg.setDestinationEntity(48U);
    msg.name.assign("GVJJTUEMROHWPROPEILJTKQSXGMRLWLQZBCNVFTYECERHZPQETLNLQXMFBZXBCTOBMHXLEAZNTYIFOTFVGBZDCJFFVZGVBKLWKWGUQXCHVOAPSQHFOIADYHUYHXON");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.101857100194);
    msg.setSource(48849U);
    msg.setSourceEntity(54U);
    msg.setDestination(34169U);
    msg.setDestinationEntity(185U);
    msg.name.assign("PVTWQKEXKAHCPOWXFGJFGIQSBUSQTZWDVDWEMGIOBNLRYELOPMTMYDSMPZETKLWJNSSSKHVPYXSELXVKPDQBHQPFHXUNNYOOCBJOWTOIFZBDZRZQRKUIMRCQJR");
    msg.value = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.800373876203);
    msg.setSource(37593U);
    msg.setSourceEntity(103U);
    msg.setDestination(31282U);
    msg.setDestinationEntity(37U);
    msg.name.assign("LTLSLXVRWWQRHNXIDMOEFJRMOLPOZRKGVHSFXFNUWUIZTHTPGQDBVSHQBRPKJMYEYGOBCTLGZVCWUAOKDEGJCSMCKAUTMZKZRXNTFGKVBGBOWIUNQFPCEQPYTXIEEATTJQQJODRSJFXWHDDPYUDYAI");
    msg.value = 109U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.710457959233);
    msg.setSource(47626U);
    msg.setSourceEntity(75U);
    msg.setDestination(30120U);
    msg.setDestinationEntity(23U);
    msg.name.assign("WZMDFLVKTZJLOOZUJIYARHXADMTLVHDFHYYTTSDOYSWMAQUVDKPHSMFTGXPKCLUUNSEQFEWXLAPQIYJAURTGZWINVCWBCUFINBCXQQBGWTOANIQJKDWPKUWPHBHGYDRBPOPILSZDMFFHQMEWWOKTNUEEGBLRXORUVFPFFVCSRSMMEBXCZIJ");
    msg.value = 56U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.246396361038);
    msg.setSource(26144U);
    msg.setSourceEntity(169U);
    msg.setDestination(53820U);
    msg.setDestinationEntity(54U);
    msg.id = 35U;
    msg.period = 450945959U;
    msg.duty_cycle = 3634680514U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.142836511389);
    msg.setSource(33073U);
    msg.setSourceEntity(93U);
    msg.setDestination(64234U);
    msg.setDestinationEntity(10U);
    msg.id = 78U;
    msg.period = 2032909013U;
    msg.duty_cycle = 2329568111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.44379622225);
    msg.setSource(53057U);
    msg.setSourceEntity(5U);
    msg.setDestination(39876U);
    msg.setDestinationEntity(169U);
    msg.id = 157U;
    msg.period = 4115775332U;
    msg.duty_cycle = 2167553161U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.861063116037);
    msg.setSource(12936U);
    msg.setSourceEntity(132U);
    msg.setDestination(8777U);
    msg.setDestinationEntity(16U);
    msg.id = 0U;
    msg.period = 1712310236U;
    msg.duty_cycle = 1505042713U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.719891594409);
    msg.setSource(16895U);
    msg.setSourceEntity(88U);
    msg.setDestination(42666U);
    msg.setDestinationEntity(140U);
    msg.id = 70U;
    msg.period = 2175156021U;
    msg.duty_cycle = 1412091018U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.0496131065565);
    msg.setSource(40495U);
    msg.setSourceEntity(94U);
    msg.setDestination(4952U);
    msg.setDestinationEntity(233U);
    msg.id = 183U;
    msg.period = 2393920461U;
    msg.duty_cycle = 1273828047U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.957905531739);
    msg.setSource(25658U);
    msg.setSourceEntity(227U);
    msg.setDestination(63227U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.602057988147;
    msg.lon = 0.393451176839;
    msg.height = 0.375301678111;
    msg.x = 0.752090210253;
    msg.y = 0.0803424544909;
    msg.z = 0.624074679051;
    msg.phi = 0.104705923319;
    msg.theta = 0.664338708901;
    msg.psi = 0.0779356314034;
    msg.u = 0.407889288103;
    msg.v = 0.385800084181;
    msg.w = 0.944978679998;
    msg.vx = 0.175820521317;
    msg.vy = 0.282439231673;
    msg.vz = 0.894143670895;
    msg.p = 0.63742209047;
    msg.q = 0.769382290584;
    msg.r = 0.59529192319;
    msg.depth = 0.830654506196;
    msg.alt = 0.825373893734;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.183736493589);
    msg.setSource(3741U);
    msg.setSourceEntity(176U);
    msg.setDestination(28308U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.40394726235;
    msg.lon = 0.242195602721;
    msg.height = 0.0596771361326;
    msg.x = 0.619390083358;
    msg.y = 0.458564069526;
    msg.z = 0.665962753229;
    msg.phi = 0.652627671219;
    msg.theta = 0.339931964446;
    msg.psi = 0.942063206457;
    msg.u = 0.264121449891;
    msg.v = 0.272577788347;
    msg.w = 0.131034639871;
    msg.vx = 0.247795573253;
    msg.vy = 0.392960480546;
    msg.vz = 0.0721352759465;
    msg.p = 0.72475857099;
    msg.q = 0.601154600276;
    msg.r = 0.178225595967;
    msg.depth = 0.154069574335;
    msg.alt = 0.802850835127;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.438397109535);
    msg.setSource(23451U);
    msg.setSourceEntity(34U);
    msg.setDestination(30698U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.45150414417;
    msg.lon = 0.2696136871;
    msg.height = 0.555492043514;
    msg.x = 0.575938670206;
    msg.y = 0.519431848871;
    msg.z = 0.45686574309;
    msg.phi = 0.947656378402;
    msg.theta = 0.588669066345;
    msg.psi = 0.451478549238;
    msg.u = 0.380001077643;
    msg.v = 0.327102601488;
    msg.w = 0.27812225595;
    msg.vx = 0.489454132801;
    msg.vy = 0.426081345528;
    msg.vz = 0.56889309853;
    msg.p = 0.0620350300783;
    msg.q = 0.456399525084;
    msg.r = 0.373497896518;
    msg.depth = 0.952651237532;
    msg.alt = 0.290637980607;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.950643142662);
    msg.setSource(51620U);
    msg.setSourceEntity(42U);
    msg.setDestination(38951U);
    msg.setDestinationEntity(143U);
    msg.x = 0.884154107284;
    msg.y = 0.362157134978;
    msg.z = 0.175557982517;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.249530209793);
    msg.setSource(16524U);
    msg.setSourceEntity(187U);
    msg.setDestination(59586U);
    msg.setDestinationEntity(95U);
    msg.x = 0.316392854251;
    msg.y = 0.961013047891;
    msg.z = 0.850326148838;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.320036326679);
    msg.setSource(12156U);
    msg.setSourceEntity(111U);
    msg.setDestination(48058U);
    msg.setDestinationEntity(118U);
    msg.x = 0.60548763988;
    msg.y = 0.309285551845;
    msg.z = 0.144857647389;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.264661056387);
    msg.setSource(54596U);
    msg.setSourceEntity(178U);
    msg.setDestination(48015U);
    msg.setDestinationEntity(69U);
    msg.value = 0.839450040637;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.426001713014);
    msg.setSource(14250U);
    msg.setSourceEntity(155U);
    msg.setDestination(47868U);
    msg.setDestinationEntity(20U);
    msg.value = 0.286534691258;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.488022957588);
    msg.setSource(59072U);
    msg.setSourceEntity(88U);
    msg.setDestination(2773U);
    msg.setDestinationEntity(43U);
    msg.value = 0.0451082015147;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.0978629425685);
    msg.setSource(27154U);
    msg.setSourceEntity(5U);
    msg.setDestination(41124U);
    msg.setDestinationEntity(154U);
    msg.value = 0.0557434546463;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.579825188347);
    msg.setSource(7220U);
    msg.setSourceEntity(15U);
    msg.setDestination(56981U);
    msg.setDestinationEntity(196U);
    msg.value = 0.367465426882;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.308730359825);
    msg.setSource(63342U);
    msg.setSourceEntity(169U);
    msg.setDestination(54609U);
    msg.setDestinationEntity(182U);
    msg.value = 0.0921355648323;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.553293190522);
    msg.setSource(9650U);
    msg.setSourceEntity(103U);
    msg.setDestination(55004U);
    msg.setDestinationEntity(123U);
    msg.x = 0.0986094159353;
    msg.y = 0.0928643374049;
    msg.z = 0.469593988766;
    msg.phi = 0.389114885785;
    msg.theta = 0.0161154736912;
    msg.psi = 0.230683691054;
    msg.p = 0.950789692383;
    msg.q = 0.246254328098;
    msg.r = 0.46597053623;
    msg.u = 0.864634847642;
    msg.v = 0.207119299328;
    msg.w = 0.147034974479;
    msg.bias_psi = 0.835108822775;
    msg.bias_r = 0.603211446574;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.898037992794);
    msg.setSource(25282U);
    msg.setSourceEntity(205U);
    msg.setDestination(57945U);
    msg.setDestinationEntity(14U);
    msg.x = 0.795691837007;
    msg.y = 0.44114562475;
    msg.z = 0.395567876602;
    msg.phi = 0.146953726119;
    msg.theta = 0.592628290018;
    msg.psi = 0.229153333771;
    msg.p = 0.879867400162;
    msg.q = 0.898458123112;
    msg.r = 0.344506201325;
    msg.u = 0.572339673435;
    msg.v = 0.151266768834;
    msg.w = 0.49498982573;
    msg.bias_psi = 0.375860372591;
    msg.bias_r = 0.919929429852;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.527753579868);
    msg.setSource(54195U);
    msg.setSourceEntity(231U);
    msg.setDestination(34478U);
    msg.setDestinationEntity(143U);
    msg.x = 0.869846895008;
    msg.y = 0.813224456877;
    msg.z = 0.835090211628;
    msg.phi = 0.0958921586182;
    msg.theta = 0.287461913687;
    msg.psi = 0.259689081864;
    msg.p = 0.875454212884;
    msg.q = 0.220079096432;
    msg.r = 0.612808515662;
    msg.u = 0.744662515344;
    msg.v = 0.938658267569;
    msg.w = 0.477424277892;
    msg.bias_psi = 0.484716552906;
    msg.bias_r = 0.633262286805;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.700493511642);
    msg.setSource(48554U);
    msg.setSourceEntity(124U);
    msg.setDestination(4299U);
    msg.setDestinationEntity(14U);
    msg.bias_psi = 0.0578294982763;
    msg.bias_r = 0.96209965941;
    msg.cog = 0.995092525174;
    msg.cyaw = 0.410088094678;
    msg.lbl_rej_level = 0.750796734423;
    msg.gps_rej_level = 0.572419470431;
    msg.custom_x = 0.284673325207;
    msg.custom_y = 0.922229892773;
    msg.custom_z = 0.843092858711;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.754007849151);
    msg.setSource(24697U);
    msg.setSourceEntity(163U);
    msg.setDestination(17520U);
    msg.setDestinationEntity(103U);
    msg.bias_psi = 0.767727300749;
    msg.bias_r = 0.905598903441;
    msg.cog = 0.510855853845;
    msg.cyaw = 0.674506602663;
    msg.lbl_rej_level = 0.830130180121;
    msg.gps_rej_level = 0.9326039824;
    msg.custom_x = 0.406960571322;
    msg.custom_y = 0.710678008294;
    msg.custom_z = 0.175533419127;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.596835327917);
    msg.setSource(33406U);
    msg.setSourceEntity(165U);
    msg.setDestination(55005U);
    msg.setDestinationEntity(196U);
    msg.bias_psi = 0.495884188362;
    msg.bias_r = 0.990833822399;
    msg.cog = 0.0366432124397;
    msg.cyaw = 0.680494325078;
    msg.lbl_rej_level = 0.283558338484;
    msg.gps_rej_level = 0.32709142932;
    msg.custom_x = 0.957522339279;
    msg.custom_y = 0.329965053448;
    msg.custom_z = 0.60548701553;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.982394855038);
    msg.setSource(34426U);
    msg.setSourceEntity(24U);
    msg.setDestination(2819U);
    msg.setDestinationEntity(60U);
    msg.utc_time = 0.442185981795;
    msg.reason = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.841119909607);
    msg.setSource(59426U);
    msg.setSourceEntity(96U);
    msg.setDestination(57608U);
    msg.setDestinationEntity(196U);
    msg.utc_time = 0.387784199698;
    msg.reason = 99U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.259717995743);
    msg.setSource(55833U);
    msg.setSourceEntity(51U);
    msg.setDestination(31528U);
    msg.setDestinationEntity(186U);
    msg.utc_time = 0.531505080747;
    msg.reason = 99U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.130395090872);
    msg.setSource(35446U);
    msg.setSourceEntity(48U);
    msg.setDestination(32280U);
    msg.setDestinationEntity(20U);
    msg.id = 116U;
    msg.range = 0.802715706115;
    msg.acceptance = 16U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.28696354204);
    msg.setSource(42997U);
    msg.setSourceEntity(74U);
    msg.setDestination(31683U);
    msg.setDestinationEntity(80U);
    msg.id = 182U;
    msg.range = 0.623766660056;
    msg.acceptance = 119U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.678925961284);
    msg.setSource(55822U);
    msg.setSourceEntity(198U);
    msg.setDestination(47148U);
    msg.setDestinationEntity(90U);
    msg.id = 229U;
    msg.range = 0.946542377401;
    msg.acceptance = 185U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.89048107159);
    msg.setSource(13656U);
    msg.setSourceEntity(6U);
    msg.setDestination(473U);
    msg.setDestinationEntity(103U);
    msg.type = 37U;
    msg.reason = 29U;
    msg.value = 0.925352464575;
    msg.timestep = 0.755384473475;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.581751957709);
    msg.setSource(6414U);
    msg.setSourceEntity(23U);
    msg.setDestination(19258U);
    msg.setDestinationEntity(134U);
    msg.type = 162U;
    msg.reason = 75U;
    msg.value = 0.0481218156976;
    msg.timestep = 0.779987522606;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.951011714727);
    msg.setSource(31411U);
    msg.setSourceEntity(133U);
    msg.setDestination(37568U);
    msg.setDestinationEntity(148U);
    msg.type = 2U;
    msg.reason = 115U;
    msg.value = 0.798806414582;
    msg.timestep = 0.383403349158;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.553982518544);
    msg.setSource(34915U);
    msg.setSourceEntity(137U);
    msg.setDestination(31342U);
    msg.setDestinationEntity(223U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OIEQNESSYTVPDFWJKOSSPGIPHNWDBLKSWMYGJAAYZNOIBETHIVVUWOGNGUXNKXTCVBQFEHQVURAWQDJWGQMTSKFSTFKJULKBKLVPMOQHROSBPDVYP");
    tmp_msg_0.lat = 0.726231730464;
    tmp_msg_0.lon = 0.953987998242;
    tmp_msg_0.depth = 0.0551312759106;
    tmp_msg_0.query_channel = 72U;
    tmp_msg_0.reply_channel = 253U;
    tmp_msg_0.transponder_delay = 206U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.793164629842;
    msg.y = 0.773364052773;
    msg.var_x = 0.640914922299;
    msg.var_y = 0.601336967784;
    msg.distance = 0.715409098962;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.704468526693);
    msg.setSource(6107U);
    msg.setSourceEntity(141U);
    msg.setDestination(37445U);
    msg.setDestinationEntity(151U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JPBHCTEPYPIWUBANWRGKJKRZSXLXZXRXEFQRQVICAUUCBQBHYAQCZVIXDOKFZIXCNKVEAQRQTJVJFCUNYJTVKYAKWFBPNAZFTILGDMEGNEVDRGNHZTHOAHQHIMLUDEBJDAQMELPRUOKSVXTZHSGWSMNPNSGNBEDLVLYSYEJTKHLYOOIIUBDCEJIHAMOWZPPOX");
    tmp_msg_0.lat = 0.0897779358932;
    tmp_msg_0.lon = 0.462587757748;
    tmp_msg_0.depth = 0.198268922992;
    tmp_msg_0.query_channel = 68U;
    tmp_msg_0.reply_channel = 122U;
    tmp_msg_0.transponder_delay = 50U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.825057923343;
    msg.y = 0.0844060366145;
    msg.var_x = 0.222601435988;
    msg.var_y = 0.378339028814;
    msg.distance = 0.13912117835;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.634450760463);
    msg.setSource(23621U);
    msg.setSourceEntity(239U);
    msg.setDestination(24750U);
    msg.setDestinationEntity(8U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TLNBCQJPWWGZNVYHKYUJVRZVNSXNCRNLSAPIDYRHBIFEVYLEDMBHCISKGJIFTWSTXVOUPWDXKUWBVAJEOGAYJRZUVAFXCHENKCTFUTRZHJHNUEBIWDSEYSDYROBYQGZKGUYQBZHFMPLFESRITFOVOSQVEOFZJMDHBPMQZFKPJDXTTIWRMICXXUF");
    tmp_msg_0.lat = 0.0960381031337;
    tmp_msg_0.lon = 0.386614228133;
    tmp_msg_0.depth = 0.985250324361;
    tmp_msg_0.query_channel = 231U;
    tmp_msg_0.reply_channel = 237U;
    tmp_msg_0.transponder_delay = 180U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.068432331811;
    msg.y = 0.877490826108;
    msg.var_x = 0.156972377419;
    msg.var_y = 0.290206386087;
    msg.distance = 0.146988690369;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.63934437374);
    msg.setSource(55515U);
    msg.setSourceEntity(139U);
    msg.setDestination(33772U);
    msg.setDestinationEntity(117U);
    msg.state = 239U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.986417183401);
    msg.setSource(27131U);
    msg.setSourceEntity(32U);
    msg.setDestination(4811U);
    msg.setDestinationEntity(8U);
    msg.state = 144U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.553248707086);
    msg.setSource(46252U);
    msg.setSourceEntity(194U);
    msg.setDestination(32425U);
    msg.setDestinationEntity(141U);
    msg.state = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.328847625216);
    msg.setSource(18100U);
    msg.setSourceEntity(49U);
    msg.setDestination(32876U);
    msg.setDestinationEntity(154U);
    msg.x = 0.781730802011;
    msg.y = 0.166488288692;
    msg.z = 0.49348428034;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.823642733949);
    msg.setSource(45143U);
    msg.setSourceEntity(83U);
    msg.setDestination(1622U);
    msg.setDestinationEntity(245U);
    msg.x = 0.127788437634;
    msg.y = 0.168532128756;
    msg.z = 0.555122629448;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.530760583744);
    msg.setSource(44649U);
    msg.setSourceEntity(161U);
    msg.setDestination(35805U);
    msg.setDestinationEntity(84U);
    msg.x = 0.090461279967;
    msg.y = 0.100244893341;
    msg.z = 0.72555827556;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.491429856635);
    msg.setSource(18908U);
    msg.setSourceEntity(34U);
    msg.setDestination(31392U);
    msg.setDestinationEntity(33U);
    msg.va = 0.202784241763;
    msg.aoa = 0.781190074567;
    msg.ssa = 0.19388957425;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.926528084391);
    msg.setSource(47110U);
    msg.setSourceEntity(165U);
    msg.setDestination(63119U);
    msg.setDestinationEntity(152U);
    msg.va = 0.299649409501;
    msg.aoa = 0.864965353876;
    msg.ssa = 0.911545187575;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.0200982279037);
    msg.setSource(45871U);
    msg.setSourceEntity(243U);
    msg.setDestination(37258U);
    msg.setDestinationEntity(123U);
    msg.va = 0.00968889044152;
    msg.aoa = 0.662078184544;
    msg.ssa = 0.600188797272;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.136354487662);
    msg.setSource(41150U);
    msg.setSourceEntity(90U);
    msg.setDestination(27666U);
    msg.setDestinationEntity(194U);
    msg.value = 0.535618911552;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.740562834095);
    msg.setSource(35528U);
    msg.setSourceEntity(88U);
    msg.setDestination(51233U);
    msg.setDestinationEntity(195U);
    msg.value = 0.0287187870953;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.0985900596639);
    msg.setSource(57968U);
    msg.setSourceEntity(185U);
    msg.setDestination(61325U);
    msg.setDestinationEntity(224U);
    msg.value = 0.990254843437;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.0665334657332);
    msg.setSource(50194U);
    msg.setSourceEntity(202U);
    msg.setDestination(8209U);
    msg.setDestinationEntity(84U);
    msg.value = 0.732818866396;
    msg.z_units = 11U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.635676906719);
    msg.setSource(36632U);
    msg.setSourceEntity(41U);
    msg.setDestination(24006U);
    msg.setDestinationEntity(85U);
    msg.value = 0.658884460142;
    msg.z_units = 222U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.104284934986);
    msg.setSource(38456U);
    msg.setSourceEntity(201U);
    msg.setDestination(63797U);
    msg.setDestinationEntity(83U);
    msg.value = 0.524368581038;
    msg.z_units = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.51348911158);
    msg.setSource(27237U);
    msg.setSourceEntity(180U);
    msg.setDestination(48747U);
    msg.setDestinationEntity(38U);
    msg.value = 0.243235465596;
    msg.speed_units = 153U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.0118755451687);
    msg.setSource(43022U);
    msg.setSourceEntity(90U);
    msg.setDestination(14416U);
    msg.setDestinationEntity(158U);
    msg.value = 0.151257774728;
    msg.speed_units = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.414802044826);
    msg.setSource(30238U);
    msg.setSourceEntity(102U);
    msg.setDestination(2424U);
    msg.setDestinationEntity(78U);
    msg.value = 0.504139074979;
    msg.speed_units = 56U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.240390182027);
    msg.setSource(51791U);
    msg.setSourceEntity(139U);
    msg.setDestination(57117U);
    msg.setDestinationEntity(59U);
    msg.value = 0.459117712058;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.443575881841);
    msg.setSource(53689U);
    msg.setSourceEntity(227U);
    msg.setDestination(41440U);
    msg.setDestinationEntity(150U);
    msg.value = 0.939255597763;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.423532597717);
    msg.setSource(60514U);
    msg.setSourceEntity(139U);
    msg.setDestination(18491U);
    msg.setDestinationEntity(215U);
    msg.value = 0.996409502237;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.480332421301);
    msg.setSource(51879U);
    msg.setSourceEntity(236U);
    msg.setDestination(58599U);
    msg.setDestinationEntity(193U);
    msg.value = 0.338988707479;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.626891665493);
    msg.setSource(51318U);
    msg.setSourceEntity(254U);
    msg.setDestination(34264U);
    msg.setDestinationEntity(188U);
    msg.value = 0.108477834785;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.653194687254);
    msg.setSource(20843U);
    msg.setSourceEntity(73U);
    msg.setDestination(55515U);
    msg.setDestinationEntity(244U);
    msg.value = 0.24062172327;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.361496769724);
    msg.setSource(48109U);
    msg.setSourceEntity(89U);
    msg.setDestination(31845U);
    msg.setDestinationEntity(10U);
    msg.value = 0.0164667699306;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.387901137043);
    msg.setSource(26445U);
    msg.setSourceEntity(205U);
    msg.setDestination(22502U);
    msg.setDestinationEntity(4U);
    msg.value = 0.907872311476;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.549376638168);
    msg.setSource(14235U);
    msg.setSourceEntity(18U);
    msg.setDestination(49847U);
    msg.setDestinationEntity(254U);
    msg.value = 0.727737827605;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.581322890571);
    msg.setSource(59764U);
    msg.setSourceEntity(176U);
    msg.setDestination(9389U);
    msg.setDestinationEntity(100U);
    msg.path_ref = 3245202219U;
    msg.start_lat = 0.163903835134;
    msg.start_lon = 0.91922643837;
    msg.start_z = 0.826017628625;
    msg.start_z_units = 159U;
    msg.end_lat = 0.909928041336;
    msg.end_lon = 0.432379986114;
    msg.end_z = 0.307004814258;
    msg.end_z_units = 114U;
    msg.speed = 0.0459547327104;
    msg.speed_units = 121U;
    msg.lradius = 0.552555974483;
    msg.flags = 81U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.80009859775);
    msg.setSource(15989U);
    msg.setSourceEntity(190U);
    msg.setDestination(21894U);
    msg.setDestinationEntity(106U);
    msg.path_ref = 2043723988U;
    msg.start_lat = 0.224692692102;
    msg.start_lon = 0.174781771779;
    msg.start_z = 0.0786157097301;
    msg.start_z_units = 137U;
    msg.end_lat = 0.997797932934;
    msg.end_lon = 0.898062314197;
    msg.end_z = 0.365075174186;
    msg.end_z_units = 146U;
    msg.speed = 0.0278082297806;
    msg.speed_units = 153U;
    msg.lradius = 0.222870029658;
    msg.flags = 15U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.79844946013);
    msg.setSource(49407U);
    msg.setSourceEntity(245U);
    msg.setDestination(8036U);
    msg.setDestinationEntity(84U);
    msg.path_ref = 1296047903U;
    msg.start_lat = 0.274002008724;
    msg.start_lon = 0.331963525414;
    msg.start_z = 0.806215778245;
    msg.start_z_units = 204U;
    msg.end_lat = 0.499329723884;
    msg.end_lon = 0.830575202252;
    msg.end_z = 0.50535358767;
    msg.end_z_units = 157U;
    msg.speed = 0.0531855848475;
    msg.speed_units = 190U;
    msg.lradius = 0.238194335703;
    msg.flags = 203U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.0395102790461);
    msg.setSource(62587U);
    msg.setSourceEntity(74U);
    msg.setDestination(1034U);
    msg.setDestinationEntity(159U);
    msg.x = 0.617995661667;
    msg.y = 0.0241966050886;
    msg.z = 0.159186065771;
    msg.k = 0.576327509233;
    msg.m = 0.397282892283;
    msg.n = 0.628150405937;
    msg.flags = 100U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.962668375767);
    msg.setSource(39355U);
    msg.setSourceEntity(63U);
    msg.setDestination(33652U);
    msg.setDestinationEntity(72U);
    msg.x = 0.978965038265;
    msg.y = 0.988784305601;
    msg.z = 0.900485796651;
    msg.k = 0.659091096048;
    msg.m = 0.196078635886;
    msg.n = 0.0440763157651;
    msg.flags = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.543058566294);
    msg.setSource(22335U);
    msg.setSourceEntity(72U);
    msg.setDestination(64182U);
    msg.setDestinationEntity(205U);
    msg.x = 0.053949957345;
    msg.y = 0.437210490847;
    msg.z = 0.404686248585;
    msg.k = 0.396190826305;
    msg.m = 0.209911729884;
    msg.n = 0.0341799607277;
    msg.flags = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.0393142213414);
    msg.setSource(875U);
    msg.setSourceEntity(189U);
    msg.setDestination(22367U);
    msg.setDestinationEntity(227U);
    msg.value = 0.687644991221;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.228192649613);
    msg.setSource(53735U);
    msg.setSourceEntity(71U);
    msg.setDestination(30341U);
    msg.setDestinationEntity(43U);
    msg.value = 0.701223302616;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.345937082958);
    msg.setSource(10225U);
    msg.setSourceEntity(225U);
    msg.setDestination(41450U);
    msg.setDestinationEntity(163U);
    msg.value = 0.532176839914;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.0744052647583);
    msg.setSource(63179U);
    msg.setSourceEntity(140U);
    msg.setDestination(1733U);
    msg.setDestinationEntity(45U);
    msg.u = 0.928364561521;
    msg.v = 0.589086163679;
    msg.w = 0.846381027246;
    msg.p = 0.167202925081;
    msg.q = 0.747263393557;
    msg.r = 0.0958211771183;
    msg.flags = 23U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.167827196497);
    msg.setSource(30241U);
    msg.setSourceEntity(169U);
    msg.setDestination(38132U);
    msg.setDestinationEntity(149U);
    msg.u = 0.0363802368541;
    msg.v = 0.92935983177;
    msg.w = 0.760257561803;
    msg.p = 0.680106002225;
    msg.q = 0.694306860921;
    msg.r = 0.128988636228;
    msg.flags = 104U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.46317779091);
    msg.setSource(25479U);
    msg.setSourceEntity(195U);
    msg.setDestination(37382U);
    msg.setDestinationEntity(102U);
    msg.u = 0.235937425747;
    msg.v = 0.580012458612;
    msg.w = 0.683358954529;
    msg.p = 0.16956628497;
    msg.q = 0.775070341047;
    msg.r = 0.821677165184;
    msg.flags = 113U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.0562081645221);
    msg.setSource(10238U);
    msg.setSourceEntity(165U);
    msg.setDestination(63509U);
    msg.setDestinationEntity(102U);
    msg.path_ref = 2106066348U;
    msg.start_lat = 0.961487259154;
    msg.start_lon = 0.370018108835;
    msg.start_z = 0.389477057768;
    msg.start_z_units = 59U;
    msg.end_lat = 0.960991298476;
    msg.end_lon = 0.424211623994;
    msg.end_z = 0.243872287475;
    msg.end_z_units = 91U;
    msg.lradius = 0.291348693385;
    msg.flags = 88U;
    msg.x = 0.175572697073;
    msg.y = 0.225138613274;
    msg.z = 0.126396700624;
    msg.vx = 0.253902130948;
    msg.vy = 0.503145102674;
    msg.vz = 0.753793953821;
    msg.course_error = 0.422459914437;
    msg.eta = 4246U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.786318954544);
    msg.setSource(22132U);
    msg.setSourceEntity(182U);
    msg.setDestination(53514U);
    msg.setDestinationEntity(70U);
    msg.path_ref = 4254302165U;
    msg.start_lat = 0.55350500956;
    msg.start_lon = 0.801599328138;
    msg.start_z = 0.790784673899;
    msg.start_z_units = 104U;
    msg.end_lat = 0.935424939746;
    msg.end_lon = 0.480490621881;
    msg.end_z = 0.32229184678;
    msg.end_z_units = 114U;
    msg.lradius = 0.552356127779;
    msg.flags = 18U;
    msg.x = 0.0154240204817;
    msg.y = 0.814825050595;
    msg.z = 0.746381292761;
    msg.vx = 0.461953139383;
    msg.vy = 0.177657937725;
    msg.vz = 0.122518792015;
    msg.course_error = 0.115053656142;
    msg.eta = 53786U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.0901196648896);
    msg.setSource(11872U);
    msg.setSourceEntity(209U);
    msg.setDestination(14754U);
    msg.setDestinationEntity(154U);
    msg.path_ref = 1423984748U;
    msg.start_lat = 0.497115255951;
    msg.start_lon = 0.162546786414;
    msg.start_z = 0.0395524272847;
    msg.start_z_units = 127U;
    msg.end_lat = 0.2247922658;
    msg.end_lon = 0.482258698729;
    msg.end_z = 0.600329534408;
    msg.end_z_units = 197U;
    msg.lradius = 0.612420631277;
    msg.flags = 114U;
    msg.x = 0.559858403664;
    msg.y = 0.928670718316;
    msg.z = 0.0621220343548;
    msg.vx = 0.310559350484;
    msg.vy = 0.431253417137;
    msg.vz = 0.617945664971;
    msg.course_error = 0.722336840526;
    msg.eta = 8470U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.94468832049);
    msg.setSource(46552U);
    msg.setSourceEntity(66U);
    msg.setDestination(166U);
    msg.setDestinationEntity(61U);
    msg.k = 0.567602690184;
    msg.m = 0.909510269127;
    msg.n = 0.577393790174;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.955588733141);
    msg.setSource(6346U);
    msg.setSourceEntity(172U);
    msg.setDestination(1184U);
    msg.setDestinationEntity(77U);
    msg.k = 0.500153906952;
    msg.m = 0.627378821333;
    msg.n = 0.315040132032;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.521436582482);
    msg.setSource(38779U);
    msg.setSourceEntity(73U);
    msg.setDestination(41065U);
    msg.setDestinationEntity(196U);
    msg.k = 0.559962977569;
    msg.m = 0.486194836869;
    msg.n = 0.753309829575;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.239556926604);
    msg.setSource(59115U);
    msg.setSourceEntity(31U);
    msg.setDestination(9901U);
    msg.setDestinationEntity(234U);
    msg.p = 0.500468858248;
    msg.i = 0.795360372717;
    msg.d = 0.973431355594;
    msg.a = 0.204844161266;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.198852055929);
    msg.setSource(28710U);
    msg.setSourceEntity(121U);
    msg.setDestination(33504U);
    msg.setDestinationEntity(141U);
    msg.p = 0.542001353673;
    msg.i = 0.821680966576;
    msg.d = 0.344628634715;
    msg.a = 0.344173814795;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.732865288001);
    msg.setSource(54977U);
    msg.setSourceEntity(205U);
    msg.setDestination(64336U);
    msg.setDestinationEntity(74U);
    msg.p = 0.525824138988;
    msg.i = 0.0174163044635;
    msg.d = 0.923573448646;
    msg.a = 0.0974879316761;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.850687050277);
    msg.setSource(16869U);
    msg.setSourceEntity(249U);
    msg.setDestination(37038U);
    msg.setDestinationEntity(64U);
    msg.op = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.449383514477);
    msg.setSource(46258U);
    msg.setSourceEntity(109U);
    msg.setDestination(52202U);
    msg.setDestinationEntity(226U);
    msg.op = 108U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.573886737892);
    msg.setSource(11659U);
    msg.setSourceEntity(207U);
    msg.setDestination(59552U);
    msg.setDestinationEntity(214U);
    msg.op = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.161554260217);
    msg.setSource(58384U);
    msg.setSourceEntity(133U);
    msg.setDestination(22130U);
    msg.setDestinationEntity(111U);
    msg.x = 0.81227118984;
    msg.y = 0.420435231475;
    msg.z = 0.78222452838;
    msg.vx = 0.943646128853;
    msg.vy = 0.967720450787;
    msg.vz = 0.136297786161;
    msg.ax = 0.727670710491;
    msg.ay = 0.775109880617;
    msg.az = 0.465170170507;
    msg.flags = 43827U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.523814049815);
    msg.setSource(15829U);
    msg.setSourceEntity(64U);
    msg.setDestination(16018U);
    msg.setDestinationEntity(187U);
    msg.x = 0.989125665548;
    msg.y = 0.512882182049;
    msg.z = 0.818341970653;
    msg.vx = 0.531176145059;
    msg.vy = 0.70038870579;
    msg.vz = 0.24822847674;
    msg.ax = 0.467200566228;
    msg.ay = 0.0260377607048;
    msg.az = 0.188939604906;
    msg.flags = 15723U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.64286012393);
    msg.setSource(35968U);
    msg.setSourceEntity(118U);
    msg.setDestination(32685U);
    msg.setDestinationEntity(189U);
    msg.x = 0.60859788608;
    msg.y = 0.214731859377;
    msg.z = 0.431052442845;
    msg.vx = 0.0529952511112;
    msg.vy = 0.291517682215;
    msg.vz = 0.231026963371;
    msg.ax = 0.908111877076;
    msg.ay = 0.57737454026;
    msg.az = 0.642878769161;
    msg.flags = 14441U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.2282782989);
    msg.setSource(13833U);
    msg.setSourceEntity(152U);
    msg.setDestination(30770U);
    msg.setDestinationEntity(200U);
    msg.value = 0.672634852095;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.137613359423);
    msg.setSource(20010U);
    msg.setSourceEntity(50U);
    msg.setDestination(19396U);
    msg.setDestinationEntity(113U);
    msg.value = 0.307534493672;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.431623231796);
    msg.setSource(35148U);
    msg.setSourceEntity(77U);
    msg.setDestination(43708U);
    msg.setDestinationEntity(15U);
    msg.value = 0.427071770562;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.655414292874);
    msg.setSource(13235U);
    msg.setSourceEntity(17U);
    msg.setDestination(38356U);
    msg.setDestinationEntity(120U);
    msg.timeout = 21638U;
    msg.lat = 0.22299240337;
    msg.lon = 0.847063512299;
    msg.z = 0.902734371566;
    msg.z_units = 115U;
    msg.speed = 0.37844400434;
    msg.speed_units = 49U;
    msg.roll = 0.326858776169;
    msg.pitch = 0.876206721247;
    msg.yaw = 0.730124000971;
    msg.custom.assign("DAMSPTMQHNIEMCARFOZKITMWNBRKEEPONPZFCWEQLDBJGWNNZHUIHYOF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.912530790993);
    msg.setSource(44050U);
    msg.setSourceEntity(73U);
    msg.setDestination(14347U);
    msg.setDestinationEntity(25U);
    msg.timeout = 11036U;
    msg.lat = 0.558211584758;
    msg.lon = 0.164073536417;
    msg.z = 0.512876918437;
    msg.z_units = 83U;
    msg.speed = 0.464848998263;
    msg.speed_units = 251U;
    msg.roll = 0.886524393284;
    msg.pitch = 0.412410535474;
    msg.yaw = 0.654206780474;
    msg.custom.assign("VWLHGTIIGDCOQGTQXQGBJFLKDROTZFAFFIOYEGDYFJDHCVNZYZUJLZXTJKWPEBPLHINSKZUDNSQBYAVRFBUZJGJWMSPDVMCZOOUACFCCLRAIGFGTKMQGUZQJJORKBPYZXSZGDAMOIXIJDHSNDVETECQVANSRFCTXKAMOBDWKBPLUWNWRXRTXXSHKHKHHLWFSBIQMIWHNAESXEWQBLOPXEVYNTEROYQWULSHRRVCUBV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.932597427618);
    msg.setSource(12097U);
    msg.setSourceEntity(222U);
    msg.setDestination(18576U);
    msg.setDestinationEntity(106U);
    msg.timeout = 45065U;
    msg.lat = 0.693241842428;
    msg.lon = 0.0960623947182;
    msg.z = 0.532512123543;
    msg.z_units = 12U;
    msg.speed = 0.71075248701;
    msg.speed_units = 238U;
    msg.roll = 0.205772724587;
    msg.pitch = 0.0784095963931;
    msg.yaw = 0.51235887707;
    msg.custom.assign("IOKXZPYLXGPSFQPBEYCZUQDOEAWACXQWUQICSBNMGZONIRQGJKJDFWVNAKOQMDBURHBQMSLPEGGIVRBRVJUXATEMQXMJGGHCULTWNKADLEVTSHRZEGOAHCKKXULDYVVASSHOYBYKWPEZETFALYJKOIFPJLTQW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.0458249532386);
    msg.setSource(24831U);
    msg.setSourceEntity(102U);
    msg.setDestination(21846U);
    msg.setDestinationEntity(55U);
    msg.timeout = 51030U;
    msg.lat = 0.886711657615;
    msg.lon = 0.181626260593;
    msg.z = 0.0183144075479;
    msg.z_units = 21U;
    msg.speed = 0.0427919127594;
    msg.speed_units = 33U;
    msg.duration = 1273U;
    msg.radius = 0.240804801921;
    msg.flags = 15U;
    msg.custom.assign("UERCZYQUYVLGHZCMKRIXPGOWQBZVKJVHPTNAIZEOEEOBTIHFRKQISZGVEMSGURPTTXJNONTSWRNXJMABGCIKPSZFKYABEU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.34162239405);
    msg.setSource(5598U);
    msg.setSourceEntity(58U);
    msg.setDestination(50705U);
    msg.setDestinationEntity(52U);
    msg.timeout = 33457U;
    msg.lat = 0.830027355676;
    msg.lon = 0.0724006723904;
    msg.z = 0.741293474741;
    msg.z_units = 94U;
    msg.speed = 0.236280912272;
    msg.speed_units = 155U;
    msg.duration = 58750U;
    msg.radius = 0.826329096909;
    msg.flags = 115U;
    msg.custom.assign("DGLXYGZLSJNZOGMJHIYIIFNLZAREVXWMVWE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.464850009237);
    msg.setSource(20895U);
    msg.setSourceEntity(162U);
    msg.setDestination(21339U);
    msg.setDestinationEntity(136U);
    msg.timeout = 16892U;
    msg.lat = 0.803722560088;
    msg.lon = 0.418681131881;
    msg.z = 0.668919386163;
    msg.z_units = 250U;
    msg.speed = 0.779036367037;
    msg.speed_units = 82U;
    msg.duration = 16145U;
    msg.radius = 0.648567940626;
    msg.flags = 44U;
    msg.custom.assign("HCAYWAFBNJZPIMBHUOCCOYUUMDLKYEOGBWJCHZLICBPATVQESPVAEKNZVTWKLRMMHQRONMXKQNYOSAWEJQFUASBYFSJCJXTVLMPLZO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.985200984651);
    msg.setSource(42280U);
    msg.setSourceEntity(162U);
    msg.setDestination(54324U);
    msg.setDestinationEntity(201U);
    msg.custom.assign("MPRFHVTFNXJICOZYPODVTZMARKUKCGFBBTQBCVORHEAODKIAPQTNPVUJVZORCQSLGVQCAWDZOEEASSBIZMIUUYLSSRMIMMBQUFZDXFSJAGVHTUUSJFQJILCYXTULINJTWK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.406131723854);
    msg.setSource(43195U);
    msg.setSourceEntity(201U);
    msg.setDestination(14050U);
    msg.setDestinationEntity(62U);
    msg.custom.assign("RPHJUOQQFKHNJUDCDRFGRNUYSRXPVYYANMEHMCQHWLZTKQEUXISJLLJDRUFXEWTJTOD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.0337866708245);
    msg.setSource(51359U);
    msg.setSourceEntity(59U);
    msg.setDestination(55438U);
    msg.setDestinationEntity(161U);
    msg.custom.assign("ZYRYGLXCVFQFTJDUBPHZBNZSMANPLVRFPXQRUQKAMIHFYQNMLXGDIJCIIGFKGBDWJMPYTJDIWCZCPWTRIHBCRSXBDLOVBVOQMFUEOTAXPDNAFNABNPMAVMXOTAGYLWPBNUMPQWJLCKZJSSRWIQRNUSECWGEOGEUEXTGAFOCVJNJOIKFBEGOHJDJQHTWSZEQYXOHSEHNBZKTXKQSKOHVVWUAVVUR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.0957413948976);
    msg.setSource(32664U);
    msg.setSourceEntity(81U);
    msg.setDestination(50666U);
    msg.setDestinationEntity(99U);
    msg.timeout = 63837U;
    msg.lat = 0.00321419438381;
    msg.lon = 0.901980296048;
    msg.z = 0.130307822127;
    msg.z_units = 79U;
    msg.duration = 29212U;
    msg.speed = 0.892983292317;
    msg.speed_units = 142U;
    msg.type = 157U;
    msg.radius = 0.576897708131;
    msg.length = 0.939074104024;
    msg.bearing = 0.708646830052;
    msg.direction = 96U;
    msg.custom.assign("YEKKOKKDSUORGXGNEAFQMQJETDNVQGEXDBXMWHROCULYYLRIUVDSNMYAKVZRDVHPENKOWQHWGAJXUFLFNVWMO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.179050166419);
    msg.setSource(37232U);
    msg.setSourceEntity(16U);
    msg.setDestination(62489U);
    msg.setDestinationEntity(175U);
    msg.timeout = 13728U;
    msg.lat = 0.604545342344;
    msg.lon = 0.733788672565;
    msg.z = 0.892493450788;
    msg.z_units = 248U;
    msg.duration = 44092U;
    msg.speed = 0.610026484477;
    msg.speed_units = 94U;
    msg.type = 74U;
    msg.radius = 0.978526870663;
    msg.length = 0.451504566335;
    msg.bearing = 0.889634979427;
    msg.direction = 127U;
    msg.custom.assign("YCYTQAMYBQHIIXRCGWETFNPPAOFKTMSRRKHIVNPQOBZKBMKCTGOBEZDGLIEEKSKFAKLFHQNHWEGGHIWLDPNRQEKFXEJLCJVRBYIDWNXZAGXDUYQAVAXNBAPMNNOZFOTORUTOSDVGJHSXSVQCJXEKLIYRWCYSMCYZLWYDMZLMDXVQWPTJUCJRHFJBOFXUERNLVUBJSVZHRMCUWATCDEBHFSUPKMUPUZPZIWTGDFIBPMAXVLJNZQWAOYDLIGTG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.498688076454);
    msg.setSource(9138U);
    msg.setSourceEntity(203U);
    msg.setDestination(31856U);
    msg.setDestinationEntity(104U);
    msg.timeout = 29157U;
    msg.lat = 0.662414151423;
    msg.lon = 0.417606780166;
    msg.z = 0.786106732931;
    msg.z_units = 75U;
    msg.duration = 36932U;
    msg.speed = 0.541053969969;
    msg.speed_units = 250U;
    msg.type = 137U;
    msg.radius = 0.55763762609;
    msg.length = 0.673844728322;
    msg.bearing = 0.891484003948;
    msg.direction = 85U;
    msg.custom.assign("APDXRRATBWLZIKWUNEWQUWGAKDBPHSNWBQADETPMLEXAUQSKRIMJCJYDPEBLUPGMLXOBXHJRFPYVVVMAVYJBYJCDRSAAHQOOCFHGXIZUXCBKYFJMFXBOWSDVJWATITNVQWUOCZVDNHPTGGRUNMLMDGMZNOHTSYYLBXXTTGSCFZOXCRNFFGYKWHIKNCQZPNLVZISIOHGFKNQEDPFTMHJQLG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.16368041333);
    msg.setSource(45948U);
    msg.setSourceEntity(139U);
    msg.setDestination(61570U);
    msg.setDestinationEntity(207U);
    msg.duration = 60241U;
    msg.custom.assign("IGGUKLBOCYXQUSTORRWEMNORDWCRVJWGEMXTAKJURSPSUPRLMSETIGWNPZDKGQXTZCNAXBPCLQUPQYMTOMAINYFKHHVSVIKZLZBYWXTXYLVZUTTQENVRNSGNEJQZZWARYDATPOVCMOLYVFMAIDABKIKVTCGSBJWVJIBMMOZJYNACCFHHMH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.794927558825);
    msg.setSource(56277U);
    msg.setSourceEntity(15U);
    msg.setDestination(4287U);
    msg.setDestinationEntity(67U);
    msg.duration = 56484U;
    msg.custom.assign("KZFSNDHWWLRCTGXILFDWVBQTEDTLRFVHDWSYNGXOGYIVKVYBBXOMJHSBECATJGOCCBYXHTDATEFUJIXKFFTHZGIHHGIPZKMPLDPQBUANWEMAXJWPSOJLMGMRCKLUDQJYMJAYINEXPKIOQIZRQTCZCYWMUQVVORUZKVCKAFNOUDXHKBPYIJZDRELPNGTFRQBSBVYUMLDOXVMCZBUEUAGRSWRKLXNCQZEQWQFYZIHJSUMOJFESHAVPNPTRGNAWS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.991451897263);
    msg.setSource(47798U);
    msg.setSourceEntity(59U);
    msg.setDestination(55497U);
    msg.setDestinationEntity(246U);
    msg.duration = 56677U;
    msg.custom.assign("HGXTRAUFEVSIHKYEZCUVXUMKHEMDRVNUQKJGDPDSCLZBECAHZXMPWWNQMQMLVMYTWADUOKHZKGZBKNNBWOZWYFCLVMSBURPHSVGWUFNJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.0719695303285);
    msg.setSource(4415U);
    msg.setSourceEntity(224U);
    msg.setDestination(56240U);
    msg.setDestinationEntity(131U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.000942379327584;
    msg.control.set(tmp_msg_0);
    msg.duration = 55546U;
    msg.custom.assign("RRUZPPHNQKCXVBZRFBODDGMYQDHNZVYDMUSOBCOWGIFIQFPUQJETQTCTAOESNLBHEOAMXCMDMESSSUMXIPDODJYWAGOAJWTIJFDLUQYIXCZJNFIARHDKPIZEHXEHCSAGFLWRVGYRSTOLVWKPHNAEVVYOHNFHXYSURKBVNEITPDJGZTWWGUUNTBWXBJLGMXFZVLGJVTEAZNAMJHQFYBLGIUKYFBTLCZRJKKQKQQAXCKLSXZUCRRYESWWB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.715281261398);
    msg.setSource(5699U);
    msg.setSourceEntity(13U);
    msg.setDestination(31929U);
    msg.setDestinationEntity(45U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.113091512748;
    msg.control.set(tmp_msg_0);
    msg.duration = 56048U;
    msg.custom.assign("TTGZLCVIRDCRWWCZBVHAOUPPYGONCXDBNDXALPF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.191915192307);
    msg.setSource(31518U);
    msg.setSourceEntity(34U);
    msg.setDestination(22259U);
    msg.setDestinationEntity(56U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.398847243867;
    msg.control.set(tmp_msg_0);
    msg.duration = 53478U;
    msg.custom.assign("CVDJLQVNHGXYCNRWRZSIXAYKOUNKTVHVSDHHIKABTLDXUETNFRKCLVVUMUDQCRIJRYISACNKSRWVUBETWFZEQAYMBCYRVDXFPIZKWEWLTYPMRDZKTEEFTBRMHUQVFGQEFGBOBGANJPXSGACPDXMWPHJZGLILQQADZBNJGFECQOLOSMFPWTJQOXJHEKNYXIWPMZOPZBBWSSSCKAUOMPDDZLLSFMZIOYHCXUHRUO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.325886692257);
    msg.setSource(47596U);
    msg.setSourceEntity(89U);
    msg.setDestination(62964U);
    msg.setDestinationEntity(241U);
    msg.timeout = 64915U;
    msg.lat = 0.109385891091;
    msg.lon = 0.176110170621;
    msg.z = 0.300586175942;
    msg.z_units = 95U;
    msg.speed = 0.952490299789;
    msg.speed_units = 8U;
    msg.bearing = 0.932565151761;
    msg.cross_angle = 0.740120620172;
    msg.width = 0.546817405844;
    msg.length = 0.469561320127;
    msg.hstep = 0.0544962930825;
    msg.coff = 111U;
    msg.alternation = 71U;
    msg.flags = 162U;
    msg.custom.assign("MZVOKDSJOZGOUDKGXYIOQQCABRVCJWJJBKJUFIOJETFQLGNOXMRXWCSHQYWFNXQWZTGMPTVCLRRYZLBZBNNDYCMVEDYKQDEHXKAVAQKRFMRLAVBDZPNSZIEWCSSGUEJPVXUEOMLIIPKPMUONIAMSBCKHFRIXZMTPPDLJZDADUYPOZCUNNIKFLHUQHRBWUEQYWWXXSATBIHQGPTWKSTOFBEFRSVFSWBDGNJMTCHLEHHYGGVPN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.2584074301);
    msg.setSource(26299U);
    msg.setSourceEntity(139U);
    msg.setDestination(28535U);
    msg.setDestinationEntity(178U);
    msg.timeout = 50257U;
    msg.lat = 0.525526035703;
    msg.lon = 0.5900969802;
    msg.z = 0.554937818032;
    msg.z_units = 178U;
    msg.speed = 0.82307550809;
    msg.speed_units = 199U;
    msg.bearing = 0.266844519096;
    msg.cross_angle = 0.943838939477;
    msg.width = 0.503833863005;
    msg.length = 0.944641496815;
    msg.hstep = 0.427796667987;
    msg.coff = 95U;
    msg.alternation = 174U;
    msg.flags = 211U;
    msg.custom.assign("CEECGBPKPJQKYWETNUSARKLKDMBLLFJSKUCWQFLRIZLFYGXYIEZPTSQDCWWOQGJINFQFRTEONRSSZZVTAGRTZLIJZBVTHVPWLXSZFHNEYKOHUASWLMYORUVQJADMQCRVTRWBUVNFHSIGLJNOGFPVSBVGDXIHOEHXOXHIXAUJBDBHPMXJMUNFCCOTMMAA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.971810055121);
    msg.setSource(31757U);
    msg.setSourceEntity(85U);
    msg.setDestination(32826U);
    msg.setDestinationEntity(234U);
    msg.timeout = 44938U;
    msg.lat = 0.726025133726;
    msg.lon = 0.801349616469;
    msg.z = 0.59208181465;
    msg.z_units = 36U;
    msg.speed = 0.353897038351;
    msg.speed_units = 212U;
    msg.bearing = 0.727654423767;
    msg.cross_angle = 0.280543463432;
    msg.width = 0.906745184221;
    msg.length = 0.203202493079;
    msg.hstep = 0.921119824334;
    msg.coff = 115U;
    msg.alternation = 96U;
    msg.flags = 16U;
    msg.custom.assign("LEKACNJQHPNOET");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.781661007831);
    msg.setSource(60783U);
    msg.setSourceEntity(14U);
    msg.setDestination(65296U);
    msg.setDestinationEntity(249U);
    msg.timeout = 36659U;
    msg.lat = 0.135686666642;
    msg.lon = 0.0152873565807;
    msg.z = 0.00586522194959;
    msg.z_units = 30U;
    msg.speed = 0.377238907657;
    msg.speed_units = 121U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.578615909323;
    tmp_msg_0.y = 0.120505120167;
    tmp_msg_0.z = 0.865707480298;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YYWERUTDXWMDRBBUFEINMSKMOFQCMXGJLOQHEKGVHUTDCCILGSCPDGSBXJIGMUYLWSQICCOWREBWUXMHBDDZCFHRSBY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.863496483291);
    msg.setSource(48106U);
    msg.setSourceEntity(242U);
    msg.setDestination(40320U);
    msg.setDestinationEntity(46U);
    msg.timeout = 1289U;
    msg.lat = 0.459066258663;
    msg.lon = 0.287954460738;
    msg.z = 0.60510851212;
    msg.z_units = 42U;
    msg.speed = 0.265438550907;
    msg.speed_units = 101U;
    msg.custom.assign("IGCRJBLCFJXLWQDQUJEZVUPCUDZPDFBKZMMHINQICPERAGDOSEAEJIIOYIHUBJUHCLVECHSKWBBRRXWVXFMSDDKTVFXXKFERXMHROELXTKRBPZOUCYZNZFDBIQKANRTFTGGKQUVYBFHVOLMTWCTRMMYNNLFALVQOWCPARFSDA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.216968756111);
    msg.setSource(26159U);
    msg.setSourceEntity(26U);
    msg.setDestination(60456U);
    msg.setDestinationEntity(177U);
    msg.timeout = 20939U;
    msg.lat = 0.998916843135;
    msg.lon = 0.911289305476;
    msg.z = 0.200371220777;
    msg.z_units = 135U;
    msg.speed = 0.812972278894;
    msg.speed_units = 69U;
    msg.custom.assign("AHORQNQUSRFDYESWGSVYLLLBZDTSQEKBKSPAIXOGWNKOQURX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.613721656455);
    msg.setSource(21617U);
    msg.setSourceEntity(231U);
    msg.setDestination(4555U);
    msg.setDestinationEntity(136U);
    msg.x = 0.488326371114;
    msg.y = 0.304550364944;
    msg.z = 0.948526645412;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.739134927574);
    msg.setSource(45106U);
    msg.setSourceEntity(184U);
    msg.setDestination(64534U);
    msg.setDestinationEntity(147U);
    msg.x = 0.62314668315;
    msg.y = 0.520407421038;
    msg.z = 0.995118410191;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.117705295412);
    msg.setSource(34203U);
    msg.setSourceEntity(124U);
    msg.setDestination(52610U);
    msg.setDestinationEntity(186U);
    msg.x = 0.739034620419;
    msg.y = 0.204114536158;
    msg.z = 0.750309875265;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.923059457769);
    msg.setSource(4307U);
    msg.setSourceEntity(155U);
    msg.setDestination(29548U);
    msg.setDestinationEntity(132U);
    msg.timeout = 1288U;
    msg.lat = 0.785515709081;
    msg.lon = 0.562646777545;
    msg.z = 0.888221522245;
    msg.z_units = 40U;
    msg.amplitude = 0.269619834665;
    msg.pitch = 0.923046232339;
    msg.speed = 0.71091814599;
    msg.speed_units = 95U;
    msg.custom.assign("WQAEMVALXQMZYKKGKSPUVIIWFSEGLPYXJONEJYAFQKTGVLEFPPMMHDWGXDOBSINUWDCWWAYGBSZNZRCFRGBAHHYNOFLOXHWLEEHNMBSKCIIATVPDKKWMVXPQPUODTZDKZMAHRCJNCTEYJDQQYTNVHBPIGMRIQJRAXUQDELCLJEZPNJFJDUFCWUUJGOROSFSYZHTAYM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.716269916271);
    msg.setSource(54781U);
    msg.setSourceEntity(107U);
    msg.setDestination(16471U);
    msg.setDestinationEntity(192U);
    msg.timeout = 17989U;
    msg.lat = 0.203035129963;
    msg.lon = 0.461764953816;
    msg.z = 0.467721098106;
    msg.z_units = 11U;
    msg.amplitude = 0.865565619849;
    msg.pitch = 0.502293504796;
    msg.speed = 0.79396168454;
    msg.speed_units = 36U;
    msg.custom.assign("VCVOLNLYNEPWJYSVDHZBBRTKQFQTVEZK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.0559388827895);
    msg.setSource(2227U);
    msg.setSourceEntity(165U);
    msg.setDestination(53346U);
    msg.setDestinationEntity(109U);
    msg.timeout = 57116U;
    msg.lat = 0.658428621064;
    msg.lon = 0.827925582791;
    msg.z = 0.473869850402;
    msg.z_units = 140U;
    msg.amplitude = 0.740694645571;
    msg.pitch = 0.181321419737;
    msg.speed = 0.921235822273;
    msg.speed_units = 173U;
    msg.custom.assign("AIZWWAMKXCNSXYUHEDPFTELHXELOZQHMPVYVTIISZZYRWVTZCHGJYDMPMACQFCVNMFFMFALWTMCNQRADOLVLGVOIUNILELOPELUTUKYIPZOGGUWTKVVJKSDWWSXUAHDZQRLJPTSBNJQXI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.0129308737965);
    msg.setSource(54281U);
    msg.setSourceEntity(111U);
    msg.setDestination(25694U);
    msg.setDestinationEntity(208U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.928863318837);
    msg.setSource(51348U);
    msg.setSourceEntity(79U);
    msg.setDestination(3101U);
    msg.setDestinationEntity(148U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.786641343269);
    msg.setSource(44738U);
    msg.setSourceEntity(216U);
    msg.setDestination(7782U);
    msg.setDestinationEntity(103U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.746268227035);
    msg.setSource(25984U);
    msg.setSourceEntity(3U);
    msg.setDestination(9652U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.656835062419;
    msg.lon = 0.901724536159;
    msg.z = 0.378552077102;
    msg.z_units = 192U;
    msg.radius = 0.106789902798;
    msg.duration = 38277U;
    msg.speed = 0.0271108922238;
    msg.speed_units = 101U;
    msg.custom.assign("MKDHDQGNRAHEFDIQAW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.541016812934);
    msg.setSource(30259U);
    msg.setSourceEntity(47U);
    msg.setDestination(29624U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.128400721721;
    msg.lon = 0.416675741907;
    msg.z = 0.745637032045;
    msg.z_units = 129U;
    msg.radius = 0.399006471841;
    msg.duration = 20960U;
    msg.speed = 0.511363119803;
    msg.speed_units = 174U;
    msg.custom.assign("IEOYXOARTSNXLPVDPIVRFAMRJHDFMEIGNODNKCBGMMXNECSOVUBYFPRVBUEPRXSZFRTJNPDTMAIFWYOLFJEKYHAVFTYSEEKMHLKJCJMBSFACBRSQQDGVWCIVYCMQECITJUKCJYGIVCOQSEKZLZLOZXQGWQPBWZLKUZJBU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.792530181727);
    msg.setSource(7493U);
    msg.setSourceEntity(132U);
    msg.setDestination(29484U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.394911115584;
    msg.lon = 0.790759078362;
    msg.z = 0.0569367627925;
    msg.z_units = 95U;
    msg.radius = 0.770594047201;
    msg.duration = 16943U;
    msg.speed = 0.430507069908;
    msg.speed_units = 153U;
    msg.custom.assign("UFTDYABNDNPJTQOZHRUHOMBYCPQLAIVIFDTWFEFSQFOEZHGTEKXSGBIVMHSOYXQOANVDNBRYANXRLJBXTMVAGHTEUPFPJWTKCWCKPCXYYDHGVDLKXIULVHLGZYJACWDIQEEBSVPLMRGLSLXKMXVQWBJZNQUPGEFNXAW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.0752189032548);
    msg.setSource(19913U);
    msg.setSourceEntity(72U);
    msg.setDestination(3964U);
    msg.setDestinationEntity(88U);
    msg.timeout = 56661U;
    msg.flags = 66U;
    msg.lat = 0.952295869479;
    msg.lon = 0.348092694356;
    msg.start_z = 0.0411450811824;
    msg.start_z_units = 66U;
    msg.end_z = 0.183449066483;
    msg.end_z_units = 72U;
    msg.radius = 0.158592414397;
    msg.speed = 0.333880219105;
    msg.speed_units = 2U;
    msg.custom.assign("KVWVMKPKEQEWSZZTCHXEPSRDAYVYMHGVSKKXOQUXJJJHPBULSFVGBHFKITGEBIYRTNTINCXOLMNCQXMCARDQGAOQKIFQCYLFRFCBPNSQHQVQKOIETUE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.227030951356);
    msg.setSource(7981U);
    msg.setSourceEntity(214U);
    msg.setDestination(61783U);
    msg.setDestinationEntity(54U);
    msg.timeout = 59184U;
    msg.flags = 234U;
    msg.lat = 0.657266242319;
    msg.lon = 0.945494654773;
    msg.start_z = 0.394178232039;
    msg.start_z_units = 234U;
    msg.end_z = 0.129115869655;
    msg.end_z_units = 45U;
    msg.radius = 0.100193529226;
    msg.speed = 0.530463524417;
    msg.speed_units = 81U;
    msg.custom.assign("GHPSCSOGEEIDSYVSLUQFVXLZPBUYNAOXAOWURFZTVTQTQUCDECHZMKBCHWWSRWGTOFNPVHUUYMKMJHYWBFJKKAXPGGYCWCXQLIFNDJQFSAMSZMAFHVTBPMWKGYQSRDRNXQYXTKIJRYFRLERADNWIU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.147712055871);
    msg.setSource(32645U);
    msg.setSourceEntity(186U);
    msg.setDestination(4815U);
    msg.setDestinationEntity(164U);
    msg.timeout = 26094U;
    msg.flags = 159U;
    msg.lat = 0.0520115722097;
    msg.lon = 0.764441408967;
    msg.start_z = 0.0999321970905;
    msg.start_z_units = 216U;
    msg.end_z = 0.757028603943;
    msg.end_z_units = 253U;
    msg.radius = 0.851157313374;
    msg.speed = 0.515175050237;
    msg.speed_units = 124U;
    msg.custom.assign("JRHIFHRPWYFNSMPBDZGHTODOECYGHMVSYLAZFWHCWLNTEGFTMVYRSQENVERIYDDTJREOVAANIDMVKQSJEEZKIZUQTGIABJRSASQWZVNKCBFWBRPSPGRDLKKIZG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.573024832424);
    msg.setSource(7507U);
    msg.setSourceEntity(210U);
    msg.setDestination(35031U);
    msg.setDestinationEntity(202U);
    msg.timeout = 33749U;
    msg.lat = 0.728707925229;
    msg.lon = 0.270768005342;
    msg.z = 0.940213971612;
    msg.z_units = 234U;
    msg.speed = 0.203045787874;
    msg.speed_units = 149U;
    msg.custom.assign("OFFAUERZQHRKPOMMBVLATFZXKZCJNHINKQBJJFHXJMQCTORFHBVSPZODONNPCSFQKUULJMLCSMVMJUPWZKCHIDRUOYBTZTBREZASGEGHZWDQXPUAONMEFDSNTQEJV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.611647221602);
    msg.setSource(53448U);
    msg.setSourceEntity(96U);
    msg.setDestination(9068U);
    msg.setDestinationEntity(108U);
    msg.timeout = 14674U;
    msg.lat = 0.309265449355;
    msg.lon = 0.45239638189;
    msg.z = 0.922549551269;
    msg.z_units = 80U;
    msg.speed = 0.612013022234;
    msg.speed_units = 11U;
    msg.custom.assign("ABHZJISGPIDROXXYVZEGWWFDERZLVKXCDHTQSLGHWQBCZWULFLAHNNIPSEQORCWPUFJEFUQPKVDNZPMJOMONCCQRWGGCDYPOAYRJWTHMFFOHBGZYVOAMDFJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.730881500116);
    msg.setSource(53775U);
    msg.setSourceEntity(230U);
    msg.setDestination(17935U);
    msg.setDestinationEntity(32U);
    msg.timeout = 51578U;
    msg.lat = 0.480902591827;
    msg.lon = 0.361214248289;
    msg.z = 0.504354126367;
    msg.z_units = 193U;
    msg.speed = 0.19990428656;
    msg.speed_units = 45U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.466306696762;
    tmp_msg_0.y = 0.951798082717;
    tmp_msg_0.z = 0.221365031489;
    tmp_msg_0.t = 0.0163146995367;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RVOVLZFCEDUPVUUUPGSGPJCNRZIZXCLDNKBGGFPEFEBOGBSKSFEUNFQKGIAXWZIHYZKDQTAFHMTWITNOYXLMPEMAJWIRDZKIRAXWPGXHSBHHOWNJDWDLMJSKVVEJQJHEYJQNCPBWZMWYUNYSCVTBSQJDEZXGJDADXLICSLXAYMRXOQIMHNRVFTQIXQCOVTFHTFULPKVYBJKSWYLZKOTPMY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.925799544046);
    msg.setSource(59544U);
    msg.setSourceEntity(232U);
    msg.setDestination(62342U);
    msg.setDestinationEntity(189U);
    msg.x = 0.950988447552;
    msg.y = 0.816619213234;
    msg.z = 0.746276280612;
    msg.t = 0.0691389716762;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.018287309562);
    msg.setSource(58240U);
    msg.setSourceEntity(189U);
    msg.setDestination(64563U);
    msg.setDestinationEntity(83U);
    msg.x = 0.867467377077;
    msg.y = 0.513254626622;
    msg.z = 0.143419711156;
    msg.t = 0.587873430447;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.337510454559);
    msg.setSource(19461U);
    msg.setSourceEntity(45U);
    msg.setDestination(29299U);
    msg.setDestinationEntity(102U);
    msg.x = 0.206715686079;
    msg.y = 0.392885641605;
    msg.z = 0.856351842476;
    msg.t = 0.585531151016;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.953256076912);
    msg.setSource(50611U);
    msg.setSourceEntity(49U);
    msg.setDestination(44726U);
    msg.setDestinationEntity(87U);
    msg.timeout = 64154U;
    msg.name.assign("QVNGOCASQHVZFMNIRGYPRFDKXUG");
    msg.custom.assign("QNPQHTHEBUKJCMJOOYPEYMLTGJSKYXGVIFZMPFUDLRWXLADKZAAVKZQXFWQAMNQWSXJKAHMSBRYKCVFFONDJVTHVURBRBIUEPGNOBHAWJLEWESVRTJTDTXINRIZUGPYHOJNXLOTJDQWCCIYRLNVFCUNMVJDKXDGQFCSIZHEHISAGUBPXXETWLIZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.843036896216);
    msg.setSource(56665U);
    msg.setSourceEntity(196U);
    msg.setDestination(15956U);
    msg.setDestinationEntity(18U);
    msg.timeout = 41663U;
    msg.name.assign("HFODFVKHXTHXYOFOAYDUNNZTSMNADYBWMCDAWFJPVZQQPTWJLISZYDESFDVSCHCEWRKFTDZVMAUPQBLBRKJEQVQRIFXEGVKLNWUMLTJNHAJXRCHNXEWRXOIHBPSGRYUYQPHXVJFSXXSFRPKTGYLCIWGMCTLUBESCPVKLDCHEDCODTEZMFPOIUWJQZZAOIXMUZEKMNVYAQLCGQOPYIAWJGGJBAJBUMNYOMUGUSZBVSGTRNN");
    msg.custom.assign("JHGULUIDQKIBHLMEBWVXEPYNSGJQZHDMQVAICJETDQFYZCJLNSOFJJFKWCUSGZVOENNHOIKKYRMXLORSYICWDSEUGXFCRMKZLZMRJGWDBJSOVCTSQXMNKBZNJZCTWLYBIULDSETQTMVRRLGTNVDGXXBNAFAVLIPTHKWQAEQBPRHARTWFRRUNWPZGYGOQVHAUMUIOAPCBZXTKNPMWOYEXY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.332353047199);
    msg.setSource(7935U);
    msg.setSourceEntity(60U);
    msg.setDestination(2539U);
    msg.setDestinationEntity(56U);
    msg.timeout = 39116U;
    msg.name.assign("WVEOTSMPDYVHUGCEJMZRKKFJJCABSNSFKLQNABGPWSYAWCIFQOMMFVILQPQBQVBKLAPBTNRBUMRSWDWODJFE");
    msg.custom.assign("BVGXPKKSITWBALVFQVRZPDFPOWIAFSQFCEWCTFKYRTMJLEOGFENRDOEQQFHZDBYJUHSZEYINGBXESWNCCQIVJZYGJDPOXIVFFNZWMKRTZLSXUMCWIWJLQYQNUMSJRNOQWLBXUZZAPNBGIWGSLADIHHOXVPGUBAKCHTPBEURZYKKJDCUVA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.509064942868);
    msg.setSource(25349U);
    msg.setSourceEntity(193U);
    msg.setDestination(61108U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.3050771763;
    msg.lon = 0.737295087545;
    msg.z = 0.402570495419;
    msg.z_units = 104U;
    msg.speed = 0.482303680014;
    msg.speed_units = 200U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.156739434885;
    tmp_msg_0.y = 0.987305600257;
    tmp_msg_0.z = 0.123812842567;
    tmp_msg_0.t = 0.543863873127;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 47251U;
    tmp_msg_1.off_x = 0.264548285905;
    tmp_msg_1.off_y = 0.196801420756;
    tmp_msg_1.off_z = 0.500453897026;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.496355022217;
    msg.custom.assign("FGBDIDZNYNQOXRLLXZLSJIBKIZOOPPFGPJAUCVUNTSMAAZISNDZOIQITREXEMBVYNBFGULFMTXGVJZNPLKHHH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.588619816751);
    msg.setSource(50104U);
    msg.setSourceEntity(160U);
    msg.setDestination(49435U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.581878576499;
    msg.lon = 0.678980526799;
    msg.z = 0.348134866353;
    msg.z_units = 225U;
    msg.speed = 0.464322182802;
    msg.speed_units = 199U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.56881320601;
    tmp_msg_0.y = 0.621561759839;
    tmp_msg_0.z = 0.0546708479197;
    tmp_msg_0.t = 0.766352212465;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.279191082801;
    msg.custom.assign("ZACJHORHXFZTDQLZAGHWKSLAQRZFHGZFBUIQQWTJQUIUDO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.721566160152);
    msg.setSource(50962U);
    msg.setSourceEntity(229U);
    msg.setDestination(16619U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.16312913879;
    msg.lon = 0.33226462912;
    msg.z = 0.943897035442;
    msg.z_units = 110U;
    msg.speed = 0.910982883511;
    msg.speed_units = 136U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.750804862115;
    tmp_msg_0.y = 0.297283485712;
    tmp_msg_0.z = 0.935347862975;
    tmp_msg_0.t = 0.961679018007;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 53274U;
    tmp_msg_1.off_x = 0.520530392869;
    tmp_msg_1.off_y = 0.127726504849;
    tmp_msg_1.off_z = 0.835704388623;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.64201950667;
    msg.custom.assign("FDRWJOYIISWDFMYLLNQXKPVSXLAEZLOMHYAQEVVVSLCKVOEEACSXZCBSEWHGPEZBMQDTXAPEMRTDKVUZUCBNEVUROLBTWSJWAXLHP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.927985670599);
    msg.setSource(35104U);
    msg.setSourceEntity(110U);
    msg.setDestination(56100U);
    msg.setDestinationEntity(89U);
    msg.vid = 21839U;
    msg.off_x = 0.69965595035;
    msg.off_y = 0.544999232216;
    msg.off_z = 0.830857906758;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.735134322546);
    msg.setSource(41921U);
    msg.setSourceEntity(231U);
    msg.setDestination(48254U);
    msg.setDestinationEntity(96U);
    msg.vid = 51545U;
    msg.off_x = 0.163674588084;
    msg.off_y = 0.83076609189;
    msg.off_z = 0.582655115696;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.732119972926);
    msg.setSource(93U);
    msg.setSourceEntity(8U);
    msg.setDestination(13229U);
    msg.setDestinationEntity(173U);
    msg.vid = 45985U;
    msg.off_x = 0.988725119327;
    msg.off_y = 0.0883168674155;
    msg.off_z = 0.987189198984;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.0972186283507);
    msg.setSource(32163U);
    msg.setSourceEntity(229U);
    msg.setDestination(41279U);
    msg.setDestinationEntity(36U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.946344308961);
    msg.setSource(53750U);
    msg.setSourceEntity(176U);
    msg.setDestination(30156U);
    msg.setDestinationEntity(20U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.842333107499);
    msg.setSource(33196U);
    msg.setSourceEntity(145U);
    msg.setDestination(2887U);
    msg.setDestinationEntity(1U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.477247683601);
    msg.setSource(64038U);
    msg.setSourceEntity(25U);
    msg.setDestination(28967U);
    msg.setDestinationEntity(115U);
    msg.mid = 26281U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.335874793286);
    msg.setSource(56946U);
    msg.setSourceEntity(49U);
    msg.setDestination(15175U);
    msg.setDestinationEntity(7U);
    msg.mid = 370U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.0187671945222);
    msg.setSource(19595U);
    msg.setSourceEntity(12U);
    msg.setDestination(47673U);
    msg.setDestinationEntity(125U);
    msg.mid = 40101U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.674151506589);
    msg.setSource(31804U);
    msg.setSourceEntity(219U);
    msg.setDestination(63475U);
    msg.setDestinationEntity(110U);
    msg.state = 243U;
    msg.eta = 22544U;
    msg.info.assign("EJJCUNXWWGVVTAVYQSNDLZXQIRALLONZYIJYUGDYFDGIASRWGHUTXMEAAZRCYLMSMNRVGRXKJANFDOZOCCHALOSQGFSJSNHIZBSZVUBPBMTELIKKWFSTMGVPRGKYLNEUNSPTCEHAWKDHFWDKHUYHJIKEOJQUQVOHDGRYWTJCJIMRNKFDUOEPTKRDJZSPPUGEKVQMIPBUXPDVTRWXZHOZLBZMICCNBYOPLYMXXMXHPQFOQCIBLTFBEXVTEB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.665933244062);
    msg.setSource(24576U);
    msg.setSourceEntity(122U);
    msg.setDestination(52107U);
    msg.setDestinationEntity(21U);
    msg.state = 144U;
    msg.eta = 32029U;
    msg.info.assign("AUPIYYUALJTCWWLLCNPJHOQRGEZHIKAEKYDWFMAYBESSMBCFNQNKSRRIFEDIWXALJWYTBEPWUIVJTKNWSVFOKJVHTGLRASQW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.683305061273);
    msg.setSource(18456U);
    msg.setSourceEntity(92U);
    msg.setDestination(18279U);
    msg.setDestinationEntity(243U);
    msg.state = 42U;
    msg.eta = 29366U;
    msg.info.assign("YQNACUSXCDOZTAHHDIIQCFBTZXNNYFPPGPYXMKCMOWLYQBGHXMAFQQAPAYRCMXEEWLHLTWZTBWISPSKQIJXHTEIKBJDEULGQXGNFLDEJBMSKPWINNKRLVXWCBKUUNBGZADAAJAZMSCJR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.194115898143);
    msg.setSource(31384U);
    msg.setSourceEntity(198U);
    msg.setDestination(57379U);
    msg.setDestinationEntity(219U);
    msg.system = 28137U;
    msg.duration = 61793U;
    msg.speed = 0.57322613032;
    msg.speed_units = 104U;
    msg.x = 0.972648136083;
    msg.y = 0.172886124717;
    msg.z = 0.851929584243;
    msg.z_units = 81U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.479183849802);
    msg.setSource(37076U);
    msg.setSourceEntity(118U);
    msg.setDestination(20133U);
    msg.setDestinationEntity(207U);
    msg.system = 24096U;
    msg.duration = 20471U;
    msg.speed = 0.922180271603;
    msg.speed_units = 199U;
    msg.x = 0.65236491656;
    msg.y = 0.644451700716;
    msg.z = 0.660503224239;
    msg.z_units = 101U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.730091729551);
    msg.setSource(52652U);
    msg.setSourceEntity(8U);
    msg.setDestination(11445U);
    msg.setDestinationEntity(20U);
    msg.system = 47090U;
    msg.duration = 56095U;
    msg.speed = 0.92737322515;
    msg.speed_units = 141U;
    msg.x = 0.689222411094;
    msg.y = 0.384479300626;
    msg.z = 0.802494665184;
    msg.z_units = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.186751377124);
    msg.setSource(24743U);
    msg.setSourceEntity(53U);
    msg.setDestination(12763U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.876979805396;
    msg.lon = 0.211500054114;
    msg.speed = 0.871942178371;
    msg.speed_units = 25U;
    msg.duration = 54779U;
    msg.sys_a = 24770U;
    msg.sys_b = 64478U;
    msg.move_threshold = 0.372673410108;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.392908996546);
    msg.setSource(58983U);
    msg.setSourceEntity(227U);
    msg.setDestination(18216U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.299012316373;
    msg.lon = 0.891062558807;
    msg.speed = 0.616468466982;
    msg.speed_units = 207U;
    msg.duration = 21325U;
    msg.sys_a = 28464U;
    msg.sys_b = 42099U;
    msg.move_threshold = 0.131501263489;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.466305548105);
    msg.setSource(49933U);
    msg.setSourceEntity(59U);
    msg.setDestination(35700U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.644327689931;
    msg.lon = 0.82137515346;
    msg.speed = 0.820265624323;
    msg.speed_units = 102U;
    msg.duration = 40908U;
    msg.sys_a = 37209U;
    msg.sys_b = 47742U;
    msg.move_threshold = 0.07385328155;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.278881976514);
    msg.setSource(46859U);
    msg.setSourceEntity(206U);
    msg.setDestination(7241U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.902600055311;
    msg.lon = 0.0748787736435;
    msg.z = 0.174179644242;
    msg.z_units = 75U;
    msg.speed = 0.177901909211;
    msg.speed_units = 215U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.690272595687;
    tmp_msg_0.lon = 0.302001593746;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FQANWVUDXSXAMEZHLRCONKGXDWOBNTOJJDKPDBXHXQWLLZAKZGOLRTEXANYHOMRFMLDFUAJRHUSCJEDRQUBYKLDVEPIBJKWMQPERFEZQMZFBHITHPANZJGEELDUYWNOTVHMXVJNVXPQIHQPCKQOQSUHGJUHYUKMSLIXBNZDFYPMVMFIASGGBXR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.268363423314);
    msg.setSource(45120U);
    msg.setSourceEntity(33U);
    msg.setDestination(16287U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.00726218062781;
    msg.lon = 0.860700913783;
    msg.z = 0.262769801429;
    msg.z_units = 220U;
    msg.speed = 0.403657942687;
    msg.speed_units = 107U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0629269937442;
    tmp_msg_0.lon = 0.0581437323628;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IGFQNGFSBKYTEOZUMPSZVANQDYLJNXOXRGWXSARTNOTQZJBQZJVJCKKWUMSXYXOCMMTAHHLWONVMBIHJJPGIRUUPYIQBZYAHCEIAWMPEHSFRMXHZDBPFBRBCKRCSCTR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.0598035932955);
    msg.setSource(15069U);
    msg.setSourceEntity(29U);
    msg.setDestination(36774U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.958197439167;
    msg.lon = 0.20648043337;
    msg.z = 0.807812609632;
    msg.z_units = 165U;
    msg.speed = 0.711414967539;
    msg.speed_units = 107U;
    msg.custom.assign("OOZCCNSSSLGDASTZYIPMYNTMQVDLPWTCUPYVYQSIJWVSPGOBNTQILVRPCKKBCNGJQZPHFEGYUJTDWAFUYEXRZNPZMOJDJXZUAGMUBDMTUGJRNAVDXFHLAEWHFKVOXSENIUXTIHRROGLLGEYLPB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.722416879924);
    msg.setSource(10560U);
    msg.setSourceEntity(19U);
    msg.setDestination(28446U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.990400954589;
    msg.lon = 0.497479976941;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.972520792274);
    msg.setSource(49659U);
    msg.setSourceEntity(102U);
    msg.setDestination(34495U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.0430835356015;
    msg.lon = 0.649295702487;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.0727193803907);
    msg.setSource(10303U);
    msg.setSourceEntity(26U);
    msg.setDestination(42760U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.873324240438;
    msg.lon = 0.112024231063;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.364334338774);
    msg.setSource(17836U);
    msg.setSourceEntity(133U);
    msg.setDestination(50213U);
    msg.setDestinationEntity(96U);
    msg.timeout = 29095U;
    msg.lat = 0.0428996779513;
    msg.lon = 0.0489107663177;
    msg.z = 0.159184991634;
    msg.z_units = 16U;
    msg.pitch = 0.595734177661;
    msg.amplitude = 0.484189099964;
    msg.duration = 17287U;
    msg.speed = 0.622423800478;
    msg.speed_units = 102U;
    msg.radius = 0.746638281412;
    msg.direction = 29U;
    msg.custom.assign("PYIJHIDTKGKBVOFABEKJFVDGEERKQKUFMAUZEMCBVACXGKYPPPWVQNJIEREHVUGGOSLNLSDBKXKLGXRDUXZQATQEZQHLJSJICECNCWOHSWTYMRIVSADMNO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.959042419566);
    msg.setSource(11112U);
    msg.setSourceEntity(108U);
    msg.setDestination(7159U);
    msg.setDestinationEntity(119U);
    msg.timeout = 19848U;
    msg.lat = 0.650818095759;
    msg.lon = 0.244544168918;
    msg.z = 0.799723976969;
    msg.z_units = 224U;
    msg.pitch = 0.646639115396;
    msg.amplitude = 0.175418274521;
    msg.duration = 54920U;
    msg.speed = 0.0832023770584;
    msg.speed_units = 137U;
    msg.radius = 0.543968444849;
    msg.direction = 221U;
    msg.custom.assign("DGFBWADHECZUQCJRFWXG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.0867141198512);
    msg.setSource(7676U);
    msg.setSourceEntity(43U);
    msg.setDestination(33871U);
    msg.setDestinationEntity(99U);
    msg.timeout = 38518U;
    msg.lat = 0.973131401902;
    msg.lon = 0.999992042285;
    msg.z = 0.549806288319;
    msg.z_units = 231U;
    msg.pitch = 0.865606902236;
    msg.amplitude = 0.246919294583;
    msg.duration = 10269U;
    msg.speed = 0.993893543959;
    msg.speed_units = 207U;
    msg.radius = 0.961087365385;
    msg.direction = 72U;
    msg.custom.assign("IWYJBMJKRTQNZMESYSCPPLQLDVGONNVSUBSEMZXERZLKTZQNARKD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.309060527995);
    msg.setSource(57494U);
    msg.setSourceEntity(111U);
    msg.setDestination(50911U);
    msg.setDestinationEntity(41U);
    msg.formation_name.assign("NYXKUVHJVXKLRBNKZPGOTKSVORCLLNQNADYKWLZIMWNWICMTBMWGAOADPJGDURHYUQQDPSCLBEVNXQZIDAXYJMWUGMYLNUEE");
    msg.reference_frame = 8U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44683U;
    tmp_msg_0.off_x = 0.547313064427;
    tmp_msg_0.off_y = 0.671262214935;
    tmp_msg_0.off_z = 0.893332943381;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("QYVYTENGLRDHITPMDHREDXMJSCZBVENVJUAWSJDTSKNMZXWQXWOCXFYDJJDBSLAVGPVCZSTATQGRGOZIQLTAIFAZSLKOOXBZZPFHKIJYLCFLAQGUOBLHSFBIVIGEOPXWCLXZAPLTZYVKGRUWGCURYYAIUCXMWAKMOVCVGFWSDEYQPINAWEHNEKBRNMDFFHQTDMGXJMCJBNNQEHKUZOPSDUNPLHKEQBNOHYCWUK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.593612742603);
    msg.setSource(64795U);
    msg.setSourceEntity(143U);
    msg.setDestination(64161U);
    msg.setDestinationEntity(187U);
    msg.formation_name.assign("VEFXNADSERVFVVQGMHTJALINQTFOHIDJXUXAQOPOLZWSCZMREAAPTAWMIKJTGVEBOGBYBWZUIJKAZHRWOOTKJUQSGVHTGKFONHZCUXLYQMZLNMDXYCJQS");
    msg.reference_frame = 22U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 5078U;
    tmp_msg_0.off_x = 0.0369930812875;
    tmp_msg_0.off_y = 0.66838727308;
    tmp_msg_0.off_z = 0.853020406093;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("UUZQWOIUIBTWJHLIXVQZCUYYRSPARESQROXQFVJMCECOOXFVPPCFSDKBQZNDBCLNZGGBAYAYOGIWNHNZTTBWBRADYMEEJHATTMUOCBQLITLGEIQDHKFKZDWFTFYJNMRGUSVZLM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.513932403004);
    msg.setSource(9999U);
    msg.setSourceEntity(166U);
    msg.setDestination(17089U);
    msg.setDestinationEntity(75U);
    msg.formation_name.assign("ILGFTUUMACPKVXMYVOBOPWGUHAGHOJMBVYHWHOOBWGTKRBZVCYSCYIXHDAZIBMVQWAYYHUBFPUCSEERQRXMEMFTRJLLWMQLCJJQACRJFSSGYEBXFCKWPLUWMGQJQRGNXXITOHAHWRSQDGIJ");
    msg.reference_frame = 188U;
    msg.custom.assign("DQKBCDVDGCWJQVGIEEHIPKEZKZJSEANWUPAUSBNKNTDHNKBJVPTKDJJJXOURHRHAEUOFAEAZIFLLEUYJDGTITPGQXZIIPPJKNWQVLLCYBYRZMUCRDWOEZMNFGASOI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.236645407329);
    msg.setSource(29543U);
    msg.setSourceEntity(151U);
    msg.setDestination(27029U);
    msg.setDestinationEntity(207U);
    msg.group_name.assign("DUMEEDWWUWOSAGGIG");
    msg.formation_name.assign("UMFXKCWMJCQWLPOOKNLOJSOCVIISCFNPFLUETKIUXTPZNVXGKBMTGYVEGAEXGIUKDEVIGUSEUBJFTGGYDYAAEFHLAAAZTJRBUIRZVZRWMEASFMNEFABCHXEKZARQRCGQYWXTWDCFNJOKSBVYHFQGRNTYBDQXXSTLZHLKQJJBJRVHHDSLTVUKYDPXRIBLIPAQPTJVNSPGQLXJHZVUHSCWPOMHYPYIOPWDWUCBFNDCHWZQWMDMDY");
    msg.plan_id.assign("YAXGDWPIRAWFNBHOIRFJYXEJVDTISGKEQVCBHNVKPOLKX");
    msg.description.assign("ZQCMBBTLQESIVNSGCEMNUYUWTZOIGQLWRIRHPJHTJHSYQYWKSPVLLNEFBRCMXLCUWQJDBJUHAGODOKHGIPYAFZKCXAOEBUBZJIKGFKQNLVGYTTSTEXWPYVLJSADAGEMEPHWLONNAMDUAXSFOIQVTXFMVZGZQTOFQYJBEDVJRXROOIFDKPVM");
    msg.leader_speed = 0.787648085699;
    msg.leader_bank_lim = 0.354965191717;
    msg.pos_sim_err_lim = 0.324051241343;
    msg.pos_sim_err_wrn = 0.96656888693;
    msg.pos_sim_err_timeout = 55758U;
    msg.converg_max = 0.876234073263;
    msg.converg_timeout = 30583U;
    msg.comms_timeout = 25390U;
    msg.turb_lim = 0.0316378982109;
    msg.custom.assign("IHKBLBTERVBAOYUUREDODDWAQEAFOQRUZHJGDGJEOTHLMNPIIKUPCDSDIATIUL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.0878547553943);
    msg.setSource(61022U);
    msg.setSourceEntity(193U);
    msg.setDestination(63831U);
    msg.setDestinationEntity(238U);
    msg.group_name.assign("PAWVFPQESCSSJDHWOLQONRONDMVJCGVOLBKFSAGNDJAQZYXXRVXPYRKQMHTEBHXYKWGYFRWIUIGJCDPEXINFJKZURTAR");
    msg.formation_name.assign("AODMEUFKGSZ");
    msg.plan_id.assign("CJOLNZGLUPFAJCLYEEIJCWUJBHTFOEYKYKLAVVICYZNEMZAQQDPTRZUKPUMLGMAJSJMXMAGWJQXHSMIZHJQSEOSTIERNPRNZWVWFPYUXOUYNJXZSZMYQBDLLPKXBGOQRBQEBLVDKCNKPKODXHFINTCRNDHYRZIIGGODUWUTSKRKYYLOFWCFPTBNOHLGDAMEVTQFAPEXUDVSHWGINVEQTHGCWRDPZVMHAI");
    msg.description.assign("KOARODPWYFDSILQANZYTUWHSYXEEQKSWRYXNRHQCJHBMLYOCVMXBHGZKWIHEADXENNYBRXPGMEZQLFBXIQAZRGVIUVDYPZWZBZAGMWYSOTPAGBODLBUNAJRXWFBPGGK");
    msg.leader_speed = 0.0376785611029;
    msg.leader_bank_lim = 0.318707407169;
    msg.pos_sim_err_lim = 0.48452452761;
    msg.pos_sim_err_wrn = 0.543770616001;
    msg.pos_sim_err_timeout = 50649U;
    msg.converg_max = 0.212844283098;
    msg.converg_timeout = 57835U;
    msg.comms_timeout = 37980U;
    msg.turb_lim = 0.637705299323;
    msg.custom.assign("JKKRAVPABSHIEMMWEVDOPZYJNLKEZHWMIROUZWEWQZCWLGLXXGKFADRCSTPYEDNSDUFUTITWNZGLJGPBRTJLYEXXGFZEDNNMYQRHQCMHVBHGCFQKMULBOTCILICEOXS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.12884597729);
    msg.setSource(55596U);
    msg.setSourceEntity(189U);
    msg.setDestination(27808U);
    msg.setDestinationEntity(72U);
    msg.group_name.assign("WDJFVCOJWTMPNLHKTNQSIUKNDLMHIPDIPMNCLEVLSXZWQDDZPDQCMUXGZOKSAMPFGUQVFJNVUJYCGOHVEBTZWIYBAXQNEMJYUX");
    msg.formation_name.assign("EVGMGKFXLRUYKPHLBBPMQCQEZBAWZNKKHVIHXSAKIOVTIMJXPFHEOYRCPIZMLGUUNVGDTFJMQCZOQPRMWSWQO");
    msg.plan_id.assign("OZAZWKKZOFKLUXLSXBYMSMKICWTCBIUJGBWCPRUDECQFBNHDDCHJVEBQAMXNPPTRMTGHVPLLAPGRSARXSMWLDVNEZVUWYOIYIVIYDBVFKZRCEYTQNJJOKYNSLDGDNYQAEQXALXZODLTOOSKWP");
    msg.description.assign("XDTXVVBKTJOZAYUTWPBLJYEMIHQEZVRCXWJMGJPWOCRZTECAZHEAMNMMDCFTNYFGCXFBMFOPHCMRHDXVKQLRVIYOAJBBSYRCXUUSXKO");
    msg.leader_speed = 0.624389602495;
    msg.leader_bank_lim = 0.569981144414;
    msg.pos_sim_err_lim = 0.0739690207622;
    msg.pos_sim_err_wrn = 0.642309455544;
    msg.pos_sim_err_timeout = 25476U;
    msg.converg_max = 0.131086984371;
    msg.converg_timeout = 19557U;
    msg.comms_timeout = 20007U;
    msg.turb_lim = 0.13611468421;
    msg.custom.assign("EBLXVQMQSPUPXWNXGQYTQODLUMDNTZAFQLQKMFDGWFEYHJEEAQMNWBDLYRJOUVTCFJPLJZXXRNAEHMRMCSQRMIDIIVBIFHKIOLINKJKXQOZBSPNDPGJYTGIYRLRCVUAOYCLUKYSDPUFAECHNUWBZSAOKHUCMAAONKVZSLAZWWCVTSQOWGWWKOUGZEIEEFTCVRB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.0140749669637);
    msg.setSource(37326U);
    msg.setSourceEntity(253U);
    msg.setDestination(19341U);
    msg.setDestinationEntity(150U);
    msg.control_src = 50032U;
    msg.control_ent = 89U;
    msg.timeout = 0.287851335604;
    msg.loiter_radius = 0.575880117424;
    msg.altitude_interval = 0.483734196386;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.255967745606);
    msg.setSource(39792U);
    msg.setSourceEntity(29U);
    msg.setDestination(28523U);
    msg.setDestinationEntity(234U);
    msg.control_src = 19601U;
    msg.control_ent = 167U;
    msg.timeout = 0.979102776155;
    msg.loiter_radius = 0.599416124247;
    msg.altitude_interval = 0.0659311773346;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.71553778541);
    msg.setSource(46043U);
    msg.setSourceEntity(201U);
    msg.setDestination(9712U);
    msg.setDestinationEntity(130U);
    msg.control_src = 13529U;
    msg.control_ent = 228U;
    msg.timeout = 0.533360027225;
    msg.loiter_radius = 0.565701934012;
    msg.altitude_interval = 0.514504724444;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.433480181409);
    msg.setSource(55206U);
    msg.setSourceEntity(94U);
    msg.setDestination(24266U);
    msg.setDestinationEntity(3U);
    msg.flags = 128U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.128287015774;
    tmp_msg_0.speed_units = 197U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.720651220652;
    tmp_msg_1.z_units = 9U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.135394313125;
    msg.lon = 0.113075443096;
    msg.radius = 0.965730788465;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.738285010309);
    msg.setSource(50067U);
    msg.setSourceEntity(120U);
    msg.setDestination(62092U);
    msg.setDestinationEntity(191U);
    msg.flags = 253U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.286676916848;
    tmp_msg_0.speed_units = 118U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.109425460631;
    tmp_msg_1.z_units = 252U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0493852885598;
    msg.lon = 0.459383381668;
    msg.radius = 0.18809823433;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.0204965548197);
    msg.setSource(3523U);
    msg.setSourceEntity(205U);
    msg.setDestination(13623U);
    msg.setDestinationEntity(179U);
    msg.flags = 219U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.715157692623;
    tmp_msg_0.speed_units = 133U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.544274762355;
    tmp_msg_1.z_units = 184U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.474485502859;
    msg.lon = 0.440070551272;
    msg.radius = 0.219111049425;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.454322267976);
    msg.setSource(39457U);
    msg.setSourceEntity(82U);
    msg.setDestination(1003U);
    msg.setDestinationEntity(218U);
    msg.control_src = 45070U;
    msg.control_ent = 26U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 155U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.875532186814;
    tmp_tmp_msg_0_0.speed_units = 184U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.626939745345;
    tmp_tmp_msg_0_1.z_units = 158U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.810916556;
    tmp_msg_0.lon = 0.97751428854;
    tmp_msg_0.radius = 0.0170731488813;
    msg.reference.set(tmp_msg_0);
    msg.state = 2U;
    msg.proximity = 180U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.907683171419);
    msg.setSource(38636U);
    msg.setSourceEntity(228U);
    msg.setDestination(52572U);
    msg.setDestinationEntity(59U);
    msg.control_src = 27039U;
    msg.control_ent = 179U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 186U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.127739910289;
    tmp_tmp_msg_0_0.speed_units = 254U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.560684161675;
    tmp_tmp_msg_0_1.z_units = 176U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.981449354834;
    tmp_msg_0.lon = 0.391567691202;
    tmp_msg_0.radius = 0.828902877815;
    msg.reference.set(tmp_msg_0);
    msg.state = 240U;
    msg.proximity = 226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.600077034165);
    msg.setSource(26310U);
    msg.setSourceEntity(105U);
    msg.setDestination(35818U);
    msg.setDestinationEntity(126U);
    msg.control_src = 32927U;
    msg.control_ent = 194U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 63U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.669425354848;
    tmp_tmp_msg_0_0.speed_units = 243U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.941937439477;
    tmp_tmp_msg_0_1.z_units = 126U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.87100617456;
    tmp_msg_0.lon = 0.03009762742;
    tmp_msg_0.radius = 0.474805633708;
    msg.reference.set(tmp_msg_0);
    msg.state = 122U;
    msg.proximity = 131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.733733351784);
    msg.setSource(42026U);
    msg.setSourceEntity(129U);
    msg.setDestination(29299U);
    msg.setDestinationEntity(111U);
    msg.ax_cmd = 0.58281719073;
    msg.ay_cmd = 0.160705205624;
    msg.az_cmd = 0.364592440409;
    msg.ax_des = 0.858139989449;
    msg.ay_des = 0.00670242237223;
    msg.az_des = 0.584688966501;
    msg.virt_err_x = 0.567158155136;
    msg.virt_err_y = 0.722193703373;
    msg.virt_err_z = 0.289738404645;
    msg.surf_fdbk_x = 0.146998371682;
    msg.surf_fdbk_y = 0.859370398963;
    msg.surf_fdbk_z = 0.413699102495;
    msg.surf_unkn_x = 0.56874370534;
    msg.surf_unkn_y = 0.84912236057;
    msg.surf_unkn_z = 0.377983441314;
    msg.ss_x = 0.00539147523368;
    msg.ss_y = 0.820678828368;
    msg.ss_z = 0.152581026168;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("DBTMCDZTHJZLMRAPAJJKEUDGUHZXQMTAZUSKAXCHNOTQNJESJJRCPEUGQBBBHCQCPEODKTONVIWBKAZSGRUDQXFOOLHWOUPMFGWNJZXPMWARBSRSNQZVPPNFTQKLZSPAFVVDTIADKEYIRMFLRWDNSWGBIHTQSEVYGIWIEXNMFHZVUELUGIYLOMCRIGBESEXLCNBUYVOTAFJYXJGLKVRVNIHYJWHMYMWSDCYPOYXXOTGKYIXFVZCUQW");
    tmp_msg_0.dist = 0.338429375771;
    tmp_msg_0.err = 0.130510675958;
    tmp_msg_0.ctrl_imp = 0.0753599392407;
    tmp_msg_0.rel_dir_x = 0.609512429373;
    tmp_msg_0.rel_dir_y = 0.228915506953;
    tmp_msg_0.rel_dir_z = 0.212098180288;
    tmp_msg_0.err_x = 0.575080132685;
    tmp_msg_0.err_y = 0.575017222891;
    tmp_msg_0.err_z = 0.599971557614;
    tmp_msg_0.rf_err_x = 0.462473895408;
    tmp_msg_0.rf_err_y = 0.202963145478;
    tmp_msg_0.rf_err_z = 0.511611614281;
    tmp_msg_0.rf_err_vx = 0.97486842187;
    tmp_msg_0.rf_err_vy = 0.4291931409;
    tmp_msg_0.rf_err_vz = 0.415041928083;
    tmp_msg_0.ss_x = 0.745904636221;
    tmp_msg_0.ss_y = 0.99289005792;
    tmp_msg_0.ss_z = 0.946182425405;
    tmp_msg_0.virt_err_x = 0.700562821018;
    tmp_msg_0.virt_err_y = 0.178923390393;
    tmp_msg_0.virt_err_z = 0.533738898535;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.617985964707);
    msg.setSource(5944U);
    msg.setSourceEntity(65U);
    msg.setDestination(20595U);
    msg.setDestinationEntity(34U);
    msg.ax_cmd = 0.174600353408;
    msg.ay_cmd = 0.94676883091;
    msg.az_cmd = 0.832332262031;
    msg.ax_des = 0.561979627624;
    msg.ay_des = 0.905532617205;
    msg.az_des = 0.598671175175;
    msg.virt_err_x = 0.234917549616;
    msg.virt_err_y = 0.345624564767;
    msg.virt_err_z = 0.190285923372;
    msg.surf_fdbk_x = 0.367271201879;
    msg.surf_fdbk_y = 0.877715787282;
    msg.surf_fdbk_z = 0.210250884469;
    msg.surf_unkn_x = 0.997468405643;
    msg.surf_unkn_y = 0.480197212137;
    msg.surf_unkn_z = 0.529257004548;
    msg.ss_x = 0.478648391294;
    msg.ss_y = 0.242406745344;
    msg.ss_z = 0.89425041931;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("QXFWKGGNCDCIAAETYEHNZGKEQPDMDKOZNVOMJTZUGPMPMV");
    tmp_msg_0.dist = 0.0764325128694;
    tmp_msg_0.err = 0.367136938525;
    tmp_msg_0.ctrl_imp = 0.920541539606;
    tmp_msg_0.rel_dir_x = 0.401522328206;
    tmp_msg_0.rel_dir_y = 0.255721594976;
    tmp_msg_0.rel_dir_z = 0.849128264286;
    tmp_msg_0.err_x = 0.427137102595;
    tmp_msg_0.err_y = 0.510711695655;
    tmp_msg_0.err_z = 0.803024427195;
    tmp_msg_0.rf_err_x = 0.550146371463;
    tmp_msg_0.rf_err_y = 0.82149212406;
    tmp_msg_0.rf_err_z = 0.141864147235;
    tmp_msg_0.rf_err_vx = 0.494359831623;
    tmp_msg_0.rf_err_vy = 0.573513451418;
    tmp_msg_0.rf_err_vz = 0.493493546293;
    tmp_msg_0.ss_x = 0.554925094731;
    tmp_msg_0.ss_y = 0.79798779505;
    tmp_msg_0.ss_z = 0.748490559752;
    tmp_msg_0.virt_err_x = 0.422251087495;
    tmp_msg_0.virt_err_y = 0.518865975952;
    tmp_msg_0.virt_err_z = 0.103925841542;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.365384736518);
    msg.setSource(60107U);
    msg.setSourceEntity(49U);
    msg.setDestination(251U);
    msg.setDestinationEntity(211U);
    msg.ax_cmd = 0.52032695753;
    msg.ay_cmd = 0.179317910823;
    msg.az_cmd = 0.967219133448;
    msg.ax_des = 0.825174380636;
    msg.ay_des = 0.723052550959;
    msg.az_des = 0.818211042683;
    msg.virt_err_x = 0.441830351091;
    msg.virt_err_y = 0.156293408938;
    msg.virt_err_z = 0.424159158171;
    msg.surf_fdbk_x = 0.639923016094;
    msg.surf_fdbk_y = 0.268829769458;
    msg.surf_fdbk_z = 0.64174421586;
    msg.surf_unkn_x = 0.116400087131;
    msg.surf_unkn_y = 0.131503207743;
    msg.surf_unkn_z = 0.108129430497;
    msg.ss_x = 0.845632636478;
    msg.ss_y = 0.788036476366;
    msg.ss_z = 0.716939511572;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("TLCDWFYTWIYPIVVAENTPOCTYRMKCSEJXOSVHXZDAATVLTRTBMBNXLCLALSUDGSGRYGKWBJVCOKCSUFQHIBWRILARIYIZN");
    tmp_msg_0.dist = 0.867060241479;
    tmp_msg_0.err = 0.9016923556;
    tmp_msg_0.ctrl_imp = 0.462524374171;
    tmp_msg_0.rel_dir_x = 0.99907347709;
    tmp_msg_0.rel_dir_y = 0.392798203846;
    tmp_msg_0.rel_dir_z = 0.0148972517487;
    tmp_msg_0.err_x = 0.66380353366;
    tmp_msg_0.err_y = 0.40764240208;
    tmp_msg_0.err_z = 0.756932596669;
    tmp_msg_0.rf_err_x = 0.271943677311;
    tmp_msg_0.rf_err_y = 0.964264344701;
    tmp_msg_0.rf_err_z = 0.381748212875;
    tmp_msg_0.rf_err_vx = 0.310185582888;
    tmp_msg_0.rf_err_vy = 0.285103362491;
    tmp_msg_0.rf_err_vz = 0.858563850559;
    tmp_msg_0.ss_x = 0.00792878287243;
    tmp_msg_0.ss_y = 0.817764385601;
    tmp_msg_0.ss_z = 0.793301289892;
    tmp_msg_0.virt_err_x = 0.56375547556;
    tmp_msg_0.virt_err_y = 0.509215350422;
    tmp_msg_0.virt_err_z = 0.29736412003;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.440280997327);
    msg.setSource(42281U);
    msg.setSourceEntity(11U);
    msg.setDestination(24351U);
    msg.setDestinationEntity(41U);
    msg.s_id.assign("CADMTCVWLFGFNPXNUFAIIJSJBIWMOTOGTAZPLKKCWHQHWMJUOZDTIAXOXALIYRPXFMKVSKHQDRXELKLDEKGTDDPPSBEJOLFAONFQLEFIYCWAYNBUMIRDAWENDYNZMGHLQICKULPNHZCCJGVZTENVYGADKGPUBUZQRAOVYWLYGJEFQXSHTCPESUKBBFQMHSOYBVRTVMUSZBGRWPWPXUSCZEMUXHIWZVHCRQYSNZKJSJORQRXJ");
    msg.dist = 0.71912763299;
    msg.err = 0.763059933597;
    msg.ctrl_imp = 0.0376074764633;
    msg.rel_dir_x = 0.286889492914;
    msg.rel_dir_y = 0.560714985938;
    msg.rel_dir_z = 0.588559600354;
    msg.err_x = 0.350133312251;
    msg.err_y = 0.546788949608;
    msg.err_z = 0.579527014681;
    msg.rf_err_x = 0.811673640793;
    msg.rf_err_y = 0.0208903368154;
    msg.rf_err_z = 0.813374292139;
    msg.rf_err_vx = 0.517601120321;
    msg.rf_err_vy = 0.692189566923;
    msg.rf_err_vz = 0.507151533018;
    msg.ss_x = 0.209138889656;
    msg.ss_y = 0.404926591408;
    msg.ss_z = 0.833167725001;
    msg.virt_err_x = 0.0706352935127;
    msg.virt_err_y = 0.769968679506;
    msg.virt_err_z = 0.0867370367338;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.59437958487);
    msg.setSource(60367U);
    msg.setSourceEntity(209U);
    msg.setDestination(37415U);
    msg.setDestinationEntity(221U);
    msg.s_id.assign("FTTHSSHPZSAQAV");
    msg.dist = 0.505660976624;
    msg.err = 0.7449177679;
    msg.ctrl_imp = 0.816640064015;
    msg.rel_dir_x = 0.426765519618;
    msg.rel_dir_y = 0.48869290456;
    msg.rel_dir_z = 0.807294569271;
    msg.err_x = 0.56041198602;
    msg.err_y = 0.576807672397;
    msg.err_z = 0.48487740187;
    msg.rf_err_x = 0.075138481559;
    msg.rf_err_y = 0.606244666277;
    msg.rf_err_z = 0.575242343103;
    msg.rf_err_vx = 0.30148584175;
    msg.rf_err_vy = 0.347156363677;
    msg.rf_err_vz = 0.151555131932;
    msg.ss_x = 0.925421915532;
    msg.ss_y = 0.555189404302;
    msg.ss_z = 0.24084935782;
    msg.virt_err_x = 0.80123371505;
    msg.virt_err_y = 0.018386635703;
    msg.virt_err_z = 0.618690162624;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.6999860532);
    msg.setSource(23124U);
    msg.setSourceEntity(68U);
    msg.setDestination(16538U);
    msg.setDestinationEntity(74U);
    msg.s_id.assign("FIYCJQKKWRTIUGYUGOLJAOQNUXUGSCIQBSRQFHLNMVOMBULTDJRSKGLVXJFDUUIEKHTGYIOJLZMPSSEYCFIAYLMQOKZIGPECBUABJMXDESAVYVOAPKQXRKNENEMTI");
    msg.dist = 0.988236582335;
    msg.err = 0.652519264622;
    msg.ctrl_imp = 0.758236352397;
    msg.rel_dir_x = 0.686993036208;
    msg.rel_dir_y = 0.619256476948;
    msg.rel_dir_z = 0.847038078592;
    msg.err_x = 0.885611862442;
    msg.err_y = 0.813014556069;
    msg.err_z = 0.0129735782671;
    msg.rf_err_x = 0.711514052776;
    msg.rf_err_y = 0.238942991452;
    msg.rf_err_z = 0.12926425321;
    msg.rf_err_vx = 0.668649364018;
    msg.rf_err_vy = 0.134036327413;
    msg.rf_err_vz = 0.832315115437;
    msg.ss_x = 0.0434075817886;
    msg.ss_y = 0.230754047834;
    msg.ss_z = 0.32956951091;
    msg.virt_err_x = 0.513890272702;
    msg.virt_err_y = 0.973079470953;
    msg.virt_err_z = 0.718776232595;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.157430100281);
    msg.setSource(52690U);
    msg.setSourceEntity(169U);
    msg.setDestination(49428U);
    msg.setDestinationEntity(67U);
    msg.timeout = 25757U;
    msg.rpm = 0.0206693938752;
    msg.direction = 142U;
    msg.custom.assign("MBCKMQJNKLRCGTOHULAVYPOZYRFWKRZXUEJXFILSDHRBLTAREPWHTGJEMCDVJAOTIVCHXFEWDVCMQMIOWGUSZQYFROXEQZMDMLTYCUPIFBGZNHVWDXFGIBPXRMULUIBTANLQWSCNKYHBUVPKPEATVYDBEJDQZAITJSKGRZQIAVBAIWHSBVZPYINTJNNYFSDEUQOKUDGGTKCLLRFSNQAGOEZDMHS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.872513025772);
    msg.setSource(63599U);
    msg.setSourceEntity(19U);
    msg.setDestination(29085U);
    msg.setDestinationEntity(246U);
    msg.timeout = 57114U;
    msg.rpm = 0.808138227994;
    msg.direction = 188U;
    msg.custom.assign("HWLAVWKAZOVLTQEKXWKJGNFJFNNNGYRAYPQXIUFEXAOPGPXRO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.258893041277);
    msg.setSource(29433U);
    msg.setSourceEntity(82U);
    msg.setDestination(21858U);
    msg.setDestinationEntity(230U);
    msg.timeout = 40341U;
    msg.rpm = 0.302609038002;
    msg.direction = 61U;
    msg.custom.assign("DNGRVIGYPPCKWWXNAUCCDFFBQIWNBIQCZNRVCHTQXNYZQLUFFXPUGZAWFMZBYYAARACDMSNUOEDUZESAFWOPEGSMPBIEUXXTCFKAIFMZHIJVMQBKPWDSHQDYCDOAOFZGVRBJTFXJKKRYUJLY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.768574382705);
    msg.setSource(48774U);
    msg.setSourceEntity(127U);
    msg.setDestination(15929U);
    msg.setDestinationEntity(191U);
    msg.formation_name.assign("WXVRNGRMYVQPNHNRJQNRPBCNZQDHTUXLJSINRKNOEQRBWKFXZVXSYTHPLLACAKXKKOVSSKBDAZNLEMAVDAJEBWJSMGMGMQLCSLDWFCTHEJFHVEYZMFSIWHULILTUEKIRBYCGWMQYEBPDQSDUJQPDURTXASXZWAPICOHTOVGXCHNVGYAYJWEYTOEUBFJRTJZKXZVGISPOU");
    msg.type = 79U;
    msg.op = 28U;
    msg.group_name.assign("BWZARNXSOPNZVITTCBCYNHIWYYMHSWDIAXLENYAQDBIGSZBQRXOMXFWPNQDYVICPQFVQQEMBFJGZHVHGPKQELVRYAJWEDVWK");
    msg.plan_id.assign("BMHSWVPFAUYHMQIJBCBQIPFNMKUOPQXMZPPEWLQRFSNBPYCFNNAJIBCGEYTITXCJQDHIVWXDUEJRSODYHWNLFGVQHCUETSKSAQMZLILJTYRZMLNGAYOTPAWCWOZERUJGGYRZDJWVVNVKHTOIKGACFMCOKHFRLVPMVSAWKGPKHOZZDQHLSXTFJGSAAGXLJPXDSONRXBRYJBSXUETTIGBHXZRZDWLMIFUDK");
    msg.description.assign("QZUTDDVLSSSXGNNTWIAYQOPIYPGINQCLKSYUORFJDNMTWKFMIFRQZEXEGVZSVAFEMCARTDERUUNMKZXDYIQJTVJFVRBBCBCXVOHVLJUNGSZXKLZPACYXFLXFLZ");
    msg.reference_frame = 58U;
    msg.leader_bank_lim = 0.495382935219;
    msg.leader_speed_min = 0.913634589461;
    msg.leader_speed_max = 0.381871779401;
    msg.leader_alt_min = 0.0889961026757;
    msg.leader_alt_max = 0.987521124196;
    msg.pos_sim_err_lim = 0.775485314171;
    msg.pos_sim_err_wrn = 0.015557698999;
    msg.pos_sim_err_timeout = 41722U;
    msg.converg_max = 0.443607945649;
    msg.converg_timeout = 59541U;
    msg.comms_timeout = 27567U;
    msg.turb_lim = 0.641956880488;
    msg.custom.assign("HDTJPXHAOHPWBCAOYEQPDZUJLHOEIKYIIAOTUJZWAUVXYGFNSOBWSESUDNURGLTPQRUCLLJRNKZOIENZBGJKYFNOQLGFMPOJZKRBOAKFXMZGDJAWBTDXYVMRUIEWQFSDXNRFKSZKJLCUTU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.0759939517037);
    msg.setSource(33098U);
    msg.setSourceEntity(125U);
    msg.setDestination(29723U);
    msg.setDestinationEntity(236U);
    msg.formation_name.assign("GEIDFHWOLKKSCXCJOGLLEEJVBMSWSICUVYERXUYKSCHOJFHQZQISAADZDPEFPGUPEXRSBANOGIIKLQFYTYVMEGUNNQGCDFJPOPBAWULPCFRKZIVBMNLXWQDMTOEAXQTPJWQXDSIRMWMJDTCIZBCRYAQVNOROQDNUJZGNA");
    msg.type = 64U;
    msg.op = 245U;
    msg.group_name.assign("HJCJPNUFYIDSSQTPDOUYFFXVHOKOYSRTAFFJZEGDYUPZNXXNZGOLECWHASGWZBDTNRAWNUKCESAXWDSCGOOVTVVEBKCEUEFKBOXQDCZMJTMAHGPUOTMLRMRBQDAAHPKLBHMOIPRGCSCXJKWQEWXZZBHKXWWQGULMGIHSDRDDTIMXOJ");
    msg.plan_id.assign("TMMVYQJIWYJVZROKPDE");
    msg.description.assign("AFDWYFKYBFVJAUJCWMSGRVNTVKPSEICWIQMUHVKNOQJBUXSYLTHVSPZEXOHODNLUDLEPFWIBYEHMPYBAZDGSTVFLCIXQDPJCFMVYBQZGEVNZLHLQQBHFKILYOXIKOQZBISORXQGGWEYRUXQGRKPMLIMNTIBSBRWSSPTODHUPADMFPHIOUWRZCJCDXEHHTDJCLUKFMRYAEMETAGNMNXGGWRPWCNTBNXZKRGFZVANEZTZKRTJDAJJOUSXOA");
    msg.reference_frame = 16U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 24083U;
    tmp_msg_0.off_x = 0.283009091756;
    tmp_msg_0.off_y = 0.179672753929;
    tmp_msg_0.off_z = 0.23806625224;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.613481078385;
    msg.leader_speed_min = 0.415054114981;
    msg.leader_speed_max = 0.0578826675128;
    msg.leader_alt_min = 0.224518560218;
    msg.leader_alt_max = 0.0257818827548;
    msg.pos_sim_err_lim = 0.0659532725997;
    msg.pos_sim_err_wrn = 0.482940030923;
    msg.pos_sim_err_timeout = 6937U;
    msg.converg_max = 0.328108109208;
    msg.converg_timeout = 5642U;
    msg.comms_timeout = 29952U;
    msg.turb_lim = 0.55912833041;
    msg.custom.assign("CUYZCYPLPSHVYJOBCUFEARWUPLSWTKAIBOYLEQCTNYTXCEOLHZOAOQEGKDAXBLUSDPQLUHSTKSAGGVMZXQHMESTWGKWFEUJHGMXRFFEMWVXDRCFXNVJEMVRMNOOAGBOGJVQLAWAYZERJPQYELIXMTHACIYIIWHTSKWBNRQFUJFXBKARVMLMIKBNUXJKFDWPHIDJNRTIPZFZDQZSJUCLVOGDISCRPOPR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.604815555382);
    msg.setSource(63603U);
    msg.setSourceEntity(193U);
    msg.setDestination(28218U);
    msg.setDestinationEntity(118U);
    msg.formation_name.assign("VXYTYYAPSKDMUHRQNHSDBZOTNLHFIYOXXFXZEGVWLNNJCAXKVEUTCJTJZMACFDBPLRXUTAPKAJLDUOPNPWOBLSKMWZEARKPCDKWUHVFSIYYQSUQQUGNREEBDYCEWOHYHMQIWWLMLEDRMZQVJGKYJCSIHCQPGQARGNMZHGOPFRMWUHDLBFGXIYEFCDVNBJZ");
    msg.type = 197U;
    msg.op = 70U;
    msg.group_name.assign("ZRSDETRARYBKBTWWGJHCCGKOVQEGAUPSMONPNZILWPASRUHGKZKQBJQIWFOHVDBOKTACFIAUHZUGXLMNAPPXTNFHTEJUWQMLETXGLJLSDNEXRCZYWQVKSYSIMQMTJLYUFODEYDCOVPTOJXFGWEFCISBRDNVUYRRZSPXFWHQPBBAPRLAMEII");
    msg.plan_id.assign("IXPFCTBXOSNCCSBHDMMWPDDXVYKDKTZLWGORFYZTWLJLQNOJWDANXXAOTUOUJGOHEGXRJFFPUXGLDIHRAGJI");
    msg.description.assign("RQCJCFEDKQXYSYOVFNQCHTXLWKXQBAEOFHXZYIBNBOOYQNRYGPBPAETBOISIWJZWLLIBSOGYRXNJFPIFZLPHXVADWMFBVNPUGRPHGKVYAVCZWKMBSM");
    msg.reference_frame = 204U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 54499U;
    tmp_msg_0.off_x = 0.856453821895;
    tmp_msg_0.off_y = 0.720830180847;
    tmp_msg_0.off_z = 0.606971617836;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.970265928208;
    msg.leader_speed_min = 0.522035270294;
    msg.leader_speed_max = 0.775244197183;
    msg.leader_alt_min = 0.946046040726;
    msg.leader_alt_max = 0.17840485172;
    msg.pos_sim_err_lim = 0.719292541026;
    msg.pos_sim_err_wrn = 0.360783886365;
    msg.pos_sim_err_timeout = 7659U;
    msg.converg_max = 0.659342942048;
    msg.converg_timeout = 9909U;
    msg.comms_timeout = 51925U;
    msg.turb_lim = 0.171005914825;
    msg.custom.assign("NXLQTDCOJHWDJPDBNXIHCVKCOSXIFAJYVYTAWECJHJTUGBBOPUASXNILHVAHKJEDDPFLEYDDCYEBZBDIZGFQQCFUTHTWPPRUAWFKSELGQWSSLUYCJGYPUZRITEMYONSVHXBZFWJMXZRRSACTZIAPERLUWMPMQZMQBDWVGOWKLTGXGG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.0242760500196);
    msg.setSource(46756U);
    msg.setSourceEntity(19U);
    msg.setDestination(12992U);
    msg.setDestinationEntity(223U);
    msg.timeout = 33789U;
    msg.lat = 0.427214357552;
    msg.lon = 0.829850728273;
    msg.z = 0.380684406937;
    msg.z_units = 37U;
    msg.speed = 0.046333577475;
    msg.speed_units = 39U;
    msg.custom.assign("RKWYNGCGRPFXXURTADAWMWZVOBXYPWONOFENHALAQJDNIDYYSPKFMGAWGFPLJSTQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.674997150437);
    msg.setSource(59314U);
    msg.setSourceEntity(43U);
    msg.setDestination(42813U);
    msg.setDestinationEntity(197U);
    msg.timeout = 5408U;
    msg.lat = 0.287319122394;
    msg.lon = 0.904440151544;
    msg.z = 0.025291829428;
    msg.z_units = 107U;
    msg.speed = 0.877496302295;
    msg.speed_units = 78U;
    msg.custom.assign("MTNIFWZKLMFWTOTXERCCKUXGPEDGJEKDLUESFXVDNZAZMVYJEVWHIHONPPNVYQDCIRZRWJBHZVWCTMQDZUIHXOUAANFPYQCRQV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.656952280678);
    msg.setSource(39220U);
    msg.setSourceEntity(149U);
    msg.setDestination(42390U);
    msg.setDestinationEntity(172U);
    msg.timeout = 55182U;
    msg.lat = 0.630721893389;
    msg.lon = 0.321730844494;
    msg.z = 0.815508678823;
    msg.z_units = 38U;
    msg.speed = 0.172479542772;
    msg.speed_units = 127U;
    msg.custom.assign("LQCZVMQOVOBMJAPCAKEVHSTBGXHKKBDHAKRGJHQRYTPTIFGMAXPZCFSRNDUVVYOWEUOTVRSUYWFPXBHOSVEFECWXSQCPHZQVOZMLNJSLBKNQDKFWQUHGBIGXYUWOVRSSHNCDLHDBRLNQJJLZXIWDLCQBAXEJKWYUZIBAPHTTPABZDODIGIMCSXRNI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.0137765093085);
    msg.setSource(52513U);
    msg.setSourceEntity(176U);
    msg.setDestination(52092U);
    msg.setDestinationEntity(123U);
    msg.timeout = 31877U;
    msg.lat = 0.238112574509;
    msg.lon = 0.517531365815;
    msg.z = 0.466921921542;
    msg.z_units = 54U;
    msg.speed = 0.717327324778;
    msg.speed_units = 64U;
    msg.custom.assign("OELXAMOTUMMCGGWNLDSVEXGZIHCLMXBQMJFYOBQDWHUBPRCYTOFMZXUJHXVZIIKOEBIEAAOARKWZJJQLQPFFWQHELVNBDBJRJTTWRNWVSNSGAAXTNFPBYPTSWPYTUYNZEWUVBYSYNOWV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.0362469894156);
    msg.setSource(13404U);
    msg.setSourceEntity(223U);
    msg.setDestination(42214U);
    msg.setDestinationEntity(135U);
    msg.timeout = 15181U;
    msg.lat = 0.773911983515;
    msg.lon = 0.803213395847;
    msg.z = 0.978973491769;
    msg.z_units = 199U;
    msg.speed = 0.0839021030895;
    msg.speed_units = 230U;
    msg.custom.assign("WNYOTXRSFIMKUMDJSFKSYPXLOHUQKQWGFBAYIFPBCZVIKGXAGJUHUTVZTHLJWLYZSPYECESXBQEBIYWTXVNDAEJSCTTRKMERMVTOSYGQUBBGUXDAINELRPNSMHLAASOUTPQWNLIBBOZRSHXKHENRVCFJXVCIGPIPINLAUVGREVAMMJE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.790099807866);
    msg.setSource(50299U);
    msg.setSourceEntity(150U);
    msg.setDestination(6435U);
    msg.setDestinationEntity(174U);
    msg.timeout = 62506U;
    msg.lat = 0.0297529243245;
    msg.lon = 0.956383441991;
    msg.z = 0.848859112025;
    msg.z_units = 123U;
    msg.speed = 0.021125209037;
    msg.speed_units = 78U;
    msg.custom.assign("DKYIYJTHVJPFXTSIAVHIZLYMGVBRBFYTMQOTJNCQQTWUGGROYFYGCXTCOLKFSQPEFYBGANEAXSURXSSYOCKZVYDJFJERNECHKKGHEHRTEAOSBLWCWEVJDAPMGWUMZBTBSAQABYDLVFRVUMDNXJOJXNBPJREKKWMLCLWVONWUHJUIAXSFXZTZLWWPDDKRFOQRIZCOUFCIGLRMQKBEZMKVHXIEAUTWQZQIOGDBMPPNHHAZULQI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.282609729856);
    msg.setSource(58518U);
    msg.setSourceEntity(45U);
    msg.setDestination(64521U);
    msg.setDestinationEntity(41U);
    msg.arrival_time = 0.552354290692;
    msg.lat = 0.499931890747;
    msg.lon = 0.739984003702;
    msg.z = 0.0807279708566;
    msg.z_units = 85U;
    msg.travel_z = 0.710982420073;
    msg.travel_z_units = 176U;
    msg.delayed = 169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.479849837892);
    msg.setSource(23312U);
    msg.setSourceEntity(5U);
    msg.setDestination(23006U);
    msg.setDestinationEntity(56U);
    msg.arrival_time = 0.502309118634;
    msg.lat = 0.32459142629;
    msg.lon = 0.87914661977;
    msg.z = 0.172102828461;
    msg.z_units = 15U;
    msg.travel_z = 0.591478570336;
    msg.travel_z_units = 131U;
    msg.delayed = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.266666631826);
    msg.setSource(37495U);
    msg.setSourceEntity(106U);
    msg.setDestination(61097U);
    msg.setDestinationEntity(65U);
    msg.arrival_time = 0.225889086897;
    msg.lat = 0.849322611302;
    msg.lon = 0.58041414098;
    msg.z = 0.885136316017;
    msg.z_units = 5U;
    msg.travel_z = 0.786687030303;
    msg.travel_z_units = 201U;
    msg.delayed = 7U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.089451271892);
    msg.setSource(32962U);
    msg.setSourceEntity(224U);
    msg.setDestination(8346U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.628548138276;
    msg.lon = 0.0867513189911;
    msg.z = 0.993740685401;
    msg.z_units = 111U;
    msg.speed = 0.26746843957;
    msg.speed_units = 110U;
    msg.bearing = 0.0405506028511;
    msg.cross_angle = 0.424105072956;
    msg.width = 0.327792310251;
    msg.length = 0.625901061603;
    msg.coff = 89U;
    msg.angaperture = 0.0255892495469;
    msg.range = 57326U;
    msg.overlap = 8U;
    msg.flags = 44U;
    msg.custom.assign("GKFBVJREJDSBURMAMZNXSJKMLLWHFXFOXJAAOTCOYRASEKHZVLBVWOPYPNXDHMBGTHKCGJOIEBZTUCFFCIWSRPPERVGIEKJQLUQLBIWVPLFTCXQPMSMKGBFQUYHQNLOGZAOHTDGRELFHNSBXPPGROQDXIWLCZBVQHTHNAWKAIIEVGRLKYMDRIFWWMDWDUEDVRXDXNVAEHCTIQUNSOKYNZSUQQMAJNJKTZOCD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.0703570564379);
    msg.setSource(41153U);
    msg.setSourceEntity(161U);
    msg.setDestination(45616U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.432413965145;
    msg.lon = 0.682635607652;
    msg.z = 0.220781667053;
    msg.z_units = 52U;
    msg.speed = 0.945772425488;
    msg.speed_units = 160U;
    msg.bearing = 0.709359891272;
    msg.cross_angle = 0.840094041237;
    msg.width = 0.278120419804;
    msg.length = 0.843004048007;
    msg.coff = 205U;
    msg.angaperture = 0.969690464683;
    msg.range = 64733U;
    msg.overlap = 49U;
    msg.flags = 136U;
    msg.custom.assign("LREHERIEPOHTUJERBWWUUDTGVNUYOVFMHWYGFGRLRLXFGBPVAJQHLYLQWMMKHKSVZVPZSOOSBIUITFSRIWAAIOQDIXZSSAFRWJDYBQZKHBNDZSFHTCIOBMBMVDVVXCFEFDMVPGLFDPTXDKASUHZJZNZRWACTOQNRJAMNCAGXNATYCKOXNQCKYGSBGKLHGUPWPOMYNXJCCAMYQLXNZHYQPEGRLJTPNTXJUWMEBKEQWOILZVPJDKJCC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.776814875896);
    msg.setSource(1531U);
    msg.setSourceEntity(220U);
    msg.setDestination(45170U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.0692004552655;
    msg.lon = 0.515003611299;
    msg.z = 0.613714739715;
    msg.z_units = 138U;
    msg.speed = 0.459117586255;
    msg.speed_units = 46U;
    msg.bearing = 0.774534543981;
    msg.cross_angle = 0.292208707145;
    msg.width = 0.511952313465;
    msg.length = 0.364929823298;
    msg.coff = 237U;
    msg.angaperture = 0.253713765;
    msg.range = 50706U;
    msg.overlap = 196U;
    msg.flags = 252U;
    msg.custom.assign("SONXRCOCLKYCKTX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.884946053629);
    msg.setSource(53757U);
    msg.setSourceEntity(0U);
    msg.setDestination(18003U);
    msg.setDestinationEntity(107U);
    msg.timeout = 46084U;
    msg.lat = 0.441296965854;
    msg.lon = 0.327659110649;
    msg.z = 0.048457109529;
    msg.z_units = 250U;
    msg.speed = 0.420029240259;
    msg.speed_units = 34U;
    msg.syringe0 = 153U;
    msg.syringe1 = 14U;
    msg.syringe2 = 225U;
    msg.custom.assign("GLYZBJNAIKSHVZIUBRDBTQDMREZPVFDGIYPNGJIBGFRANTKGMNXKCOHMCYDQQCWNECTDYBIMOOBPHZBYVGSMPASXPUHVSBXSZXUTIYXUNVLZTHKTMVBWPMARZGAJXWVJUWILJRLZVLFLMQNMXFUVWCPLSCQFZELGKGATKCPAXFYSNJEYOREHRCEMABUFPOOXKHEQPRDQEJCTKOFOOJWEARWLUEHJDSFHRYNAQIDKSISIJQDVYC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.408290195072);
    msg.setSource(45177U);
    msg.setSourceEntity(91U);
    msg.setDestination(40621U);
    msg.setDestinationEntity(140U);
    msg.timeout = 47964U;
    msg.lat = 0.28485689567;
    msg.lon = 0.0973197633256;
    msg.z = 0.825082188485;
    msg.z_units = 137U;
    msg.speed = 0.0722401245722;
    msg.speed_units = 241U;
    msg.syringe0 = 125U;
    msg.syringe1 = 73U;
    msg.syringe2 = 11U;
    msg.custom.assign("IWHHRWNXSWEANTBWQFXIAPDLUJZYHACAAKGCYOBVTPUQMEFYZUFQKGGFQSYPAVRCDQERXQJUSDJDKTLPLOFGYJUEOEKMHKDBWLVLZSCQLNNIAQTGMKLIZDTKLICAHEEXCE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.419640985933);
    msg.setSource(62632U);
    msg.setSourceEntity(12U);
    msg.setDestination(45891U);
    msg.setDestinationEntity(228U);
    msg.timeout = 42826U;
    msg.lat = 0.258824331556;
    msg.lon = 0.845653791985;
    msg.z = 0.544569569063;
    msg.z_units = 232U;
    msg.speed = 0.438276591858;
    msg.speed_units = 218U;
    msg.syringe0 = 190U;
    msg.syringe1 = 103U;
    msg.syringe2 = 111U;
    msg.custom.assign("BYCWZUMZJZNOWNTATTQRVEGKCJUKFYEEFRFLFAGCSOHGAELYLNTRPPAOIIXMDXXHNMQOWDHFARGRYPMZMTQJWLPBDUMLIMZEXLSRLEDSMDQVAGPPBUBJBVXZSIUTQTBGBKJKNFNAWORSXHTGPQHSYABHCPDCEJHD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.757081290437);
    msg.setSource(40010U);
    msg.setSourceEntity(180U);
    msg.setDestination(17883U);
    msg.setDestinationEntity(35U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.300352101923);
    msg.setSource(55756U);
    msg.setSourceEntity(131U);
    msg.setDestination(45295U);
    msg.setDestinationEntity(61U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.410052497042);
    msg.setSource(11871U);
    msg.setSourceEntity(81U);
    msg.setDestination(13439U);
    msg.setDestinationEntity(105U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.362779392685);
    msg.setSource(42444U);
    msg.setSourceEntity(109U);
    msg.setDestination(26056U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.762977851064;
    msg.lon = 0.818087251284;
    msg.z = 0.813944102454;
    msg.z_units = 51U;
    msg.speed = 0.23151210028;
    msg.speed_units = 185U;
    msg.takeoff_pitch = 0.138841701835;
    msg.custom.assign("XJPHWJUZTLSNMTTUXMFDOGSNKAUYZDPYXNDIYXKYGSBSVVVRHTRVWSJPIQPONIWDFOKVCXDDLGTQHHZOGNGFEXJBMYZMFULLSHCFWKIQRGYTXPMEIPTRJBUHSTFRJPPWNKBQGIUMXVUURGOEABAVKBHWGQCSOJRACCKMZILRINOCBTCPNRCYJFEZJPQRDDLKLEYEWFKJMUHVEFVQDQNBOBNAAWGLHZKAHWD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.353551970702);
    msg.setSource(3717U);
    msg.setSourceEntity(234U);
    msg.setDestination(1797U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.0461913439858;
    msg.lon = 0.894374638199;
    msg.z = 0.8089535114;
    msg.z_units = 80U;
    msg.speed = 0.788963332819;
    msg.speed_units = 244U;
    msg.takeoff_pitch = 0.737987009234;
    msg.custom.assign("MZPQKJZLTADFLHCZIAYPRNHWHQJSXAVMXPTCQYCLODIDYTLUIUHSOWQFODBXUMCBQZJLRMBZYAINYIYIDEZQONNQZOVCVHGYPALQINSMKQKPDFKUWNVXBXUJEAGEOPYFMNNVFJEWOTRVUJARWDZGOTKBASDKUJXYIDCTHMXTQANCUVFMGHLSRRZFGSBJBRURSHMAPDIWVTWFCGTIGZRLSSXVJPLKBJXYWTKVFXOGCKBEEKPEE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.643201506158);
    msg.setSource(1511U);
    msg.setSourceEntity(163U);
    msg.setDestination(22184U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.838284993255;
    msg.lon = 0.948135335896;
    msg.z = 0.645122035909;
    msg.z_units = 161U;
    msg.speed = 0.690755692636;
    msg.speed_units = 228U;
    msg.takeoff_pitch = 0.410240619056;
    msg.custom.assign("XRVNMVJZHFYNSOZQWR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.405721738822);
    msg.setSource(33471U);
    msg.setSourceEntity(130U);
    msg.setDestination(3081U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.520322435385;
    msg.lon = 0.288191105316;
    msg.z = 0.995862791831;
    msg.z_units = 177U;
    msg.speed = 0.367076557313;
    msg.speed_units = 23U;
    msg.abort_z = 0.377780665851;
    msg.bearing = 0.250682857251;
    msg.glide_slope = 63U;
    msg.glide_slope_alt = 0.460104545997;
    msg.custom.assign("AXCRCNGHDZIQYXWHYRYRJWRZDOXWLZZIBPQOAYMPOBUUMCRRAMVNVSEVVVPKSJNFECEHXOESUDWHKIIQAGVDOTYTMTOJPSKPQNZQBQGZGEZKDXFXWUELDAYRWHQWXDXMHLITIMVJUJTR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.634296066544);
    msg.setSource(18085U);
    msg.setSourceEntity(102U);
    msg.setDestination(36792U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.710270442632;
    msg.lon = 0.341078036537;
    msg.z = 0.458986705156;
    msg.z_units = 90U;
    msg.speed = 0.356772812814;
    msg.speed_units = 133U;
    msg.abort_z = 0.0490526480686;
    msg.bearing = 0.754236261367;
    msg.glide_slope = 71U;
    msg.glide_slope_alt = 0.169521608672;
    msg.custom.assign("BTKDVJNEIBMZBZNSZATJBJTTXCAPGEHRDMXKXOVZXLRIQGEVYELHCOMIJHLDPBVZHQNLCCDNNIJVIGOLDJFGEAILSPFAAQESSSMCPTAZOSYWOPR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.592862379669);
    msg.setSource(40751U);
    msg.setSourceEntity(2U);
    msg.setDestination(6701U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.920807413729;
    msg.lon = 0.314150046098;
    msg.z = 0.388100567472;
    msg.z_units = 154U;
    msg.speed = 0.250621509432;
    msg.speed_units = 99U;
    msg.abort_z = 0.0142319284159;
    msg.bearing = 0.536866432931;
    msg.glide_slope = 56U;
    msg.glide_slope_alt = 0.313124576197;
    msg.custom.assign("FYIIINEYVZVEJXITGVZNTTFLDVQHPSWPLHFPTRSMUDRIJNDWHKTMQSRAYDNXGOVZSVODQKWRLBHTKAOFJAOKIAVKLSNZGGYZLPBOYBLUNIDWBUHXGRPWABXLACJDEJQEKQSNRJJOXLFGWEFPRGHYDBZMUWHBMWYCCQOMRXXTZDCYIVERFXEBMEURSQBKEUCPCMWSLIACLTAW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.778272215894);
    msg.setSource(11347U);
    msg.setSourceEntity(38U);
    msg.setDestination(16691U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.138530505291;
    msg.lon = 0.613705957948;
    msg.speed = 0.911392413151;
    msg.speed_units = 104U;
    msg.limits = 112U;
    msg.max_depth = 0.0109909108976;
    msg.min_alt = 0.247364109785;
    msg.time_limit = 0.483829594864;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0931140653825;
    tmp_msg_0.lon = 0.468893938488;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("KSYEGQJCNBBOXPMQSNTBLFPZYGXRZASEUYEPFJYFCTHLNADQGFADREGRRJSMOKRBAKGKPTIHCZXPCMBNHBXIEPLQZRHTZFIFHMVEBUPQFQDIHCSJNIWWEMYWOQXTWNCPHVJABGWYIMSCXUVNUNNLKMYCGVRKZVTERNGPFTFZTLOUHODCYUVKLB");
    msg.custom.assign("HANDJTFUYHGYNMOJQWITORJSLIZQAOGLPYAWKGQHHLBAXEWFFEYGUBCIMBDCP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.924574701192);
    msg.setSource(52783U);
    msg.setSourceEntity(136U);
    msg.setDestination(15034U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.0717387040763;
    msg.lon = 0.866387848389;
    msg.speed = 0.0343068180358;
    msg.speed_units = 61U;
    msg.limits = 179U;
    msg.max_depth = 0.472281406547;
    msg.min_alt = 0.799316616696;
    msg.time_limit = 0.181913456894;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.69736641284;
    tmp_msg_0.lon = 0.260722595915;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("JBNTCNXINQUAZRRDODEYURAGACZFTWRSMNFZVSLHUSHWYIHUXBAPQDFFLHFPRDWKAEVWCPKMUCHOGQCWOHBGAPKYIVQYEKJCPEBGXEVLCVUMZWXMCRDBEOLHGI");
    msg.custom.assign("ZCVJAZKMUDTGOZCESYLYOJEWNQLFWUQDXRKGFIZUNDPLQDNLJKRUFBXLLOQMVMGUHSDCZPOVPCBWNEITMZBDAWYHHYBHQKRHFOYTGEFRCSREHDAHFIANUWODIGZYAANKJPJHPFBTROCZWSMPSSMIVLSZAYEXCWVMUUWJAVFGAJKPCIDIDZXWBTQOQVNCWCJEYBRYLQHJKIOSRBTLVNSGFTTGHGYKTGEXPBEEUANTOILKQXMM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.132846513398);
    msg.setSource(27796U);
    msg.setSourceEntity(106U);
    msg.setDestination(49643U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.790627120272;
    msg.lon = 0.859294387462;
    msg.speed = 0.450194811899;
    msg.speed_units = 67U;
    msg.limits = 111U;
    msg.max_depth = 0.400763670767;
    msg.min_alt = 0.568751055439;
    msg.time_limit = 0.679729483337;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.285894669908;
    tmp_msg_0.lon = 0.708793338589;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("NJTINJQQYQMCBDNDFBAJEXENXJRYZPBYTFYWIHYMGDNIZKJPLIWWAIGRNXHCNGDHAEWPIFVSRZKHCSBOMOWRULTYALZGYWBLZCPURLEPBKXCMAIMCSMKGIVMZKRIUSQJSFOOPKUTLWOTALDYAFPEQSSUJBLEEMZWAQSSGVJFQQHUXCVCTJFOZU");
    msg.custom.assign("BOGQQMBYPVEWJYGYAFIZPOSGXGSYSJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.899612023621);
    msg.setSource(44347U);
    msg.setSourceEntity(140U);
    msg.setDestination(24556U);
    msg.setDestinationEntity(146U);
    msg.target.assign("ZNOSTERHHAPGGOOEMJYBSUZIMRLAYKFRQLDKDOVZQRRXMSTULAFFRMIJRMTWKGFCKVKUAEJKASDUYPVHXCBOZPFBEFDGDJSAESCHSQTCHOPKMYNAFQDDBZWCBBSAANXPGTWMEZQXNIINSWVWLHUGUZZJMLVEYNQREBOGOIQTVLXYDPLJINHLHWCYEBGGJHKWGBUQUVIWZDUKKEOMMIVOSNWPQWYUTPJBTTPZVJLIXAXHXCLDRPNTCNFXJRYV");
    msg.max_speed = 0.0439966939577;
    msg.speed_units = 56U;
    msg.lat = 0.681848397429;
    msg.lon = 0.776411750801;
    msg.z = 0.776750395638;
    msg.z_units = 208U;
    msg.custom.assign("GYMNFXTRPMVFGBHFHDFSQGYFEEZLWYYECIVOPQGWEMXWXSLKRTOSMODSWEXUERIYUQIY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.221772108724);
    msg.setSource(61214U);
    msg.setSourceEntity(94U);
    msg.setDestination(57969U);
    msg.setDestinationEntity(125U);
    msg.target.assign("NXXOSVRYOPXJZKHCRVMCZHSJDDEIDWEKZBXYTLGDCTIQGLAYPNRUHSHPWSFEMBQIIGUKUHYRZGPRSKDIHGSCLAFRVNJNWTNQBFWDWZPZAXPGTHOKXFQAFTLOBUOLRABXJGKDVVQWRIVGVJNYNFCSDQCLYBV");
    msg.max_speed = 0.445454964711;
    msg.speed_units = 86U;
    msg.lat = 0.883577415062;
    msg.lon = 0.676961109278;
    msg.z = 0.996222941367;
    msg.z_units = 151U;
    msg.custom.assign("ZGGDNKEAWWTSPARTLZNWVUEIGBHGOMILRERABERXEFMXXDKYJAYROIYTAOKOAIUMPMLYBRTISSJDLWTQOOGPCFIWFFNHEFPNIJMDESRMW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.585750087908);
    msg.setSource(57583U);
    msg.setSourceEntity(60U);
    msg.setDestination(19300U);
    msg.setDestinationEntity(232U);
    msg.target.assign("OONWEJGRGBNXPXSCGIQYQBTWWPLEPYOMBYCLVDBSJXUABWVOLRNEJIEHMIPVBHTQALEZXDETLCDOGRKCVAFWMKFFIRJWGWWQSECFEQMMYMQEWAIHYUJUZNFSLEAOSVTNUDSWRZBVUSSTY");
    msg.max_speed = 0.283842653631;
    msg.speed_units = 16U;
    msg.lat = 0.457460110121;
    msg.lon = 0.635421735913;
    msg.z = 0.832090318122;
    msg.z_units = 19U;
    msg.custom.assign("BPLYDNYUHHDTTYUZRM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.121396138174);
    msg.setSource(25615U);
    msg.setSourceEntity(237U);
    msg.setDestination(12094U);
    msg.setDestinationEntity(217U);
    msg.timeout = 22519U;
    msg.lat = 0.134225433701;
    msg.lon = 0.00515469357409;
    msg.speed = 0.544861475238;
    msg.speed_units = 32U;
    msg.custom.assign("ZQLSAEEHSYJKHJDSWUZTSAOHRRLYHZHKKCBYKASVCXQEMGDQTMLWVNCUFFNQPHMDJXHTJGVXBIXGKHZISVOCYLNUMUIQKCKTYEGR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.153929868522);
    msg.setSource(61995U);
    msg.setSourceEntity(132U);
    msg.setDestination(47051U);
    msg.setDestinationEntity(214U);
    msg.timeout = 44150U;
    msg.lat = 0.073583224221;
    msg.lon = 0.879708898466;
    msg.speed = 0.854110241121;
    msg.speed_units = 152U;
    msg.custom.assign("KFFZEBGEUSWSVSTWTQNILOCTYJOBHRRIKTUBPUJDCVAJPZPOXHBGMSIMRFFFBCAJSHCMSPGLCJVSEHGNMNQODMRRIAKWKIDRHIVOPVKYU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.778520402028);
    msg.setSource(56492U);
    msg.setSourceEntity(110U);
    msg.setDestination(17906U);
    msg.setDestinationEntity(81U);
    msg.timeout = 2026U;
    msg.lat = 0.569380025342;
    msg.lon = 0.326368496362;
    msg.speed = 0.392984732365;
    msg.speed_units = 52U;
    msg.custom.assign("XIZIVWYFKLELQAIKIPPUPJJURHGSHCYXZZNRHJZWCXHQYAQFMZOHCDVLOTVJCZIFXDHFBEDLDRLKKSRRFZBQYTNUWTTDVSDCHBTGXNUCIVNRLMBQCXZOTJPXONQPFJWPUJCLQE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.0563712188409);
    msg.setSource(49641U);
    msg.setSourceEntity(234U);
    msg.setDestination(55846U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.218844099794;
    msg.lon = 0.697654441896;
    msg.z = 0.956432432885;
    msg.z_units = 133U;
    msg.radius = 0.465961899451;
    msg.duration = 1698U;
    msg.speed = 0.611939537475;
    msg.speed_units = 243U;
    msg.popup_period = 12773U;
    msg.popup_duration = 23541U;
    msg.flags = 135U;
    msg.custom.assign("CWFSSJKSXIFRGMYESYTEYUJWQXPOXWVAKURANTHIFVDRAJAIQZUGVQSBTKTUORRZQHGXTHMLISPEUDOQKACAXVKBDJTFBPNBEKWEDTF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.0469744523517);
    msg.setSource(33702U);
    msg.setSourceEntity(198U);
    msg.setDestination(27085U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.469646103392;
    msg.lon = 0.0923481019808;
    msg.z = 0.958238724269;
    msg.z_units = 120U;
    msg.radius = 0.98756079614;
    msg.duration = 11365U;
    msg.speed = 0.319885181951;
    msg.speed_units = 105U;
    msg.popup_period = 24910U;
    msg.popup_duration = 58260U;
    msg.flags = 59U;
    msg.custom.assign("QTXPHUXQLMESUJVLENUIJAGLSLEMVGIDVTHFKN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.650660845713);
    msg.setSource(39780U);
    msg.setSourceEntity(34U);
    msg.setDestination(30257U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.258847324724;
    msg.lon = 0.354568370893;
    msg.z = 0.527398749837;
    msg.z_units = 110U;
    msg.radius = 0.674667073665;
    msg.duration = 47381U;
    msg.speed = 0.508608641955;
    msg.speed_units = 216U;
    msg.popup_period = 8065U;
    msg.popup_duration = 39324U;
    msg.flags = 9U;
    msg.custom.assign("AWYQKSMIURNAGHQGQKKFFYBBRPQJTPHVJYGISSPRFGVNUOLGXECAYYSVEKMNAAZUQCBEYXHPRVDVPWKBIKBBFWWFTOJEQLHYWZSNCQNCT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.202092985085);
    msg.setSource(37353U);
    msg.setSourceEntity(192U);
    msg.setDestination(46058U);
    msg.setDestinationEntity(95U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.832500172655);
    msg.setSource(28200U);
    msg.setSourceEntity(142U);
    msg.setDestination(65174U);
    msg.setDestinationEntity(230U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.0457753393119);
    msg.setSource(44469U);
    msg.setSourceEntity(141U);
    msg.setDestination(53997U);
    msg.setDestinationEntity(189U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.924309630732);
    msg.setSource(53608U);
    msg.setSourceEntity(116U);
    msg.setDestination(53697U);
    msg.setDestinationEntity(180U);
    msg.timeout = 63642U;
    msg.lat = 0.945466168431;
    msg.lon = 0.291949275292;
    msg.z = 0.420620592046;
    msg.z_units = 46U;
    msg.speed = 0.249909821952;
    msg.speed_units = 23U;
    msg.bearing = 0.0891916631261;
    msg.width = 0.91874315522;
    msg.direction = 198U;
    msg.custom.assign("GFKPKJTJMHGHHSTULRJJFAVIQEVTVORYZEQHTIMWIVXCSNLPSRGTBLUWBOTXWWDUHCMCCDIWPZTHEEPZUIOVNONLKYRZZMCIKRFPZGMEFUSKSBXJDIMOQPYIJWDXYOTRXARLXFCLBAEUJYGDQYNW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.5916087633);
    msg.setSource(2535U);
    msg.setSourceEntity(16U);
    msg.setDestination(38878U);
    msg.setDestinationEntity(87U);
    msg.timeout = 18937U;
    msg.lat = 0.600657465375;
    msg.lon = 0.872155770091;
    msg.z = 0.540740185229;
    msg.z_units = 184U;
    msg.speed = 0.604702877581;
    msg.speed_units = 87U;
    msg.bearing = 0.364354978162;
    msg.width = 0.358077155973;
    msg.direction = 67U;
    msg.custom.assign("UDNWKJTSZENETFBJSUFQIWKBXASYPHBISGFWUSGAQYLSGNTWEIJZXEGRFYFJEIIJLAQSTXUBKZACNBWHHSZZVHKLOAXFVKOCSQKRZWJIICNMDCCIUQUYVTAOPLLTZOJCSERCH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.849173598772);
    msg.setSource(51862U);
    msg.setSourceEntity(123U);
    msg.setDestination(63347U);
    msg.setDestinationEntity(34U);
    msg.timeout = 7072U;
    msg.lat = 0.426448973982;
    msg.lon = 0.243236354364;
    msg.z = 0.404312526834;
    msg.z_units = 200U;
    msg.speed = 0.436479479661;
    msg.speed_units = 44U;
    msg.bearing = 0.78505607724;
    msg.width = 0.655129423598;
    msg.direction = 25U;
    msg.custom.assign("WKDINBSOMDQKLJCGRYZQBGDQUSWLWXHNPAPITTUHZAOWNWPTNIHKMICYGTCNZXRAEOKYUXQQEMJXKFWPRVJULNJUPFXRGROODVETFAQMNIPVUJFCBAEVZJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.787713842839);
    msg.setSource(31744U);
    msg.setSourceEntity(218U);
    msg.setDestination(32590U);
    msg.setDestinationEntity(87U);
    msg.op_mode = 56U;
    msg.error_count = 42U;
    msg.error_ents.assign("CVQPKXVDSOZGRURAAKLUHREIZHHHGIWWTOUAMPUBCFYDLISJERODKRERNDKMLKVCUINTITTORJEQVW");
    msg.maneuver_type = 37145U;
    msg.maneuver_stime = 0.951408223464;
    msg.maneuver_eta = 11511U;
    msg.control_loops = 2396493765U;
    msg.flags = 231U;
    msg.last_error.assign("QBJENKGMPOZHSIPOOKZXNXEVBJNJPPISFMFBKDRYOFWZOMPXLWRDVEOJIQCYQDMCJWWNKGSEDXDQTYGUOLTMLKZXYOTHTR");
    msg.last_error_time = 0.615968737616;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.389136279087);
    msg.setSource(38588U);
    msg.setSourceEntity(228U);
    msg.setDestination(42404U);
    msg.setDestinationEntity(225U);
    msg.op_mode = 189U;
    msg.error_count = 150U;
    msg.error_ents.assign("OURTNBIRFDZJKCEWXVLNSZCDDTPMMDLPJMDYBQXYWOJZJTVGFMKCVXREBHKKXESSQVGFXNCZJLZTBVWIXUASLQLJJLKOHLZIRXWXGOIPBAIYYQZ");
    msg.maneuver_type = 780U;
    msg.maneuver_stime = 0.044938543556;
    msg.maneuver_eta = 12483U;
    msg.control_loops = 3876528124U;
    msg.flags = 193U;
    msg.last_error.assign("REABCNMREECVSQQFQNVGKXXQBMMYVYTEEBMWBCJANIRZFOGNNWIXARWLOFJYHPJZDHKPIG");
    msg.last_error_time = 0.0657843042864;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.418841385843);
    msg.setSource(60574U);
    msg.setSourceEntity(28U);
    msg.setDestination(54676U);
    msg.setDestinationEntity(253U);
    msg.op_mode = 108U;
    msg.error_count = 235U;
    msg.error_ents.assign("GRJFHQWWTOTHHGJIEUZCMYMODEPDMHYLJLNVNCXFDSDTNRCBILKOGNRPUIQBJUOOEZQUBAMVGYITBVNIOLKHGCPBERMTASZSHCPBSISGCRKAPTFYFDYEKJLWZ");
    msg.maneuver_type = 28081U;
    msg.maneuver_stime = 0.723590098012;
    msg.maneuver_eta = 42248U;
    msg.control_loops = 3116229319U;
    msg.flags = 55U;
    msg.last_error.assign("CVGBHYJEEEADCMZLOBIBYMRXIWVMPJKHDMFGSIYOYBTCNFXQEWEDYVLAHUBJFXUGYKZAALRWNCYKPNZZDKXKDGAMCBFJRNZOSNXQPKUQULDWUOXH");
    msg.last_error_time = 0.803581047524;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.68207630107);
    msg.setSource(46702U);
    msg.setSourceEntity(177U);
    msg.setDestination(8216U);
    msg.setDestinationEntity(26U);
    msg.type = 179U;
    msg.request_id = 12167U;
    msg.command = 89U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.530558211754;
    tmp_msg_0.lon = 0.768549943398;
    tmp_msg_0.z = 0.919654215645;
    tmp_msg_0.z_units = 54U;
    tmp_msg_0.radius = 0.0179973721327;
    tmp_msg_0.duration = 27210U;
    tmp_msg_0.speed = 0.534002458132;
    tmp_msg_0.speed_units = 197U;
    tmp_msg_0.custom.assign("OUBEVIBJJFSSSKKDJWTEO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 65044U;
    msg.info.assign("EKFDATJWNYDLJUPMDLXAHFBGVYEDDWSOJAJOPYSRIPYRGTTBWKIODXKQFISNHLFXNCQHOVGDALQZGMQZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.70874233515);
    msg.setSource(13511U);
    msg.setSourceEntity(198U);
    msg.setDestination(38523U);
    msg.setDestinationEntity(226U);
    msg.type = 35U;
    msg.request_id = 21112U;
    msg.command = 200U;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 51252U;
    tmp_msg_0.lat = 0.19285342409;
    tmp_msg_0.lon = 0.981259596622;
    tmp_msg_0.z = 0.21406685035;
    tmp_msg_0.z_units = 145U;
    tmp_msg_0.speed = 0.592294606843;
    tmp_msg_0.speed_units = 53U;
    tmp_msg_0.syringe0 = 40U;
    tmp_msg_0.syringe1 = 89U;
    tmp_msg_0.syringe2 = 16U;
    tmp_msg_0.custom.assign("XZBCJZXNPMUJINTDYOSEUDGOJYHXNKVMIYDPSSWQPVAWCJCAFNMXWESULIGTDYDFVVATAGEOQLRUQUGNSLHREXQTYEGVEFTBTHRKRKYOHUBZYJHDXCPGRQH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56237U;
    msg.info.assign("ODHTLNRGIRMMLANFRISKSCDOFUBQPPDKFZDLAYECYFMHACMGTNAMXRSQDVREPDCJXHNHFJBNULUHYERZIBZOYOIFWQUCLUYXSWTGYQDRCYJHSSZTKHOTCNXVTSJVVFPHTAWRGWMJGVJWZZNABUIUIGXQJEOZJNGLBXCVKVDQZTBKEUXWYLMKKACTWFMAOEQJHVFIWAPESJWKKZEB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.16353115212);
    msg.setSource(43738U);
    msg.setSourceEntity(125U);
    msg.setDestination(63591U);
    msg.setDestinationEntity(24U);
    msg.type = 37U;
    msg.request_id = 36787U;
    msg.command = 171U;
    IMC::ExpandingSquare tmp_msg_0;
    tmp_msg_0.lat = 0.562498142168;
    tmp_msg_0.lon = 0.0838967192721;
    tmp_msg_0.z = 0.196601125452;
    tmp_msg_0.z_units = 202U;
    tmp_msg_0.width = 0.650299103889;
    tmp_msg_0.hstep = 0.498730811042;
    tmp_msg_0.speed = 0.6824499569;
    tmp_msg_0.speed_units = 79U;
    tmp_msg_0.bearing = 0.676459098035;
    tmp_msg_0.curve_right = 180U;
    tmp_msg_0.custom.assign("VAOCEMWBYREAYIVWEGREMIHHTKDZUFTAMRTCRBFAFHDICDEIFNCZFTXZEQZBXFQLNJWSUPBMPDHWPAVDSFXHMVJAQLNHINJGTXWYUBIEQOMSBGUKNCYEWNAICVKTZJOCOKCVQTGDAZXTFSPFBOMUPEHKZYPMWRJPJYOSSL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 47627U;
    msg.info.assign("VAAUZAYWWFDHHVGKTHSLKPJFSDOASDIYXPEREBNPUXMIFXZLXQBNVZUILASJCTHBQAOXOIPNUQGPUIKOARKBBNSXCCMSFWNXZRVZCWMHKTYQQRVDWETLAGSCITHGULRJETJIKEXYCSZVYOBLEZTBPUJWGJNTNWOJBFQNPCMVMDLMWHDUPIFCQELZRBEUTDFMDZXDDVIXOWAJCFIAOCSRZYRWUMKHNEJGGNMFVFEPSGLQOLYKRVOKKGHYYPQHM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.329633402935);
    msg.setSource(41270U);
    msg.setSourceEntity(25U);
    msg.setDestination(26379U);
    msg.setDestinationEntity(252U);
    msg.command = 172U;
    msg.entities.assign("GHLCUDRRFUSUCAPGFOUHVZONFUTVXNFBWQYOHIOWQXXEDTJBUPIHVFLMODTAQWLKTUQBFHSEZFJYWGXQIIFJNTTNYMZLVBECPTRVVZOSNAYMKPVAZYHUWJZSITPPNDMLGLLHARSQNZAESADHQKOHAEDEWVXFAFRDJTMXPXRKXWZJWBYL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.880385334791);
    msg.setSource(48845U);
    msg.setSourceEntity(33U);
    msg.setDestination(19058U);
    msg.setDestinationEntity(171U);
    msg.command = 186U;
    msg.entities.assign("MVXHIBTJGEJUGHORAKAUYDJKDGIKAVIMJKUVYRXSKPJEHPDPBRFUWDYVGEAEAQOBSOXGATKAGMLBNCXWNHHZWCCSIWMWMFSNQIZKQMBEIIZBWTNGARFNUGPRNJGTFZTBDTCAOYEA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.176033844535);
    msg.setSource(6366U);
    msg.setSourceEntity(206U);
    msg.setDestination(5504U);
    msg.setDestinationEntity(35U);
    msg.command = 26U;
    msg.entities.assign("UKZYXPNFTMDUZODCTXNVAPBVVTAKXLTIGEEECBMJZQPENZFOLQLJOWZLASYPWNSJNRZJOSGIWCRNIPASRZCMRDJXLTLDPOSKKRSPGKFFDGFAWCHRVNNKHLWEXZVQFUYPUKAIBGICRVDNBIBDMEKYQULIHEJUBHVNMTWHQXGTFTQBEHVCSHWJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.718680450999);
    msg.setSource(9194U);
    msg.setSourceEntity(111U);
    msg.setDestination(32053U);
    msg.setDestinationEntity(23U);
    msg.mcount = 202U;
    msg.mnames.assign("MJPDVQKGUCBOVOCGMZSCUGZGZGESQYPVKELFWMLXJSYWNDNOHRRWXXVZZBTJYAWMPODWFKBMRTLPBEIXG");
    msg.ecount = 13U;
    msg.enames.assign("DITQAIRXHKHEPNVZRHXUKZFYPJIECWNJXQRIUVQOXMRTSOQNQCXBGYKBEXKKBPDYFAELSYLDHNMYGTUXGMPQAWPNOLHYLKWH");
    msg.ccount = 252U;
    msg.cnames.assign("OCVUECKIORGSZUEXOHMXBLNOWSJVOIRJOYDXKPMEAITZFMEVGXSUSBEWCDREMHVCWAFCAVRSOLLQYMNMCSQZZGHJNZJLNPADKDEHLTQPXGYQWQIHGMMQJVSNVXHUXHQPGXBYKTWKNTQXBQUYCLWFAXRTGCZGGLWUOZEAPRFFLYPHIJRUIHVDRZTWKTYRCVUKZABQKBCTAKHFBWUPPFERFDLMZVOSJDB");
    msg.last_error.assign("JYYAKYXUMLUYKFSNSVKFZTRHFGZWTTZCERQXFVWULLZRCTWOOHPEDNNJZOBFGYXEBJXUQYEQELAWLLMRMVAEO");
    msg.last_error_time = 0.676440465861;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.382208605986);
    msg.setSource(20424U);
    msg.setSourceEntity(204U);
    msg.setDestination(14444U);
    msg.setDestinationEntity(56U);
    msg.mcount = 212U;
    msg.mnames.assign("HGGBSZNODNVLWEYKFQQMCGNJLXOAMBIQKGNOVHRGFQSPLCMKSLVAIMLRVNWSWPVMRMTTFIEETKRUWUM");
    msg.ecount = 80U;
    msg.enames.assign("GWPLHCZHWTHVRDCYWOMSXUWIVVTOALKLKNBFAWNSGGHPIAVZVFCPSKOEFETZXOMXDSASSAUATGOUTKWRENMHGCACJBFIZOBCEMMLVOMOIYGRLJDNONQJBXNIUSMPBKCLDXHFLGBWKQFDCHXNHBRXUETJAZSORR");
    msg.ccount = 176U;
    msg.cnames.assign("STELSJTCRDAAORKMLYCGRCDZVCIRRGML");
    msg.last_error.assign("YOSFHNORSZQSTCHCPOAWIUOBEKTRXKMPKFRKQLTLUHWTTFVKSYJGBMZUQSWZKAKMYDGSWEPVQHNVIJIOTMEJRMBWUJUMGRQWMJEOCQDHNRIYBSZJONVVZYFXNWIUOJSYLADXQMVPDLPDBAZALXTEQGYRZYGEWUNIZXEKFHMDXFKGKNYDZATTCXLJICFBDBZGBUCRVLLAXVNNWNARUECTDPIIBLEFAJCHLFYJGEMPQOHFHWXU");
    msg.last_error_time = 0.418881282052;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.647861977486);
    msg.setSource(44111U);
    msg.setSourceEntity(158U);
    msg.setDestination(28821U);
    msg.setDestinationEntity(239U);
    msg.mcount = 173U;
    msg.mnames.assign("CIMPGVWPJTPKMTW");
    msg.ecount = 21U;
    msg.enames.assign("IQWJXUZJTNEFBOGMWODYBXCSYGWXVMIABFTPBLKXHOESXAGWZURZJZRBMYSRRQVFFWPJRYEFTVEKNGAKKXVGYMESBNZLGYSZUVFCMICTCNHFUTWKPUHOQAYVRCVWDJKTGSDLHRCAUTDQJOOMHWAUMULQLIVEIQFDIOLLVRNGFEIBGLADFXBBSPNXUWMMS");
    msg.ccount = 23U;
    msg.cnames.assign("UYFKZLNWRXVKIVSGYZCYMPZRUBOHFDUQWLATJSLOZBODGQPJHXKXCIZAOVJCIWYHRFTEECFUAODPKDHFQNWUOVAWHDTNQJF");
    msg.last_error.assign("VXAXSVBLHQEKXGXDLFSZRHPYLPZQIFJXMADAJGAVTWRIFRFCSRHCQYURYSRRMJGKIBIHLFZUKEQHHUQDEFGWAKIATDLBWYFNV");
    msg.last_error_time = 0.341591183222;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.314622321336);
    msg.setSource(33613U);
    msg.setSourceEntity(234U);
    msg.setDestination(63735U);
    msg.setDestinationEntity(37U);
    msg.mask = 254U;
    msg.max_depth = 0.711146765875;
    msg.min_altitude = 0.67866543286;
    msg.max_altitude = 0.325748319267;
    msg.min_speed = 0.772804934465;
    msg.max_speed = 0.00888708925903;
    msg.max_vrate = 0.0668708634481;
    msg.lat = 0.620057026453;
    msg.lon = 0.597482191764;
    msg.orientation = 0.121200988912;
    msg.width = 0.791282823964;
    msg.length = 0.672432429642;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.263923425982);
    msg.setSource(16588U);
    msg.setSourceEntity(179U);
    msg.setDestination(9072U);
    msg.setDestinationEntity(3U);
    msg.mask = 39U;
    msg.max_depth = 0.230964754833;
    msg.min_altitude = 0.856392370837;
    msg.max_altitude = 0.588314412037;
    msg.min_speed = 0.559321244928;
    msg.max_speed = 0.495325911386;
    msg.max_vrate = 0.881213281328;
    msg.lat = 0.4905736018;
    msg.lon = 0.0709014877441;
    msg.orientation = 0.132878832044;
    msg.width = 0.847876747533;
    msg.length = 0.250687794712;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.470124225112);
    msg.setSource(27902U);
    msg.setSourceEntity(237U);
    msg.setDestination(13050U);
    msg.setDestinationEntity(57U);
    msg.mask = 167U;
    msg.max_depth = 0.781617810085;
    msg.min_altitude = 0.195568861398;
    msg.max_altitude = 0.320588367136;
    msg.min_speed = 0.638534795236;
    msg.max_speed = 0.311259381738;
    msg.max_vrate = 0.208358400686;
    msg.lat = 0.737972276207;
    msg.lon = 0.575209911908;
    msg.orientation = 0.865401466585;
    msg.width = 0.0301983322936;
    msg.length = 0.999272756296;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.357654735356);
    msg.setSource(18009U);
    msg.setSourceEntity(15U);
    msg.setDestination(12102U);
    msg.setDestinationEntity(53U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.665722240373);
    msg.setSource(36227U);
    msg.setSourceEntity(213U);
    msg.setDestination(33519U);
    msg.setDestinationEntity(163U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.916240719985);
    msg.setSource(3171U);
    msg.setSourceEntity(41U);
    msg.setDestination(10047U);
    msg.setDestinationEntity(133U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.434356508865);
    msg.setSource(59944U);
    msg.setSourceEntity(192U);
    msg.setDestination(32382U);
    msg.setDestinationEntity(148U);
    msg.duration = 28924U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.537366499017);
    msg.setSource(31805U);
    msg.setSourceEntity(193U);
    msg.setDestination(9586U);
    msg.setDestinationEntity(57U);
    msg.duration = 60416U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.712882942413);
    msg.setSource(17444U);
    msg.setSourceEntity(176U);
    msg.setDestination(40506U);
    msg.setDestinationEntity(79U);
    msg.duration = 45005U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.827409307909);
    msg.setSource(45051U);
    msg.setSourceEntity(204U);
    msg.setDestination(6223U);
    msg.setDestinationEntity(34U);
    msg.enable = 176U;
    msg.mask = 3694198494U;
    msg.scope_ref = 1667722094U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.24803870649);
    msg.setSource(57736U);
    msg.setSourceEntity(214U);
    msg.setDestination(1243U);
    msg.setDestinationEntity(216U);
    msg.enable = 27U;
    msg.mask = 1419157680U;
    msg.scope_ref = 2890765621U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.480119332353);
    msg.setSource(6361U);
    msg.setSourceEntity(40U);
    msg.setDestination(7343U);
    msg.setDestinationEntity(194U);
    msg.enable = 113U;
    msg.mask = 2861387057U;
    msg.scope_ref = 1209464527U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.488897638827);
    msg.setSource(49272U);
    msg.setSourceEntity(58U);
    msg.setDestination(59348U);
    msg.setDestinationEntity(128U);
    msg.medium = 249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.204312140695);
    msg.setSource(15131U);
    msg.setSourceEntity(21U);
    msg.setDestination(15763U);
    msg.setDestinationEntity(54U);
    msg.medium = 108U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.442619501011);
    msg.setSource(44500U);
    msg.setSourceEntity(210U);
    msg.setDestination(49059U);
    msg.setDestinationEntity(161U);
    msg.medium = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.0115192724018);
    msg.setSource(55810U);
    msg.setSourceEntity(162U);
    msg.setDestination(21395U);
    msg.setDestinationEntity(20U);
    msg.value = 0.940102076201;
    msg.type = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.396455477385);
    msg.setSource(40390U);
    msg.setSourceEntity(119U);
    msg.setDestination(4866U);
    msg.setDestinationEntity(124U);
    msg.value = 0.725833034539;
    msg.type = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.157975184841);
    msg.setSource(62858U);
    msg.setSourceEntity(165U);
    msg.setDestination(58420U);
    msg.setDestinationEntity(98U);
    msg.value = 0.309663223425;
    msg.type = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.212423974217);
    msg.setSource(53831U);
    msg.setSourceEntity(50U);
    msg.setDestination(9666U);
    msg.setDestinationEntity(63U);
    msg.possimerr = 0.595040344109;
    msg.converg = 0.537428906079;
    msg.turbulence = 0.644315958481;
    msg.possimmon = 39U;
    msg.commmon = 235U;
    msg.convergmon = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.329600190346);
    msg.setSource(46888U);
    msg.setSourceEntity(138U);
    msg.setDestination(6887U);
    msg.setDestinationEntity(24U);
    msg.possimerr = 0.0432460436964;
    msg.converg = 0.739799106824;
    msg.turbulence = 0.46604986717;
    msg.possimmon = 104U;
    msg.commmon = 24U;
    msg.convergmon = 134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.796554491312);
    msg.setSource(27697U);
    msg.setSourceEntity(69U);
    msg.setDestination(39939U);
    msg.setDestinationEntity(61U);
    msg.possimerr = 0.515857787536;
    msg.converg = 0.0280571497728;
    msg.turbulence = 0.730148846943;
    msg.possimmon = 112U;
    msg.commmon = 236U;
    msg.convergmon = 113U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.707206730472);
    msg.setSource(55825U);
    msg.setSourceEntity(15U);
    msg.setDestination(19942U);
    msg.setDestinationEntity(50U);
    msg.autonomy = 19U;
    msg.mode.assign("YVLHDQEQUORFTMPOKCOQMJDXIVEOYNVMHETSSRD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.970852891852);
    msg.setSource(61860U);
    msg.setSourceEntity(78U);
    msg.setDestination(50051U);
    msg.setDestinationEntity(151U);
    msg.autonomy = 174U;
    msg.mode.assign("PRKRRKAJRYNRFXUTYXPOLLZLSOUMWUDYGHNNSJUONZONCBIGHSQXZWQOMJXIPXLVUGFILQTOZSHPEEHFNJTAYHQWMHFZIZDMMIJBTVLUFFPCGOVQFKBFJMXATDMSIGDJWVPEAZCRHQTSBHLBWCKOVGJLYXQBOLKXPKDKCMBXNBINMRNVSEDPHATZCEZRGTWTAXNWDCKRIPFLEVFIIUQRJDAKUHWYPVZUYYVGGMA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.758362603938);
    msg.setSource(20293U);
    msg.setSourceEntity(32U);
    msg.setDestination(53948U);
    msg.setDestinationEntity(162U);
    msg.autonomy = 153U;
    msg.mode.assign("UHIPPFKNOAMDQXIGICQBZTZJULAIB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.843936325822);
    msg.setSource(61865U);
    msg.setSourceEntity(57U);
    msg.setDestination(30633U);
    msg.setDestinationEntity(11U);
    msg.type = 229U;
    msg.op = 50U;
    msg.possimerr = 0.0896316398623;
    msg.converg = 0.0719921548249;
    msg.turbulence = 0.591993143033;
    msg.possimmon = 26U;
    msg.commmon = 155U;
    msg.convergmon = 81U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.328235975739);
    msg.setSource(31944U);
    msg.setSourceEntity(206U);
    msg.setDestination(35328U);
    msg.setDestinationEntity(7U);
    msg.type = 16U;
    msg.op = 230U;
    msg.possimerr = 0.701007973108;
    msg.converg = 0.361744323375;
    msg.turbulence = 0.340921280177;
    msg.possimmon = 22U;
    msg.commmon = 168U;
    msg.convergmon = 94U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.190685324063);
    msg.setSource(32758U);
    msg.setSourceEntity(252U);
    msg.setDestination(47808U);
    msg.setDestinationEntity(68U);
    msg.type = 221U;
    msg.op = 163U;
    msg.possimerr = 0.991433778056;
    msg.converg = 0.972489253647;
    msg.turbulence = 0.240913622703;
    msg.possimmon = 251U;
    msg.commmon = 95U;
    msg.convergmon = 36U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.862743998872);
    msg.setSource(31979U);
    msg.setSourceEntity(215U);
    msg.setDestination(4313U);
    msg.setDestinationEntity(242U);
    msg.op = 200U;
    msg.comm_interface = 198U;
    msg.period = 6494U;
    msg.sys_dst.assign("QJIWXRFCZYOGHGKOABBBCTVOVRHAREDAVJIQVUITNMKESPMJUPLNFVSOWVCRYHPRCXSUYKZEOONHYHQBJHDIRAJLMZKXKMULEBGMHPZDCXRYYUOAVFMKVJXPQLBBMHLTRSDYEPDCBHTWGDOSPUBSOVCIZXANDPRFWIJTEIAUQHGGGTTBDQXYWZDKYZDGPCXTUSAEYFGCMJKINONAAMJWSM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.953962906627);
    msg.setSource(56006U);
    msg.setSourceEntity(8U);
    msg.setDestination(38272U);
    msg.setDestinationEntity(99U);
    msg.op = 24U;
    msg.comm_interface = 25U;
    msg.period = 56336U;
    msg.sys_dst.assign("TIZHADJKAHEMPJSURJQELVUIRLGSJCXFCFRYOYUNFXLLVWDLDZVYHNBOVCCWYWZTPTPHXQKJGCMJGPQOMVXGFAGIYIDMXLXODHFIAJSACNKQRBJOSYBSHUYITNLLESQPNLEHWAWBWUGEKZKUYUXUFWBYAQVQKTQEWDECVZQIHTEROMZVIGSMKCDKNBPZEXDNMWOBK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.105568250021);
    msg.setSource(20566U);
    msg.setSourceEntity(18U);
    msg.setDestination(58973U);
    msg.setDestinationEntity(253U);
    msg.op = 62U;
    msg.comm_interface = 167U;
    msg.period = 3878U;
    msg.sys_dst.assign("RKVEALSTWBIMHGKPLRBUJIWYSAKQOZIFZKAJQGVNCILANSERTYDTJIIMINJYBFJOQSYPQQAXDYBFCODZRRPNMPOEVLBBZXEGHLQIFEXDFSZXPLLUBLTYYOGPMCLNZWMUHDJESBGHAKFGRJR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.653083581278);
    msg.setSource(3803U);
    msg.setSourceEntity(141U);
    msg.setDestination(2628U);
    msg.setDestinationEntity(40U);
    msg.stime = 1560261528U;
    msg.latitude = 0.390399783336;
    msg.longitude = 0.82712167159;
    msg.altitude = 1285U;
    msg.depth = 64801U;
    msg.heading = 1740U;
    msg.speed = -12806;
    msg.fuel = 1;
    msg.exec_state = -98;
    msg.plan_checksum = 47884U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.945754645462);
    msg.setSource(65367U);
    msg.setSourceEntity(30U);
    msg.setDestination(42186U);
    msg.setDestinationEntity(68U);
    msg.stime = 2023810638U;
    msg.latitude = 0.955477778679;
    msg.longitude = 0.545444438892;
    msg.altitude = 19819U;
    msg.depth = 27628U;
    msg.heading = 18262U;
    msg.speed = -1113;
    msg.fuel = -121;
    msg.exec_state = 63;
    msg.plan_checksum = 7181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.0518835802231);
    msg.setSource(42960U);
    msg.setSourceEntity(21U);
    msg.setDestination(53049U);
    msg.setDestinationEntity(17U);
    msg.stime = 3244759712U;
    msg.latitude = 0.505792643778;
    msg.longitude = 0.805534748006;
    msg.altitude = 35390U;
    msg.depth = 5746U;
    msg.heading = 3774U;
    msg.speed = -3627;
    msg.fuel = 22;
    msg.exec_state = -96;
    msg.plan_checksum = 44475U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.534327493249);
    msg.setSource(19042U);
    msg.setSourceEntity(79U);
    msg.setDestination(58413U);
    msg.setDestinationEntity(200U);
    msg.req_id = 49554U;
    msg.comm_mean = 100U;
    msg.destination.assign("EHZPRJSAVLRAONEIKIFP");
    msg.deadline = 0.187754441924;
    msg.range = 0.752721859298;
    msg.data_mode = 99U;
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 12784U;
    tmp_msg_0.control_ent = 240U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 77U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.896362121761;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 59U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.00824893145164;
    tmp_tmp_tmp_msg_0_0_1.z_units = 145U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.804604142278;
    tmp_tmp_msg_0_0.lon = 0.306292172803;
    tmp_tmp_msg_0_0.radius = 0.803146706972;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 189U;
    tmp_msg_0.proximity = 158U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LSXCZHHDEQEALLLKNSFJQSFTUVGUDNTNCHRFOBPZOVYOYOIBYRZTASTPXWLTVGHDEUYVXWMWXEIWGZLVNACHMIDUJQWUSEGWIPGKRAWFNPHRFHTJDYZMNWJKBCTEZMSIOBQVLSPMEEIJCAFYKTVNNBJXWIMAQPQZAMBSDIVDKZKUNTFACCOLKJHVGFGWUBRXYPGIFOXLRKXZUOB");
    const char tmp_msg_1[] = {84, -16, -85, -93, -3, 113, 79, -14, -111, 89, -4, -123, -53, -123, -24, -56, -108, -64, -74, -23, -102, -31, -102, -4, -33, -15, -72, 46, 107, 76, 118, 61, 21, -49, -127, -34, 32, -90, 80};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.605728156266);
    msg.setSource(21750U);
    msg.setSourceEntity(25U);
    msg.setDestination(54310U);
    msg.setDestinationEntity(146U);
    msg.req_id = 56926U;
    msg.comm_mean = 175U;
    msg.destination.assign("XNHAVTGCRWDALINHRZYALAALISYFGSLIS");
    msg.deadline = 0.027346274622;
    msg.range = 0.167385539472;
    msg.data_mode = 10U;
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.692877597651;
    tmp_msg_0.lon = 0.190634566546;
    tmp_msg_0.depth = 0.121218671751;
    tmp_msg_0.roll = 0.502697323917;
    tmp_msg_0.pitch = 0.269247757439;
    tmp_msg_0.yaw = 0.574331369071;
    tmp_msg_0.rcp_time = 0.87660261757;
    tmp_msg_0.sid.assign("VPSNEBNMEFFZXBFCVAOLRKUBCTQCYMHKDPKPGMLZYUVWDWAHPJMDAMEKOLWTETQQSNEZQPDVTOAKUKRUWIOTYNXUNTBIBTNJUXAHBHSFBCSOJPEDCUIRBAUORICHGWKASFNDKZARYOHUVOMTGWDMICYGQLASFJGWJFXPQGZPWTK");
    tmp_msg_0.s_type = 70U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XPJYDNECXJEONPGBKLEPRMHKZDMSFMUDSDPVDHDYWOMSSGZCMGQPCJXEZZEMWNB");
    const char tmp_msg_1[] = {-126, 60, 112, -111, -101, -66, 22, -14, -102, -33, 57, -73, -110, 0, -20, 43, 28, -27, -128, -108, -88, 3, 55, 50, -59, -26, 104, -76, 92, 105, 27, 28, 104, -27, 95, -67, 64, -83, -20, 16, 67, -72, 103, -109, 65, -126, 33, -100, -122, -84, 21, -76, -30, 78, 105, 126, 49, -35, 25, 92, 67, -44, -88, 48, -125, 75, -76, -73, -107, -10, -7, -100, 69, -60, -49, 22, 14, 56, -110, 31, 15, 11, -30, 106, 43, -2, 22, -10, -47, -50, 0, 7, -83, 84, 55, -125, -41, -2, 115, -12, 5, 121, -4, 0, -57, 34, -40};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.614017250817);
    msg.setSource(8103U);
    msg.setSourceEntity(121U);
    msg.setDestination(53344U);
    msg.setDestinationEntity(143U);
    msg.req_id = 52533U;
    msg.comm_mean = 109U;
    msg.destination.assign("BAOCAKCHRDEGLZRHYRCTIETYSDNGNBLGZFIFCOKWZPSGTWLWKMCAPRLVBFBSQGFZHOJUHAETRMZUXXIVFCDQHMWBTENWWJJLXEHPNAIHKYPRIMGXKIKTZAVMYUQLOQWQDUEKTXDJPMOXBNBUSPYJWQFCGGDVGWFVMJJHSYCRJVYBZTJGEXBEYLLXBYK");
    msg.deadline = 0.418222611722;
    msg.range = 0.572488695415;
    msg.data_mode = 83U;
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 191U;
    tmp_msg_0.plan_id.assign("GKQRYLWKPLAPZGEXSFFDSJLKMTXPONHUWKLNNUAHGEJHDCBIYENKJKDTBDTSZXROUBIOGXQCBMCECSVKNDAINV");
    tmp_msg_0.plan_eta = 1043953487;
    tmp_msg_0.plan_progress = 0.120087196734;
    tmp_msg_0.man_id.assign("HTMFWYKGQYPJMOTHATJXDEVJPOCYWGBNZSVTIZLZJPVARUAOURFXEQWMLAMHUAYBGNUEPIIKOTKAQRFLEXZJDQSUQRVDEBPFNYXBFDVWYRHFSXTFFDZLAQAPPZEIAO");
    tmp_msg_0.man_type = 7339U;
    tmp_msg_0.man_eta = -1014003919;
    tmp_msg_0.last_outcome = 150U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("CLPFKSUNEKBUFEZDHVGOONODXJLEMACFEVRZDVTAXXTPQPGDJBIBQHIVPAYWZQZDJXYODHUCDGMRUCRCQBLDQYGWWEVCOEZYSIVGWENPQHTUNFRFCUXSTSCWFVHPLISLJJIFISIPLKTQOUMBBNKLHAZFRLKRPUZHXEXBZTVAWCLKXJYKTMOFNEXAOJNHDGTGLRJYYINZKTKRBUPKMJRYMYAGMNUAZOHAQFOB");
    const char tmp_msg_1[] = {83, 72, 19, 30, -51, 31, -104, -110, -100, -58, 23, 97, -47, -105, 39, 39, 102, 55, -121, 38, 36, -13, 36, -15, -69, -12, -36, -12, -17, -69, -14, 112, -35, 55, 21, -79, -120, -13, 59, -54, -7, -119, -3, -32, 114, -41, 37, 122, 104, -112, -41, -119, -13, -79, -109, -93, -96, 54, -30, -15, 119, -30, 63, 108, 5, -124, -124, -67, -123, 88, 69, -84, 109, 11, -33, -1, 22, 126, 81, 40, 32, -81, -77, 101, -45, -45, -57, 41, 100, 52, -109, 119, -95, -11, -47, -76, 18, 31, 119, -25, 3, 22, 98, 23, 83, 80, -41, 75, -118, -100, 40, 3, -63, -92, 76, -96, -29, -34, 59, -35, 55, 47, -72, 9, -70, 91, -56, -55, 101, 72, -96, -63, -128, 44, 105, -77, -124, -56, 94, 21, 109, -55, 40, -122, 91, -30, 65, 62, 86, -114, -8, -104, 54, -38, -16, 77, -114, 8, -94, -15, 1, 23, -38, 87, -44, -27, 25, 27, 92, 32, 103, 107, 61, -112, 115, -29, -80, 108, 118, 110, -84, 118, -109, -59, -23, -86, -69, -121, -70, -86, -121, -34, 46, 78, 87, -64, -51, 18, 44, -3, -86, 7, -25, 113, 110, -79, -36, 98, 112, -106, 67, -107, 94, 16, 19, -18, -36, -119, 64, -86, 61, 51, 47, -101, 100, -31, -72, -117, -128};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.776266622923);
    msg.setSource(25173U);
    msg.setSourceEntity(176U);
    msg.setDestination(12892U);
    msg.setDestinationEntity(147U);
    msg.req_id = 49389U;
    msg.status = 75U;
    msg.range = 0.31605147105;
    msg.info.assign("PQBCRWTRMIBWQNSUIRTSAVXLRXJXXKONGFXETRLQYZQGWGHOBEYKCLPMFVTUYSJMJEBRJEXYSSWVMSNFJURTCJQFNMZBPFKTNAWOIPJCHMZIYGZZQGXVZEVWMTDDKAGMACSHMGUINILZHKVLAUVNUASHUOMEFVABQYJLSWHFADDEYRPOTBSXBRZFKKDDPENOPCEEKHPHLC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.658718940462);
    msg.setSource(40577U);
    msg.setSourceEntity(210U);
    msg.setDestination(56066U);
    msg.setDestinationEntity(128U);
    msg.req_id = 41276U;
    msg.status = 217U;
    msg.range = 0.848738223321;
    msg.info.assign("NALDEYJDSKVOGKPMQIAHXUGPSBHUUZOEKEYLGXNIYCVFEKAYSBSSZPMHDWAJGQDVCEZIJGYRUYMJZZAHMXCRWRMFTFUFIHSPPNCXKWCWRLCZBATVOXEGCPIFSLPKRFKQLHLDWUTUTVKXRS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.826012238597);
    msg.setSource(7401U);
    msg.setSourceEntity(204U);
    msg.setDestination(17540U);
    msg.setDestinationEntity(190U);
    msg.req_id = 64636U;
    msg.status = 105U;
    msg.range = 0.965662626116;
    msg.info.assign("BITZWRVLNSGEYCAQBQLYEMCKYMVSZDDLOWFMQBTDNMQYNJJWCGJUFHISGXWKOZIBZUJPPNKKJWOIDXATVABRPURNDDTPQMJBFXZLUOEASXSIGHAWCRRGVEKEFNLUWGKYTGHYGPJLTEBYKOLPGYZLXDVQTPUNQUHLCAHCWVUNIPUFIZHVIDJDOWNRFITZOSRPOVQEAUSMPXMVRXASIRCYKFAXGWTBHHVYXSODRXCBHTOQELFCEK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.608582588061);
    msg.setSource(2769U);
    msg.setSourceEntity(21U);
    msg.setDestination(45394U);
    msg.setDestinationEntity(50U);
    msg.req_id = 25591U;
    msg.destination.assign("SFAPXRVBUZZDZSOEHWEYSXYOAOQBEBTNBIRNHPWEYESMSQVGDHQJHDQNFNNUJTSDUQKHIDTRYVNYLLCQWPTCRZIAOMTVWPVWQHAVAFTXQBAMXBBCOUQKJRUVKQCFKGMIUULMXRNZZYMGVDFSKTKGJMBOLDJXCEIMFPZGGLCRBFCBJZYSFGXWGTADXYRLTKLPPIVRJ");
    msg.timeout = 0.027384259157;
    msg.sms_text.assign("CVIYBHUFYSNNVJGQCPKOZDRSIEWYUFCCWMWHFLXAHYRYOTWQGWMXKPNQYTPNBVOLTFESRYFSLXHSDYAILCUQZFKNHKVVTJLZDZOMKLXIDJJEKPPGDCJRWDENNHVVUKBNMSUBXOTGHWFJRONPBERZDFBAEPFMMZXXKEHOMIGRXCIRVSKPIYMEZTQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.140648338454);
    msg.setSource(15301U);
    msg.setSourceEntity(52U);
    msg.setDestination(4120U);
    msg.setDestinationEntity(160U);
    msg.req_id = 2192U;
    msg.destination.assign("EITZSINGKIIRDIOGMWOQIEYAHPVFGGJQDNQTXKNMBNJAZXUVSMEDAPILDFPQDHOZURPJKMFOCQVFWXYRCDHLPBLK");
    msg.timeout = 0.981922685746;
    msg.sms_text.assign("APVISYOKGNRTHDXKRIAPARPJPZLOWFIEMDOCGRCYQXPBXEMUHYOFILMPAUIVHOVLFMCFOSUBJSBMSZJUCBSJBQNNDWCQWKGABKHHHGPMQZEJWGWGTHWIRLRWAJBTIDERZZWLCXDECRFJALDTRZGHNUDVLUAUOSUAZKINYNQNQBEEOXQYCCVAPBPKCNTNJVETMBFMGXUVOZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.309319182265);
    msg.setSource(36967U);
    msg.setSourceEntity(55U);
    msg.setDestination(34091U);
    msg.setDestinationEntity(154U);
    msg.req_id = 32023U;
    msg.destination.assign("WVQTNDUGKDTNEAJWJZRIRAGYNHHUFPLYYHSTBPMZTWTPWOSEPDJIZYLXATEYCMDZNMELEL");
    msg.timeout = 0.653213658388;
    msg.sms_text.assign("RALMFHXGDILYVSILCEXTJUNVZNOADEUNPCDYZMMBOGKUICOYWWADXAPHLZGDAQJNHYIKFMWVSMHNHLBESJFXBJTUGSVCTHGZRERQATYJGOOYMNF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.720162241975);
    msg.setSource(39352U);
    msg.setSourceEntity(106U);
    msg.setDestination(37475U);
    msg.setDestinationEntity(26U);
    msg.req_id = 21106U;
    msg.status = 33U;
    msg.info.assign("VRNUPYNTPGUYZFGMIFAEAYWZTMVGAKWEIOCQMJQBXXXOROVHCHWTXKEWKORTQMGVXELCASHEYBQHRGQYUKBPLKFKMHUPCQMXHASXFRFTJNWSSRPVZIDSBFRQLJMJSZLIDDCBZDSNFCLZYMEQUOICKYOPWSWMVNBESJG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.30415945668);
    msg.setSource(12335U);
    msg.setSourceEntity(77U);
    msg.setDestination(54223U);
    msg.setDestinationEntity(11U);
    msg.req_id = 20100U;
    msg.status = 191U;
    msg.info.assign("PODCOCQQLJQETVDJTCBPAQAZKHAFIJYGYZLXIGVBSLERBMXTLFBGEXWVFROMYTCMEGXIMIKWWEGEZHOXHHUWLSPJXPMFHEKZNKLDNIVWNEEZEPOUYPCRTJSOWBADSYWOQAHJUSNZJTRPFDSYQRRQVHJQLGPAXKJMTCHSYGGXQCHVZIFXDTMJIKURAAU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.986209386122);
    msg.setSource(44715U);
    msg.setSourceEntity(187U);
    msg.setDestination(9016U);
    msg.setDestinationEntity(79U);
    msg.req_id = 39815U;
    msg.status = 136U;
    msg.info.assign("VQEQVBJNDOARTCYBEOCSNSTNMSGGILQDJFXULKWAGBTMYKYBTVJXXMPKUGVTKIMYIGEFAUJKJLXHDMLWUZWRVZOQIPPUDGWPLYBOTEHNPOMZLSLSRNVHQVRLJDOVZLGFZRHDANLYNWCRNSEATOMIYEGXZRNNJZBYFTUSIXQTGQQUCIBPQUSHAGPIOORWHHSPDWF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.712962066987);
    msg.setSource(57599U);
    msg.setSourceEntity(182U);
    msg.setDestination(34615U);
    msg.setDestinationEntity(209U);
    msg.state = 133U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.814042659093);
    msg.setSource(15442U);
    msg.setSourceEntity(152U);
    msg.setDestination(974U);
    msg.setDestinationEntity(33U);
    msg.state = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.417671303844);
    msg.setSource(47013U);
    msg.setSourceEntity(78U);
    msg.setDestination(21701U);
    msg.setDestinationEntity(71U);
    msg.state = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.124692809417);
    msg.setSource(999U);
    msg.setSourceEntity(160U);
    msg.setDestination(15766U);
    msg.setDestinationEntity(225U);
    msg.state = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.361744085148);
    msg.setSource(58930U);
    msg.setSourceEntity(60U);
    msg.setDestination(48387U);
    msg.setDestinationEntity(52U);
    msg.state = 13U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.983426847687);
    msg.setSource(20330U);
    msg.setSourceEntity(234U);
    msg.setDestination(35426U);
    msg.setDestinationEntity(114U);
    msg.state = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.218540567804);
    msg.setSource(49446U);
    msg.setSourceEntity(61U);
    msg.setDestination(32239U);
    msg.setDestinationEntity(202U);
    msg.req_id = 58748U;
    msg.destination.assign("ATUYLMMMVKUIWWFCLCAHQZKDEGZIOIMJEVFEAVTSEWVORLBDTWIEKWUXHZKYUFLJBRADHLPNQUMJWUJLL");
    msg.timeout = 0.184072462697;
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.980590532635;
    tmp_msg_0.time_next_service = 0.371173605882;
    tmp_msg_0.time_motor_next_service = 0.756089373965;
    tmp_msg_0.time_idle_ground = 0.771259451717;
    tmp_msg_0.time_idle_air = 0.987072088789;
    tmp_msg_0.time_idle_water = 0.678948209965;
    tmp_msg_0.time_idle_underwater = 0.289187047788;
    tmp_msg_0.time_idle_unknown = 0.460298924424;
    tmp_msg_0.time_motor_ground = 0.572848029259;
    tmp_msg_0.time_motor_air = 0.86167873863;
    tmp_msg_0.time_motor_water = 0.527002259523;
    tmp_msg_0.time_motor_underwater = 0.34061045583;
    tmp_msg_0.time_motor_unknown = 0.271183179011;
    tmp_msg_0.rpm_min = -24247;
    tmp_msg_0.rpm_max = 3652;
    tmp_msg_0.depth_max = 0.491634441894;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.864472416527);
    msg.setSource(45918U);
    msg.setSourceEntity(68U);
    msg.setDestination(14922U);
    msg.setDestinationEntity(69U);
    msg.req_id = 61204U;
    msg.destination.assign("TGRBJXBLPOARWVYGTNKRXQSDHXXOQYIJQKYHKHACPOIHTVUJYINZWMUFOMGGITNEZAFLHMNSPAWSHSMLEKKIXTDVITVLNRIXKYAYXLSWBLCJVZNUNEMCSZBDDEUXRPMPCIX");
    msg.timeout = 0.877751181234;
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 218U;
    tmp_msg_0.range = 0.637770602559;
    tmp_msg_0.acceptance = 42U;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.112266637523);
    msg.setSource(14432U);
    msg.setSourceEntity(185U);
    msg.setDestination(25656U);
    msg.setDestinationEntity(240U);
    msg.req_id = 62057U;
    msg.destination.assign("UYAGQKMFHXTVIWMPIBRILUUEVFGVCNTSAHGBAINKQOBJGKOOOFTLAWYBZWNJLRDWZQPUGDFJAVJNOIPAZBMCCCGYSRTFMEXHFRRJRTZHPWTSHBGYVJWOMYPYEKUCLINHGOKQLOZQUMNNESJDJMYAMTWKLPKBPXFSVXVQYVKEIXGDIESZGVYYAJZJPCPQNLSZVZBHWDEELOSNBRTMDBRXMLTIRXFCFCKX");
    msg.timeout = 0.221253944126;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.549916507767;
    tmp_msg_0.lon = 0.0823935174799;
    tmp_msg_0.z = 0.140619412655;
    tmp_msg_0.z_units = 95U;
    tmp_msg_0.speed = 0.930402240603;
    tmp_msg_0.speed_units = 132U;
    tmp_msg_0.abort_z = 0.632970356576;
    tmp_msg_0.bearing = 0.459957023733;
    tmp_msg_0.glide_slope = 145U;
    tmp_msg_0.glide_slope_alt = 0.725010596084;
    tmp_msg_0.custom.assign("OLSWBOCHVSRKRDARBJCSXBLQAYLNQLUYMBOIBDKZGRCIVQOQJRRRVJIESRNVXDGXIAIOPTAQXKR");
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.539818924308);
    msg.setSource(50128U);
    msg.setSourceEntity(164U);
    msg.setDestination(17752U);
    msg.setDestinationEntity(16U);
    msg.req_id = 48843U;
    msg.status = 83U;
    msg.info.assign("WDBOUXFTJSRKJOMXQCARZNRWIYEWFBMNFBCBZVZDQXUIOXWLKJMQTDYUUCSBQCEUDLZRWVYJTKWEOCWLPAEZZLHQKVWQPOXIAGFLA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.0489253216967);
    msg.setSource(55781U);
    msg.setSourceEntity(132U);
    msg.setDestination(9260U);
    msg.setDestinationEntity(193U);
    msg.req_id = 18050U;
    msg.status = 11U;
    msg.info.assign("VJISXYHCNYVGMOZFVAHBUXOVXIXWSI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.943016746749);
    msg.setSource(17428U);
    msg.setSourceEntity(68U);
    msg.setDestination(23583U);
    msg.setDestinationEntity(92U);
    msg.req_id = 14238U;
    msg.status = 8U;
    msg.info.assign("KEFLEYVDFAWJHOIJUDUBGHXXWORTQHADYEKATTNOZMRFODKJUNEVWEUGPCYLXXCLRBMKDYGYWBFJPVTDGZYMJRMGSSVMMOHXNSWTISIOFJGCWAUNBQQNSAPC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.495512715092);
    msg.setSource(39690U);
    msg.setSourceEntity(254U);
    msg.setDestination(27461U);
    msg.setDestinationEntity(244U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.262657834593);
    msg.setSource(29026U);
    msg.setSourceEntity(103U);
    msg.setDestination(32559U);
    msg.setDestinationEntity(66U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.772628543233);
    msg.setSource(2158U);
    msg.setSourceEntity(171U);
    msg.setDestination(53305U);
    msg.setDestinationEntity(136U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.931130356515);
    msg.setSource(24676U);
    msg.setSourceEntity(179U);
    msg.setDestination(62310U);
    msg.setDestinationEntity(64U);
    msg.plan_id.assign("YJJNWAAHLKSYEYCEBEMRKXFDGDTXBVFZCBBUFAIAZXUTVYOTVEPAMOOYPADIYJBKWTNRQNWLGUCHNMDGCMBGLSLXMMXXDQXVZB");
    msg.description.assign("BJQRWZUZFQFRQHSTXKSTGGKLLDGUBYYESFFARFMNE");
    msg.vnamespace.assign("NBTZEFPUNRFGGMEQD");
    msg.start_man_id.assign("RYARATPUFXTAQEAKQCIPZCQMVSMGZDOBXUORCLPYBKRZVP");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("JCDXMBHZUDRQWARULNHIXIRMNCVQIJXZCOTTZKPFSOBMWWRNSLKHNFWKNVSOMHKQGUUTYDLPGLHAQHAIBWSHPULMOEMWYFXENAZDFWSCEJMYMFJZPDQKXSYXTEBIHKL");
    IMC::CustomManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 41898U;
    tmp_tmp_msg_0_0.name.assign("TPZCKFRGHAEQEPEMOKOVKLYENRBZQVBOJRTHEJXBMINYUEQMKRIHHCBQJVRPXQLAYPSFIFWL");
    tmp_tmp_msg_0_0.custom.assign("PRLGNYNHHZHMULZWBFOPPITLKERFVKDAADMJZKHGBULBUCDKCMEKPVUSYCIFGTINMNJDKXGOHPHXKVFEEIAGNDOOQMPWEAVWUWDLRVHNXCXYDQWYVBUVOPGGVBWKJOITAUPBCCFFXINLORISQJMROTRHSJYZEXNYRGQ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::LblBeacon tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.beacon.assign("LIENJDOLTVHHFUIQIQMMKLBFXCJCXXRDIBKJLQSSPCLGVPMHJEIFGFWPBUARFWCBGRTWAOADTTVRVMEGKHOHTXANXRTITUQXGYKOCYQDKDPDEZM");
    tmp_tmp_msg_0_1.lat = 0.607089977817;
    tmp_tmp_msg_0_1.lon = 0.476157193367;
    tmp_tmp_msg_0_1.depth = 0.250121654559;
    tmp_tmp_msg_0_1.query_channel = 58U;
    tmp_tmp_msg_0_1.reply_channel = 106U;
    tmp_tmp_msg_0_1.transponder_delay = 135U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("OMOEEBHJZACSZQFJXUYCYPTLUPGIGBPACKMXNRUQSBGLXWWBUUKDSFZUKKTLNINDP");
    tmp_msg_1.dest_man.assign("QEHSXDWWKCXXYNPCMSWKQQFOUIEYXLLDWHBGFCMQPEXJAJHAFUYFTYAIILDFGADGJNICVCGQXWIKVOTMEEFDJBQOQYTMIPWBYTNGGXRNQZSYXCZGKUVZVNQTSNBJBJHCYBSUMFAHYTEKVDWRRJLZKGDFSIAMRBM");
    tmp_msg_1.conditions.assign("UYVDGPNHNKNAHWCSUKSGOQREQARFYBNIDYZBROILRMJUTLZPJILROAZGOPKRFZTZOVCYNLKCFUJTEBPEPQXIKOTICWORHLZDSVRKIWBUMOADEXXMCAVSHYSGLLUPRUYXXCPTISKMWATESGNABBXBXEMTHEPVGEJJPRWUZHSZJGYOIDWBQBXDBGINXFVFZ");
    IMC::ClockControl tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.op = 146U;
    tmp_tmp_msg_1_0.clock = 0.187491871361;
    tmp_tmp_msg_1_0.tz = 86;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::FuelLevel tmp_msg_2;
    tmp_msg_2.value = 0.225479949549;
    tmp_msg_2.confidence = 0.373108984362;
    tmp_msg_2.opmodes.assign("UFUPMIGRITANPXWJPFLSBPVUVHFWDEQAHKNWOYROGIJLJUJICRQLOKBWZXDMISEMVJYLTOUFGWEXLKAUJFXYQPMUQKETCGXKDPHGOWTDVAJVOEMJAJOWGPTZNLXTXLAZYHXDYQDTTZJTFZYFBPYMQQWRFCRNOALNIBZEZVMHRUKRBFWCXDGBWIIVVERSBCZQUUPOVHQHYSRSKDYDZBGHOFAPLBBISNK");
    msg.start_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.977312970058);
    msg.setSource(10828U);
    msg.setSourceEntity(216U);
    msg.setDestination(48167U);
    msg.setDestinationEntity(148U);
    msg.plan_id.assign("JHFVZUSIACZXQIVEPTPDHMPYDEECUVFAFTVYJHXWNHOCG");
    msg.description.assign("UQBXXHADERJEOPAFSICRLGDRESKQFEOUPDSNYZVOZGRKBNYZAUDQKSYXVJKALNCBTPIYJJNLBXTSLCQKHKSHNOMGSNPRZXHFWA");
    msg.vnamespace.assign("AGRHWTWCDEHBNDGATHWXSRVILSYMPYKAUUMOLXDLFCVYJPEKDNSBRDVBSJNCIHDBVIANFLVXUDZPRZMELEKMMJMVAJRMTLXJPNEXNSLYVULFAQZHUAPCESFYQJURZAOQAKZKRUTUYOQHCQCIQBNBEOHVIWWALSKBXWJFIKFLGQSPOPTUMZIPEPQDFIWTBFDEWZTXZKOXQUGVOHGGMJKWCJCRTGDBITWJZYYZFHRCYGBEHIFVTYOKXOGOS");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ILFGQSXJFSYHCGLUEEJTCRIEYKOEMXORFSGQAZVJLMLOHPZZTROADBQDKZBVPWGDBWSXAKYMTWTAYQCNETOBUDTOCSFXHXHIPHLEXUMREMGNXNRQRQUDGUMXGFCTFACDYHD");
    tmp_msg_0.value.assign("IJYBVVPXRMNIGQFWZVHMRBVDENPJCSAHMXN");
    tmp_msg_0.type = 155U;
    tmp_msg_0.access = 159U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JLICHSVLUWBNVMSLEHILOASLVUDYXFINTNZIUNYRGJMSFZKHMOSBFKBHWTFPRHIFQBQPKZWMEUMKMVOLAUGLJXYEMKULPQVOSQDQUWARQAFZHOWKRSFDHTDOKOCJVAPIGBFXYTVJPSCYXUECCCKGPUWJIRPGDQHZXOHJECNITEBJBXATRGQSYRVEZTUVDMOKWOWGXCXPAERBLSZ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("JVRLQOTJZEVHNPIICXCPFUXMVTUCZIHMZYWRKDIOKMFNJASTXFPYBEMVUNXAYRTXKDJUIJEYEKMLCROGIBQSEJATPCBWB");
    IMC::Alignment tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 55750U;
    tmp_tmp_msg_1_0.lat = 0.21803378969;
    tmp_tmp_msg_1_0.lon = 0.606905392528;
    tmp_tmp_msg_1_0.speed = 0.752543813615;
    tmp_tmp_msg_1_0.speed_units = 57U;
    tmp_tmp_msg_1_0.custom.assign("AQJJVHSHZTLLZCEBZE");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::ReplayControl tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.op = 145U;
    tmp_tmp_msg_1_1.file.assign("QNWADROGUIMCDPCZWO");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::Elevator tmp_msg_2;
    tmp_msg_2.timeout = 62446U;
    tmp_msg_2.flags = 12U;
    tmp_msg_2.lat = 0.7742702438;
    tmp_msg_2.lon = 0.150824468999;
    tmp_msg_2.start_z = 0.914606712213;
    tmp_msg_2.start_z_units = 139U;
    tmp_msg_2.end_z = 0.237666023796;
    tmp_msg_2.end_z_units = 246U;
    tmp_msg_2.radius = 0.00785228422575;
    tmp_msg_2.speed = 0.294329799678;
    tmp_msg_2.speed_units = 56U;
    tmp_msg_2.custom.assign("RKWWNJSYVKSLRXJHTMEVASBGMLLKKGSOLLXUBUCCDFGPTKPZWYUDETNQMGRWNKQCEXCXIGQGWIBYEVCOMUQFYAITPLNIKDJHQZHIBJRNYFTZMBASIOVBYRFGHJKFWAFRTWDZDEDOYNSLQMBPWVAXPFNBNOQIWGACDOCEXBFPDQYSHVXSCHGYLPJUSVOJQIEPEVOKGOVFUAJQ");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::QueryLedBrightness tmp_msg_3;
    tmp_msg_3.name.assign("VWSIIVTJKYGYMCOKNTMJJLEUTQHJCSSPOVEEGTIKBBNDZXMVDDTSRNHZNBSKUODYSDPUCQXHSPJAOLFPLTVUUXIFMHZWLWZMNEAFFZFRBGQKHBNEGEQOR");
    msg.end_actions.push_back(tmp_msg_3);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.155065601296);
    msg.setSource(16910U);
    msg.setSourceEntity(35U);
    msg.setDestination(367U);
    msg.setDestinationEntity(25U);
    msg.plan_id.assign("BXFGDLUSQGZIFFJTJRQRJMPYECHVPQUGJXIHLAKVNMFVYAWPDHUKTMCFHGNPQWOUUEXDURWJLXQZLNGWWMABVKCPSMPAOGMJSCEOYLWUNRUCDSSYIGTODJHIQRZVTKISWANYQBZBARMHCTNAYSOS");
    msg.description.assign("UIPMYRYKDKTXUMXRNVPHMYGMEKPTPKZFQWHAUPSCUWXGFIHICSJIBKYXBHGAGQNHBDCVDWPWOSATCQFNETOECAKFLMVHVLXQWYHFXOVFNAZNDCSOSYFJUZFRVKRMZQXTRCOWLDNSSWKYITZSNIWVURDGJDRTEVYUGMKAZBRLMNHZHENQWVAQGYJTHOOERMCXDJLTBLGAVDAXBNUIIQEXFCBJYWPLBLZOOPUBJQDBUZRLS");
    msg.vnamespace.assign("JBETNMTVHBMOLPOYNVDYCHTRKHPHZTBZRZLV");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SECRVNIZZSSWRGCXGYOKQATROKXMBBEOAYSJXSYEWPGIUCLMCEGGOFHMXUBWPNRQNLQDOZZDVTCOLYEMUNGPCKSUJHWQRWIZLBPVZHXGFTMKOEDUCMVWAYAAHRLTIQJSIRDRVXFHTDLNPNOGIFVXAIYAGTFTMBXHGKQJDTK");
    tmp_msg_0.value.assign("EPVPSVJFDETUXPYUGAQEMXWBYEBCZXBOMBEDLTKUBFUKFWFKJEARMGDHUWKMTXHWJXNURPPLFJTCARJDMVOZEFDMCAHSQAHNKXNJYQRQWUDOQOYOGRJNVULQVDZYIMANTSKUELCPRSYKVAZBNHDCPCGKYZHWLFOLRDSFIOQGHNOFKIZIYLCGGLQOHVAZNSRWSPZVI");
    tmp_msg_0.type = 82U;
    tmp_msg_0.access = 3U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("EWQYLAMUXCRNXOHTEGHNJNXPFBSWDLBQQKEVIRSVMDTYNKSWCOCRPKBIUKDELHZPHZLKWBBCASWJLOZQZIGBYVUDTFMBFVTXLHFPLTCYOAITNVITZDGUWRQAQWOORPCFSILMBDLLNTEGHPBUGNSKD");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ZZTVGQULDEUUFYCQZERZAGLESHCPIEEYWVOCFOPIRSIYLLNNKERAWOUMBMDAKKFDDBKBVOZUBJGNDVBGNNFRYXAAMEFQIBECJXSISYJNNQPBYHLFRRKUFXMDIVNGVQRUYAOBXSGYLLX");
    IMC::PopUp tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 56654U;
    tmp_tmp_msg_1_0.lat = 0.578563436154;
    tmp_tmp_msg_1_0.lon = 0.541743635999;
    tmp_tmp_msg_1_0.z = 0.980737033118;
    tmp_tmp_msg_1_0.z_units = 229U;
    tmp_tmp_msg_1_0.speed = 0.0223545126652;
    tmp_tmp_msg_1_0.speed_units = 21U;
    tmp_tmp_msg_1_0.duration = 46937U;
    tmp_tmp_msg_1_0.radius = 0.244653673712;
    tmp_tmp_msg_1_0.flags = 234U;
    tmp_tmp_msg_1_0.custom.assign("ODPGGUAGJDCDLFZIRMYBWOYJIKLJPIQSYKCTHIFFDZAQHPLGXEONKVFWRNJYJOSYQHJMSMDRNAXYJHPIRLKXDTIOTTDHEJHYGWRCTEGFERIBMSK");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::RSSI tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.0452560844365;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("NPPBIPJKDFZAAPIAUZTGJWBREHCXPPREREESIMCBANFTNUZEKDWPCVGERMUBXOLCQXNPWRMUGFQOFXEJEJJOJYBITFLJMMXS");
    tmp_msg_2.dest_man.assign("GRHZPPOJRKMLBPFSTHWPMBPVZTILGATXIEOMPGFPHCEJQVXUOQLVZUGHMBRKFSOBGE");
    tmp_msg_2.conditions.assign("GARKTJNJGENHCAHXNMYABIAMWENGGRSZWXVDSBFJXBWYUABGDATTOJBZITXXWLDINBUWPPHYTAVLCZGFUPQNTMQVQYQDXIWUIRWOJBLTBSDZHVMJKLPKKSMYGOGRYPPZGYQFLYJDIESEEEJHDFRPMSGKAERVPEVFNQRFZELIUCTPQIHVRHOLYTSXFIDCLUK");
    IMC::Drop tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.timeout = 56403U;
    tmp_tmp_msg_2_0.lat = 0.155019689743;
    tmp_tmp_msg_2_0.lon = 0.518304677613;
    tmp_tmp_msg_2_0.z = 0.380815921586;
    tmp_tmp_msg_2_0.z_units = 246U;
    tmp_tmp_msg_2_0.speed = 0.835259553952;
    tmp_tmp_msg_2_0.speed_units = 118U;
    tmp_tmp_msg_2_0.custom.assign("EAMLFSUUXCJDJMRPVBWOIWRDVYLXINTDDTURHCONAJDZAOYLWJPKNINAMHLPMPVOGOKYSHBQJFIJZSGCNGGFHSVBXYUARJMDSKQMLLKFQRZELHNRHETGRIIOVPCFMA");
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.5342193377);
    msg.setSource(31022U);
    msg.setSourceEntity(28U);
    msg.setDestination(30596U);
    msg.setDestinationEntity(188U);
    msg.maneuver_id.assign("FYIBOQJTIUEPLGPLDSYKUQXXVVSMYBPYLJMPLFPKBJZFASIGCACMRCARVUWWCWYUISYYAJQQOJNZEQEURNGDRXOOVXDHBDREWYBFFTHHMBQNNCLGRENHMCTVSZYZPFAANOLZXPJSDMXZHOLMCSPCAKVEDVCJWFTYTBAGFOCOTIFRJJWGRNAKLLFHAWXZGRKLMIWRXVOEQMHKSUZNKMDNDUTUKQBDHDIOEEUBTXXNHZGIJTKQUQPEBVWI");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.858642375896;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 24908U;
    tmp_msg_0.custom.assign("OVRIHHUZGGGEACXNYYVPLEJNHINYLENZPUTQQHPDYYVXETAFJVFAFMEVSAKAFRYJUZLFDTRCWPGXRNXKREUBWDCSCJPULVSKFKIFVTJHKISBWDBWMBJEYEXOOOLEXMRQYVQHIQIDYULADQDSXEBJVXBMAOGXHQMRWCBZKJZGZMBPUUUCGOFNMOVLRNANTRZSGSPTMPUZNWADN");
    msg.data.set(tmp_msg_0);
    IMC::Tachograph tmp_msg_1;
    tmp_msg_1.timestamp_last_service = 0.925495790825;
    tmp_msg_1.time_next_service = 0.734438669903;
    tmp_msg_1.time_motor_next_service = 0.632636012862;
    tmp_msg_1.time_idle_ground = 0.447442638134;
    tmp_msg_1.time_idle_air = 0.964457217857;
    tmp_msg_1.time_idle_water = 0.584337950246;
    tmp_msg_1.time_idle_underwater = 0.0846330692602;
    tmp_msg_1.time_idle_unknown = 0.654715213279;
    tmp_msg_1.time_motor_ground = 0.749759642997;
    tmp_msg_1.time_motor_air = 0.57959900169;
    tmp_msg_1.time_motor_water = 0.207158237396;
    tmp_msg_1.time_motor_underwater = 0.752218258459;
    tmp_msg_1.time_motor_unknown = 0.0506741820172;
    tmp_msg_1.rpm_min = -25992;
    tmp_msg_1.rpm_max = -32627;
    tmp_msg_1.depth_max = 0.811800780757;
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.436155766635);
    msg.setSource(62983U);
    msg.setSourceEntity(49U);
    msg.setDestination(27589U);
    msg.setDestinationEntity(163U);
    msg.maneuver_id.assign("WOBDJRPOHQWNLGHGUSYPWUAPXWOJVIJHXSPBIAEGDQSUQQMVMZYZBWKHFYTLRTSJCUISNDZJUEBCAYLKZZXLLKDKQDVADKPPWAPGPYCTPITWJOUFHJWWCEMAFCKHSYQIYGLVNYVOLMZFLGICGEJIRRZRDXENEFJLIKUDFNAFQNQOACBVZXMBZMGMTMXYMHSEUKTXXSORNLWF");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 55314U;
    tmp_msg_0.rpm = 0.543754742447;
    tmp_msg_0.direction = 226U;
    tmp_msg_0.custom.assign("GJISEMMFDAIRABXMFZJMGYCCYQGFHIPAVXKERBXEMNJLPABOJDYKUBWEFKZFGLQTCVKQDJUULSVLXFHNIRONPKYYLBUGTNGRXPVHCLZYQHVFGHBLOEUJOTBTEUTHSZYFAPEAPWTRZOWZHKSQHPCEXPWRWUWCQNCQSRGEOUMWGCAQDLIJDNY");
    msg.data.set(tmp_msg_0);
    IMC::SessionStatus tmp_msg_1;
    tmp_msg_1.sessid = 3609399935U;
    tmp_msg_1.status = 26U;
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.660213123235);
    msg.setSource(62654U);
    msg.setSourceEntity(51U);
    msg.setDestination(61739U);
    msg.setDestinationEntity(96U);
    msg.maneuver_id.assign("UONLJNQXRGCZDZBRQCWESLVOOUNVGZJMCEJUFQWGD");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.064628003397;
    tmp_msg_0.lat = 0.0940386668929;
    tmp_msg_0.lon = 0.39792668414;
    tmp_msg_0.z = 0.165096359562;
    tmp_msg_0.z_units = 1U;
    tmp_msg_0.travel_z = 0.20834508987;
    tmp_msg_0.travel_z_units = 113U;
    tmp_msg_0.delayed = 190U;
    msg.data.set(tmp_msg_0);
    IMC::MapPoint tmp_msg_1;
    tmp_msg_1.lat = 0.138845535995;
    tmp_msg_1.lon = 0.704241180486;
    tmp_msg_1.alt = 0.302019812048;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::UamRxRange tmp_msg_2;
    tmp_msg_2.seq = 55728U;
    tmp_msg_2.sys.assign("ZGXTVQEFZTDHCWCCVRZWXITCEAGLRWGXVISWWFHYOWUZRGQUMMNDPUIBDUDSXPLBVLA");
    tmp_msg_2.value = 0.124144181981;
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.537932618474);
    msg.setSource(21133U);
    msg.setSourceEntity(61U);
    msg.setDestination(48171U);
    msg.setDestinationEntity(147U);
    msg.source_man.assign("JIUNINPFWALGUFOYXDAEOPSDVPUZJKRRCFGJLZYBVEPWXZFOTNOANZUSVHIKCTQJWVOMITPRYBRIBYCGBDRMEPBSKYWSAKYNYACHQTWJILCGBWGHDEOVLXXAIYVEXPPZHIEFUDXLHAEJHTNFMUQYHUMUGMOQHXZSJGZWFP");
    msg.dest_man.assign("QEQAVGHRKFIFAXSACDWDMSOUNHVHRKJVHULYRGYOWIFOCLHYORVHXYLZWIKAPMSZNIQGRNYBXMDECAQIJLYQOUZC");
    msg.conditions.assign("ZFNJCSNYLJUMTNSFMEGPINTXFCCUCIVWIRLOYPHUJZOBLZXSSANLQFTDWWBZEXGROBDENCMVLAPZUYQXRJKHFHEWDYUMSAORW");
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("EJXODOKKDRJDDUDGCCWBKMRERWHFOEDYBZYKUSUKSXMHXNVBAOMIDFVHBMPVONRUPGONSRPYAJGNIXEMIAJSOTFWFWOFBXHWFXMXUNTSCJYEAAWQBRJC");
    const char tmp_tmp_msg_0_0[] = {68, -54, 10, 56, 116, -123, -17, -95, -86, -117, -16, 107, -50, -58, -128, -43, 50, 100, 88, 51, 116, 125, -102, -99, 45, 35, -21, -60, -54, 118, 5, 81, 50, -74, 95, 102, 73, -42, -57, 55, 59, 56, 46, -115, -128, 74, 16, -79, 58, 49, -105, 100, 44, 87, 13, -118, -78, 65, -66, -120, 121, -114, 27, 95, 39, -108, -39, -52, 31, 114, -45, -28, 31, 77, 30, -75, 35, -3, -34, 71, 63, 18, -30, -105, 54, -85, -68, -1, 6, -34, 100, -20, -112, 92, 58, -92, -69, 28, -72, -103, 122, 78, -74, -16, 86, -120, -80, -95, -128, 72, 11, -102, 117, 44, -111, 30, -32, 87, 14, 0, 90, 22, 93, 95, -19, 117, 41, -42, -108, -35, 0, -127, 11, 45, 112, 95, 41, 19, 67, -57, -23, 42, -6, -123, -72, 84, 42, 103, 114, 57};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.218332239415);
    msg.setSource(30463U);
    msg.setSourceEntity(145U);
    msg.setDestination(46744U);
    msg.setDestinationEntity(122U);
    msg.source_man.assign("BCOZJZBSBFOFMVHHYRQJNZHLAGUBM");
    msg.dest_man.assign("INHXSFLNNKKPNMBBSJMVHXBIDTRCVSSGFVAWAZDIGTJGCYGAHRRBRTLFZFYXQROPKMKSTXIJAAONKSCEFEWUPKUFYAIWIAYKVYOYVTLJCWITSMGUPEYJEMHPTRKSGUBMOMDHAWGVWQLPARMBOXZEETFCJDUNQLCHRTHYEBSOTCZOZLYMXJONLZHWHYHQIEMUZDXSOVNGEXCXXBPNU");
    msg.conditions.assign("SRMMVPRHDZVWAMSCZIDUXMSBCLGJDKNTLWCQCBLGOZQSCANHCYMSTXFHOVFDGVFWERWREYOUALBTQPAXZEKLIJHYVMSRQGHNNMJJGHXZWBUOOAXGEHJIYNJTLPILLGKDKOIPJVXIWJDJXKLSSNOXNNIIREGGAUAPBDFBETPGTORWYEYYVQPBQNO");
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 2901996541U;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.483889178244);
    msg.setSource(16816U);
    msg.setSourceEntity(237U);
    msg.setDestination(4339U);
    msg.setDestinationEntity(101U);
    msg.source_man.assign("OCWRMVFKMEACOGNHIFDDEDXMUFKCBPWFKWMROKQAXIZMNCDIMCUHKJTTKFJMDGCRNTXLBYGDLXJELFASYYQ");
    msg.dest_man.assign("GYQJKHCHEVTMZYMYBDWQMVDGWTOLKEPCQNOLJLJCSLAZSLXBMIZGWDDETZHWHXIJPKSTKHHGCFADYBX");
    msg.conditions.assign("WELXYNVKQHADLFTZFOJGOXGMJQPILSOTLPHQGWBKYCWXTHAEPXXEFGGUCCBBLEVBPZCJKASADRMLXNNUWBTSFKJQBGIRQAW");
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("TKJAWBIGLGESZMVKPIOWGKGSQYJDXPSENLONFEIVZTGXATYXRLXTSEIZKKODEPQMHAMQUACQWARIBXCGFYPLANOQVDSRLXCHBNHFVCDPRUBJFAHYCJUSHPYHDMSDZCVPTJOZXFPKUDYFGLVVQDMKDT");
    tmp_msg_0.value = 45U;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.380953905738);
    msg.setSource(37312U);
    msg.setSourceEntity(153U);
    msg.setDestination(62657U);
    msg.setDestinationEntity(97U);
    msg.command = 216U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IBFJYNEQHDTJZBGCKRGAPIGDJUSHYQKWGBNBFGNLMSJNRZLEIJGILOLOXYDYGYMJTFUABTKXZCOJWEZVRZZANDRRDTESPEMMLYHRVRSCVULVMMAIXMPJQUKPTJQWBFXEEQCVUYRYOJRIVWKLZGXEMXBPOKDRHTXFPVYAPIPAUCBBEZYNFKKHFDVVTGFLHWHFFOCAOHQCWWQNDTSHQVCDWZPTKAGMIDILKXNPUOOUUNXXUBSATISECQMWOSHQS");
    tmp_msg_0.description.assign("UZPOJGJWWSEHLBRMQAMCZRBYLKMOHNWSYNQRRNUKPJLVXOCBDDCLYIVGJXGQSKBFVMALPKNUHQDBTRATXTEMGRYIWXWVTLUGDXDWPTCEZCQUVHORLDILWPQVYNUMEQLEXQASYUIZDENBQGOPPZDPOIVNAFHRJHBVWFGXIRMSXYTIMTXDJEVTZKZZOUVFKCOJJMANYBSAW");
    tmp_msg_0.vnamespace.assign("CXAEADKHSZEUWTKMWTMEPQXSHOVGIXWZMRFGKIYAUJNFOUCVAEORHWLSZTZWBEIHNZHRPECICGLHZBQQUJPIVJKPATNNCLYNMNPYGRIWWCCTGETYLOSBDKMJDWVJXUNNMVXGVHJKLYQVUPXDONARRYAFRFPPMBCF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ICCXMXOEZJVWCBFSETFNWIJGSGRSYRQEAUVZEYTOOWVXPNXRJTZWZPNBHUNFLCLKGGKGULYARSIYBBHISDYNQQBGTPVKNIHQJBNLQXWQQRDBIPORCJTUTJRV");
    tmp_tmp_msg_0_0.value.assign("WJPGMXIATQLQLEHHEMBS");
    tmp_tmp_msg_0_0.type = 235U;
    tmp_tmp_msg_0_0.access = 43U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("KPYFGEZTDLOGBTMPELIDQELSCLYAKIAASYVHIAAJKUDQLZIVCZZZJUPHVCMXNYKPHBAOUXHHTGJLWIPIRMOQLRJBXKANQSZTIVFDSUYGXTZNTAFQJCSGVTDKMZUSCSRKMMWEPICRYNMBDNZWOFGUCHUSOCLTQFANVYPONYKSQATBPHXCQOYWHEBGDWEFECRWQZVEDOTQOWRWJNHMJUWFFPLBNUXBVFSDIGXIRJGXDXBMJRRHNYLFBJUKXGV");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("NDCTIOJGVNACPPGRNEBEZHOWEZJGQUIBWJUJILKRQPDWZMKTSMCIRYPSRRYOITDYPVBOMGXQZOHZNHUCTARCJIFFMOBGKHIGNQGYSEVWAXNGOPWALWHBBYMDUQCLFCDPDIBCJKSPHKBCXWZKFLLYTXORRLMZJEXFBEGVOSIKNFMESYYELHDVEQPGSQJHAHADJKASLXSMRBVQNYULQNWDXFXKRAFQUVMKYUZTWLEXSDZCWMUFVHXOPUZITUJVV");
    IMC::StationKeepingExtended tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.11072582489;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.22413274053;
    tmp_tmp_tmp_msg_0_1_0.z = 0.435004888005;
    tmp_tmp_tmp_msg_0_1_0.z_units = 89U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.894074478727;
    tmp_tmp_tmp_msg_0_1_0.duration = 33254U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.741601029091;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 94U;
    tmp_tmp_tmp_msg_0_1_0.popup_period = 19413U;
    tmp_tmp_tmp_msg_0_1_0.popup_duration = 36268U;
    tmp_tmp_tmp_msg_0_1_0.flags = 30U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("XCPWPNMBCZEAYCRIROVYOYJOJSEQNSPFSGSWAUDKHNXSIDXTEORMSGKBURLLSHFZPXELEMFJXFJYKYHGQWPXPLKFUWKPMBZWNJKKHTCCMFHOWTIFCTSABZJQVAGMLGPSLXEPDUVTJVZOXIJNTCKTABEUQDVFNODRGLQPSHQYAVEWKYWIZUXMWIBBMKQTZZHINLIHN");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::CloseSession tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.sessid = 3359102201U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("LACMIXBPMNPRUPYNZUSHUSIMMDUPWFRRMYXWLPUWUIPOCAHCKVDXIOJKBRCMIGAAZWOJQOLNPZXTIWTVJMSFJCZVTQREVRKHIKQCJEFFEBTBDLONIRYLTSVHZCWGQSBSLLCVJXXZAEGNFUKNEDQMLEZAZZFAXKHUDBJBKONOENPQMUWDPEWQYHOJRVKTOQGYSVWTGLKA");
    tmp_tmp_msg_0_2.dest_man.assign("INNROWLOFUBAKRXPHSLFBCJWXLYYVFSWJMYWJYKSSDDVCUTHNEIGQOUPZPFGTODPMVVWOKGNSFTWKGQZITCRZRXMKGPQSQEJJTPYYLNDHUMKYAZLTXTJJXQITPBMIFKIPXAOWFAE");
    tmp_tmp_msg_0_2.conditions.assign("MALCCSMNGLLL");
    IMC::PopEntityParameters tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.name.assign("GSZFCFNKFYUIKJVFYCXAMUCCTQSEOXJWAZXYHXSBDNYOCNQLBWLSGYHHKQPUVYJBAWQNKOXDNPKRDMIETUFTYQFCVLITMTDTJWBJGMJEHQVQLHJWXTAWODCPSZNOMENBBJRARVDUFWMEPGUPFOTBGMMMSWIHFICKZHZSPQSGZDPPHRLKDPCAEIOXBVCDLVJZANRYIXZWAZSAGXSRXGYHGTTPEKLORBHDVJEGUWEIUBRALROQNU");
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::PowerOperation tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.op = 206U;
    tmp_tmp_msg_0_3.time_remain = 0.261419600434;
    tmp_tmp_msg_0_3.sched_time = 0.585193213061;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.0992469652969);
    msg.setSource(44851U);
    msg.setSourceEntity(149U);
    msg.setDestination(65096U);
    msg.setDestinationEntity(154U);
    msg.command = 245U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NTPICJOGMWUOHRWOAQWOVI");
    tmp_msg_0.description.assign("OVMTXBPXIYUQFWAACOFWKPUYKIEVCBKSUJLNFMCLBVJFDOFNSWJVFVETJQWBXPIJXYYELKWFKUVVLCDUIWDBBU");
    tmp_msg_0.vnamespace.assign("EEPJKAFBPEQZOYXCAXFLSIVZTNSGGCHJUNJPZWAFBTTHISVNBFROQJPESRWQRXLTCCUHIUWNMRZPDXLVGDJPLVCGDOEMEITFFXPQJYXRQGVOWDKGAKTKXHMXBYJEEHVAJFPMBUBOKYNUQDOAIMLLHGCWXYSTMDVGZKBDZLJUSOMVKWQWLCSDBIEHGZIQDMZWUNCAYVVOHRBCOTCOR");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RXGAYDIICBADWUOEUHNJMHVCDXKLPMMCXHBEVJRLEMDAOZNVTGIKYOQAOLNCHBQBRQZRKXOFVUAFYDMJWGKGGLBJUKATVSXTWPLPLDWHDJFLTVUBNMQXFJYMFNGCZGBJXIKEDRYDHPFPSWNNXXJUBHRZFUKWZABIUQGYRZETMNQYO");
    tmp_tmp_msg_0_0.value.assign("YTEMKKRCIGNKWZDUALVQNJKABHYRMPVGUAJZXMNNNFJRNSGWSJDHNAZBODBONBLHSRCTLCKWMATZECJODRPFHFXAFYEPWYIGQZVXZDERMGEIOZMJEODIKPHKXBFSVTYLDKHQHHGYDBJTFYIBPETLUSMPDIAS");
    tmp_tmp_msg_0_0.type = 74U;
    tmp_tmp_msg_0_0.access = 40U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("IOJZCCRYIVPNTZLAYDWOXMXKIQDQUJLJKVQHOCTCBQYGNSXHTRYFPRYTYSEQXCAPABUSHCKIZWHWLYJVNOEMKRSOAEXUYAHSBLRJEBTINLTDDOMZKHHLFKSJZRAODQUAJEMZMLBIXJGFAVNJEDODBTNRVFGWZVGNVQCSZNRVEKKUPWSNEGOFSXGACFBTRDMPPMXFVULHTDPQOUEGGWIBUCGZUFDHBHYIWFEXTM");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("HGQBLOZSDFBFCWRBCOFPYAMMHJIFGSEBDTKVWZPRHAWHSVXIWXKDDTWNLNXAUFNWTCVZEZUGIPMFWYUBORTTAIGBEWXWVQL");
    IMC::CoverArea tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.961775111323;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.0897225068096;
    tmp_tmp_tmp_msg_0_1_0.z = 0.0995613095798;
    tmp_tmp_tmp_msg_0_1_0.z_units = 34U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.856938863733;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 239U;
    IMC::PolygonVertex tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lat = 0.32296625503;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lon = 0.420663922718;
    tmp_tmp_tmp_msg_0_1_0.polygon.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.custom.assign("VWYSLKHCDQRFLPQMABYINYTYLKOIAVCOUSHCZCRXVBOUIPODGLHQWFWBBPBYHRIQOFBBZAVMMGNNVSUHFEEBJFOYFKSZIGUQVWZKGEKETUTUSZPZFSPTJYHXZSZUIJOZRUPTWOJNJDTNCACURNGWDXMVPAQXQWUCALECPFYDWOVDRKALDJVKSFMISKMNCDLVTRKAQJMQNIERKXGGWTREJLTPXRHXYBGWSGEHNCHZBH");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("WRIQNGJTOFSPARMKVGLKNZLVJYPWPWPJAOLNWOUYWBHMEFPWTESQXTAXCEGPJYYCJYLMHXCWMHXUORGPEXEZGUMLCVLEFXAMKKVSXHFZWISMWXZNSBTREGDBLITJGEGSWUCDPKADIBAVDLPBSTIRBMTIUDXIQADZINJKYYMVQPNTJF");
    tmp_tmp_msg_0_2.dest_man.assign("YDCGNVJSHWLQEHQXKSDCVYTMOKBVOZAFFAUUTFICGXEQYQWREOMJDKOJLPKAPAKYSBHVUMPUWXRTMSMVTTWJNM");
    tmp_tmp_msg_0_2.conditions.assign("OMMISVUXUCITJLMTTCTZEJDP");
    IMC::UamRxFrame tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.sys_src.assign("EOAUVQCMPQMKCFNULIDCGOEJSKNISDUNYRRIXCLBCHTURHLWUPUXHHTZZUFWIVEJZRFDYGBASXZGRWPWFJTADPWYOBRZHQXLYYDALY");
    tmp_tmp_tmp_msg_0_2_0.sys_dst.assign("NELBHJVZQPWRZDONRADEYKXTZVYSQMONUHCAQJAFHUTULZWXGKCQTHEWIJQKBIJYAH");
    tmp_tmp_tmp_msg_0_2_0.flags = 186U;
    const char tmp_tmp_tmp_tmp_msg_0_2_0_0[] = {-10, 8, -95, 48, 32, -43, 32, -85, -99, 123, 36, -35, -122, -11, -29, -62, 54, 64, 115, -26, 24, -10, 105, 71, -15, -50, -44, -79, -31, 97, 69, -59, -61, -37, -3, 27, -26, -6, 13, -106, -69, 108, -123, -24, -106, -48, -68, 35, -64, 28, -126, -57, -34, 22, 45, 108, -26, -107, 77, -83, -66, -124, -86, -114, -89, -120, -99, -67, 61, 14, 44, -105, 54, 39, -25, 109, 22, 12, -90, -14, -75, -5, 51, 73, 52, 38, -120, 91, -61, 31, 75, -41, -128, -48, -124, 4, -45, 55, 31, -110, -15, 102, -37, 90, -104, -84, 117, 85, -25, -6, -102, 20, -79, 115, 66, 96, -111, -56, 16, -110, 1, -89, 108, -111, 84, 11, 35, 19, 43, -22, 104, -43, -125, -122, -87, -36, -42, -23, 69, 108, -32, -12, 62, -97, 0, 16, -54, -113, -125, -10, 79, -97, 86, -29, 12, 51, -127, 9, 30, 84, 19, 99, 23, 93, 77, 123, 125, -108, -85, 26, 65, -15, 36, 55, -25, -114, 30, -123, -56};
    tmp_tmp_tmp_msg_0_2_0.data.assign(tmp_tmp_tmp_tmp_msg_0_2_0_0, tmp_tmp_tmp_tmp_msg_0_2_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_2_0_0));
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::WaterVelocity tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.validity = 66U;
    tmp_tmp_msg_0_3.x = 0.817689662284;
    tmp_tmp_msg_0_3.y = 0.951724992021;
    tmp_tmp_msg_0_3.z = 0.185448848118;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.0498886769209);
    msg.setSource(9183U);
    msg.setSourceEntity(159U);
    msg.setDestination(21899U);
    msg.setDestinationEntity(203U);
    msg.command = 223U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PWEPHOEYAWAZUOMSCWNAOATQOTIDESILLWQMNRWWGWNVJPPLSNLPKYMHDDABUBCCJAVQREBQNOZUSRPQTYPKEXJMTFEGHJXUWQGTKK");
    tmp_msg_0.description.assign("FOASPYRPLRWHLSRBDJMNXBJXJZEPSDSAFSJZSSPJOXBUVDIHVQTTYCCRKYHFLZGJOCRGMSKZCJLFKSCAAUAMTEIBOEIHKRIFQVUNNMEKBXDWPBMNLGTMMOWGMIWZXVGLQAALUZNAIFFQGQMUKPSXBNFWDAYREHITVD");
    tmp_msg_0.vnamespace.assign("VLOFDOVZGYASUOSPZEGBQLWYINASBVTNDEPCFRAHRTKMBVCATCENXBCZQAEUPOWRJJRJNSTNLIYWNTQUARJHMZGDFWFDABQIYBVRQGGMOERGAHTBGHJOXCDXMZUICJAMHHSKLGEFMOKWQBVEVOCGYXHGZOULYABDUTBCZJNMPRIFIUYQYSLPKEWJVJTXKRD");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OWWCUJTPBZUXAEBKYCTMYYFWJEOVEMAZYQJDTMBXTAAVTBEVQFBASDBSLNJRGBAWPLWVSRHFFRGOOOFIKPDEJHKGVIEAINCDVZPZMTCLSATXRAOHOGPQVPRSHYJNSVIXZBZKMRPDNFJYNDGHGISKCUYONSISWWQGKRZD");
    tmp_tmp_msg_0_0.value.assign("RAXCTSEBGUZPUQDVLCJRULZMBOLFZDVEENDIUQHEBGHHLMDVPYSNR");
    tmp_tmp_msg_0_0.type = 8U;
    tmp_tmp_msg_0_0.access = 122U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XAHDJCMVCNDRIVOUTIHRRPUIMDIWYLIOXGLWCSLBMQQPAJDQGHWLGALGJTLMABFNFEWEKFLECQCXSVKPWUDRVJCKTVQICOQRKDZDWSGSOXAUZBITKLPARPSWXFFPBBWNOLPXNTBUYYSSNOBCFHMTJCNENIJPKYGOQGRQVHDUBFZWUUZMBSYYEOVGKOXPVKYZFQJHWRCVZMIEMDDNGHZUXHQZKYLGTXZSBESHANAFJYP");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("GJZOUTYRCRIANZQMUFWREAZJNGMKFETSTISRPILMRYUWBPUBTFYMPVKQBHOUHHRSLJXCBDCCXZGBOGOLWHQVYUQIGRUFAOQVVRPDSZHLKXNOFE");
    tmp_tmp_msg_0_1.dest_man.assign("TPBKPVTCJYFPYGBFSZXFSINRDUVOXILKDVBILFHWCPADUDAUGAZMHTSAVOMLNOIDHKAFOJAINTZMUBRVWLNJQ");
    tmp_tmp_msg_0_1.conditions.assign("YUGHFQQDXZQCBHVANWRECGHRGEVWHPTSDWOFJBPFCYJHYBENWDOYITGTJURIUJFKKKQLOOAUTCUMWUUWRHHOGODRZBSAKAYRQXSMVNXKYQJVMXLVOJSGECSFVPBQPMCZNJWPJICPAERXQW");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.34827659523);
    msg.setSource(63083U);
    msg.setSourceEntity(219U);
    msg.setDestination(41982U);
    msg.setDestinationEntity(208U);
    msg.state = 146U;
    msg.plan_id.assign("TDDOEFIJXEWUTUPQESPUKGCUXPYPRXWWLXJSNUZUSWJOJYBCRUKTASJDR");
    msg.comm_level = 104U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.503877514547);
    msg.setSource(344U);
    msg.setSourceEntity(229U);
    msg.setDestination(22125U);
    msg.setDestinationEntity(163U);
    msg.state = 176U;
    msg.plan_id.assign("YYFBITQNCEWJQMDAQRRZDUGGTGKBMONMWVCYNVNDHQLUKPFDCUEJKJNTPKXYVYSNBAPSDORSURMJYVIHJLRTFNKMMRFLUTFLIKBFGZCAITUYAKSNCLWOHIDZMRIGZVPEQLOACRYSQFCLGUULMXBJNODGCHWSECIUPKPHXITTOQXVVKRXXXLAWLQ");
    msg.comm_level = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.714289119338);
    msg.setSource(30533U);
    msg.setSourceEntity(152U);
    msg.setDestination(61939U);
    msg.setDestinationEntity(244U);
    msg.state = 172U;
    msg.plan_id.assign("IZJIKUPFNVHVOWKHCGVLULULCUNHPBWMJIKSSAVFMFYJGDLPSAXOTRFYNSQDRMJZAXYXJPHDSLEGKTTOEPBOMUTOAWVBDREYETAGJDYWKSDVBZFNRYIHKQVAZEMNDQBCEEFUTHRKXMVYQZIOCFBQIHQQPYWGSXBKCTS");
    msg.comm_level = 238U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.0570208183066);
    msg.setSource(4380U);
    msg.setSourceEntity(86U);
    msg.setDestination(1225U);
    msg.setDestinationEntity(93U);
    msg.type = 45U;
    msg.op = 190U;
    msg.request_id = 30497U;
    msg.plan_id.assign("DDWERMMMSJZGCGXKRHXUII");
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.672646761307;
    tmp_msg_0.y = 0.145653304543;
    tmp_msg_0.z = 0.643853948091;
    tmp_msg_0.k = 0.372846367103;
    tmp_msg_0.m = 0.977947910555;
    tmp_msg_0.n = 0.845179249892;
    tmp_msg_0.flags = 98U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VBCROXFDFZIILHQUPLGDSAECGJTEPNQRGXSFQOKPMAECPMLUFABGMYVYJJFRBHBESXGOGAKSOHZTOXJQMCBAFKECWYTKNGRUVETXNWBXADIEWMTOWHZJKSUEUZQSAGBWPVPIURZNIKXXMCJRHQSOWXYNCLPSMZNWYRCZUVMPLOUPCDUNAKOTRNGLJJHLFZFNPTQIBEFVASYBEAMHZVVYWUMYL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.456482099195);
    msg.setSource(63985U);
    msg.setSourceEntity(35U);
    msg.setDestination(25689U);
    msg.setDestinationEntity(2U);
    msg.type = 191U;
    msg.op = 3U;
    msg.request_id = 52692U;
    msg.plan_id.assign("YJMRQERICLSASTVXDQHWFCQCSZREMMWFZLOAAJBBBMSUYLKPWYHQSXSAOPWHKZXKVWXFDQMVYLFLJWAKNHBUURDTINODUHOVCNEBHEBAFLEFSEOGMXNGAGZYRCMOVGQJMNTNUNQKOKDJIVQHXCEWIQPSLXDWGYIDORECBTFWAYRZGJLPPJZXGEYZIRGC");
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 169U;
    tmp_msg_0.htime = 0.760644272523;
    tmp_msg_0.context.assign("KSUJFNPDOEZUBIZAJA");
    tmp_msg_0.text.assign("OVXBYEKVLGSVT");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DNMOIZELKHMGW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.642621048448);
    msg.setSource(3293U);
    msg.setSourceEntity(169U);
    msg.setDestination(56973U);
    msg.setDestinationEntity(94U);
    msg.type = 186U;
    msg.op = 242U;
    msg.request_id = 32740U;
    msg.plan_id.assign("DPCDVKVFKVNTDUCRKJLWQAYIWUWUGOAPBFUN");
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.349585770625;
    tmp_msg_0.width = 0.040836527593;
    tmp_msg_0.length = 0.637380519067;
    tmp_msg_0.bearing = 0.647616919413;
    tmp_msg_0.pxl = 11794;
    tmp_msg_0.encoding = 205U;
    const char tmp_tmp_msg_0_0[] = {24, -53, 80, -13, -112, -124, -110, -24, 123, -88, 94, 99, 19, 44, -33, 32, 75, 62, -90, 11, 64, 63, -81, 69, 48, 96, 62, 16, 83, -15, 65, 81, 96, -122, 100, -19, -73, 92, 0, 101, 79, -66, -59, 21, 105, -60, 45, 71, 96, -98, 100, 108, -99, -53, -52, -31, 81, 16, 108, -49, 125, 71, -28, 20, 69, 78, 73, 109, 123, -81, -41, 14, -102, 77, 70, 51, 38, -21, 39, 19, -91, -104, 120, -73, 7, -112, 51, -125, -19, -126, 38, 63, -48, -82, -1, 31, 5, -55, -92, -118, -109, 67, 19, -45, -19, 94, -123, 91, -124, -77, -91, 65, 37, 69, 121, 40, 27, 103, 112, -101, 25, 116, 106, -31, 20, 110};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WXOWBDVSYYRFYWUFMWJUJGOLMCVHGBEIEEFITMRHMVHXEONOQHHKXWNWERGEJOIPDQIURECZFZALVXLALGKDQJYLKUIHQUPZWVBTTBCTQXOXVOEMCPCQHYSXSPOBFZZAZAZSGDAHRSQFTHEIPIYKLPDMCUQNRV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.223622054495);
    msg.setSource(3169U);
    msg.setSourceEntity(166U);
    msg.setDestination(18322U);
    msg.setDestinationEntity(134U);
    msg.plan_count = 20139U;
    msg.plan_size = 809014976U;
    msg.change_time = 0.726089005433;
    msg.change_sid = 54835U;
    msg.change_sname.assign("YZFRRWTXCCGUKJXNMGHLWLTYYSVAGKFJEMEDMUEKXFEMMMJKIRWAFLITMSKAOKUXVDBICOHGSDEUNDO");
    const char tmp_msg_0[] = {-124, -93, -24, 86, 103, 44, -40, 34, -33, 89, -32, 62, 77, -57, 91, -8, 56, -13, 109, 56, -81, 87, -108, 15, 95, -54, -35, -96, 50, -73, 99, -6, -76, -123, -102, 115, -113, -111, -110, 23, 124, 66, -128, -8, 42, 23, -69, 111, -19, 67, -20, -37, -115, 77, -95, -68, -106, 119, -10, -10, 0, 33, 16, 92, -49, 35, 12, -84, 14, 99, 59, 94, 117, -52, -1, 29, -68, 4, -110, -67, -91, 12, -92, 16, 26, -84, -92, -60, -48, -22, 35, -98, 7, 105, 90, -99, -108, 126, -83, -42, -61, 2, -87, 36, 115, -44, 34, 118, -34, 13, -96, 92, -125, 83, 75, -17, -51, 2, 121, 84, -87, -36, -100, 0, 114, 16, -82, -46, 64, 60, 59, -46, 84, -113, -46, 57, -107, -102, -17, 42, 65, 84, -72, 32, -104, -40, 6, 65, -37, -62, -113, -58, -126, -7, -89, -111, 113, -41, -83, -58, -94, -76, 108, -56, 11, -17, -59, 80, -128, 37, -128, 86, 79, 6, 63, 50, 89, 81, 94, 14, 3, 15, -41, -25, 26, -80, -3, -47, 0, -55, -110, -116, 23, -84, -97, -95, -44, -47, 79, 33, 78, -63, -62, -65, 96, -26, 60, -21, -18, 112, -18, 98, 48, 118, -47, 108, 108, -43, -36, 31, -8, 106, 21, 84, -76, -59, 85, 108, 20, 111, 120, -124, -70, 112, 72, -39, -33, 116, -123, -51, 93, -4};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.206793661982);
    msg.setSource(16213U);
    msg.setSourceEntity(104U);
    msg.setDestination(57453U);
    msg.setDestinationEntity(61U);
    msg.plan_count = 47056U;
    msg.plan_size = 1988647566U;
    msg.change_time = 0.713463058055;
    msg.change_sid = 24899U;
    msg.change_sname.assign("QLXGOMYALSBIQOEGMIJNJLLCJATVVZQPNTRLVSZHHKRNNQRBKDDXAPK");
    const char tmp_msg_0[] = {-61, -93, 57, 32, -17, -16, 111, -28, -127, -96, -78, -94, -61, 45, -100, 96, -21, -63, -74, 40, -25, -8, 102, 112, -41, -103, -53, -73, 66, -82, -61, 104, -43, -48, 47, 56, -14, 123, 65, -24, 39, -78, 9, 88, 96, -24, -9, -88, -26, 124, 111, 41, 89, -74};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NKLBZSCCNFUTCNFVKZMFBRQLIFJPUCYCTKNQJXTOXASGITMZWGMIIDTUZGFSNSAESSKWVOHWTXDERGHVDTNHNHROHFDBBLXVZHRUJVACQDQLDDOJRLPLNOVYDUYRYWWIZQOPEGHILUEHVCOMETFWEXIMBRSKVYKWDANAQKYKIRRYLAULGHASXGJUXKONUMKVCMBYQECTEGRLBSGFDGZBJXMA");
    tmp_msg_1.plan_size = 19315U;
    tmp_msg_1.change_time = 0.799137761885;
    tmp_msg_1.change_sid = 22289U;
    tmp_msg_1.change_sname.assign("VWMMHRMJPJQH");
    const char tmp_tmp_msg_1_0[] = {-38, 11, -61, -110, -16, -29, 99, 66, 37, 13, -19, 111, -68, 25, -27, 44, -105, 22, 41, 35, 114, 105, 56, -124, 104, -117, 101, 78, -104, -16, -20, 64, 68, 42, -107, -121, -124, -19, 87, -46, -51, -59, -112, 41, -94, -113, 72, 30, 19, -93, -94, 41, -115, -112, -119, 36, 2, -105, 53, -115, -6, 88, 81, 87, 35, -15, 103, 9, 92, -49, 112, 2, 2, -9, 0, -96, -59, -57, 64, 94, 11, 121, -75, -77, -53, -111, 40, -83, 106, 106, 121, 71, -24, 13, -76, -20, 44, 86, -17, 0, 34, 57, -17, -80, 24, -91, 28, -94, -120, -92, -40, 74, 114, 54, 34, 74, 22, -50, 8, -68, 77, -74, -101, 12, 59, -40, 66, 1, -61, 98, -78, 100, -6, -114, -92, 98, 29, -94, 103, 109, -31, -42, -82, -60, -78, -121, 54, -103, -107, -94};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.745696857961);
    msg.setSource(20497U);
    msg.setSourceEntity(83U);
    msg.setDestination(61055U);
    msg.setDestinationEntity(205U);
    msg.plan_count = 33421U;
    msg.plan_size = 2019030402U;
    msg.change_time = 0.925303453431;
    msg.change_sid = 49444U;
    msg.change_sname.assign("CTESRFJAGNHMAL");
    const char tmp_msg_0[] = {-52, -16, 95, -35, 57, 42, -111, -122, 91, 20, -58, 34, -46, 91, -33, -90, 45};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.865213036516);
    msg.setSource(62677U);
    msg.setSourceEntity(95U);
    msg.setDestination(8460U);
    msg.setDestinationEntity(18U);
    msg.plan_id.assign("KTKUBVXPQLUHVWYUEZFEVWKNYBHHMGDRUFMOHUBZKXXGAJTYUCLTRHODFAQLCXQCWQYEPQSTGJVQZDGWVXOSRBHFTBYX");
    msg.plan_size = 48691U;
    msg.change_time = 0.469769162143;
    msg.change_sid = 40276U;
    msg.change_sname.assign("XGBVRDAGFLQGCJVHRJUKDZUH");
    const char tmp_msg_0[] = {-1, -84, -43, -66, 57, -33, 17, 28, -64, -62, -113, -117, -118, 66, 79, -27, -74, -52, 56, 47, -3, -84, -64, 37, -90, -117, -52, -120, 113, 121, -71, 49, 121, -118, -1, 66, 4, 73, -108, -39, -13, -38, 115, 97, -127, 94, 1, 94, 39, 47, -56, -75, 23, 124, -44, -79, -126, 105, 25, 17, -71, -50, -36, 104, -44, -20, 22, -63, 89, -85, 17, 79, 72, 60, -61, 74, 65, -3, -93, -54, -68, -106, 82, 11, -114, 23, 12, -74, -64, -91, -37, -61, -118, 92, 61, -87, 57, 83, 93, 99, -57, 117, -63};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.549630679176);
    msg.setSource(58820U);
    msg.setSourceEntity(247U);
    msg.setDestination(64391U);
    msg.setDestinationEntity(126U);
    msg.plan_id.assign("TNCXLXWIMYWDEOXWTSYPXPMFCRZWNRPFNGDZAPDBYZLYDJJPJMFGVJRSXMKFGENKMSLQNZWURLGMIOGCRNAADXUTVRQSQWBSGFEQNWUCKQVFZCIKBPEUFIOTCYVDWUVVFHICECDEDBBVUVLLANVITRBBHIIMJOBJCOXAHNZQUHSEYOWXG");
    msg.plan_size = 64488U;
    msg.change_time = 0.353976110418;
    msg.change_sid = 57522U;
    msg.change_sname.assign("XKGZRVSAICKWFQTJGCWFRUCPLSYHOUTBZZNSTLOZPJAEKYJMQTOQUCNDPEJXVBVXWJBQCGNBGNTRHSERAEFYBDXWKEDNONWOXYXPIVETOYHYMJKEZEQOWUAGAAADNQIIJCLMZXZBCDFG");
    const char tmp_msg_0[] = {-10, -58, -61, 92, -18, -74, -46, -128, 15, -46, -95, -118, -66, -125, 122, -70, -72, 103, -125, 60, 23, -84, 51, -88, -97, -96, -28, -1, 30, -72, 26, -45, 8, -108, 120, -77, -25, 40, 117, 25, -62, 120, -93, 13, -17, 82, 13, 82, 60, 96, 68, -26, 100, 6, 110, 57, -69, 80, -108, -126, 86, -13, -6, -70, -67, -118, -36, -46, -51, -22, -21, 74, -121, 104, 99, -23, 65, 10, 81, -96, 75, -56, 82, 68, 64, -98, -44, -57, 57, -116, 64, -89, 112, 103, 110, -8, 59, 47, 85, 1, 86, -125, -98, 89, 92, 108, -13, 57, 47, 0, -89, -84, 39, 32, -89, -52, 80, 70, 61, -90, 108, -17, 110, 42};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.672157898514);
    msg.setSource(16255U);
    msg.setSourceEntity(207U);
    msg.setDestination(6739U);
    msg.setDestinationEntity(148U);
    msg.plan_id.assign("YIEDOHEKSCB");
    msg.plan_size = 47856U;
    msg.change_time = 0.506652284144;
    msg.change_sid = 21317U;
    msg.change_sname.assign("WTERIMRFSYOKGYLYXOTPQIXGJXGKMHWBNUZVQKCZKVMOCUPHEYZAXLVPAXCIGRVDQKJGRAMWASIQLWHZZSHJIMHYUDCFBDAPYFRUFJBXMZZYXSNHCGVB");
    const char tmp_msg_0[] = {-55, 82, 107, 10, 31, -119, -64, 98, 55, 79, -5, -110, -111, -52, 36, -8, -6, -52, -7, 103, 118, -48, -69, 55, -85, 55, -4, -47, 47, -105, -77, 106, -64, 19, -68, 113, 40, 12, 65, -101, -32, 7, -5, 43, 35, -21, 113, -100, 8, -24, -111, 19, 31, -11, -50, 21, 29, -18, -108, -30, -118, 67, 5, -68, -19, 77, -36, 95, 107, -93, 73, -114, 47, -2, -11, 76, -102, -9, -39, -12, -74, -126, 105, 124, -54, -85, 72, 6, -128, -74, 55, 69, -95, 19, 15, 21, -119, -66, -26, -76, 73, 68, -126, -107, -49, -111, 108, 125, 40, -78, -20, 6, -34, -6, -80, -107, -83, 55, -99, -43, 112, -86, 42, -34, -63, -13, 8, 87, -97, 9, -104, -36, -75, -14, -66, -82, 103, 15, 30, 56, 65, 15, 94, -38, 83, 86, 62, 113, 2, 59, -114, 73, 41, 93, -114, 29, 38, -75, 38, -127, 58, 107, 26, 76, 92, -81, -113, 7, -75, 100, -39, 44, 57, -17, 125, 96, -79, -117, 35, 77, 94, -101, 96, -15, 22, 86, -34, 66, -79, 44, 104, 69, -128, -113, -113, 87, -67, 21, 123, 92, -24, -20, -128, 92, -31, 68, 126, 39, 29, -22, -116, -128, 72, -67, 68, -24, -32, -12, -41, -75, 89, -11, -62, 12, -72, -74, 51, 85, 105, 53, -109};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.666345208992);
    msg.setSource(3622U);
    msg.setSourceEntity(102U);
    msg.setDestination(9262U);
    msg.setDestinationEntity(233U);
    msg.type = 213U;
    msg.op = 192U;
    msg.request_id = 37988U;
    msg.plan_id.assign("AXJXQEHMXALFDYBPUESVBCOUIEXDTIULKIUBANNJYS");
    msg.flags = 4045U;
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 133U;
    tmp_msg_0.op = 147U;
    tmp_msg_0.possimerr = 0.894235396407;
    tmp_msg_0.converg = 0.969763104024;
    tmp_msg_0.turbulence = 0.547724085339;
    tmp_msg_0.possimmon = 151U;
    tmp_msg_0.commmon = 102U;
    tmp_msg_0.convergmon = 182U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NHZXEEITRWJPFCOFWWVUOWMLKXBQJARERLVOXYYRBLRDFPYSTJEFRUUBXQHPEZWSNHRJFQFFRCIQRMAHYQIEYVOSHODANSSICGDKZHHDVZLJVVXSNCGYXCPZIGQZCKDJDBAKWEYLMWHNLVMCQWUPGOWNKVQGIZTHTSEKNVXBDGDTLSQUTZMXABRUGKTEJKPPCYJBOKTYPG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.994897039931);
    msg.setSource(44827U);
    msg.setSourceEntity(207U);
    msg.setDestination(16791U);
    msg.setDestinationEntity(234U);
    msg.type = 187U;
    msg.op = 61U;
    msg.request_id = 1971U;
    msg.plan_id.assign("KJNOAVRKPQPEZEEEUAVWZDVXBIBWQKYOJXIMYCUXXQLRMNPTCORCUXBHRPZQOTDISGSNTDMVPWHTVLWLZPNGBLHRYKGNKREDGZQRFKPSAGDCFYDXIMTIJFPQNJZ");
    msg.flags = 43653U;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 208U;
    tmp_msg_0.error.assign("JJQILAZIPINEFMRJKUCIOASHNGJEZOFWGHREVHIQSXIYKPPBQXACFICHTQSDGLABULJWDAFOWMBXYTWGLIXUZSIVVKYJDHAMFBOWFOZZNLUTXHMDTLQNPM");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JYGMRVWHQZNZHALGXVDSGUHPHVAZBZVXPZQNGPWFBOGXDSUIAIBIQFUOWXGFEOIWXTVJZBEAHUAFDRLKGEOMCYKCGJSKRBKXCRSORSMPRQLFXYGXMBOTPLEGAANRMINZCKTLLHFIWYYMYUXMHRCAVMEIUWEATORBKUYZFPJVLEIQEKQEDMQALQDKUTEFBNSOJLUOTHLQWNCTYBCXNYCTIWDNJJSZFDJIJWMPHP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.0449614771992);
    msg.setSource(19830U);
    msg.setSourceEntity(36U);
    msg.setDestination(54482U);
    msg.setDestinationEntity(242U);
    msg.type = 13U;
    msg.op = 84U;
    msg.request_id = 11647U;
    msg.plan_id.assign("WAVTJBNRMVNJHWYJPIIWYEPROSCJGUFMQFUDPOCBGMBEHNFSYUWHIBYOZNLFXLVWFDNPHLDJVQCNKDUDQSRQEIWMIFXKMNAXYMLSDPGJAMBGWRNERPRWGTBTCUHCFZSOGTGDUPQLGBAJSHUMTXTRRUZPXCVZHSIYJFXQZKSIAKAEHOAINVDBDKOOBKVXAGKQLELMKCCFQYLVYPXCRZQRUBEPSTKEFYJXOAEVUGDHKCWSL");
    msg.flags = 24853U;
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.735072852873;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QXGSMXXJWPUFUPTMZLESLPUMWTTDPGNHRNRCJIDAVBZFDMCNLCZJUQABLHAHJLSTMUKQKZDJOSHKLXGBCHPWKPHRLNOVNYYINJVBNAOORYSXUCEXDGCWEZREAQROJMFHZCQBFPLGWIFBM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.759717423345);
    msg.setSource(54674U);
    msg.setSourceEntity(173U);
    msg.setDestination(33106U);
    msg.setDestinationEntity(37U);
    msg.state = 226U;
    msg.plan_id.assign("GVKTQQXVBSPENAAZHCCMJ");
    msg.plan_eta = -1451491929;
    msg.plan_progress = 0.948033067942;
    msg.man_id.assign("QUHLPQTPDCNUOWWKBSVAHQREGOEZDBEYQTMIZFTFTKRIKHSPNAOYFNNEIFUSIBMYAQBODKKOXBRSIZWHSXKEPSXLXUMGEZHAUTNNBYLRAIWLCGM");
    msg.man_type = 43449U;
    msg.man_eta = -167443962;
    msg.last_outcome = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.00717366057652);
    msg.setSource(42219U);
    msg.setSourceEntity(236U);
    msg.setDestination(4010U);
    msg.setDestinationEntity(216U);
    msg.state = 166U;
    msg.plan_id.assign("EEDHYVMBCXGZDATSYYTNMVJAZRRPKJXYRXTBKQAJZWFZWROABHOUEGIKOHRWRLOLXNUKBUSMXYSMJQARVXIXIJECMTBFLDQJGLJGSL");
    msg.plan_eta = -1474036334;
    msg.plan_progress = 0.169796308048;
    msg.man_id.assign("PYOIETNVCLDYAUOOPHTVMGWOFGTQRETOHYZWLVZOZWFFCRUSJJGEZQHXYCTYQVYYBIQALGBDWSRVDZKQNOVDDINIVFZAGXGUMRJNSNKGIKHAEXJMQVWGXEBJDECBMCLTUTKPXASUTTSRBLRYABZEUMPSCFQRKMPQANLNMZKHZNHFYYPJWVHKXKQERSFMUXISCDNAIRFCOCBOPXWZKWJRMIKBXV");
    msg.man_type = 14182U;
    msg.man_eta = -1670965806;
    msg.last_outcome = 58U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.275923180785);
    msg.setSource(17842U);
    msg.setSourceEntity(179U);
    msg.setDestination(6308U);
    msg.setDestinationEntity(235U);
    msg.state = 191U;
    msg.plan_id.assign("IMYFEBXHDSCRYPICAJGAJFBMBWUSUOAOMZATAORIWCOHSGFLLZMDVHYAJLTSRSIMVQUWY");
    msg.plan_eta = -176094600;
    msg.plan_progress = 0.278524248;
    msg.man_id.assign("MVFDKQNGXBHFWPLPERNAQZTBCICAQRKHNTZJTFAWTEBTKUKQBIJIRUXQCXWDVEPUVYYSIXMKLZLBRVQULXYTZTEZJTBGEUNGMDRYGUNSDPRKOFECDQOKRWWPHOMJJHYWNCCUGCGPYNGJIDXVXKNOULRAHQUSWSODBHRXJICZANSDYZVIVMFPHWOKSFQEERPZPGVKMHCISLWJLTZFLIOBHXMESG");
    msg.man_type = 51437U;
    msg.man_eta = -481847112;
    msg.last_outcome = 71U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.202005500293);
    msg.setSource(10710U);
    msg.setSourceEntity(25U);
    msg.setDestination(41573U);
    msg.setDestinationEntity(121U);
    msg.name.assign("WQASLTFLXDBMMEBTULNYHBTTHMZUVWDWUXIRZHICKWQAEFWRGOHB");
    msg.value.assign("BKFXFYPDVBXQKXRHPH");
    msg.type = 175U;
    msg.access = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.974427448696);
    msg.setSource(4249U);
    msg.setSourceEntity(9U);
    msg.setDestination(45750U);
    msg.setDestinationEntity(69U);
    msg.name.assign("OSNQGKKXRBDMYFWEHLCNXLRZKVROCMWLUSRFSBVJXEDUTGDEIKJNORBJQUIGNVQKLMLFSSPHWYOVRZQONNRNYPHGFXLHPNMVJSZUTGDLAIUJHWBTSDQCAIVAXEGVZSUCWEJFOEPGTTKTMQCVBUFEBGWZVFXUAGIRAAIMFXMZHWYIFXLTJSBWARBHAYBIJAULCGJCPPDZTQPSMMXDQLCNY");
    msg.value.assign("INQPZOCEMMFWYBEXHAFDLDNYXLWIVAKSYPPTUHPLWMEINAZQTRQIYTJRXUHQEZURCCAMNYNEKSGYMZVBTEFBPTKDUXROXOWIGNSZCFBJNVZLPDMLGVJYEWKYRNVPYBHWPFMCCNIQKVHASLCQWQKATEURHJOLVBIODDFIZJZKRSOXPLLBUOWOQJUFXNFPMDJSTKAOXTGFUGKJ");
    msg.type = 66U;
    msg.access = 238U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.677703260378);
    msg.setSource(3710U);
    msg.setSourceEntity(69U);
    msg.setDestination(38765U);
    msg.setDestinationEntity(253U);
    msg.name.assign("YQIRWXDEVKTOGKZRSYJFWAOEDCOZMGZCJTQLFKFZAOEKYEYBNQXZJKLPIEVBPPCKXGRYCFHSAUNMFCRLQTRLASUFRBNDKSZVAZSXCAIPFNTEVQYYJXHHMAIMKHFQAMLTECNNRQVIFVCIUNXOFEMWUOGVHTGIKPCQUNPXHMJKWWBODTDPOWWBABTSRWPEHUXPGMWGLXABLJVBDSUQLDIYCLSZTQMZLBZVUWIGUMDDYXRNHEUJV");
    msg.value.assign("XYGIBUACJERCJNOSQMYETDYLYOHVJUFFSLRHKRRQSFVDGPACMUPNJKIOCTDEZOISCUXVPMOIBGHAAODOHHFMEOITPWCTWRSYXPEMAWJQJLKRGYT");
    msg.type = 153U;
    msg.access = 56U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.535228889656);
    msg.setSource(41485U);
    msg.setSourceEntity(127U);
    msg.setDestination(51721U);
    msg.setDestinationEntity(102U);
    msg.cmd = 115U;
    msg.op = 196U;
    msg.plan_id.assign("YYRIMNBVEMICLCRHOLZTRFMWWGFUH");
    msg.params.assign("OCNXNXZQFOGSXUCTJKPVNBGWQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.821450310126);
    msg.setSource(61129U);
    msg.setSourceEntity(103U);
    msg.setDestination(51760U);
    msg.setDestinationEntity(153U);
    msg.cmd = 18U;
    msg.op = 247U;
    msg.plan_id.assign("LRKSBMKUWMHFIPXUTJTBVGELADLSOZIIFZPBADASGHNDOJWDQUIQCPVLJTOAMXEIODYXZJPWSTJZFSHXLGYEBYREUC");
    msg.params.assign("MUOJSHLBEVRAVLYMSXVCTQXMGBCURRHOPQPNCPGKIGSZVKJBHDZOAJYTOALENZEAMWNNQBQMEXTVEOLHRDLCWRSJXXFQYSZHZZTBSOBXNHPJPBLCYUFTBEKAMZLCFWOFQTWVIXABVSQHIYNDGKDADSJSHMUFKRNWUWUFPLRDFTIVZLICRCDF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.263178641024);
    msg.setSource(23031U);
    msg.setSourceEntity(204U);
    msg.setDestination(63550U);
    msg.setDestinationEntity(32U);
    msg.cmd = 202U;
    msg.op = 131U;
    msg.plan_id.assign("DQBSYTCXARPSOERNZVCNKQXKZGKITZJBRELILHNSCBCJGWADPJRJUEMYZPFIGXMGMVHHJBDVVXYPPTYSFDNAEZADKGDXQAEDUTNBFWSHTNQHUWTFRXOLMCXUBSUSWOOSURAIMPQWMXAFSWTNFOWKYHVAKMWYSAKCJRUGOBZNTGTICDQXQVMLYKYCKJNCFAHQNLBHDZOFVEJPGVEMIU");
    msg.params.assign("RPJXVLOTMIWPKHTVLYXHIUAJBHVJCBIERDOLIMNFPZPRZKXFYWLZRCIYGGPOKFTOVSEIFXXRRSBEDETUQJISFDZRGSLHQMMXQKRGDBP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.354149340194);
    msg.setSource(55983U);
    msg.setSourceEntity(133U);
    msg.setDestination(15174U);
    msg.setDestinationEntity(7U);
    msg.group_name.assign("TIGWMXLIDYLVHXGZQRZMRWLEGLUKEPRPXKCFOMWHJYJORCEYMOVLUWPRSNNRMQSMOUNPQJGFVCQDLXYEHDDAARYDJPGCDAHNVJTDETGTHWKBHKDYANSZJAVSLLNIIRHMBEHVFF");
    msg.op = 225U;
    msg.lat = 0.3308898366;
    msg.lon = 0.192216928342;
    msg.height = 0.789131093383;
    msg.x = 0.997169888512;
    msg.y = 0.601736215342;
    msg.z = 0.0887481254986;
    msg.phi = 0.355285420941;
    msg.theta = 0.815182267428;
    msg.psi = 0.486591223425;
    msg.vx = 0.252129725339;
    msg.vy = 0.138238726511;
    msg.vz = 0.542269010767;
    msg.p = 0.774831977096;
    msg.q = 0.600794816545;
    msg.r = 0.992083058544;
    msg.svx = 0.797311307764;
    msg.svy = 0.272110455359;
    msg.svz = 0.060818585993;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.58279850361);
    msg.setSource(30957U);
    msg.setSourceEntity(58U);
    msg.setDestination(45218U);
    msg.setDestinationEntity(75U);
    msg.group_name.assign("HNBGLEZXQQVSXPKWZYVHIVAJRZSGPAUCQCBEZBIOHHYRMBXWKHJMDNROFCCKNSDZEKONARTSEECPTCXCQMTPMBPFRVUSXDLPWTTTGGAQFIWTGISIDHKNZOXBJMIZDY");
    msg.op = 213U;
    msg.lat = 0.924757098887;
    msg.lon = 0.654647432105;
    msg.height = 0.0719852002961;
    msg.x = 0.679510678098;
    msg.y = 0.482067554297;
    msg.z = 0.883305075827;
    msg.phi = 0.34959674617;
    msg.theta = 0.0393559883429;
    msg.psi = 0.397129050223;
    msg.vx = 0.407435928867;
    msg.vy = 0.20354801922;
    msg.vz = 0.286092154429;
    msg.p = 0.500671881761;
    msg.q = 0.0800834578458;
    msg.r = 0.654092852269;
    msg.svx = 0.748666512306;
    msg.svy = 0.963931844711;
    msg.svz = 0.877635266108;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.108692888942);
    msg.setSource(28242U);
    msg.setSourceEntity(150U);
    msg.setDestination(4675U);
    msg.setDestinationEntity(187U);
    msg.group_name.assign("UTLSCNSUPGDQNOZKWBHVFUYVJGDEWLXSXVRLTUUFMHMVMYYUFBLIUQNZTSBKCGHKJJETHKFJSXGOKMZNFRPIPWCGPZDIONUMOWXWQFVPHTDFQPWGCILCHYRNXTEBDLRXRJHTMEBORUKIDEJZPRRMGQAEAFONVBEVOCUYCFSKDDLBQAYXBHEQGCVTJ");
    msg.op = 227U;
    msg.lat = 0.0598745294974;
    msg.lon = 0.384768651504;
    msg.height = 0.602829913248;
    msg.x = 0.337331933701;
    msg.y = 0.32862422649;
    msg.z = 0.923260275795;
    msg.phi = 0.504688491869;
    msg.theta = 0.313580612357;
    msg.psi = 0.017440056633;
    msg.vx = 0.55705676323;
    msg.vy = 0.624845432579;
    msg.vz = 0.518117906493;
    msg.p = 0.361768056625;
    msg.q = 0.1489123656;
    msg.r = 0.528491388425;
    msg.svx = 0.294376329994;
    msg.svy = 0.0967822747569;
    msg.svz = 0.720320684007;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.816404005008);
    msg.setSource(4899U);
    msg.setSourceEntity(241U);
    msg.setDestination(60575U);
    msg.setDestinationEntity(167U);
    msg.plan_id.assign("XNMNMDTAVGOQKYNENHNERHUOMXNKEERBOUZKGQX");
    msg.type = 178U;
    msg.properties = 248U;
    msg.durations.assign("GSQRJLUHSMWIBZNEXGHTGZOVVUVVLLYKJZFQXOZQZNGKRASKVIQJMULFIZHOTKPHNIDVBNGYLVBDFSKCGOJIUMWYKWPBSSDHSFEYBXMRAJBYPLYFRRAICTEDAPIEHKLVAHDUOCWFYNEGCHOPGTAVXKTYNGWPJKMMRXROIOCQUWLQNJRZWVXEMHCXUYLGSRBDUN");
    msg.distances.assign("IGWEZABDCALAXJDEGNPYQSJKRVXSWTDLHDEARIJBMEFXGAFZNDMPSDXTVURWRBLBHRUZHRUORFEZCMQNKIOCCPKKOAMCTIECVGQLZOJHNFOHPUYZJGXGMNDFWBJSMHUASYYQKXOYWJHVEPZZUQFTBLLTVSQOEDQVJSWKTNYQPNGUIRZVXBVKKIMTBRITMYUVOUPAJWWDPEZFCXLSTVOBNFSSTJFYD");
    msg.actions.assign("YUAATQYUCHMKW");
    msg.fuel.assign("USIRVGFDNZTFZRRJIEQYGMXMWRWPFLBRVFBZTUGWUOADSKKPASDYUANDWWHXFDLOIECUYURHOQXPJQNJPCEOVYYQHDVYJDZQKJNASUBTMNCOKAVJRLZKDQKFT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.350375759633);
    msg.setSource(61403U);
    msg.setSourceEntity(38U);
    msg.setDestination(16466U);
    msg.setDestinationEntity(24U);
    msg.plan_id.assign("LPIJNOVPEWYIUGSKDRACUVYSHLJIPDFHJGNBBQGIWAKTCQCVTLZMFBZWSEDUWXETNXPCEMMJPJSYFKNLIXOGXLRTMMBRXOFGEJZ");
    msg.type = 194U;
    msg.properties = 114U;
    msg.durations.assign("TXFOESNVIJIGEOYLXWPIMHUPGORGTGCHPZBFFWLNQVAVADRTXGBBMCKIILQ");
    msg.distances.assign("ZHNLPMHDKHHOHMWOKOCBBIIRIUZMYDYKADYAAQUOVXQVQKRDEERRGJCTKFEZSSPAJKKTMPYXDUYHLRUYZIAXGMJGBGNKLMFAZWOYLYNIOBUWZXYHVCEZSEMXEBWCOWVTTQRCOEUVRSPDUZUKSSJDTIZBX");
    msg.actions.assign("XYIANKEUXOPTNEVQLZFKYQRTCYCUETOKDOZKFRDJYFYEXKMSSASLKVSZSJIHHXJECAWMVKIDJEWBSTDCNRUWGNDOGBLRXUFDMMNTWWBAEIIGAALAPMYNCDPLUWSGQPGJOQFKUOBBTHSAEHDEPRNUMZYVDLTVMKXUBCVHQGHFWOJNUPQZJPCCZRXMFABXHTDHWLNYOJCWVBGFJGBFJVVRYLMKWBLYLZOIZIPQXGXMH");
    msg.fuel.assign("PVDYZNIUAGFJRXWBTWQPTZBIEKRARLWCYHXNMQPQNV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.446749579152);
    msg.setSource(16728U);
    msg.setSourceEntity(228U);
    msg.setDestination(10910U);
    msg.setDestinationEntity(107U);
    msg.plan_id.assign("JEJSXBNYTXXTZIFAEVSYVRLQERGBBOZMPJXSSRDHOTTULSZMDAXSAUABMWSWYBLCVOWJRUXOQR");
    msg.type = 43U;
    msg.properties = 113U;
    msg.durations.assign("IPRKFDLRJTECIYPXZ");
    msg.distances.assign("BMDUIBEKDJHVRQMWDFWKNAFASPZZYRTZOODGKEBSYXWYBOJPWLAONTBGIVLSMMVECNGZLSCOZYAGYUFNLRPAJQMOIJYOCXVSNLMHDHVCSWZIEAQJPBTETLBWPMVFEJHLRQRIDRFJSTXPBXXKWAUM");
    msg.actions.assign("MSSZDCWMTYJQQAHARQFHEUWTERQVRSKJXZYUGDLWOLUUXAGXQGDABSORATJTCUKTGEEJDSOFLZBIWYNKXSZRQMBNAKOBPHPXREQYZCFPMGYYDHOHLZGCNNQLZXNBLPMGPRDIRDKUOIFHATHKJOXJNVQKTGFYFIECJBGUWJHDIITFVUEXVIYSDJQBLLMOYPSCODTMRVHXWWMIWNVAVSJNGNAWUECAMFLYTUMZKO");
    msg.fuel.assign("QJGYQBOHHTUUUWVJAABTITGWUMKOFMEHEBWJSFOFFHWHFPPMLHGLZVPNDMOEYABAGRHYSYSESCLJCFEPJVZWUTQFBMZJWXXLSNYKLMORRWDISXDBCGTKQVAIOXTKYZMXJVNQKDQRCDNORMDNELRZXCYUUIBZKPFPNINBILNYCJVKIHNWTZQECSBADJGNVMUCOQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.724853869975);
    msg.setSource(14278U);
    msg.setSourceEntity(6U);
    msg.setDestination(3305U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.757439622537;
    msg.lon = 0.638909759865;
    msg.depth = 0.484935413507;
    msg.roll = 0.0119772584343;
    msg.pitch = 0.947469465881;
    msg.yaw = 0.343193352624;
    msg.rcp_time = 0.385141960722;
    msg.sid.assign("RLZODWFSNKVEZOPIJCLSIIBJXVMFAEXKTVNUEBAEEAZMEAORRFGBMOYXQZ");
    msg.s_type = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.41711085155);
    msg.setSource(25341U);
    msg.setSourceEntity(4U);
    msg.setDestination(29540U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.89683876293;
    msg.lon = 0.151026861985;
    msg.depth = 0.496164410048;
    msg.roll = 0.00261846493882;
    msg.pitch = 0.906883525849;
    msg.yaw = 0.0224102738049;
    msg.rcp_time = 0.31097025325;
    msg.sid.assign("XUZOYQAKZWKMUBJWQFLUEDDUGFGXKXBHDRZGNUSDGNBJOCVCFQFKOTFZNQYSZDHAMDDJXRAFFHISQRYVSNWJNXSEOVLLYTRAOSICT");
    msg.s_type = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.310931290247);
    msg.setSource(12524U);
    msg.setSourceEntity(193U);
    msg.setDestination(36667U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.0391732557404;
    msg.lon = 0.676534721587;
    msg.depth = 0.502430331581;
    msg.roll = 0.585459269059;
    msg.pitch = 0.912761413967;
    msg.yaw = 0.729291811613;
    msg.rcp_time = 0.562376394591;
    msg.sid.assign("GOQIEJXYEITGUZXJUDLDQSRPBRRRJSVCLNNPJQYUPOTMVUYNIMAYMTVGHFSMRBWUQADUARMPREKZHZIFZZZBHEPAOVXWIJPDHPGFZEACSKKWELWXMFTBIJKKUYNXXYAJPPHGXRNBNQYRCDOMVTFYNIDHEOKSXLFQSZAWNGVZDDCKOCESLZUHWILYAWLQQSXQENAJSDIKVBDBFTLM");
    msg.s_type = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.451560182799);
    msg.setSource(19U);
    msg.setSourceEntity(198U);
    msg.setDestination(24969U);
    msg.setDestinationEntity(180U);
    msg.id.assign("QAIKLPWFQLZRRVGEHUTHJPRUELNYGMYVBABOXIMEXJZCBGFKDRTHLNJXMQNMKTGDNNVYDUWSYJLWJIBRZCZHUKKPYIWMO");
    msg.sensor_class.assign("AUYRJTHXNXMTBRIOCRDWSMKHFUPOTLAFZ");
    msg.lat = 0.662369643043;
    msg.lon = 0.131090109669;
    msg.alt = 0.449788600316;
    msg.heading = 0.744279635333;
    msg.data.assign("MCCPPSBNXLOTJOLEMZBZBYLEAJSLPIJHRTVIPJQLUDWRSGHXPWMJHJKCCZMPKTKWRKFPAZUEPGWSKDQQIXTECNHFGBONUZFGGRHBXQQNAOAYIBKMNVEIKHFJEGBXNIVNOLMCVXTXUVQJMJWESBDFHIBVIUCODCYZIGMHQAJSDCEVOYEYGRUTDGTFAZSRDUWNZBFUGO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.290442705062);
    msg.setSource(53464U);
    msg.setSourceEntity(47U);
    msg.setDestination(42981U);
    msg.setDestinationEntity(91U);
    msg.id.assign("FGIDZAMAGCNVDFVXOZEDUONGVCQFPSXMGWYPHLXEHDLCHBEBKZLAOKMMVXEUZKPYJUSFIVMVBMRYQIDXYCDZYPTYSGBTSJWRDGNJIZYWHFXIQXACGWSTHEPQTZKOGPOZQ");
    msg.sensor_class.assign("CAPUNEYHETWSKREVOOKOGFKLNLBHOQTTHQRAEYNMNWZXGQDYBHBTPXOIXZTDUCXNNBZMRYLSCSZFHODNGSQCTJCZFPHMDWLWFHZQEYBUMGORQWXCZVDXBGDDUPKJCFMSZFUPJSQVIVRMMJMJBJIODPZSBAIXAPYKTKPEQLDYLUYVONJCERFLQLIMASIQMPRAIXHKVIYTRHEUWJTUVGNYBTSWRGAAXFUSHL");
    msg.lat = 0.860836548744;
    msg.lon = 0.599993260111;
    msg.alt = 0.945229744361;
    msg.heading = 0.131739782002;
    msg.data.assign("SIMECRHRFTBHCAXCJLWQSDTWLSCA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.800306651141);
    msg.setSource(16276U);
    msg.setSourceEntity(36U);
    msg.setDestination(1879U);
    msg.setDestinationEntity(16U);
    msg.id.assign("LBGONDHHOXVXIPGCJPICEUZDDRLMMYQOGOKZGREWAODZPCHKCGOJBRNJLQLTSA");
    msg.sensor_class.assign("TLSWGCNSKOBZGJHLPXRVVXQUARRIGTCWZUIEMYVUTGPVURAKWOQZBZJCRFGOVSXFPTODBURIQRVSJOCVYBFKBEBFZFAZOPRQTYMMADIGUKBNKRSEDGPWTWDHLCYIFLPWHUDXCHEWCGCFLUQNVOKADNPSNARYXGHDXJKJKQNQMLQMNPFMXBJHYSVFWNMPJXZSANYVQLXZIDFELIUZKJKTCHEGJTPMEBSS");
    msg.lat = 0.51987246649;
    msg.lon = 0.625043932951;
    msg.alt = 0.0897447143661;
    msg.heading = 0.745053195288;
    msg.data.assign("SUYKFDYCGYTVMUCEOPAGPKMTTIZLUXSFJYHWNYXARIVHSJXRPNWFMEIORMPQQAXSXKHJJGNCGNEOKZWCQVUOAHQUZBDCRVWHKIKJZUWBVSBJMGLCQDPHPUNGRONTXLZDVWMDVOECBUYCLEAGPXTHVAIDAOYUEYLLHFPDNOSRFQDBMKRLGKSISAEBQVEOWMWJGJWFJNYZFQUNZPFTEIAXBIXDBPFLLBXSIRHEDHZRLCT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.97064465635);
    msg.setSource(43040U);
    msg.setSourceEntity(130U);
    msg.setDestination(24207U);
    msg.setDestinationEntity(38U);
    msg.id.assign("IIOXZMLJOPWHBDGEBRDLAHAZJUVPCXNSNTHWTEOMJHGJOYGLDMNIIVBACSFJFIPNXZHKKY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("LGOYDUVQNTZYHURRFZFKOXRDCFRVOXGRNFYAQFYNBYTIMQTKMPSKSIWWDDIPCHQXNXICZIQNQOHLJVZLBMTBAYPJGGEXWQKESRDNUKJVBLHLDRKUSWIYVXBIMXFJGMLGVOXCTHVGTSIFOZRWPIJCMJCNXSQMERYQAEBQFOCGMKKABZJDMJOLWUPKUUCAZLHNPTAHWBIWWUACYSHSBOWTLAZUTPHUCKHOPL");
    tmp_msg_0.feature_type = 240U;
    tmp_msg_0.rgb_red = 188U;
    tmp_msg_0.rgb_green = 21U;
    tmp_msg_0.rgb_blue = 20U;
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.270895202771);
    msg.setSource(12905U);
    msg.setSourceEntity(236U);
    msg.setDestination(8818U);
    msg.setDestinationEntity(207U);
    msg.id.assign("JKBCTGLFRKLHWCBZQMOJTTPQSLYBWJEAJUGNCHXWYPGSXAPJIUFDOMIPZPOYAIYEQPIUCGPWTLUHUCWNVZBBSBZIHOZFUUMVPXTHXODLEMVYZ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SNPLJWHTEEGLGWQMWQYBVLKMHUJZUSZMPTXASSDUWYKCZKTMNUYNVJBRDXBKZLWCXAUAIZPVTNEQGCIMCYFQLVOPIOPJSSURKRVQJKCYKIVHHMYUXDDFOARENFLFTMASINPHNCEOZOEIVWNHBRSBUZRQFMIVBNDXLJIOIHDAPQNTGZOQWPEGJJGKXAECFCZAHXBTLVXJMWKHPUBBFBGIDCRYDTTDUFOXDVPGSYFALOESLQEFYGTJ");
    tmp_msg_0.feature_type = 183U;
    tmp_msg_0.rgb_red = 51U;
    tmp_msg_0.rgb_green = 169U;
    tmp_msg_0.rgb_blue = 176U;
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.121190629977);
    msg.setSource(6035U);
    msg.setSourceEntity(56U);
    msg.setDestination(32735U);
    msg.setDestinationEntity(232U);
    msg.id.assign("YQXJKNVQYWSLSINRWCWAZLQKIUZJHHGGFYUMIVBRPPHOTJTDRIVNQSJNNROSFHTEOYKFCAWWJICAEQXNTUATGKFYJDIEDBEFAZOJWZKCURDOVHURDDPWIIAYFTOBMPPXZLVKMKPLRQAGFVXARHQEDAIXMSUJMJXBYWYLKZHHLYMQWMPTVTKBONPGDTGRZBPYLXBNBVEVZUFNKCTZWOXECGNAESFGUGECBDZOVLCESCSJCOMQXBLDLUFP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.0245145232584);
    msg.setSource(49178U);
    msg.setSourceEntity(242U);
    msg.setDestination(19970U);
    msg.setDestinationEntity(139U);
    msg.id.assign("ACAWQTWODCNLIEJXSYHHHEYULABGJEMUULLPTCKRQTYNEJUXAEFHMVCPEDSVXDKPZUFDEYIQJRLLPMVGSVYFUJXJGTZFLHPNHWLTGBKXTMOHLMFZSVKKOBHQOWNFGCJIMRVNVAJEQKPHAUDMAYWOYDBXTJXPTPZCBAZLEZSRZQGGSWDCWMGBXMXRWBIDNBPCSGKSIIYKRKMEGSWQVRIFDXUOQSBQFNRZOUQTAZINHDWPNBY");
    msg.feature_type = 142U;
    msg.rgb_red = 72U;
    msg.rgb_green = 234U;
    msg.rgb_blue = 6U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.874501691528);
    msg.setSource(2729U);
    msg.setSourceEntity(147U);
    msg.setDestination(27872U);
    msg.setDestinationEntity(164U);
    msg.id.assign("SYXDUSKQFGSLLCKKQEXOIOWDKIYATJKJRLCOZTIIIXJAUQRLJQCYFQUNBGRKHXMTGMVXOMELYMIXLREVVRPHGJYORNUCEKBWTEZUYEFJIZCHPOELUHHDDNKAZTYAYAESQAHBJNUGZPSDQBFGWCDWLMWUMSPFDMPYHBVJBEPNNTPZACPZKNSTVVXV");
    msg.feature_type = 77U;
    msg.rgb_red = 224U;
    msg.rgb_green = 78U;
    msg.rgb_blue = 202U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.858162076397;
    tmp_msg_0.lon = 0.138029419601;
    tmp_msg_0.alt = 0.161154514781;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.456739299978);
    msg.setSource(32413U);
    msg.setSourceEntity(142U);
    msg.setDestination(6973U);
    msg.setDestinationEntity(208U);
    msg.id.assign("OIQZKRNSYOMMXDXWFJHIFNANHLXVBTIKCHBRIEWKPSUOGSTKRVVAJGXMIBCHXEGKAXBDAIPIOAXNCAFHOMMZJWAGHZVYFOZKPCLKFEXSRTMWDKJXLBNCDKQPBCGGYSTTBWZFOVYEZNNRDSCHWPQMBUWLQGERZLAWUBEFPGYQAPDHYYUTGYHQJZRNSFVRGJTSEQIITIVYJVZEULFFUTWBLQ");
    msg.feature_type = 166U;
    msg.rgb_red = 98U;
    msg.rgb_green = 186U;
    msg.rgb_blue = 49U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.143741936522;
    tmp_msg_0.lon = 0.808473369887;
    tmp_msg_0.alt = 0.694422650104;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.0120486712852);
    msg.setSource(17454U);
    msg.setSourceEntity(234U);
    msg.setDestination(31679U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.0678215248131;
    msg.lon = 0.395909799763;
    msg.alt = 0.319319262195;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.921112701071);
    msg.setSource(53860U);
    msg.setSourceEntity(6U);
    msg.setDestination(59378U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.443031977195;
    msg.lon = 0.124787001191;
    msg.alt = 0.546916184329;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.628484118881);
    msg.setSource(34403U);
    msg.setSourceEntity(105U);
    msg.setDestination(7384U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.913611117734;
    msg.lon = 0.0853769518966;
    msg.alt = 0.189425013155;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.751644241644);
    msg.setSource(1389U);
    msg.setSourceEntity(245U);
    msg.setDestination(43555U);
    msg.setDestinationEntity(123U);
    msg.type = 219U;
    msg.id.assign("DZCHGKZCZZEFUDSEKERILYFKSFKLABAJVQHHTQIQTNAGXTVTMPXBOPRALECSRQLPHZYISCLQBUPOBAFDHQWMNUGIOFLQPYCCHYGW");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.602637978559;
    tmp_msg_0.lon = 0.502884867359;
    tmp_msg_0.z = 0.808412301549;
    tmp_msg_0.z_units = 163U;
    tmp_msg_0.radius = 0.864369757098;
    tmp_msg_0.duration = 28991U;
    tmp_msg_0.speed = 0.720170068554;
    tmp_msg_0.speed_units = 81U;
    tmp_msg_0.popup_period = 24185U;
    tmp_msg_0.popup_duration = 32817U;
    tmp_msg_0.flags = 7U;
    tmp_msg_0.custom.assign("NJPXFGSWGABEQWYNPHIWVHQEUQDQXZQKUNEJHYMHMBVWJJVUFVHYAQYOOKWNXFKOPVYJEGPTTOZCVLWVFTZTOIZMDZRGHZWNOQCZLDBBQSMHJDSBGVKCWVIUICSZIAAXUNGBNYSQGREXCCERHMTMORBBPRUAVHYFKIYRNOHAKRFEEAJUSTMKSFRSTRFKLPGXLI");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.492651070674);
    msg.setSource(62844U);
    msg.setSourceEntity(21U);
    msg.setDestination(859U);
    msg.setDestinationEntity(80U);
    msg.type = 193U;
    msg.id.assign("OCNZNEGXPOWRTEIXVEJYMNBJSQYGPHDUPBWQELQEDAQQARAGHRZWXWIPYWVLKFBCUFFETDKMPRNWVJRRRMGEHTDDTTSOBNCBGOQCSYUKAJUIGGJTYZUFAMINHIRVLWQLCMIZGSIZSDJFLTZPPCFSXOEXYAGULXUKCONQGBFCZZVIM");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.602290398484;
    tmp_msg_0.x = 0.83313873118;
    tmp_msg_0.y = 0.0770897859856;
    tmp_msg_0.z = 0.642635944506;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.280090187157);
    msg.setSource(17126U);
    msg.setSourceEntity(184U);
    msg.setDestination(38572U);
    msg.setDestinationEntity(43U);
    msg.type = 218U;
    msg.id.assign("THIIPSEDDCFPUEATHSMAZVJGPFVPIAKMYBFEZNVDBIHGGROLGTGBQEFYSJRAYMXMHLNEVVMASEKJZQRUSYDFFWTJIZXEIOLOQQNXOOPEWXRNKPLSUTDVXAHKGWLBQVYLOZKOCKROACKENQUSCJNLUIIRBBBRBJYQDKUPSOKWXMCMDCCGMQHFLLNSNJJRTFHZCIWZIWSPVWJ");
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("DFOTEIVXJKBQQLPVTYFUZGISMXZLQQTILMVTYAPMIDVIZNUMKSYUEFEJRODDSKBJZWGMDWOIDPYCSGIOYGZESFLTCPNAPJMOFDCEYVCHALORVDXFWZNNBJKXAAJQRTCCCFRANBQNMHCDHBAAFLGUUBCJTWVHBTOVKYOURQTMKGKDX");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.934592544599);
    msg.setSource(52170U);
    msg.setSourceEntity(159U);
    msg.setDestination(49651U);
    msg.setDestinationEntity(199U);
    msg.localname.assign("IKVKLXQMURYFZDSZNSZAJFLUOBFNJPKSPCWMQLEYOGNWOUEPHSDITYTZCOPQZJBTJFUXPGAIEXEEIKYVAAKCQCV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VNMAXASXSNFSTAVLCEOGIWCMBYDCAEXQIFZZSFLDNTDIKBYHBUBUGCPNIRFHUZOVTOAGYLSAXUOWZUIJWKRWXHLAUQZCGHLQJTVDTXUUKDUQJXOLOETGZBKIWYEVQPPFHYFRRSKJSLDVZNTPGZVXMDCVFMAEEQBDYCGGPSKJZJQQYROHMYWPNTPIMXDNKYEPRYRGKWNFIOFQHHLAPLIRMOTBIBVHMJOJSECEKNNWBAHCRPZCQBMMDLTXGER");
    tmp_msg_0.sys_type = 215U;
    tmp_msg_0.owner = 63014U;
    tmp_msg_0.lat = 0.470974284498;
    tmp_msg_0.lon = 0.482663296157;
    tmp_msg_0.height = 0.165505282997;
    tmp_msg_0.services.assign("DEXOYVMHQRLSOHIMCGAXYVUQXNHACQZPXWYQWJOBJHUNZQFEGTJXMZXPARBDHDUSMEBNJZNFWVVMVTBTYXWBNEHFIPOUKOLYVFNZWNSJOIIPXTFIPGCDDCRBCAWKRLWMZPEICZQOSSGFVPENYXSHDBHIJYAGRDACFQRRKFQMLVSDGPUIJGWKKPFGOENZMUAKTGLKUKTFCDITKYLVLYBJBWZRNXLRLOOLMPSUUWSEKBCZTQIMUQCJHATD");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.408796699909);
    msg.setSource(10570U);
    msg.setSourceEntity(124U);
    msg.setDestination(6893U);
    msg.setDestinationEntity(35U);
    msg.localname.assign("BMCBINWVTYQMHTYAGCEVUCHDYLSAIBCSJLGRPQTIIGVMYETDGDMPLXCFXBGZINSXRYBDDTPVNTVDRSSZCKLONEGGPJKHTJXRWJFXFLUUZQNIQAKLVQQLXRUMAAFWEXHITCKNFVAPVSTDKJRDLPDSFKNZEIYJRYEOQMSFRKZMOPZFEOAFCLUGISRBEAPU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.393139773923);
    msg.setSource(22940U);
    msg.setSourceEntity(194U);
    msg.setDestination(59514U);
    msg.setDestinationEntity(113U);
    msg.localname.assign("UFAQGVGUMIDRXGIQTADZETMHMHNAPKTWQBDZIVKEFRZJHESOHTIVLYQWAJMPLPFSBJWOXYPHWYZGXWIKAQNPABOCMMELYURXERCSEEYNTMUKOYHBCQTECVJPQGAFJLERSLYINFZJJUVMUHQFSWKOVATTKFQRVIOMBBUNRORYWPPZJKSGCZUBDGZBJNTKINZXPCVSFQCX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.77324058727);
    msg.setSource(62932U);
    msg.setSourceEntity(175U);
    msg.setDestination(20784U);
    msg.setDestinationEntity(178U);
    msg.timeline.assign("XIJVUTLXJHRTWCYAFJFQDAFRSTMUPLAJGOGQTIYXNJNKHHYKZICOPYWRXRICLZKTAGQDWYMWEEWXIVEDPTZBQXPEGY");
    msg.predicate.assign("HTNCNRGKMAYDNFUBNGRDDYAXARVMMTTFTJURBYS");
    msg.attributes.assign("GWAEMNVCNUZZOTGHDCYPXWFPESBZCCROOITWLTOMJVGIWKRSKKGSVFJGNQEULCZVVEHGFVHRBIYSYAPDBWVORUQTVCFUAPNNWCDHIDJYOALSXKIHCSPAYHZQTOALGZWOCJBBLBLBHUTVQIYJQMUHRUIFNDZTTCQYQRUMSZRXDOJMXDPBOMPKEEPEIXYMUNWAMHMJYKWFMSER");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.0967403513243);
    msg.setSource(63165U);
    msg.setSourceEntity(21U);
    msg.setDestination(34871U);
    msg.setDestinationEntity(64U);
    msg.timeline.assign("AYLQIXRURWPCYCKSPHKWFEEATBVQLTDBGOJYCLMBMXQIRXTUSRELTQAXAPDKQBNVMK");
    msg.predicate.assign("KRXYHFWULMVWVUOUOMOIULIYRBWQQEM");
    msg.attributes.assign("BEJHWAIDOGSYQIFONJHLAVXMN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.502337451761);
    msg.setSource(31431U);
    msg.setSourceEntity(213U);
    msg.setDestination(14710U);
    msg.setDestinationEntity(182U);
    msg.timeline.assign("MECTGVKSCMQXGCVTVYIWUMXAXOWRJEAUWXJAVGYIEVLQZTSNRIKKIQZYJEDXQRQWPFUSOMMDHQWFNVWMJFFMD");
    msg.predicate.assign("ENWEXRGKPCFJBWGQOIDNAXDTVMUYPNUPYUIZGSPZQCYRSQVDPUGJWDOZEI");
    msg.attributes.assign("VVARAOSMJPMSVQWWWNDXTMWIZIBXWLRZOHLFKZFGAJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.447851350407);
    msg.setSource(51077U);
    msg.setSourceEntity(47U);
    msg.setDestination(58929U);
    msg.setDestinationEntity(12U);
    msg.command = 221U;
    msg.goal_id.assign("YCIDMSFUJTEWWXKJCHJIGIXDPIKAGRDCPVOATTBHHKUCDFNRJXOLWFNTVEPHROFBJBDOTZCNZAAPQQWXWFHUMYEHDRXVQTIFOHSORHEEMQTZYXAPKNKBVNYFTDAESKQWDOCVICVXACMSVJGRBUYJNLIRMR");
    msg.goal_xml.assign("LRUMJYNELGFITRWULSPAGGVQELYJTWWDISTYDPRQNZUXMXTYWWKF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.203254104782);
    msg.setSource(24785U);
    msg.setSourceEntity(209U);
    msg.setDestination(58712U);
    msg.setDestinationEntity(78U);
    msg.command = 236U;
    msg.goal_id.assign("NBSYUFLSGPXVBLISXTIDEMKVXYWMZEBYLZKIFLRHPCJWMSJBZRECXHYQOMATAIVNZDIMRFOMXPRBNRKAARVTLVUPJCNWHFBFPDAHMSUOQSVUJHUOKTPAIVIKOQNGXJTWESHLOMFVUGFEYQYHGERQIQYDWZIPCRWYODXCNMGWEYBFQULNBUNOZTNZICKMKBAGCTKSQNPJLUJWRHTSXZWPHCVGOZJDXALDDFPTLCEAGBDEEG");
    msg.goal_xml.assign("DWIKTOCLDYQTZPGGKXBHYDZVQNAHSNLSGLFDXEPFFIYJJOPMDRBNNUGSMAOGWARKAHEQHVTXTXRQPWHQJPLLJDNIQRONBROCOWZUDJNZUKISGBJKWMXZITASMMEYJUHUVABCRJXAWKAHEJZTVISNFBAYWVW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.0384768212716);
    msg.setSource(33887U);
    msg.setSourceEntity(144U);
    msg.setDestination(38317U);
    msg.setDestinationEntity(5U);
    msg.command = 114U;
    msg.goal_id.assign("LUFOBDCTKJEPWRYRGVMJ");
    msg.goal_xml.assign("SECMNVEHBGLSCFNIVZRJTAXMBHBVXYLEYUXMWTWTLLIFKMJPAYQYOGIQOHROYZXGVBBYDXRWPQTQUIPAGUZPSEKLFLIBV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.673261312604);
    msg.setSource(40995U);
    msg.setSourceEntity(12U);
    msg.setDestination(14882U);
    msg.setDestinationEntity(206U);
    msg.op = 137U;
    msg.goal_id.assign("YWZEOGEHUBNMDHFORZGZIPUWELOKXVIUNAZBCAOVNZYTABMHXWFGVXTOQCKTKTRODOBLUGUPAMWPTMSZEXVWQHAKBPRCCNRDKZOMUHEVTCDEMSFZDDQPRXXAPSIJCYQGZCJIRTLFAFJPYUEKHWEKPJUKXRINAMLIOSOWWLNGRSSIVHGBJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OGUQFAQKAJ");
    tmp_msg_0.predicate.assign("IAPOMMGAFSTWGHJVJJNKGFCHZFIRYOAHIMNVGZXXLEDKQNAPECLDIYUGLRLPLZNAWOYFWCHETQFMGFPYINZAYCVBTZRISUUAKHVWOWDRASQVBCRGFBBQYKBTTZHDIXPLFSRBTKZUONEGKXZXAHVJMKUGEMKQHLGUDBJVAHWQMSJYCTTQZWOXDLFITVPSZJNBDCMTNNVPECOXPPYW");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.341770268352);
    msg.setSource(9276U);
    msg.setSourceEntity(219U);
    msg.setDestination(59198U);
    msg.setDestinationEntity(179U);
    msg.op = 45U;
    msg.goal_id.assign("UXVHDIFTHUFBOTOOVBYKFRSYXESMUOGECHFFJPCJFKPRJEBXBNLILCBZNKWKPHQTDRTELTYGGANHVTRXSREOSSZXHMGMIIZIPMDLZWFCFBPDLUMWSYDXMVOAJKJWBNFAHZJNHOTQPOQCVOYQGQKJWDAUZDBZSHUGLSMKARAIRIWZKWXIQMPJAPDFBWADGPJJIEZCYALVATHEG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PJOCZYSUEEBDXXLFKASDYOXITDVWRZMRKVJRXUTFNZOMMHFFBCZBSTAJGLEIQLYSYIOERQJGJCHLPNHATKKMHCLPE");
    tmp_msg_0.predicate.assign("BZWVNVNCGYOGCWHBDQQYJSKGIYVZWHNVMALAXECVDJOCUERNBJNCTKJFSELIBHATWLTRIRWSRMLQFDUERFUSTEOLGIULATMQJYWAFDCSNZNVXKRSATXPZF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TOPXRXWSNCTUHEMYUQISEHKPAOFZCPEWGJTYUBTDZNNSNCYVAGZVKEFRUHCTODRMKHWISWDOUGZFDJP");
    tmp_tmp_msg_0_0.attr_type = 95U;
    tmp_tmp_msg_0_0.min.assign("BSXLHKOAXYRHRVLMMMFCMKXRCOBVUETRMFFGJPIVMVYJQFHSOQGVUANFUVSPRTUFNQEGRBHEQTQUWWXPUJBFTXDLPXUAZANPNYZZGIIAGTYHNKXJYWIIWCXLHPDCRWZQILZEZDPROTBAHGEDBCQEBNEGOHDQKPVTDCKMWDYZAVFNQEDURIWASOGYDXHOXENPUYSMOLEZALGJWZKI");
    tmp_tmp_msg_0_0.max.assign("ZLVXNIWPSDFSKCRAKCZQFVNQJUHBUXGSAJHODBEZZGRMLTPQMOCSYFYSOKNFXANIIMAIXVNNRCKCVWGVMLOLZUDKOMVLPUOPEMJISBWXHZCFGRIETTQTWXRFPHDEPSTWEMRYWRBAAIFCKGBGWGTOPIGEYTWAURYAUJWOBFYBPCCHUQZLFDMGRNDHQYELBLQJVOOEIUJVHUEKLZIXJHYQPJVYDTNEPKKADVXZXJTLJZB");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.268193598662);
    msg.setSource(39881U);
    msg.setSourceEntity(237U);
    msg.setDestination(15230U);
    msg.setDestinationEntity(40U);
    msg.op = 29U;
    msg.goal_id.assign("JOPDWRXJIEMTXGKRSHGCFWVRNESBPUKSPYMCTXOCHQFKRVKUWUHKYZQOXBNZICPHIXEJFZFUZDOJADMBKYQANTKJBCYLIVHPAUOFXBLMVVOVAMSLSAVPGMUUHBWFTGQERBDPPEDTAWYEEFNLHWCIIRKNTDOBYIIAPTZZDFRZEFKQKPECRQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DUECDKAJPOGYVTIESRPKHWKBCURNIWIKBCDMMZHFPZTTPBWVOGFSPYVGJWJYTPIWOBWOSMONZCCDCZOHZXKFQSHVFCXBJSGSSBHGXDJPVUOFXEZYFQYFULALPCMEXAEQRVUHENSGLRKQNKQOIXTWMUMAKNHVAXBCBLEKYTULKWJRIBLYJIOZRVNVGLMDF");
    tmp_msg_0.predicate.assign("LRGMFZRDFDWAOQPJEGC");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.158337293378);
    msg.setSource(17407U);
    msg.setSourceEntity(149U);
    msg.setDestination(4088U);
    msg.setDestinationEntity(197U);
    msg.name.assign("NAQTSMMABIOZDAPNEBSCTDGRYLUMEZOTGMVKIRUJXRSZIFBLSXFDFURLUXLWKQKDCCQNKWDROYCJCLEHULTDOQEAQPPVKKIVBNWJSWQCZWBJYQJY");
    msg.attr_type = 226U;
    msg.min.assign("BTDZOYHZXZGWMEAAHDHRKSOWJQGIFAGVPSZHEPOQAYXTGRWFUQYRPYAMICVLQMJFLLWHUFTJXSTKVKIAOMGBLIUXFNCGOQVFOUIGSRFUNHAEKUKQRRRDISNBGXGHSDQZNINXMTDCWBBS");
    msg.max.assign("NFTYINTWYLQYBZQWMJKPJKRMCHQYJGJCPDWYYQDAQNEFIYNTYJZCRUSUOLVVLBIBHMFDVFFVKOWXO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.995665495176);
    msg.setSource(38513U);
    msg.setSourceEntity(207U);
    msg.setDestination(51142U);
    msg.setDestinationEntity(245U);
    msg.name.assign("EQHLDATNIHTOGIGBEFPQDJOLURWGCOOYJHHEVICKMQYBGSASJVBBYEOSSXAJETPETJFKWBVQXLHWXOGMWBQZESDMSEDFIPIIGQF");
    msg.attr_type = 95U;
    msg.min.assign("SWYYCQTMNQTELZHVAHAQSYCSVMQXCEOZOPLVWXTVNEXDRFQZOIGEUWWKDXLIVZZGVIUTCKKMMFPDHSARUMSBDAUDEUONYXUJFFOQWJTWBQFJIPAIGXYNCNVRMPYHMOBSRK");
    msg.max.assign("YQRGOSYRBCWSITAMDTGJUPTMLELTVBIDOSAVKIXURVUWYLOZPISNFOBJGKBHAQMYNKGXWIAJJKZPO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.617485708724);
    msg.setSource(20864U);
    msg.setSourceEntity(212U);
    msg.setDestination(4293U);
    msg.setDestinationEntity(179U);
    msg.name.assign("SUPWVLIMBFHBDGUTQXTDUIXSCFENLMGRYKMEZOCSVOMCCCLNSSNBCUEHFDJXPAYOLMARNRKQIXJKHLZAYBYTAPMPCHCKMUPNRHFBDNQE");
    msg.attr_type = 181U;
    msg.min.assign("YAMFPJQMORSILOTDGUMSKXNLRMEYGENKHFHXWTORAW");
    msg.max.assign("RYCXFKQPATNQONSXTLUYVSSHCEPDEQYUVGSBKAYFIDQIH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.00713242859777);
    msg.setSource(24377U);
    msg.setSourceEntity(245U);
    msg.setDestination(8329U);
    msg.setDestinationEntity(178U);
    msg.timeline.assign("KBIARAYERKKAPYCMFIXJVJBXAMYOEWCEZMGNMFINUSBCKJFLQVWEPUHJTGULSJNNNZFSHTWQBFSZWHXYPMCJZKFTDVKAMQLJHHDWWEXMYQNVOGOUD");
    msg.predicate.assign("VTBDKJBQTVNQDPQHJKIDSOMZXMRW");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RRTVMGYZFHUALTXCHPOYFNMGNBKQGDTHSDJQLXUWACQRAIDTWUUE");
    tmp_msg_0.attr_type = 68U;
    tmp_msg_0.min.assign("LWMARWLNHIOMAVWZFHBVQVPOHKMNKVUEEYNENHJPCJIYCABFTDRRDHNXOGPCCWAYDBTTPLRGNRKVVXWSELUZBBJFRYGUCUXXBPPEYOSCWRBONEIYFYAGVSDKKSIMXZATCKFLZZTIFOCASZDIAMHJYIEANJWSQ");
    tmp_msg_0.max.assign("TFDXXPDAPQDQZZGOCLXJDPMIURGGSWXLPSECWMGIPCYWQSMVYNIEAMNTOHNNQEDZZXJTWZKFEBCTFCRRADSYTJRNOKLDPIHICGTGZFMTAHQMRKVCKUHBOJYSIKRTYMEARBYTSMLCVEERUSGMUNRLJHBJZODVVEIFXGMVDQOWGUXYOBAJFVGUPLBXVFYUDXSBAHPXKABEZWTVFJSIBQWFIPSNWZUWYNYOBJLLAHQKJKKLNE");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.7291044271);
    msg.setSource(55074U);
    msg.setSourceEntity(128U);
    msg.setDestination(55581U);
    msg.setDestinationEntity(70U);
    msg.timeline.assign("ENMBHCBLPMAUMVYCHQIHFEYXBLEKGJSWCSYKBTNSKXCXWXVGSEMFYZNGGVZMNWUIOOOPEWLDNHIHVDGYMXHQLTUXDPQTBDIBHOPZUJZHKCBODZZGTDUTFPUIAVSLFRJRIXGOWJWJECRYNRKMMSAQNRRLTLDQQJSYPPYAVUUEEWTJQPDLAIAFIK");
    msg.predicate.assign("AZFEMJUGXLQUJTDLCTTAAXKIFBRBGEGRHSIGZQJAHZSIMCAXHPNBOXLBNSQMLPUEBHJVQPJLQGMTNUXAPQGDSZRXFFIJUBMIIIKSMRPLWLIWNDOEKEHHCGYCLUWTDLRBRNOOPDUYYHMPBRZNUBZVWTSUVRIVOVZHSCXFQKQRFNHWAJKPCANCOWMZCVQDKKGEYTDYXJGFREPYCXKFDWPTSWTVVKFIOJUFJOCSYXMAKMDVWZNDQOGHBYTVSL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.698179322544);
    msg.setSource(885U);
    msg.setSourceEntity(245U);
    msg.setDestination(23143U);
    msg.setDestinationEntity(240U);
    msg.timeline.assign("GNHBMNQDJUPKSOXYDFPDDZISVKLJFPJCEQELRNHBUMCKCGCZXNNRNLNQPZKLBWXSKCAXLAVDEKQAROIYOGFJVWOGYTEFJTIUQDXUWWSYFSKLOBMVRQCSBRHGAOHOVXEDSUYMHBSYTATWPCAGEABDMSWFQFLUZSGIVZITCMZPHJPIYNJ");
    msg.predicate.assign("HAXJMXZRMQSTLBLASGXLOHIELHOAYZEOWJG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.207382117488);
    msg.setSource(20482U);
    msg.setSourceEntity(223U);
    msg.setDestination(17077U);
    msg.setDestinationEntity(59U);
    msg.reactor.assign("FQZJDLLFRKXMAVBREHEMYUCQMZYUNILOWJJYVVMRAFLYMWGIYOFIIJWXNTVNKRELYVQKUJJDSEXRUXGABBSWBTKJQOSDAROOASXIZOHEEEKPELVMPUQLBJHGHDASXTCTWKXXWSDACYNYNFHQDIQGBZCQICBWGZGHEMGBFIHDXSDLYVFGPHCOKOPUZZQKLBSIPHZATUMJUETLFNPTMCBMPKOACVSUHTFWVROPG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OYITSMPVYGUCQQLRHIIFCOOYDZUILKNELNBBCJJORSXHYUNIFFUKDJSCVMNRNCOTUTDNQYXZHHHTZVOJKZTWRBESAIVHWFQWPBRPCEJJKHAVXWQDINNBUSDTQCIWBJKMGDALWRFQIAXTLEZQR");
    tmp_msg_0.predicate.assign("MAJSGOQEBBNRWPJEGGKOFANKAOECIRHLSWMZWXUHHJXTOZFSEXZDVIBRIPBOTHMZNSPFUYPIDFCBYYSPJRYICVSAAKLXTTDCXKXMTUWSHTNGUJEPGNSVMDJAOADNIRZNUCODFWIKDUQFBVBVAWREVZPSMKYL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PTRKYPFCSFGUSWCAKKNUYLRGQGSNJRIKGARQDFCDOIDFXWEXSEYCBGYLSRCAWCBMVEUSBCEYIVDHOIGUECQZOBWOHTTQULBOXLPAFVJDJZEVJPMHHMLAYWCESIIYEJPPPUXYQSNGZZQHTHGLPMUXOWFDQUNKJTDQVMDRBULJOEXYKRSJZRMBBEAJPTIZVZQWNBKFJWXTIMNFHOLUMVZZTXAMOYIFVZDNVXDHK");
    tmp_tmp_msg_0_0.attr_type = 131U;
    tmp_tmp_msg_0_0.min.assign("UHQMCYVRKWWKDVQSAWQMDQUEURVFXDIDZQQZLTNKPIFXPZQHGFXBUSVPMWJTJNBFEGZWNYIEDHKOQRFIJQPVTAGCGVIKTFYERTULPGZARNXOQHJDIEOTPVCJYHDOUOAXTRIAPBCXFDNFYYCLMNMPSWTLJJMJLEKOSXALGSBGKKLRBHVCKAOMOCZVHAXNLGENAGSOWXYZUWMCFYBBFRVSTDLIYZWEMUPWUCCK");
    tmp_tmp_msg_0_0.max.assign("ZCLWYSQEZOGAZVHZRYMILDBXCKNWBIHQFTWRFACRLQJNPOMJJTTLNTQBTVUMCSKSFYSGOHFOXAYKOSPQVRANECMLJBBGHJXPKUKKGLOMTKZHILDEJYNBZNVRRPMSTNFHXQCPXOZEXUVSEVRMLIUHRLEPDFPHDTWXWS");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.451710024934);
    msg.setSource(64418U);
    msg.setSourceEntity(23U);
    msg.setDestination(14233U);
    msg.setDestinationEntity(80U);
    msg.reactor.assign("VBQBMWOPPUFFMQYVMTKPDTKSQSKJVYHDQXKENTUGSATDSNDOVKGZPECLYEXWTMRWYDLFNEOXSEUFHNGMYZZIVTZLLJKTSVVHS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XUTYFYEAQNSDNGWNKWZAILOTMRIJYDLWWAPDOXBZPQDSVJNZZUCRZTTFBBNBZGPHXKGTUESXCVJVSUXPJWOPLRHWGHDODECGUWFAEKQTGKFWVKBKMFJWIONJIUQHWKQYVRCLLFINYCSMBQDHOEOCLX");
    tmp_msg_0.predicate.assign("FENLKOLOHWEQNHVQLTWKVDYLXUTRXBNRASZZZPHEULUDWTICNVYQAIFLGJEODVSPKQCRREABHATVXOVJLUDPRAZSXSVMWPIKIPNBYIWHUXWABDFFNFEMMLNXZFDSCCTZXLSOXQZYEJOIOMSSYIKGAJXCGQNOASQGTFDUHBOVQKYJWYLTKKAPUWGOJRQHDPJGUMTEZMMCGCEUWTSDFJPZMXGBBYR");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.470544631674);
    msg.setSource(20543U);
    msg.setSourceEntity(211U);
    msg.setDestination(30074U);
    msg.setDestinationEntity(198U);
    msg.reactor.assign("CVGBROBLJBSRNLYIVSKYLNSUCJPTHNELATEUNHFCPEYFCGYEQAHUWWJDDYMZWOFXWQQEJVCVQQEAWDFXIYRPIKMLKATPILIOSJNDKMHX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TOPGIQGTJEVIESYOMQWHDPAECWKBBOXVLKWVLJICHSYTKRGWUMIKGGYMYYNMKZAXJQYILACKKDFUCPILBVJFXJWZTWIEUEUJDBCGVEQAFQQSPYGHXDFDTBMWIOFSOLFVZELQCRBOXAUHJVWDBUOWUSPXMZXISXZAIUFRWGRRHQAJLKBZTQBEOPSSREMNZETXRLYGSYCRNSJFADVLTNPFCKDHUZHTMVHPANHZNDDNKNPRBCXNHYOGJTFZRMUNQ");
    tmp_msg_0.predicate.assign("ADTVHXKDDFRUQVGGHIJTRYODGUQXRLAQEOWUIMEJQMBPEYVYKONVQAKKZRBAVJYXASBBQAXUEFNTQUWNBZMNCSCZNSXAMZCULIMCOIKDXZEKPTUXGHPZXM");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.472218670149);
    msg.setSource(58393U);
    msg.setSourceEntity(18U);
    msg.setDestination(26955U);
    msg.setDestinationEntity(152U);
    msg.topic.assign("GBUDXYWLGOTRPSXCKCFKLWLNVTGOTNIQQBMDVEEHKEUPTIKLFNRFYOGDXZTTVUNJACOALGZNGEJRBSOIHTZEBRDXSPHAFYCZBYSFSLRKFGPUICYMWHIJPQYEBGDAMEBUQ");
    msg.data.assign("MTABFGKBMIAEGPYVRROUUVKFGCGXXLOJLMDCJNRASEVOFCJYRINCZJBRBVPZHQZXUGWRNZTLXWJSIFYJXZSMTATNASVPOHCDWMVMDXQDAGMIHKGWOBEREJSEFPEDSPFUQKVTUNYYTANYZDCIPONQYDLTBPJL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.731637445403);
    msg.setSource(11832U);
    msg.setSourceEntity(141U);
    msg.setDestination(50325U);
    msg.setDestinationEntity(180U);
    msg.topic.assign("JAUOROYWBICWRGBPFUCWBQENGJYRTBWAHQHCTPYLLZLMQUANHKLXGXSFHCPTRQRRVBMJOEFSHDKXKIAMBGYDJSZWQFMOUFROVYTUTNTZGETPDHOCPVQVTOVSXLSAZTWVSLIXWGPLMKMAGLSJEFUIOKCXZYNIHYJMCXUNMDAPSEQKXJFIANRRJVSZHPKTUGGZPYKQNCWZDOJBNCXSDZLBFHVBNUAXEWEGMQWFDIPAIYILHE");
    msg.data.assign("BRAMEQYOOVEBZMIVTKXHICNAMWOYWZYGDLIHSMQSYKLOZUFEIPXOUZGQXHTNTZPCNSSAMCGRVBAEPIKWUFMHZHJXJRTEGVARGTKVIVYMLMFVKPYWCBLSZWTDFKCRL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.0461001326746);
    msg.setSource(49179U);
    msg.setSourceEntity(131U);
    msg.setDestination(54101U);
    msg.setDestinationEntity(129U);
    msg.topic.assign("ORKFRKWQJBWVRZJCERBTJMKGNHGACUPFRSAPPBVMUEH");
    msg.data.assign("SBKSWRHDIZHLHUFZG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.823573630954);
    msg.setSource(51665U);
    msg.setSourceEntity(48U);
    msg.setDestination(48582U);
    msg.setDestinationEntity(106U);
    msg.frameid = 170U;
    const char tmp_msg_0[] = {8, 81, 121, 44, 90, 89, -25, 69, -41, 86, -22, -37, -14, -77, -10, -31, 76, -76, -109, -59, -32, -72, -79, 46, -33, 34, 101, -71, 117, -118, 48, 58, 2, 104, -40, 106, -16, 80, -61, 80, 120, 15, 34, 23, 88, -41, 77, 19, 82, -61, -42, -42, -72, -108, 32, -123, 62, -20, 85, -52, 3, -118, -88, 98, 57, 110, -49, 28, 107, -5, 34, 57, 7, -71, -72, 64, -80, 10, -46, 44, 82, -74, -124, -125, -16, -35, -41, -68, 5, -2, -104, 93, 101, -103, -78, 35, 5, 115, 83, -123, 110, -43, 123, 79, 44, 121, -12, -74, 111, 53, -59, 44, 97, -110, -115, 89, -25, 69, -5, -116, 106, -92, 20, 79, -23, 3, 102, 93, 57, -60, -2, 6, 49, 104, -73, 41, 30, 96, -92, -9, -68, 110, 12, -93, -100, -116, 18, 71, -123, -90, -74, -62, 111, -81, -95, 25, -93, 29, 8, 18, -45, -122, -51, -88, 123, 83, -26, -65, -65, 72, -81, -107, 44, -25, -126, -114, 27, -86, -19, -86, 101, 94, 83, -54, -2, 89, 76, 0, -70, -18, 59, -125, 118, -59, 88, 85, 97, -65, 59, 107, 88, 22, 38, -60, -100, -18, 20, -25, -15, 73, 77, 1, 5, -35, -1, 101, -89, 51, 115, -41, 36};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.608113455867);
    msg.setSource(29856U);
    msg.setSourceEntity(119U);
    msg.setDestination(35364U);
    msg.setDestinationEntity(208U);
    msg.frameid = 195U;
    const char tmp_msg_0[] = {25, -77, 99, -87, -75, -59, 27, 74, 70, 102, -6, -47, 121, 113, -47, 103, -27, -58, -38, 112, -25, -119, -109, 112, 114, -37, -39, -49, 121, -21, 39, 54, 90, 101, 99, -70, -113, -95, 105, 107, -98, -126, -35, 70, 51, 25, 114, -78, 101, 58, -82, 18, -43, -30, -86, -44, 0, 45, -111, 105, 91, 66, -50, -62, 2, -92, 42, 26, -79, 111, -127, 113, -106, 94, -66, 31, -60, -82, -81, 58, 48, -95, -101, 92, 17, 64, 98, -82, 57, 23, 105, -2, 31, 21, 83, 125, 117, 92, 24, -35, -119, -56, 60, 51, -107, 78, -108, -58, -39, -62, 11, 84, -1, -33, -13, -6, 16, -94, -90, -15, 100, 34, 18, -6, 41, 23, 73, -11, 76, -1, 122};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.937645434353);
    msg.setSource(46069U);
    msg.setSourceEntity(174U);
    msg.setDestination(53035U);
    msg.setDestinationEntity(29U);
    msg.frameid = 26U;
    const char tmp_msg_0[] = {-98, 72, -108, 66, -18, -79, -68, 12, 109, 65, 50, 60, -20, -107, -82, -15, -22, -51, 35, -7, 10, -37, 71, 118, 27, -40, 51, 121, -107, 53, 88, -120, 68, -41, 51, 122, -25, -95, 121, 105, 55, -28, -28, 94, -78, 83, -18, 115, 113, -13, 96, 10, -12, -29, -5, 7, 2, 117, 50, -49, -105, -30, 19, -103, 67, 51, -106, 74, -20, 34, -37, -124, 25, 25, 114, -35, 79, 17, -8, -93, 49, 4, 83, 53, 92, 89, -115, -55, 125, -114, -6, -48, -35, 117, -93, -51, -110, 17, 118, 86, 59, 6, 81, 109, -73, 16, 66, -112, 10, 121, 96, -77, -101, 17, -55, 0, -11, -3, -25, 21, -113, -21, -51, 112, -104, -108, 5, 122, 97, -63, 87, -106, 97, -59, -11, 28, -94, 10, -73, -61, -70, -37, -27, 84, -95, 47, -6, 81, 111, 124, 35, -29, -5, 6, -115, 6, -57, -91, 110, 40, 59, -123, 22, 66, -114, -60, 21, -115, 121, -20, 31, -107, -20, 106, 60, 76, 50, -77, -8, 41, 69, -57, -101, -27, -110, 91, -113, 38, 23, 111, -42, 53, -67, 84, 124, -12, 101, 29, 51, 97, -26, -45, -3, 37};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.858946597993);
    msg.setSource(20271U);
    msg.setSourceEntity(99U);
    msg.setDestination(36259U);
    msg.setDestinationEntity(227U);
    msg.fps = 77U;
    msg.quality = 65U;
    msg.reps = 132U;
    msg.tsize = 27U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.228355676877);
    msg.setSource(3373U);
    msg.setSourceEntity(48U);
    msg.setDestination(5360U);
    msg.setDestinationEntity(6U);
    msg.fps = 239U;
    msg.quality = 117U;
    msg.reps = 246U;
    msg.tsize = 27U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.0220393883324);
    msg.setSource(50072U);
    msg.setSourceEntity(89U);
    msg.setDestination(51252U);
    msg.setDestinationEntity(7U);
    msg.fps = 169U;
    msg.quality = 185U;
    msg.reps = 28U;
    msg.tsize = 23U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.115979451388);
    msg.setSource(35310U);
    msg.setSourceEntity(133U);
    msg.setDestination(29692U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.720039627628;
    msg.lon = 0.0759873703159;
    msg.depth = 220U;
    msg.speed = 0.993575958758;
    msg.psi = 0.113559060741;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.319758091664);
    msg.setSource(50460U);
    msg.setSourceEntity(113U);
    msg.setDestination(6727U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.250170081774;
    msg.lon = 0.0907712003209;
    msg.depth = 229U;
    msg.speed = 0.914062293428;
    msg.psi = 0.42460736769;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.582134005277);
    msg.setSource(13634U);
    msg.setSourceEntity(204U);
    msg.setDestination(16763U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.94417640601;
    msg.lon = 0.632949713755;
    msg.depth = 47U;
    msg.speed = 0.156880358799;
    msg.psi = 0.716651026874;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.742757026677);
    msg.setSource(63139U);
    msg.setSourceEntity(250U);
    msg.setDestination(33968U);
    msg.setDestinationEntity(136U);
    msg.label.assign("PZXJXDQHWCNHOSMQBVDSKYWXQSSFQRPRFULEJEPGGSYBRGALBVHNPTANTLZUUWLIEYRCDMTBNYKJQKXWYKKVLXHIA");
    msg.lat = 0.524435622865;
    msg.lon = 0.0890557159905;
    msg.z = 0.0459318592913;
    msg.z_units = 26U;
    msg.cog = 0.12157151151;
    msg.sog = 0.160471944877;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.994452804513);
    msg.setSource(26206U);
    msg.setSourceEntity(243U);
    msg.setDestination(48016U);
    msg.setDestinationEntity(18U);
    msg.label.assign("OWAWZCEACAHXEJBRGVSZOOZGZFWKDPFQVKBBZFPVMPZJGIWYYVIVZANETSORQQJARPVHJBX");
    msg.lat = 0.387364656931;
    msg.lon = 0.259825294823;
    msg.z = 0.39963500476;
    msg.z_units = 0U;
    msg.cog = 0.820212781894;
    msg.sog = 0.242955398155;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.527857283477);
    msg.setSource(27416U);
    msg.setSourceEntity(131U);
    msg.setDestination(57286U);
    msg.setDestinationEntity(138U);
    msg.label.assign("OKJYPUBWFRKMNDOPXXROFNJIVTZLBYCBBTTOPPIRDMQHNBENNFUQACUCFVJUCMOZYIFIRSQWNEJLELESRDQHJMMCKDVGOSGRDPZKEYHMLILKPYBKFAXIGGWWPMCUTSJZINGWLORLQKYVTKMFQVXLNASYOMYIAFMCPVJUUXHAEPAWGHHHWZCTZUGILVSPSVRGSXEBVAZDAUAJGTSJWODDYUXNKZQTRCTZHBIOAEWQWDN");
    msg.lat = 0.656597772478;
    msg.lon = 0.186558691013;
    msg.z = 0.323893926754;
    msg.z_units = 21U;
    msg.cog = 0.984639098263;
    msg.sog = 0.112940509972;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.0253282214622);
    msg.setSource(17420U);
    msg.setSourceEntity(7U);
    msg.setDestination(53165U);
    msg.setDestinationEntity(112U);
    msg.name.assign("DNHUNPFYDLHETYEADJMDGYISECJBLCYWAIXWPQXBRGPIJFGDJYKQYFZODGFKCTGTMEWLOFRQEQTPJNNDWQNME");
    msg.value.assign("VPFUHKWEGWGJAWUHQWDXOVLETFKZRNTTMXMVGQFSBFTXDCJWLRTPDVZUANBHNOUHDJJQKMIFYAMQZKXTKFXBCRCJYLAXXSSRTIIDYGGAPLMWGUZWPZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.331893123664);
    msg.setSource(60526U);
    msg.setSourceEntity(249U);
    msg.setDestination(58108U);
    msg.setDestinationEntity(167U);
    msg.name.assign("TXQQTKJNBFOXEKRBFZRXFLBIIDGNPHZDASGQHXYTVFNOTGEOSUDFPJYHWRZXWLCODEXIYQNGICSDDABXMAAVDVTTZLEBSWUIYEAYCIJYJGPMAGNCFTLQERQZHUHKEXMURYZWDLOPARMKGFOVWFIVWNDQLCBYWOPTWZCNUEVSCRELSETQZSOPRUAPKDUKVBHLMMZHXMJGUBFAJWYJXKGBUIKFUVHIJKMJNRSSCWGTYNMNRPKAHCZQ");
    msg.value.assign("VNLUTITJXVCIPKCVJBDCJCIHYSOGAPWNBXKNSXNMYNKYNGXLXHSSNLTQZHIYDSWQOSQDQFDUHHMZRVHCMZSTDGEJOMMRVAEOVDRIFBORTBMANLLUQMYSXJWJCLUUKPTEWRWDEWFJJAMBCUIGFMXUABAPXMSOVPABGRHBQHIPDWTZAZUKDZIXAGDEBKQZKULVRYOEKKFEZFEVWQQYBIOLZJNOGCOTGTPAYYFUICERPGWLX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.83455314682);
    msg.setSource(48645U);
    msg.setSourceEntity(104U);
    msg.setDestination(35085U);
    msg.setDestinationEntity(241U);
    msg.name.assign("UGYRNIFVDNIXBRKAYJTZSVDRNDBCCQTTAXWWFCWPIUZGXWGQEMKSMNFKGQJHAUCVCLTSCHHWXYXKYFWFMOEDAPTGEVZBBWQENRZRUISHHZULOOZJSPFJMCVUNOGEHUDKXLIZPIJGQHQGZJPKZLHETQLOYRMXWDSLNLFMAFPNTDKDYNVEEJIMJVOITUBVGYRILBARMAHWSROJCEQKOAYZRDOXBFPBSAOQFWVKPUASUDTNMBLBYMIPKETLGCJXSY");
    msg.value.assign("HSSANVIKADVIWMSTIMGYYEHVORXWJACGPURIZJWIHBVRPPDTRKKZWZFVVQCNJVBWEQITSXJPFZHNRGNZAJOIZHDUXCJUYTFDBTKNIBSILAXYCSXVZCFFDFWJUKKFNYYMQQCGPSUTWQZRDSRJXAGNSOUVNOETQLLRCHQULZMWQBDRBEWVNTREXJLM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.203822521698);
    msg.setSource(31445U);
    msg.setSourceEntity(244U);
    msg.setDestination(18884U);
    msg.setDestinationEntity(99U);
    msg.name.assign("VKJWMLHJRSJHOWTACRPZCUIIRTEGHQBFUFLYGIOELLQUSBOQNFFJWAYMASOQUEDDMIRWYNOKVHWGNELNIEXMCTPPXVAWMEGTQLVXULEGIZBBKRVQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TWHUYLVKWACOOTCQRAFSSVJQHGTZGQJXOEOPSVKFZCFRNQCJEIFZIXJTXGQKBXWHIBLOHGNXAEMCIVNVHKBSJRDLOGOASSGABJGIKGHZJCRPEDWBOPIDGWXEBDNKHZLNJUEFRYLPRCPZUPNFYRYMABXWKTESZUBREMUZHVOWLC");
    tmp_msg_0.value.assign("BLOFVPUMMXSPUNTJHWIZSVETEQIZVBPCERNSRCJIGKCGJWUT");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.182354287048);
    msg.setSource(24140U);
    msg.setSourceEntity(59U);
    msg.setDestination(49622U);
    msg.setDestinationEntity(85U);
    msg.name.assign("DTYQDOGXGWUSOJRHUKVIGDOPFHKGCECYUADQRSPVWNYXFVDHZHBFLHEZHLTRTFVKOMBMXKBACJBPWMZTJMDKTCRBKYOJRINGYHOPELQBYNVXUANGHCIDSOOEPSKRYQLOMSRGSEEUPINLEMALKXIUAXV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YLZCPWENBVFMTTOKRSOZMVOWERMTEUGKJJRJNGKCXCZGIHETDWEDLRDCYKAYGAXUSTHSUZPSUDOIETNMPQXZASNIOBBHOQLFEGSSQBOBBSIG");
    tmp_msg_0.value.assign("SJLDOVHHPCHBTMKYLDROZNJTCHUMZMJPLNILYDUZBZEPVUNSZYFEIUYKGQMQJQAWPHTYFMEQMASNOESCRJIWSHBRIJMXGYBOMNXTGKTHIGBLJWWXDTUKEIQMXKGXZPJSVXZDFLVVSBINALAAUFGEWYNGKHCDLXPFFRBOTUGEOCXDQBTADSVRKKYBJNOPFKXHOSRRMLJPORCTFDQVQKW");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.943787619904);
    msg.setSource(33314U);
    msg.setSourceEntity(5U);
    msg.setDestination(51510U);
    msg.setDestinationEntity(148U);
    msg.name.assign("BBGPIYVIIZQWARWLYZPXOQYFVRHZKJNAMRZOUOSXXZDOWLINPGSNEBQEPQIEUGAUIFNFMYYTJELJQCJMDEEMISJIOBQLEVGUDNDOEHJRTMMVKHZUVMBDYLTXTLCQOQYCPWMTBLNQSWPUCKCATWGSLXGAUGLWRZARXAZJDYHHMNATDUOYTPVSIEPCKKUBCGGXWYXRHRXNSRKEWHBF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RVWZIKGSEZGSZZVWQEVVNAYOIDRWYADNBRUULZFMHNLPADPFGBKBPKGQEROPHTZSLPWRFHWPYFEWDRBDXFCPEUWOJQHKOUCJBOTJKXYCIRMDYXX");
    tmp_msg_0.value.assign("MWPKGCYPDPVJTTQKOTXZWBEHPSHUSMCFGKLDVDVGDTXAUSAZODKAMXAUB");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.928640468502);
    msg.setSource(6347U);
    msg.setSourceEntity(153U);
    msg.setDestination(1280U);
    msg.setDestinationEntity(92U);
    msg.name.assign("GMFGYOSXJULYKYEKQZIZZADXVAHDHUYKZWABHGISFBWCXJTOFZRPNHVLOLTRWSVMXNJNYBUJSTKUBNSQZHFUASWQECIDLQMILTYVDOZZFNOHCICXUFRLXJQXPOPPSIWKDCLJRKMOJQDAMRBETRTVNHBVNBUKAAWXLDYAYNMVBLFZLXFQUCJJUARQGPKZSWIMNGMJ");
    msg.visibility.assign("LVTXNAJUKFVYQCAZKRAFKBRGLUJBQCBORD");
    msg.scope.assign("XGDCKIJFCQFRAUYRZUKPEEQUEABBKZICUXSECOVQVOTNHMHHOWMEPIKMYQDWWPKATFIFEHATGIYKXCKZQJVZWLOSEJRQHSBSMHQTDGGTFWZUESROPSPXMXXLXR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.755805241571);
    msg.setSource(36255U);
    msg.setSourceEntity(162U);
    msg.setDestination(52505U);
    msg.setDestinationEntity(58U);
    msg.name.assign("VNQWQPGLWCDBGMGRDJCIHJMJEAPGYMPIYDZBZFNASNQYLIEAVEUOUYYCNEEGRXVLTPUUSZSIZFDFQPWWFXZRAZWGZKTUISQMZOFBTXBVODJRFMULVBFVORMZOIDWWDHEYPLYGIMCGLTGSKKVTITNTGDUQOHRQOKYUJXPCMXJMSMBRDEVPKVHDZEAKNFXKWNTQQYKVOCNASCBJKLIXUYAHHLAOPFJ");
    msg.visibility.assign("SVOTEXQOVQRGJPOIKEXYFZJHLHKATNLMIUJRWHBIFYJYTIVLDNGPWSHCALMKRJASZPRAHXHGTRQBIATLVYWSKFIIDWMTTOCKQNBPBLUQDZCXGYGUKCKZNUNNWSVSQAFUTGYUBFNYLXBSPDEDJMMTBIGFGDWOWOFERCWWOETGMHMOHRXRVLRNOUQZZIAEAJPWMGXJDDLMBBUJVYZCPSCKPVZQJOAXNSVDD");
    msg.scope.assign("TEYHIBQOVAACXVBITXFCEVXXXMMHSZSEKXJGDUIDVFCNSDOPQMGFOISIJZOUWGWUBJFBSQXZZTFHBBLYYVWEIIIGPVFVRRNERDLSNRFEKRLDOHSDOVGMIQWWDKOBCBTEHMYYHJQZRPAYNVCPJJSNTGKKLKSZL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.175762401738);
    msg.setSource(15068U);
    msg.setSourceEntity(7U);
    msg.setDestination(63480U);
    msg.setDestinationEntity(176U);
    msg.name.assign("GLTXVJLTWXCRLTACSIDUFYJPQQRSNORJUEXMERFYFSPLHUYZSDZCEPXNIANHKQRDJFEIJVOGNUSOQGVQUGDGMDTTGRBGGEWYDJHFQYPFPMZMNEHNTZHUKUJRPBMHAWOCEBICFWPZAMWBVBY");
    msg.visibility.assign("DHMJSZANFHZKALQINZUWGLOGFDLHVIDONISDBUGSKJFOWYOKBKPZQEYZHMUDXOCWQXLHCIGRTULERTSPVJGZGFTDNHFQDPVWODERGRIUKLNUFAQZJIZOBPMFSAHKJXXOWX");
    msg.scope.assign("CCKVTUQSYBIZWCCYORKIIEHAGIZKGJPMAWTSYXEEHKMFXYOMYMUPVILPABVSVCXNFMLXTVPZTCNOLKPUTZQWFA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.593691051129);
    msg.setSource(4892U);
    msg.setSourceEntity(129U);
    msg.setDestination(33175U);
    msg.setDestinationEntity(49U);
    msg.name.assign("YMKKSRMXMHOUWWLJQXBRTDFAQFYCOZOGDJPWDHGLCYULPQIFSXJESIPZVDQLAFYXPVRAIPSGZJMLJNEXFIZRARJEUZFGHTTXQRVGDKUYTSKVXOSCQWFBOALAHRAUNJVUEICBPOSNVNXK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IMUKKXVFLOEWWCFSZCQPVYKVQSHYRECQRRJQTCNXWUNBBETSQMWPUIOYPYAUNYEUDSDFHTZRLD");
    tmp_msg_0.value.assign("QECGZNXSOEC");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.681533240506);
    msg.setSource(14212U);
    msg.setSourceEntity(22U);
    msg.setDestination(48373U);
    msg.setDestinationEntity(134U);
    msg.name.assign("SHFBVAFIRDUHGDDAQVUDLZXXHMJSERUSUKKOJWMZCTTJMTIWODSFACJYHOKQWVTMLBJNMEDUEZGEGUPORNFOXQBKBXJIJYGQQADESLZGMVFIINRVYUPIFNXEHALREQHSFKOQPXFDKKTCSYWCVESZRMVYPSCHPKGMKJYZBUTWHZUYNGVXOICRCBNLKQXOBIATBHCWYDP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BCYKPLEHICIGZPKAIUCYPUKMODRRDEXEWXVEWKMNUPZTLZJYLZKJGVMRZFJTNETXTRSZLAAVMQLDSCDCAQLAWJYGNDXMUQVHBOIWAXYKWUBMOVIQIYRYOKNIZNDKPXFGNQFHGHRKSZFVAXXJQKSGANDUPCUYCANVDUMWAQIOSFSSSWEJXHSTFRLVEDJNDFJOCWQXQNJHGFBTTOMRLEOVREMLGLHIIVTBYGECMUQRFOPOHSBBH");
    tmp_msg_0.value.assign("HFVKJRIOAWPMYQZJLBYUNGQVIOUIECIRVAPSXKGLWEWOJNNVISSNRBGYXEJDUCNNIYHTFIQADSJDAHCLZDTUFLTCWCNLRDKFSHKWHUUPNYZRWPDEICDCHEFYVXZVGONEVP");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.749895043044);
    msg.setSource(21567U);
    msg.setSourceEntity(215U);
    msg.setDestination(57243U);
    msg.setDestinationEntity(225U);
    msg.name.assign("URKUUJRECQDHMVYUHWZNPRKONVYDXHKLXZPQNIMCFIZBGKWNCIIRXKPDTSOFQFGQVCYOEQAPTLMWAJDQEPWSIBGOONTTAWYTUUKVQOCZRNCQCLGFLIBLMFMGVDEYICRUWSTQASGGROZHZRMNSRVBWATXJKHLWFHOJMBVJS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PJMPQRACIELDNQVTAAXO");
    tmp_msg_0.value.assign("NWCYYDORQSNBFEHZPGNBLCAZQJZRECGGPVSKFARQUEPTQBVOWGUQGIKRXMCIEGMJDZLPKHULTVWKNHXJUDOZIKHLNYIJTEBLIGLVFNVRXCBUYEVSSYLSFR");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.839151585014);
    msg.setSource(21946U);
    msg.setSourceEntity(162U);
    msg.setDestination(27373U);
    msg.setDestinationEntity(233U);
    msg.name.assign("GISJVMSPBPMBHXNIVMJTLHQPNTZYDJGAURCQANFBHVFISD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.0620651441534);
    msg.setSource(20674U);
    msg.setSourceEntity(142U);
    msg.setDestination(7998U);
    msg.setDestinationEntity(6U);
    msg.name.assign("OHULMYEJXJFFMYKCRESKYWLHTPTCALAITUYFFAFQEUMWTWENHQNP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.957958957788);
    msg.setSource(27916U);
    msg.setSourceEntity(188U);
    msg.setDestination(1988U);
    msg.setDestinationEntity(68U);
    msg.name.assign("VCJLPPECGALPAUXYSQFIRIANAXCULWGCMJMFSJVMCWNZPYAEISEZSNPYHIGUJUQDKZXSVZKKPMIQHJXKBYJHNXSSXRAHUWCXGOHMBGJBEWDKZDEJXATHQRYCTFZHOMKIDQVI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.824404581948);
    msg.setSource(49558U);
    msg.setSourceEntity(108U);
    msg.setDestination(9341U);
    msg.setDestinationEntity(153U);
    msg.timeout = 2467870244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.317021186988);
    msg.setSource(4441U);
    msg.setSourceEntity(243U);
    msg.setDestination(4489U);
    msg.setDestinationEntity(29U);
    msg.timeout = 2445429551U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.895433303085);
    msg.setSource(4399U);
    msg.setSourceEntity(107U);
    msg.setDestination(39614U);
    msg.setDestinationEntity(251U);
    msg.timeout = 1432379990U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.161469074034);
    msg.setSource(25506U);
    msg.setSourceEntity(58U);
    msg.setDestination(24111U);
    msg.setDestinationEntity(147U);
    msg.sessid = 4077583873U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.355618630765);
    msg.setSource(44154U);
    msg.setSourceEntity(147U);
    msg.setDestination(10533U);
    msg.setDestinationEntity(181U);
    msg.sessid = 3566973942U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.899289662546);
    msg.setSource(2001U);
    msg.setSourceEntity(166U);
    msg.setDestination(42101U);
    msg.setDestinationEntity(156U);
    msg.sessid = 1035956693U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.0707689570708);
    msg.setSource(6279U);
    msg.setSourceEntity(40U);
    msg.setDestination(18824U);
    msg.setDestinationEntity(194U);
    msg.sessid = 849461065U;
    msg.messages.assign("RNLUIVSERZKKDFZUSQKONXUQZNJOTMLXWSESZVDHEMCNEYJVQYUXOOATIDXOYUSLIOFPFXXHGPIDUBJBBMESCVYPBYDVTDRRNCJTKYCGRNJYLMNLWNJTMVIBKAOKTUHLMKGMJDFGWRSSREJLFWDXPENAUHQGHICZNMBFIXFZOYPGMCPEYAQTQJBQACVKZIAECRHWYRQIGXVUDWPLOWZCALZWTTAPEABPSDQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.852511607162);
    msg.setSource(16126U);
    msg.setSourceEntity(49U);
    msg.setDestination(71U);
    msg.setDestinationEntity(92U);
    msg.sessid = 4103695085U;
    msg.messages.assign("IMTTNNTKFNAVSMGPKTSSLSPGLJUXJUWQEBJCC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.11907409312);
    msg.setSource(32859U);
    msg.setSourceEntity(42U);
    msg.setDestination(27039U);
    msg.setDestinationEntity(54U);
    msg.sessid = 641205126U;
    msg.messages.assign("RAFSYGDAWHYXQJKICNXWWUPPNDSMQTHEQXPFWJMEQCYZUSUQJMT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.584719597877);
    msg.setSource(19820U);
    msg.setSourceEntity(90U);
    msg.setDestination(54393U);
    msg.setDestinationEntity(147U);
    msg.sessid = 399929845U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.984486663061);
    msg.setSource(62945U);
    msg.setSourceEntity(184U);
    msg.setDestination(61302U);
    msg.setDestinationEntity(122U);
    msg.sessid = 789193386U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.639527888751);
    msg.setSource(60238U);
    msg.setSourceEntity(34U);
    msg.setDestination(61453U);
    msg.setDestinationEntity(218U);
    msg.sessid = 3224920716U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.779235828557);
    msg.setSource(37044U);
    msg.setSourceEntity(154U);
    msg.setDestination(2284U);
    msg.setDestinationEntity(110U);
    msg.sessid = 236939705U;
    msg.status = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.224724224753);
    msg.setSource(8302U);
    msg.setSourceEntity(28U);
    msg.setDestination(12620U);
    msg.setDestinationEntity(77U);
    msg.sessid = 962231870U;
    msg.status = 58U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.22636578837);
    msg.setSource(50237U);
    msg.setSourceEntity(173U);
    msg.setDestination(25806U);
    msg.setDestinationEntity(216U);
    msg.sessid = 4280352398U;
    msg.status = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.610398720139);
    msg.setSource(27128U);
    msg.setSourceEntity(80U);
    msg.setDestination(28531U);
    msg.setDestinationEntity(182U);
    msg.name.assign("RWHVYABDEXRSQRUVCVEDEMEOLCVOOBIMVKDFSJAPQPTEMVERHSDXMMUUHYNKIJDGXBURCTDNJQQLFZQCXFCTPYYQIUMFGWW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.436954544638);
    msg.setSource(1044U);
    msg.setSourceEntity(248U);
    msg.setDestination(46860U);
    msg.setDestinationEntity(7U);
    msg.name.assign("MBWNHBUJIYCRBGRXXJFOFZXKYFNEOFUESTCZWITFYBQKIBXYQUTNHDFLUIVMYCEPQPUIFGNTALJEGOVRVWRRKUCKJLTMVKOITBMTAGRAOXZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.597752455189);
    msg.setSource(17223U);
    msg.setSourceEntity(54U);
    msg.setDestination(11316U);
    msg.setDestinationEntity(69U);
    msg.name.assign("RITMZJQWQVTHOJOFAYLNJGKOWUMFJKSWQTOYGEUBYXFXHDISDLGYBERDHRGAUBQMDUZDNQVXPSGLZPIVKPNBNEKALTJXZLUPAMJPFDFSPBTJOQGSFMTRWWVBHUHMRETGOGVSNZZRPIZRGPMCWIAODBCKJLWCAPSRILKXRMCIAYHITCABCFNCJDYWICRIDHFPNBVMTCXEUNOWGECVLKWJBDFEHAKHKXEYLAFVULQQSEQEZXQTXVZUXVU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.948664799729);
    msg.setSource(46103U);
    msg.setSourceEntity(119U);
    msg.setDestination(178U);
    msg.setDestinationEntity(178U);
    msg.name.assign("KCTVHBVQJRDWCMAADEWDZEWTUOGWUELKRNJMEOATUCHHGRXZWAIJQZTQJJBYJXUUPGOCIGHCIZAKRBXEVDKXAAHYOWHCPNLENSKFPGIFLSCBUWSFHNJFYQRYNOZZIDVKQMDPEDGTYTPGCRGMISWBYJRTYNZNXYKCLQZPSBKVUFVBVRHGJAQO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.718051788364);
    msg.setSource(15499U);
    msg.setSourceEntity(145U);
    msg.setDestination(4291U);
    msg.setDestinationEntity(156U);
    msg.name.assign("TRWUECOPIJZROCMNMHGPOTQPNKBTFYLNLVAR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.677150714923);
    msg.setSource(30252U);
    msg.setSourceEntity(16U);
    msg.setDestination(5466U);
    msg.setDestinationEntity(211U);
    msg.name.assign("HCIGJDFWVYPDEWQLHLGMOUVFLEIXDPDCLSLXXOHYHEHUTRNAQWZVYGPITUDOSUAPFYRMDDXRSXYTKZSRHVQZCZKFWFEGRDNBGTIYGVTBKGHJWHAYIZIHBVZLAQTRRLYWGKPJSGMXXLOBJOSRAABRIPGFU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.56284809069);
    msg.setSource(14216U);
    msg.setSourceEntity(145U);
    msg.setDestination(54581U);
    msg.setDestinationEntity(13U);
    msg.type = 188U;
    msg.error.assign("IBYFLQMOJLGCEDHJVJYEKXFVSPNXWJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.538265812886);
    msg.setSource(20200U);
    msg.setSourceEntity(101U);
    msg.setDestination(59277U);
    msg.setDestinationEntity(61U);
    msg.type = 156U;
    msg.error.assign("IWHKHDDIEWWTBUXVAJHNIYFPZOYXSFIEMAYTVCIFTVXYLPASARTXXDYBNORIJVNGKECCSCQOSUQCOYQEKJBFLGGBNXREKJP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.689194800518);
    msg.setSource(14154U);
    msg.setSourceEntity(95U);
    msg.setDestination(65291U);
    msg.setDestinationEntity(43U);
    msg.type = 214U;
    msg.error.assign("HEMZDBAZSCATPRANOMIWNOEWMLOHCPDKPHIAPENEQQXOAQHQJNVFZLRJLYQBZCXYWTQYAGKHULVILGCZWGFBECJHUJYIWUKXMRILBPJDGQDRYXTYIEWOCEXTPFNNDTCGTISXFVXSWGYVVNVVK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.79632418435);
    msg.setSource(23188U);
    msg.setSourceEntity(28U);
    msg.setDestination(49860U);
    msg.setDestinationEntity(89U);
    msg.seq = 28686U;
    msg.sys_dst.assign("UWMSMTBGNRCIISZSFQLLGYQJZTRBNTPMQSQEKLRXIHARGBYRECPEBGKRCWIMIFACGTVFLMOGSKNAFYSQZMQBDZWHPOJAVYXWNELJADEJJQWTEJFQTRXSLVVAQUTNJCWUFFDFMVPDJWXIIZKVWHYSLTZFYOZBXUXCACXYGNDXEQPFENU");
    msg.flags = 205U;
    const char tmp_msg_0[] = {-5, 49, 14, 60, -43, 123, -35, 27, -5, -122, 50, -108, -38, 62, 22, -88, -24, 14, -42, -94, 108, -37, 83, -126, -72, -116, 40, -67, 66, -19, -30, -27, -4, 13, -12, 91, 77, -86, -83, -26, 53, -2, -123, 119, 5, -21, -111, -57, 16, 78, 51, 120, -41, 81, -13, -124, 30, -43, 91, -14, -47, -48, -39, -112, 80, 89, 115, -37, -8, -118, -50, 51, -21, -36, -41, 115, -12, -117, -70, 9, -78, 111, 98, 20, -87, 49, -65, 119, 50, 123, 84, 123, -21, -53, 95, 28, -17, 109, 73, -91, -116, 102, 112, -64, -48, 0, -11, 69, -110, 56, -27, -83, -25, -94, 74, -120, 81, 86, 71, 28, 67, 117};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.182030015836);
    msg.setSource(45872U);
    msg.setSourceEntity(231U);
    msg.setDestination(3040U);
    msg.setDestinationEntity(75U);
    msg.seq = 19176U;
    msg.sys_dst.assign("HDLKLKTXXGKSUZYAWKZYZLVPRPHLEPHGCTBMZMNTTQULJDGNIYYOXMORICHULCJDEMBMIKQJDWHHZMDZEYBVYHAAFDKBSVMAIIBQKULJLOTVANSYKYLDFLXOGHOIXOSDJCCQPJTRSVWDUFQXTFUAQC");
    msg.flags = 134U;
    const char tmp_msg_0[] = {-2, 16, 27, 8, -69, 32, -73, -83, 60, 74, 111, -88, 103, 106, 95, 82, 69, -74, 93, -60, -6, 55, 31, 71, 53, -3, -49, 1, 81, 73, -81, -128, -114, 49, 116, 104, -76, 89, 89, 64, 95, -35, 123, -68, 102, -12, 40, 77, -61, -41, 102, 26, 74, 22, -62, -106, 0, -18, 43, 108, -40, 114, 42, 38, 102, -104, 119, -8, 111, -89, 14, -101};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.381898781627);
    msg.setSource(54671U);
    msg.setSourceEntity(59U);
    msg.setDestination(24478U);
    msg.setDestinationEntity(6U);
    msg.seq = 62244U;
    msg.sys_dst.assign("EHVMCYNAWEFJCOXIBIXHYGARZLJJSAMBFGGQDONBDKENETGTBTLMFGVWSNPHERQXPWSJZKLIUXVDGHTOOKXNDAMHNPCMUZMWGNQYHQWQVDMNMSYZPUPZKDSTFXYSYB");
    msg.flags = 176U;
    const char tmp_msg_0[] = {-80, 4, 45, 118, 62, 125, 89, -80, 52, 36, 16, -20, 23, -72, -49, -42, 95, 67, -127, 102, -35, -44, 75, 60, -1, -17, 27, 69, -52, -97, 82, -32, 64, 42, -66, 116, 35, 95, -87, -123, 37, 101, -23, -123, 20, -24, 62, 112, -73, 68, -30, 10, -117, 83, 80, -71, -30, -121, -71, 103, 4, -55, 105, -95, 29, 74, 111, 61, 25, 111, -54, -34, -47, 67, -72, -98, 14, -11, -75, -54, 38, 25, -26, 47, 59, 122, 39, 104, -13, -80, 84, 99, 50, -97, 121, -46, -86, -49, 104, -77, -122, -28, -19, 23, 15, -73, 38, 121};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.78960578059);
    msg.setSource(52786U);
    msg.setSourceEntity(35U);
    msg.setDestination(37891U);
    msg.setDestinationEntity(91U);
    msg.sys_src.assign("OICNMOUXQDOCGQTQADKOZLLNOUDSFZMSLOCCEZFUDUPWIVOVEGRQAKXPUMCSLMEPJAHEFWIZSMGRZHHOEFBVINILANOAURIYAVGUXHBMFMZVFVDNBKFWOKWSPTQPJWHCGZFREUBTKQDQTICZXXLPTBVWKMJXBEBIXTRNMYYJBYFAYHRJWYZTGPERAYPXKSTLHNGSCLPLDNXMKNECKSTWJYHVVXZUKPTJDSVGSCHRJEGWJLQRJQHIFDWUBYR");
    msg.sys_dst.assign("SUOTCOPNLCRAFSKXRRKHNJRIZWYEKOAFHVPJADMNDYBUGEBFYFPHQICBIWJQMLGDRGJXBZSXZAXHYAQVYZBCYJEQKFYWUBSGVQVSNOVIQUVGMABSWCDTIOWOCRNGGZIRUAXHRUEVNPWXBIAPHSWLINJMTATLTPUCDCUPTQEYTLSLZMPFJHLEDGRLGEDFWMZPMWOJMIHZXEBTPVTDOHJYLQKTZFMKLVFIM");
    msg.flags = 61U;
    const char tmp_msg_0[] = {-103, 54, -126, -74, -42, -78, 77, -68, -22, 26, 39, -58, 99, 49, -17, -115, 51, -84, -4, 102, -82, -108, 39, 5, -36, -3, 46, 76, 55, 16, 90, -22, 103, -122, -63, -85, 53, 104, 23, -120, 37, -84, -108, 105, 126, 26, -54, -90, 79, -84, -102, 118, 108, 103, -119, -105, 95, -80, -50, -57, -92, -3, 28, -72, 109, -105, 65, 121, 11, -104, 4, -51, -76, 36, 14, -65, -50, 4, -14, 21, 66, -2, 7, -2, -89, 38, -124, -71, -27, 117, -93, -108, 0, -80, -24, -108, 81, 1, 123, -106, -124, -127, 64, -67, 38, 122, 108, -25, 47, -84, -79, 22, 52, 39, -61, -32, 91, 92, 19, 101, 73, -105, -32, -127, -47, -70, 52, 113, 2, -97, -120, 3, 74, -23, -126, -83, -66, 46, 112, 30, 8, 16, -79, 9, 86, 53, -91, 95, -94, -116, 94, 79, -109, 52, 90, 94, 81, 72, 97, 6, 21, -11, -90, -50, -72, 25, 39, -6, 22, 59, 7, 104, -99, -75, 78, 14, 78, 103, 110, -43, -120, -68, -30, 69, -9, -39, 113, -101, 41, -50, 122, 29, -45, 110, 30, -75, 96, -89, -111, -12, -54, -104, 11, -87, 97, 44, -25, -5, -106, 99, 23, -46, -39, -116, 120, -124, -83, 41, -12, -37, -115, 112, 81, 78, -47, 36, -95};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.0922153257777);
    msg.setSource(1753U);
    msg.setSourceEntity(151U);
    msg.setDestination(13343U);
    msg.setDestinationEntity(173U);
    msg.sys_src.assign("ZMPNOIETOOAKUWSMISIKBETMWBNUXDXVCMXRRKPGUVGLPAPLPODKHVWNDVYRSZAJMXDIBYWLFWKWPELEYUWVSXAQGDGIOLTDDZNCCRHZQPMNKHQLKFQFNESWICBTWGOCRVBJECEAYNFHPQHDUQFGMMTYQPVFQFKNBROHKFLDSRLTGHYQBVYZJIPIEAHRFEZAMYJCZUJGNJBIUZUSTXRHOJFCVABGJ");
    msg.sys_dst.assign("BUVZVLJNRMO");
    msg.flags = 164U;
    const char tmp_msg_0[] = {34, 21, 110, 83, 120, 93, -118, 57, 108, -63, -61, 106, 108, -92, 92, 120, -71, 70, 34, 112, 29, 39, 98, -80, 39, 36, -26, -25, 35, 63, -12, 124, 66, 47, -61, -100, -6, -56, -127, 84, -42, 65, -71, 72, -20, 117, -13, -24, 107, 123, -94, 1, -106, 36, -55, 97, -70, 45, 31, -36, -10, -103, 62, 3, -31, -54, 44, -12, 11, -54, 116, -98, -72, 76, -24, -113, 61, -54, -23, 43, 11, 117, 89, 115, 126, 80, 16, 47, 83, -72, 92, -32, -107, 55, 64, 104, 44, 28, 112, -51, -5, -48, -15, 34, -70, -59, 120, 1, -18, 99, -60, 26, -73, 109, 116, -50, -115, -117, -85, -69, 7, 17, 28, 84, 6, 106, -54, -54, -36, 71, -29};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.13383135085);
    msg.setSource(41800U);
    msg.setSourceEntity(244U);
    msg.setDestination(49325U);
    msg.setDestinationEntity(187U);
    msg.sys_src.assign("YGTPXQCFEPUIFASUXIRLQAGIIUATNZJDWTZBZQQRYJKSXWHEREYBWNTIHLOJDSNAHCWBRRFQXFJTPCPJYFDIQIZHVESDORWKIPSVVHKSPEGHYSCLGMKBOCJUGLEOKCWDZVWKNKTURVIAXARGXTJLFJBQCJ");
    msg.sys_dst.assign("UNGJBXHUEIPZCYDJQKCYROSUPTWKFGSHCJPTDMOIWIXOSOPLDYVLFBVGANQEFPWWDAVEUVAPIQFJJWNGGXGOCYBBLTJLKQBFRMVJAZRVBBUEGBDUWQNYMPEVHZLKQSZIDACLKNDRSTDUSWKUBTAXRVEYJSSFKYLWNXRFEMHICAEWKXZDQWYXVHOOMKXMJAEFSOTPGCCUATCIQCO");
    msg.flags = 124U;
    const char tmp_msg_0[] = {-43, 99, 4, -116, 54, 77, -47, 71, -105, -122, 114, -83, -35, -109, 83, -95, -107, 103, -17, -97, -17, 59, -109, -9, -8, 36, -15, -32, -13, 126, 8, 63, -18, -110, 122, 5, 16, 6, 74, -41, -70, -45, -3, 100, -25, -58, -57, 81, 103, -20, 29, -115, 21, 114, -104, -62, 86, 5, -110, 111, 117, 53, 46, 120, -56, -98, 46, -86, 87, 46, 45, -76, 125, -53, -96, -120, 52, -5, -111, -19, -9, -123, -73, 106, 63, -75, -109, 57, -73, -59, -124, 75, -106, -15, 118, 103, 8, 60, -15, 7, -41, 104, -92, 78, 100, -40, 81, -75, 124, -27, -27, -55, -42, 98, 86, -115, -123, 124, -46, 21, 107, 45, 93, -1, -104, 113, -24, 22, 103, 26, -128, 104, -81, -84, 41, 97, 92, 80, 79, -33, 43, 61, 96, 106, -32, 67, -38, -89, 65, -40, 9, 16, 28, -31, -19, -11, -35, 34, 54, -114, -125, 109, 50, -47, -83, 28, -107, -33, 60, -121, 90, -22, 108, 39, 92, 26, -120, -24, -103, 84, 83, 44, 27, 31, -66, 57, -17, -109, 46, 69, -109, -39};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.751141204663);
    msg.setSource(36830U);
    msg.setSourceEntity(18U);
    msg.setDestination(16690U);
    msg.setDestinationEntity(244U);
    msg.seq = 12767U;
    msg.value = 10U;
    msg.error.assign("UIPTHJDIKMCJHLRFEEUJARIOAANQAXRXKVEKFGEVQPUZJAJQJZHDAWGOUCDZLUYBARSVOYNEYXTCVYRHZCUNPQHPDGMPYMFNMIZYVASFEBXMURGMUZQPCHDAQKVYTXOVCWNSSJGKILKBTSCWKGSLLJJQKIKOWNSOOGWWZFDQILMIFTGZQIETXYAVFHVLIYVXSFFBGPHEMBZNKPRBWLDOCSEBT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.693630022793);
    msg.setSource(27233U);
    msg.setSourceEntity(32U);
    msg.setDestination(4041U);
    msg.setDestinationEntity(137U);
    msg.seq = 55900U;
    msg.value = 234U;
    msg.error.assign("GFAZKPPNQOEFWJBCAZZSHRRCEXRQYIQOHFSUWVCJTTIWZSUGVNCANKIATFNPZVNULDBEWKDHMSECYHMTVBGRAQKXVIUTVHHPPIBRQSRULYOZVMCAFXHXSUVKGJMLEEKWYWTQRIZWXEXQRMKGFWYOXJQFBESPGUU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.362769398052);
    msg.setSource(10682U);
    msg.setSourceEntity(103U);
    msg.setDestination(41355U);
    msg.setDestinationEntity(88U);
    msg.seq = 2401U;
    msg.value = 34U;
    msg.error.assign("ENBQVHGLHXSNURZYSTCCKYSJZBJIFFGECASPYGVPMZFGQOPDTCTWJWTKEJVWPQRUTUCRVROPTKQZHNKHZAXSYMSRXXPVQOMTVUFQECXDLAZXAUGIMNUURIDJLFHHBIJR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.794542800833);
    msg.setSource(13728U);
    msg.setSourceEntity(123U);
    msg.setDestination(9455U);
    msg.setDestinationEntity(218U);
    msg.seq = 58229U;
    msg.sys.assign("GTWVVHXDGCDLBYEMJWZOMDYPUVSSJCVOUFTENRDOVCPKNZBVGJXQMWNOUSHWHIUVKRDPIWRTMMBQSWIMLJNBTK");
    msg.value = 0.642393568078;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.547315067007);
    msg.setSource(21765U);
    msg.setSourceEntity(1U);
    msg.setDestination(52200U);
    msg.setDestinationEntity(16U);
    msg.seq = 21628U;
    msg.sys.assign("QUAPZHOCZWHCJNKDOFTHXAQJSPGEIJBMIWNEAWXUDUZEHGFBRQIFYIWODDREGAZEZZFWXTNC");
    msg.value = 0.326191865701;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.313331869892);
    msg.setSource(53996U);
    msg.setSourceEntity(183U);
    msg.setDestination(49912U);
    msg.setDestinationEntity(187U);
    msg.seq = 7529U;
    msg.sys.assign("DXWMPWDOQFH");
    msg.value = 0.203959497299;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.296102750188);
    msg.setSource(41859U);
    msg.setSourceEntity(172U);
    msg.setDestination(24603U);
    msg.setDestinationEntity(234U);
    msg.seq = 61910U;
    msg.sys_dst.assign("LAHHTJEFVSHTGQXNEZRSONMNOSXFHBPXAMGDXCVBAPJZTWDKQYTLPUPHLMJSAQWSYTDIVHJGHJHAWHGXFQTZCXREGDLXYDFMQESJWAKEOWCZRSXCMRWOMONMVMIZTJNGYGLMBAHKRQNBEPQRVVKDBCABNOEOVIXIUUBROECFVLILLICYPGUWNTMIFZFYYBKGW");
    msg.timeout = 0.880395062206;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.758057685123);
    msg.setSource(33270U);
    msg.setSourceEntity(231U);
    msg.setDestination(29819U);
    msg.setDestinationEntity(193U);
    msg.seq = 55103U;
    msg.sys_dst.assign("JWWQOMYZZISODFHFMUKPKXEXSYEPNVFPFJMLCUVMXXGWGVTZUTJVDJMHFOYAYGQCWALEOLCNPSDRRQFALPIJDAJEYKZORPUQHAUFVRDQWKTDHNSRBGVQP");
    msg.timeout = 0.988872249758;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.354578538984);
    msg.setSource(2588U);
    msg.setSourceEntity(253U);
    msg.setDestination(12554U);
    msg.setDestinationEntity(78U);
    msg.seq = 60867U;
    msg.sys_dst.assign("AAXUMYEIOMJRKQZVQUMSETBZVDJQUJELOTNFSYHILYLZKZESHQYVZXVUAFRWWLPMUNOVTHRPNOCVGGTPIESDOSCVWLCVSAQMVMFQGDXIBEZVQGPSXTHPAAOGDMSUYLUFGKWUGWFRILFBHNXLMBPOUJNTMZTRKW");
    msg.timeout = 0.345336908385;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.779054455236);
    msg.setSource(19450U);
    msg.setSourceEntity(38U);
    msg.setDestination(50510U);
    msg.setDestinationEntity(84U);
    msg.action = 4U;
    msg.longain = 0.435201643731;
    msg.latgain = 0.0147267027384;
    msg.bondthick = 1924009207U;
    msg.leadgain = 0.777781803612;
    msg.deconflgain = 0.691905493399;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.194360401703);
    msg.setSource(11152U);
    msg.setSourceEntity(78U);
    msg.setDestination(15262U);
    msg.setDestinationEntity(80U);
    msg.action = 47U;
    msg.longain = 0.911318277025;
    msg.latgain = 0.102028345793;
    msg.bondthick = 106756966U;
    msg.leadgain = 0.0984343796863;
    msg.deconflgain = 0.318980996407;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.147229009583);
    msg.setSource(49433U);
    msg.setSourceEntity(98U);
    msg.setDestination(48970U);
    msg.setDestinationEntity(69U);
    msg.action = 103U;
    msg.longain = 0.533032264087;
    msg.latgain = 0.0412270105887;
    msg.bondthick = 3900570273U;
    msg.leadgain = 0.525017288229;
    msg.deconflgain = 0.946041986941;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.588626654239);
    msg.setSource(51683U);
    msg.setSourceEntity(204U);
    msg.setDestination(25447U);
    msg.setDestinationEntity(249U);
    msg.err_mean = 0.894934441868;
    msg.dist_min_abs = 0.309009390964;
    msg.dist_min_mean = 0.912201395813;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.158062898455);
    msg.setSource(58736U);
    msg.setSourceEntity(0U);
    msg.setDestination(29246U);
    msg.setDestinationEntity(13U);
    msg.err_mean = 0.117401089447;
    msg.dist_min_abs = 0.984241418628;
    msg.dist_min_mean = 0.388980329595;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.670697622126);
    msg.setSource(31484U);
    msg.setSourceEntity(128U);
    msg.setDestination(59221U);
    msg.setDestinationEntity(185U);
    msg.err_mean = 0.666652882236;
    msg.dist_min_abs = 0.694238342926;
    msg.dist_min_mean = 0.936300812478;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.272310301698);
    msg.setSource(14916U);
    msg.setSourceEntity(135U);
    msg.setDestination(24720U);
    msg.setDestinationEntity(122U);
    msg.action = 113U;
    msg.lon_gain = 0.884590009724;
    msg.lat_gain = 0.351604376934;
    msg.bond_thick = 0.700286925917;
    msg.lead_gain = 0.312963251839;
    msg.deconfl_gain = 0.383678611881;
    msg.accel_switch_gain = 0.716005897114;
    msg.safe_dist = 0.139238265757;
    msg.deconflict_offset = 0.0267868213693;
    msg.accel_safe_margin = 0.596513018063;
    msg.accel_lim_x = 0.157988286298;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.711516684574);
    msg.setSource(8044U);
    msg.setSourceEntity(225U);
    msg.setDestination(8134U);
    msg.setDestinationEntity(102U);
    msg.action = 123U;
    msg.lon_gain = 0.183032565835;
    msg.lat_gain = 0.941340228651;
    msg.bond_thick = 0.856195346278;
    msg.lead_gain = 0.955230041578;
    msg.deconfl_gain = 0.00904982382879;
    msg.accel_switch_gain = 0.281843351319;
    msg.safe_dist = 0.833194556248;
    msg.deconflict_offset = 0.808126375651;
    msg.accel_safe_margin = 0.860229050268;
    msg.accel_lim_x = 0.0190602685471;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.577185631157);
    msg.setSource(50987U);
    msg.setSourceEntity(227U);
    msg.setDestination(53000U);
    msg.setDestinationEntity(27U);
    msg.action = 169U;
    msg.lon_gain = 0.205806955133;
    msg.lat_gain = 0.194244531472;
    msg.bond_thick = 0.666791887278;
    msg.lead_gain = 0.553918299441;
    msg.deconfl_gain = 0.384802773484;
    msg.accel_switch_gain = 0.0980812938282;
    msg.safe_dist = 0.981555986782;
    msg.deconflict_offset = 0.781052081897;
    msg.accel_safe_margin = 0.624948547478;
    msg.accel_lim_x = 0.0877028511406;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.410097562646);
    msg.setSource(41091U);
    msg.setSourceEntity(104U);
    msg.setDestination(4898U);
    msg.setDestinationEntity(125U);
    msg.type = 250U;
    msg.op = 207U;
    msg.err_mean = 0.208991723536;
    msg.dist_min_abs = 0.68681955917;
    msg.dist_min_mean = 0.753582254961;
    msg.roll_rate_mean = 0.27057092656;
    msg.time = 0.3024894606;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 95U;
    tmp_msg_0.lon_gain = 0.0182423753576;
    tmp_msg_0.lat_gain = 0.343189322096;
    tmp_msg_0.bond_thick = 0.667488444051;
    tmp_msg_0.lead_gain = 0.275769502494;
    tmp_msg_0.deconfl_gain = 0.0619107263004;
    tmp_msg_0.accel_switch_gain = 0.710662183194;
    tmp_msg_0.safe_dist = 0.325426005274;
    tmp_msg_0.deconflict_offset = 0.231119726252;
    tmp_msg_0.accel_safe_margin = 0.716867322796;
    tmp_msg_0.accel_lim_x = 0.791765540617;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.427262903276);
    msg.setSource(25140U);
    msg.setSourceEntity(119U);
    msg.setDestination(2828U);
    msg.setDestinationEntity(173U);
    msg.type = 72U;
    msg.op = 0U;
    msg.err_mean = 0.833717654479;
    msg.dist_min_abs = 0.389546551141;
    msg.dist_min_mean = 0.97044436242;
    msg.roll_rate_mean = 0.430050949385;
    msg.time = 0.0717654049867;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 241U;
    tmp_msg_0.lon_gain = 0.856500483826;
    tmp_msg_0.lat_gain = 0.820744503234;
    tmp_msg_0.bond_thick = 0.630374763318;
    tmp_msg_0.lead_gain = 0.512618340082;
    tmp_msg_0.deconfl_gain = 0.970013679824;
    tmp_msg_0.accel_switch_gain = 0.346540719432;
    tmp_msg_0.safe_dist = 0.57351790673;
    tmp_msg_0.deconflict_offset = 0.0678065640429;
    tmp_msg_0.accel_safe_margin = 0.100074655612;
    tmp_msg_0.accel_lim_x = 0.230705156922;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.170211984017);
    msg.setSource(48254U);
    msg.setSourceEntity(150U);
    msg.setDestination(38002U);
    msg.setDestinationEntity(45U);
    msg.type = 113U;
    msg.op = 53U;
    msg.err_mean = 0.964490290652;
    msg.dist_min_abs = 0.646254323396;
    msg.dist_min_mean = 0.889618732868;
    msg.roll_rate_mean = 0.540385203118;
    msg.time = 0.883598695924;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 56U;
    tmp_msg_0.lon_gain = 0.0479280904341;
    tmp_msg_0.lat_gain = 0.508825045647;
    tmp_msg_0.bond_thick = 0.122859842779;
    tmp_msg_0.lead_gain = 0.508806347228;
    tmp_msg_0.deconfl_gain = 0.120843560766;
    tmp_msg_0.accel_switch_gain = 0.665523903088;
    tmp_msg_0.safe_dist = 0.377587545884;
    tmp_msg_0.deconflict_offset = 0.689435953408;
    tmp_msg_0.accel_safe_margin = 0.543363901051;
    tmp_msg_0.accel_lim_x = 0.531624023714;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.163187462126);
    msg.setSource(25891U);
    msg.setSourceEntity(179U);
    msg.setDestination(52504U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.402580836055;
    msg.lon = 0.75135755205;
    msg.eta = 2164259291U;
    msg.duration = 13970U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.945767772404);
    msg.setSource(9197U);
    msg.setSourceEntity(226U);
    msg.setDestination(20755U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.700082036019;
    msg.lon = 0.845217700819;
    msg.eta = 3206891896U;
    msg.duration = 17362U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.0470096371097);
    msg.setSource(13328U);
    msg.setSourceEntity(39U);
    msg.setDestination(32911U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.918255302783;
    msg.lon = 0.905781102126;
    msg.eta = 464374673U;
    msg.duration = 39195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.544954625894);
    msg.setSource(55789U);
    msg.setSourceEntity(199U);
    msg.setDestination(50374U);
    msg.setDestinationEntity(109U);
    msg.plan_id = 4708U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.0488110876481);
    msg.setSource(57397U);
    msg.setSourceEntity(147U);
    msg.setDestination(3085U);
    msg.setDestinationEntity(35U);
    msg.plan_id = 52138U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.373211141525;
    tmp_msg_0.lon = 0.478352838152;
    tmp_msg_0.eta = 545722135U;
    tmp_msg_0.duration = 63461U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.205480803436);
    msg.setSource(34762U);
    msg.setSourceEntity(155U);
    msg.setDestination(32655U);
    msg.setDestinationEntity(45U);
    msg.plan_id = 34793U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.855496275445);
    msg.setSource(6531U);
    msg.setSourceEntity(124U);
    msg.setDestination(39173U);
    msg.setDestinationEntity(197U);
    msg.type = 212U;
    msg.command = 165U;
    msg.settings.assign("XAOYWCOIIWKWWBTSGFJDUKATGNNSWFTCYYKQELURZVAOVOMJICVHBQGXPBUOFWVEDEDREXIPDVFNZBOHQXCBCDLYNMHEKSERQKNVSZRTLFXUMPDKLJNWBXGPAHEMMGIHJNPMVSFVISBULDLAZOJPMKQCWBKKYFXAHODCGZAHUHCMOZHAGSUREUPITYZRRTDJINJZLYJZLMYPUKIWHJQLGBFZQNQQ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 42806U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.119514345725;
    tmp_tmp_msg_0_0.lon = 0.467582720645;
    tmp_tmp_msg_0_0.eta = 4003734024U;
    tmp_tmp_msg_0_0.duration = 16133U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NPBXQZYTAGXIYMCVWKOSQVGIOTPQBPFAUTATMULULHHXEZNARVOCPWHIMVAGPNFKBQFSQZNPBENLXTCEWRYFBHOZPBYLYWBCXAKEDKBGVVDOSHOPKAKRRYHCKHFSN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.260355897452);
    msg.setSource(18439U);
    msg.setSourceEntity(215U);
    msg.setDestination(53990U);
    msg.setDestinationEntity(207U);
    msg.type = 10U;
    msg.command = 97U;
    msg.settings.assign("XWLBHESXEGJOUFMYAYJJVXDFFBMEHIHLDTEMBRPQRDWXYLTOQQOZJUYWXDNDPA");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 10257U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("RFECZPNGSDWARGDXVSQASCUIEQPGYIKGHFUQKXCMDDMZYREFLILRHWVBD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.394083900757);
    msg.setSource(40316U);
    msg.setSourceEntity(214U);
    msg.setDestination(64783U);
    msg.setDestinationEntity(112U);
    msg.type = 164U;
    msg.command = 112U;
    msg.settings.assign("CPFDVEHTWPUTSVOHQR");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 63766U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.213852809349;
    tmp_tmp_msg_0_0.lon = 0.267675606232;
    tmp_tmp_msg_0_0.eta = 3728503484U;
    tmp_tmp_msg_0_0.duration = 54516U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("IJSQRBSUQUFMHOELPTPVRFMHNGEWNSCKXAAKTZBCOGHIPZZPZBYZYEOHAXNMWADROJQVLBXUWJSDWGI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.691837228615);
    msg.setSource(39715U);
    msg.setSourceEntity(64U);
    msg.setDestination(12463U);
    msg.setDestinationEntity(229U);
    msg.state = 232U;
    msg.plan_id = 49329U;
    msg.wpt_id = 178U;
    msg.settings_chk = 62818U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.725691108825);
    msg.setSource(58303U);
    msg.setSourceEntity(29U);
    msg.setDestination(45020U);
    msg.setDestinationEntity(9U);
    msg.state = 92U;
    msg.plan_id = 5873U;
    msg.wpt_id = 144U;
    msg.settings_chk = 6170U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.328112619335);
    msg.setSource(36600U);
    msg.setSourceEntity(173U);
    msg.setDestination(11111U);
    msg.setDestinationEntity(22U);
    msg.state = 31U;
    msg.plan_id = 30125U;
    msg.wpt_id = 6U;
    msg.settings_chk = 2261U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.573526238804);
    msg.setSource(19279U);
    msg.setSourceEntity(17U);
    msg.setDestination(34781U);
    msg.setDestinationEntity(129U);
    msg.uid = 204U;
    msg.frag_number = 181U;
    msg.num_frags = 163U;
    const char tmp_msg_0[] = {117, -29, -59, 49, -96, 104, 35, 96, 41, -33, 121, -2, 56, -120, -61, -91, -54, -126, -62, 5, -36, -5, 0, -30, 1, 72, 101, -12, 110, -70, 91, 99, -125, 9, -70, 35, 78, -86, 21, 72, 75, -19, 75, 33, -58, 122, -49, -44, 99, -125, -29, -63, -88, -14, 65, 83, 11, -62, 89, 124, -103, 120, 80, 61, -95, 48, 23, 70, 15, 11, 113, 99, 14, -123, -55, -8, 20, 51, -124, 60, -44, 73, -46, -40, 51, 14, 125, 7, -71, 117, -97, -16, 113, 74, 7, -94, 120, -31, -44, 24, -11, -13, -2, 119, -79, 107, -3, -116, 63, 89, 99, 50, -91, 28, -71, 93, 120, -62, -114, -1, -109, -12, 120, 21, -12, 43, 15, 106, 31, 24, 118, -114, 84, -9, -96, -85, 60, -42, -42, 38, 87, 71, 50, -59, -18, -120, 6, -108};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.480745182189);
    msg.setSource(57740U);
    msg.setSourceEntity(177U);
    msg.setDestination(7291U);
    msg.setDestinationEntity(144U);
    msg.uid = 100U;
    msg.frag_number = 124U;
    msg.num_frags = 190U;
    const char tmp_msg_0[] = {103, -93, 76, 10, 37, 107, 39, -89, 72, 43, -43, 82, 39, 59, 97, -2, -70, 39, 24, 106, -5, 52, 66, -66, 53, -6, 33, -93, 38, 42, -31, 68, -105, -39, -37, -36, 92, -122, -46, 10, -21, -29, -102, 61, 5, 11, -123, -11, -20, 23, 62, 41, 85, 65, 118, 124, -8, 113, -113, 3, -36, 93, 25, -106, -128, -80, -78, -37, -83, 24, -40, -116, -98, 7, -116, -96, 80, 68, -22, -127, 31, 18, -108, 95, 102, -56, 46, -23, -2, -42, 125, 88, -116, 43, -51, 34, -111, -80, -71, -102, 96, 117, -123, -1, 121, -88, -112, -25, 47, -101, -111, -22, -5, -49, 46, -111, 36, 35, 93, 62, -59, 96, -103, -97, -95, -35, 105, -54, -6, 37, -86, -85, -120, -76, 4, 15, -109, 44, -21, -10, -61, -121, 27, 48, -105, -123, -50, 88, 9, 16, -16, -95, -53, -72, -53, 51};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.604597578615);
    msg.setSource(52340U);
    msg.setSourceEntity(175U);
    msg.setDestination(7796U);
    msg.setDestinationEntity(217U);
    msg.uid = 217U;
    msg.frag_number = 95U;
    msg.num_frags = 249U;
    const char tmp_msg_0[] = {-124, -115, 119, -116, 116, 99, -46, -111, 114, -33, -69, 71, -38, 9, -99, -62, 44, 64, 20, 32, -62, -121, -59, -107, 98, 9, -50, -23, 57, 65, 49, 76, 104, 111, 109, 105, -62, 123, 91, 97, 103, -68, 113, -95, 105, -125, -41, 105, -69, -90, -121, -89, -51, -126, -104, -94, -20, 10, -27, 36, -47, -53, -14, -17, -48, -120, -121, 126, -10, 119, 18, 16, -100, -94, 51, -21, -88, 64, 43};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.533387447172);
    msg.setSource(52423U);
    msg.setSourceEntity(91U);
    msg.setDestination(4181U);
    msg.setDestinationEntity(60U);
    msg.content_type.assign("XKSYELAWWDIHRTQBZFOKMINDFIMPPXJPYVOJIGEPJZBXCXFHVLUQRPMHGCONNKRGWSOLRZDEDRIBBXWVNVHISFDXKAGKNUSLLLDVLACWRZVPPBYCFDNMURMGFLNJMJNGQQIOGXKOOETXWCSMQOSIWHFTOROMYWUEBHKYCPJEREYZQYFHSLGDZMSTTVCTZPAYAKUTMTEUTVDCBUHBUAJAGVR");
    const char tmp_msg_0[] = {99, -14, 53, 77, -92, 97, 24, -40, 37, -26, -82, -122, 41, -20, -68, -39, -126, 14, 109, 41, -104, -5, -83, -107, -89, -14, 115, -15, -38, -30, -69, 66, 85, -102, -43, 48, -99, 27, -76, -57, -84, 46, 5, 31, 33, 71, -28, 83, 102, 70, -32, -36, -54, 113, -1, 64, 5, 97, 66, 48, -14, -99, -11, -7, -117, -98, -69, 35, 6, 74, 11, 45, -58, 107, 52, 71, -25, 22, 78, -122, -41, 24, -53, -82, -61, -84, 13, 91, -116, 95, -62, 23, 38, 107, -43, -54, -96, -24, -44, 72, 26, 31, 22, -39, -97, 33, 93, -9, 125, 103, -40, -54, 38, -6, 28, 9, -65, 64, -18, 16, -38, -93, 119, -60, -43, -125, 115, 19, -29, -52, -125, -117, -103, -111, 119, -7, -12, 38, 67, -83, -29, -45, 89, 9, -122, -22, -34, 105, 3, 80, 63, -28, -74, -98, 17, 38, 3, -99, -113, -19, -22, 89, 103, -104, -111, -26, 9, 10, -91, -63, 17, 65, -28, 42, 83, -105, 7, -26, -18, -44, 19, 22, 111, -59, -111, 4, -32, -89, 63, -7, 5};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.066691716456);
    msg.setSource(29278U);
    msg.setSourceEntity(160U);
    msg.setDestination(21702U);
    msg.setDestinationEntity(176U);
    msg.content_type.assign("NSWJGKSJRGYZEVMXWPTKCLCXDVJMXQVYHWSHSPNHLXZSRWSHNVBQAWULGFOYKSMJTAPTRBFPGDOIDFVPNCNBTCIIUYQAAWGLEMCPBFJMQWQGUOPALOCHUZHLOUJFCPKRIBMZYIFEIAM");
    const char tmp_msg_0[] = {34, -33, -107, -63, 70, -88, -47, 53, 50, -10, -128, 93, 27, -58, 73, -23, 112, 123, -34, 35, -42, 93, -66, 84, 113, 90, 53, 39, -55, -48, -63, -96, 48, 77, -6, 110, -99, -42, 5, -72, 121, -94, 96, 101, -50, -50, 99, 45, 19, -123, -27, 38, 20, -107, -94, -9, 21, 36, -33, -68, -103, -128, 117, 22, -97, -78, -25, 84, 93, -76, -65, -47, -108, 10, -44, -67, -53, 62, 126, -39, 124, -25, -78, -51, -73, 99, 93, 61, 35, -114, -104, 13, -99, -3, 117, -110, -44, -102, -8, -69, -40, -90, -127, -77, 109, 42, -60, -61, 78, -56, 90, 15, 14, -68, 31, -94, 34, 8, -22, 46, 30, 13, -111, 52, -111, 74, 2, -123, -7, 110, -24, -122, 21, -67, -23, -8, -87, -118, 103, -13, 121, 36, -64, 109, -25, -35, -52, 121, -110, 83, -71, -86, -115, 28, 115, -73, 44, -41, -74, -67, 116, -109, -49, 78, 112, 74, -47, -122, -4, 121, 13, 106, 14, 92, -41, 6, -96, 81, 94, 110, -47, -68, -1, 37, -14, -119, 124, 26, 27, -114, -95, -60, 43, 66, -109, -32, 120, 8, -27, -8, 122, -101, 113, 59, 93, -97, 51, -43, -128, -40, 36, 72, 102, 90, -122};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.0280850898667);
    msg.setSource(3387U);
    msg.setSourceEntity(230U);
    msg.setDestination(30490U);
    msg.setDestinationEntity(108U);
    msg.content_type.assign("LWGLPCPUBFSVZKXHLWRRKCEOAT");
    const char tmp_msg_0[] = {33, -12, 26, 4, 118, 79, 48, -32, 123, 40, 93, -31, 88, -93, -94, -123, 77, 95, -66, 60, -119, 85, -69, 69, 126, -8, 11, -49, -100, 17, -82, -86, -100, -93, -88, 57, -31, 100, -85, -35, 88, 18, -27, 4, 49, 21, -73, 15, -10, 31, -92, -29, 30, 23, 67, -80, 93, 39, -16, -22, 96, -107, 53, 65, -70, -1, -97, 80, -80, -107, -57, 118, 36, -76, -45, 91, -119, 21, -6, 70, 49, 55, 93, -65, -5, -12, 99, 75, -48, -115, 35, -14, -102, -122, 86, -99, 109, 42, 68, 56, -69, -30, -109, 39, 94, -110, -73, -56, -14, -49, -103, -122, 48, -57, 23, 32, 62, 16, -50, -119, 37, -11, -86, 73, 9, -57, -56, 36, -38, -118, 73, 85, -30, 87, 97, 25, -11, 61, -50, 100, 124, 87, 19, 92, 59, 66, 75, -51, 115, 58, 69, -14, 59, 96, -103, 53, 114, -79, 35, 95, -66, -7, 111, -93, -59, -110, -5, 46, -25, 0, -40, 105, 80, 10, 27, -21, 16, -56, 61, 24, -12, -70, -39, -106, 35, -125, -11, 50, 17, -123, -31, 57, 47, -6, 37, 56, -8, 89, -29, 53, -3, -43, 68, -96, -77, 40, 47, -78, -86, 55, 52, -99, -12, 46, -1, -91, 105, 37, 1, 118};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.904168615041);
    msg.setSource(1316U);
    msg.setSourceEntity(5U);
    msg.setDestination(10362U);
    msg.setDestinationEntity(26U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.168934186452);
    msg.setSource(12469U);
    msg.setSourceEntity(50U);
    msg.setDestination(41103U);
    msg.setDestinationEntity(61U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.867365797435);
    msg.setSource(60545U);
    msg.setSourceEntity(185U);
    msg.setDestination(15760U);
    msg.setDestinationEntity(75U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.862447583795);
    msg.setSource(60056U);
    msg.setSourceEntity(4U);
    msg.setDestination(64566U);
    msg.setDestinationEntity(1U);
    msg.target = 7863U;
    msg.bearing = 0.939669203664;
    msg.elevation = 0.731117202552;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.284258041244);
    msg.setSource(1990U);
    msg.setSourceEntity(122U);
    msg.setDestination(18967U);
    msg.setDestinationEntity(67U);
    msg.target = 37418U;
    msg.bearing = 0.904261575882;
    msg.elevation = 0.371893679003;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.414234753201);
    msg.setSource(937U);
    msg.setSourceEntity(98U);
    msg.setDestination(1579U);
    msg.setDestinationEntity(246U);
    msg.target = 47034U;
    msg.bearing = 0.475127536949;
    msg.elevation = 0.0746055750299;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.3587310553);
    msg.setSource(40142U);
    msg.setSourceEntity(140U);
    msg.setDestination(14048U);
    msg.setDestinationEntity(18U);
    msg.target = 36398U;
    msg.x = 0.16244170976;
    msg.y = 0.0147538872582;
    msg.z = 0.701449168079;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.920054409134);
    msg.setSource(10085U);
    msg.setSourceEntity(125U);
    msg.setDestination(45938U);
    msg.setDestinationEntity(35U);
    msg.target = 2519U;
    msg.x = 0.140631560872;
    msg.y = 0.112691406815;
    msg.z = 0.895386014523;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.527663698875);
    msg.setSource(15396U);
    msg.setSourceEntity(131U);
    msg.setDestination(8548U);
    msg.setDestinationEntity(230U);
    msg.target = 31813U;
    msg.x = 0.107665613463;
    msg.y = 0.985606774393;
    msg.z = 0.611817483741;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.101551810928);
    msg.setSource(3579U);
    msg.setSourceEntity(121U);
    msg.setDestination(6875U);
    msg.setDestinationEntity(171U);
    msg.target = 41254U;
    msg.lat = 0.00232124591674;
    msg.lon = 0.929841910176;
    msg.z_units = 164U;
    msg.z = 0.309721880668;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.7306061308);
    msg.setSource(28046U);
    msg.setSourceEntity(164U);
    msg.setDestination(25510U);
    msg.setDestinationEntity(163U);
    msg.target = 2025U;
    msg.lat = 0.946585782853;
    msg.lon = 0.768605989423;
    msg.z_units = 62U;
    msg.z = 0.0546640786788;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.935590401954);
    msg.setSource(20704U);
    msg.setSourceEntity(6U);
    msg.setDestination(6563U);
    msg.setDestinationEntity(104U);
    msg.target = 18831U;
    msg.lat = 0.581959511118;
    msg.lon = 0.728682712682;
    msg.z_units = 53U;
    msg.z = 0.3182079902;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.449620566933);
    msg.setSource(42779U);
    msg.setSourceEntity(132U);
    msg.setDestination(44501U);
    msg.setDestinationEntity(2U);
    msg.locale.assign("NCVJVRRZHAQPPRYEBMXWLULMGAEVJSYSODBMMHPOBNHKTIIXZIWJQXGMLNZVHPLEWKYHZQBZTKHDFXFU");
    const char tmp_msg_0[] = {100, -94, 111, 37, 9, 11, -50, -3, -89, 9, 4, -95, -116, -43, -32, 67, -105, 98, -44, -122, -38, -24, -101, -77, -54, -52, -121, -6, 107, 42, 92, 12, -62, 31, 106, 58, 15, -94, 109, 59, -122, -85, -88, 11, -122, -96, -110, 91, -68, 59, -43, -83, 73, -127, -28, 120, 62, 105, -52, -76, 80, 122, 62, 94, 64, -119, 23, 13, 90, -92, 124, -13, -119, 57, -4, -13, 59, -58, 124, 49, 6, -63, -107, 67, -67, -30, 103, 18, -97, -24, 99, 4, -64, 85, 59, -117, -123, 77, 3, 67, -104, 34, 105, 14, -21, 41, 52, 0, -105, 45, -10, 0, 122, -69, 56, -91, -12, -77, 116, -69, 119, 21, -64, 90, 61, 24, 105, 62, -56, -112, 36, -54, 18, -102, -21, -93, -110, -24, 42, -103, -4, -50, 65, 84, 100, 107, -20, -64, 17, 71, -120, -99, 111, 119, -14, -114, 21, 44, 59, 82, -120, 7, -16, 38, 98, 50, 95, -105, 25, 106, -102, 73, -23, -103, -28, 66, 85, -70, -20, -28, 120, -65, 124, 107, 117, -80, 111, -29, 71, -4, 1, -98, -86, -106, -8, -51, -54, -42, -64, 81, 113, 11, 19, 0, -113, -118, 47, -33, 120, -109, 46, -88, -43, -89, -124, 39, 121, -54, -49, 70, -126, -2, 87, 48, -4, -7, -59, -46, 16, 102, 23, 11, 112, 84, 83, 111, 96, 50, 26, -67, -69, -5, -22, 126, -10, -83, -52, -76, 126, 68};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.740305718854);
    msg.setSource(42613U);
    msg.setSourceEntity(180U);
    msg.setDestination(9679U);
    msg.setDestinationEntity(38U);
    msg.locale.assign("EXXFHDQSGBOLEDVZIHOQHQCTZWORDATSLTSXFGIZUJJFDSKHMNSUCCXGUFSPDUESCTVBRLQB");
    const char tmp_msg_0[] = {-60, 99, -24, 61, 20, 33, 107, 49, 9, -65, -61, -82, -18, -86, 88, -57, 78, 59, -51, -72, 74, 80, 55, 103, 118, -78, -95, 65, -1, 119, -8, 58, 51, 63, -24, -6, 37, -27, 59, -115, 39, -46, -125, -77, -105, 66, -63, 96, -127, -23, 41, 85, -99, -76, -33, -31, -111, -6, 101, -102, -91, 14, 90, -31, 121, 69, -57, -71, 83, 100, 25, 10, 59, -13, 32, -114, 58, 123, -24, -17, 92, -24, -38, 3, -74, 21, -72, -57, 35, -1, -90, 35, -95, -104, 17, -28, -24, -93, -89, -11, -83, -111, 108, -68, -5, 108, -65, -88, 82, 9, 24, -73, -127, -39, 71, -106, -5, -44, -105, -59, -2, 26, 13, 1, 30, 34, 100, 61, 53, -28, 37, -82, -52, 91, -67, 11, 81, 113, 113, -99, -116, -32, -126, -10, -123, 55, -25, 35, -23, -18, -6, 63, -39, -120, 77, 7, 87, 5, -82, 122, -121, -14, 114, -125, 115, -70, -90};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.970201962413);
    msg.setSource(3319U);
    msg.setSourceEntity(43U);
    msg.setDestination(43357U);
    msg.setDestinationEntity(69U);
    msg.locale.assign("CAZCSQWSNNEUAZUJTJYCGQAVOGNTKFUXGMDBPDOJIUDCYIHKQLVFBBSOKADTOEYVIVIZDGWWASSHG");
    const char tmp_msg_0[] = {104, -20, 52, 98, 89, -9, 40, -33, 50, 45, -127, 0, 104, 96, -94, -115, -97, -42, 80, 89, 72, -40, -87, 68, -44, -33, 122, 99, -114, -101, -98, -36, -19, 117, -77, -50, 112, -104, 58, 114, 24, 53, -67, 96, 26, 60, -72, 68, 72, -18, -51, 80, 73, 99, 37, -123, -25, 98, -92, -105, -44, 53, 64, 63, -50, -22, 63, -17, -113, -19, -51, 64, -80, 61, 109, 112, 78, 65, -54, 45, 40, 80, -60, 100, 73, -35, -105, 104, -89, 2, -98, -57, -117, -104, 38, -66, 29, -18, -63, -94, -78, -90, -13, -40, 61, -42, -111};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.812752047693);
    msg.setSource(31021U);
    msg.setSourceEntity(140U);
    msg.setDestination(37947U);
    msg.setDestinationEntity(220U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.48978979197);
    msg.setSource(15535U);
    msg.setSourceEntity(154U);
    msg.setDestination(12316U);
    msg.setDestinationEntity(45U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.0575950459361);
    msg.setSource(34022U);
    msg.setSourceEntity(247U);
    msg.setDestination(33089U);
    msg.setDestinationEntity(37U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.45811418168);
    msg.setSource(11401U);
    msg.setSourceEntity(22U);
    msg.setDestination(7490U);
    msg.setDestinationEntity(219U);
    msg.camid = 170U;
    msg.x = 62890U;
    msg.y = 21832U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.953204020753);
    msg.setSource(6709U);
    msg.setSourceEntity(131U);
    msg.setDestination(38562U);
    msg.setDestinationEntity(43U);
    msg.camid = 104U;
    msg.x = 50542U;
    msg.y = 44650U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.811565119045);
    msg.setSource(42184U);
    msg.setSourceEntity(250U);
    msg.setDestination(56943U);
    msg.setDestinationEntity(16U);
    msg.camid = 223U;
    msg.x = 3586U;
    msg.y = 23547U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.211933987027);
    msg.setSource(13781U);
    msg.setSourceEntity(128U);
    msg.setDestination(63740U);
    msg.setDestinationEntity(183U);
    msg.camid = 50U;
    msg.x = 62325U;
    msg.y = 38050U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.0232017580072);
    msg.setSource(57145U);
    msg.setSourceEntity(139U);
    msg.setDestination(29188U);
    msg.setDestinationEntity(89U);
    msg.camid = 9U;
    msg.x = 50314U;
    msg.y = 44589U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.467351955483);
    msg.setSource(61046U);
    msg.setSourceEntity(85U);
    msg.setDestination(17517U);
    msg.setDestinationEntity(161U);
    msg.camid = 223U;
    msg.x = 6753U;
    msg.y = 8554U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.145891192379);
    msg.setSource(21860U);
    msg.setSourceEntity(25U);
    msg.setDestination(25284U);
    msg.setDestinationEntity(38U);
    msg.tracking = 189U;
    msg.lat = 0.712142705942;
    msg.lon = 0.125618676438;
    msg.x = 0.182264159487;
    msg.y = 0.0571452934613;
    msg.z = 0.511294365585;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.77480484815);
    msg.setSource(15275U);
    msg.setSourceEntity(245U);
    msg.setDestination(45439U);
    msg.setDestinationEntity(26U);
    msg.tracking = 121U;
    msg.lat = 0.89549055687;
    msg.lon = 0.40037195709;
    msg.x = 0.289319595037;
    msg.y = 0.260137539802;
    msg.z = 0.537994992911;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.16045521834);
    msg.setSource(28088U);
    msg.setSourceEntity(179U);
    msg.setDestination(19359U);
    msg.setDestinationEntity(223U);
    msg.tracking = 118U;
    msg.lat = 0.263043852845;
    msg.lon = 0.19891540957;
    msg.x = 0.975372670128;
    msg.y = 0.463733167363;
    msg.z = 0.428657360238;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.799781664511);
    msg.setSource(15351U);
    msg.setSourceEntity(52U);
    msg.setDestination(618U);
    msg.setDestinationEntity(128U);
    msg.target.assign("YFPLUMNCONILLLXYSXRDWDYWHMCSZIHVAOJUCNPJYSONWRCUGSMITJUKKMYFUBPPFKXMGMZAXWIXHKOVNHHLKQYSSXBIGQVCZDIEXKCSIFMGLWRJIIWEJDPCBGWZGDE");
    msg.lbearing = 0.473688622144;
    msg.lelevation = 0.377469998862;
    msg.bearing = 0.457285854173;
    msg.elevation = 0.185752954393;
    msg.phi = 0.0539225335886;
    msg.theta = 0.70174310207;
    msg.psi = 0.951613879507;
    msg.accuracy = 0.432415953162;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.33737659596);
    msg.setSource(54567U);
    msg.setSourceEntity(42U);
    msg.setDestination(35019U);
    msg.setDestinationEntity(141U);
    msg.target.assign("HCORPEZKHRGROBIYRUJEAZZNEUNDAJJKPWXJIATSGBYFBYDOKJFGMBNHEUPSOKYQTVECYRGBOKWVGXXHGLDCWSYRFNCAUKGQZQEXTFPLPQGTQSIXCLYWNOCKMGQOHXDNXMLAJDIXPLU");
    msg.lbearing = 0.128120747709;
    msg.lelevation = 0.97039409727;
    msg.bearing = 0.350545169804;
    msg.elevation = 0.777213813491;
    msg.phi = 0.824264808021;
    msg.theta = 0.0288381611355;
    msg.psi = 0.125096826322;
    msg.accuracy = 0.881471259934;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.324325969028);
    msg.setSource(49692U);
    msg.setSourceEntity(252U);
    msg.setDestination(61989U);
    msg.setDestinationEntity(240U);
    msg.target.assign("ELPVREUNZCFZRSSMFWVDTQASDALFJWJBAWPNKZDGZHIRRZYKWKISIZVRPQSFUBETKXGFKXNCLVOTEETYWTXBBAXNFJLINVOMRNBRULXWSCGZWYLYUXTBQYUDCHLEPXIUKDYHQTHHDBMIXFTZGGIBDQVDJMKAJIQPMNOEYEJMJHRCTEBPU");
    msg.lbearing = 0.629620235443;
    msg.lelevation = 0.405265286004;
    msg.bearing = 0.621366101499;
    msg.elevation = 0.865825711885;
    msg.phi = 0.477991433658;
    msg.theta = 0.615279605996;
    msg.psi = 0.658377704507;
    msg.accuracy = 0.14862440445;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.677595654334);
    msg.setSource(11393U);
    msg.setSourceEntity(249U);
    msg.setDestination(22740U);
    msg.setDestinationEntity(243U);
    msg.target.assign("LGCTUCLDBQKIFPOWSVLMDXKCYYRAXJTMJWPKRZDLRSSHAESVUEFLQBITXHEQEULVWOOSNNSNNVXGJAOXZLZWKAFARSACDMIBXAUAPHPBPGCGQZQNBXBHYLOVHUORZZCFKLGNWTRHYJGBRMEKOCBTYVGSPEXQSSEHEUPJMGJPPWFVEWMTOTGTNDAJLIFCRTZIPIUFHWHBZUDUCYWAI");
    msg.x = 0.628813503282;
    msg.y = 0.974684501587;
    msg.z = 0.656865147471;
    msg.n = 0.785477848;
    msg.e = 0.476903831895;
    msg.d = 0.823907372777;
    msg.phi = 0.18263460772;
    msg.theta = 0.721861258502;
    msg.psi = 0.326723575269;
    msg.accuracy = 0.700199282136;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.360488363064);
    msg.setSource(51372U);
    msg.setSourceEntity(160U);
    msg.setDestination(25724U);
    msg.setDestinationEntity(224U);
    msg.target.assign("KZULPDVIUTKMEGGBHCECXBGDQOAZDRZYJIQZZQYIHRVVPHQGUOYSMBVBDYTAFPLNGIIYRNRXHLSLFZKWFNIANBLOSKJODNHWRTDDBQFMRPKRIMXBGQJJWOGUICWONKUZPONWZQUZXCJNJPPABUSWMRAAAFETSMWEFDKACSLVHBSTVGADBCKYEVGXCQJYTSFRTYQXCZWCXLJVLSOJHDVKHUUELTYMVQMXPJSUFTFW");
    msg.x = 0.752860378469;
    msg.y = 0.229748822109;
    msg.z = 0.0483419829251;
    msg.n = 0.054926413558;
    msg.e = 0.179962577519;
    msg.d = 0.510931911562;
    msg.phi = 0.884255188539;
    msg.theta = 0.281780178013;
    msg.psi = 0.965582342727;
    msg.accuracy = 0.241600999516;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.980246013895);
    msg.setSource(54929U);
    msg.setSourceEntity(160U);
    msg.setDestination(294U);
    msg.setDestinationEntity(144U);
    msg.target.assign("WRQLLYIALLRGCZX");
    msg.x = 0.110534238548;
    msg.y = 0.120583978958;
    msg.z = 0.912445528592;
    msg.n = 0.931997606481;
    msg.e = 0.734163624145;
    msg.d = 0.215766977545;
    msg.phi = 0.865264697307;
    msg.theta = 0.705911290583;
    msg.psi = 0.713081226504;
    msg.accuracy = 0.428255283374;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.18083582114);
    msg.setSource(13068U);
    msg.setSourceEntity(196U);
    msg.setDestination(25230U);
    msg.setDestinationEntity(166U);
    msg.target.assign("GXVCNTETPDWXMVCYPBXEDDYDTWZVNZMHZAVACTHUIAFHLURAVHQMTJHEMSIXEZIACLONQCKULBQGEDBVOQTBPWKMGTOCLSYKQRVJEAXLJGWYKPUDILNZIIUZAQGMLCAXJCUVHGGZTKCDZWSOPQFHTZFORHYNEXL");
    msg.lat = 0.0689567566031;
    msg.lon = 0.168279229401;
    msg.z_units = 35U;
    msg.z = 0.243315488602;
    msg.accuracy = 0.197204356454;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.308345404897);
    msg.setSource(8981U);
    msg.setSourceEntity(18U);
    msg.setDestination(25848U);
    msg.setDestinationEntity(195U);
    msg.target.assign("BGFYXFXQQTQWPBYKSKTDFGNWXJYCGYRFMONRMDVKDEBTPAKAWRCORLROWAFNKLDSNKUIYXVRUQQZATIJCMTGH");
    msg.lat = 0.735594585718;
    msg.lon = 0.00706884058242;
    msg.z_units = 15U;
    msg.z = 0.856682097011;
    msg.accuracy = 0.037333780214;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.467405052365);
    msg.setSource(43730U);
    msg.setSourceEntity(253U);
    msg.setDestination(6957U);
    msg.setDestinationEntity(29U);
    msg.target.assign("RPNLJFUTGGMQAOEXOHTRKQVIKOZHACOBZCVGGFDWNOVGJTLWXLZSXBHQMGYYCW");
    msg.lat = 0.0821247815314;
    msg.lon = 0.103121984886;
    msg.z_units = 17U;
    msg.z = 0.0869207562894;
    msg.accuracy = 0.0534873070704;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.578214977407);
    msg.setSource(4150U);
    msg.setSourceEntity(136U);
    msg.setDestination(40668U);
    msg.setDestinationEntity(160U);
    msg.name.assign("JAQDQJOPKTIYIMVSNHNAAKVDO");
    msg.lat = 0.700758407171;
    msg.lon = 0.619008297082;
    msg.z = 0.760090751212;
    msg.z_units = 12U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.621670829308);
    msg.setSource(60484U);
    msg.setSourceEntity(213U);
    msg.setDestination(65154U);
    msg.setDestinationEntity(105U);
    msg.name.assign("BLKYUKBCVNGOPWDIFCCUZGBRLRURUYOEYURTYXQTFBQMDAOZQHOIUBTNUSKDLKXOPZNAYIPBJTZDZQGKYSGBEXXLCQEMXQRQVGWKOJEADDICUKSWRIPRGBECAQXCGGTTLCTQOHPUPCNOZMDAWWVAOMUMJWIDPNZNNSHHWLLQCDSSJIHAMPHPJLHFFKKLIVSEEJ");
    msg.lat = 0.401430702332;
    msg.lon = 0.0434571038175;
    msg.z = 0.635661677672;
    msg.z_units = 134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.9161588611);
    msg.setSource(59241U);
    msg.setSourceEntity(105U);
    msg.setDestination(15657U);
    msg.setDestinationEntity(185U);
    msg.name.assign("MSUUUQVIDNEKIXEUNZYYMPHLZLKGGSFJQBQCJWVWEHRVTOMBWPJLRKQFXIHKXKIJIBOXOLZSPPOABBZCBUTTTHZZXDMFDEHSDYFNSJCNKHRWVJKGRSILXQSKLMJJUGWBCNRGWGNDUNMFCOQTHVYHZDUVCSG");
    msg.lat = 0.198679634903;
    msg.lon = 0.629458198647;
    msg.z = 0.611763982998;
    msg.z_units = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.991032273469);
    msg.setSource(28063U);
    msg.setSourceEntity(74U);
    msg.setDestination(26030U);
    msg.setDestinationEntity(61U);
    msg.op = 121U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.739375177288);
    msg.setSource(17988U);
    msg.setSourceEntity(122U);
    msg.setDestination(55113U);
    msg.setDestinationEntity(23U);
    msg.op = 145U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("WFRSTFCUYKQTDMISOYIMPDGTNIEAFRSQANTKARDBFDRFLTEPAWMKXVBXYOESGHFSWXXWLBRJRPKVJGUGYIGIWDGBUVEKM");
    tmp_msg_0.lat = 0.0846783852053;
    tmp_msg_0.lon = 0.499225156968;
    tmp_msg_0.z = 0.688079220461;
    tmp_msg_0.z_units = 68U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.393393518434);
    msg.setSource(9870U);
    msg.setSourceEntity(143U);
    msg.setDestination(5974U);
    msg.setDestinationEntity(199U);
    msg.op = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.268135234258);
    msg.setSource(23386U);
    msg.setSourceEntity(183U);
    msg.setDestination(44221U);
    msg.setDestinationEntity(122U);
    msg.value = 0.421590317859;
    msg.type = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.604922134153);
    msg.setSource(4067U);
    msg.setSourceEntity(227U);
    msg.setDestination(15976U);
    msg.setDestinationEntity(234U);
    msg.value = 0.361869912229;
    msg.type = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.0928455486193);
    msg.setSource(59479U);
    msg.setSourceEntity(250U);
    msg.setDestination(29769U);
    msg.setDestinationEntity(232U);
    msg.value = 0.590316234771;
    msg.type = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.11054012109);
    msg.setSource(42192U);
    msg.setSourceEntity(143U);
    msg.setDestination(47796U);
    msg.setDestinationEntity(64U);
    msg.value = 0.705616334487;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.0303330869508);
    msg.setSource(17130U);
    msg.setSourceEntity(114U);
    msg.setDestination(8172U);
    msg.setDestinationEntity(140U);
    msg.value = 0.636444591214;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.569063966821);
    msg.setSource(29051U);
    msg.setSourceEntity(158U);
    msg.setDestination(38716U);
    msg.setDestinationEntity(244U);
    msg.value = 0.0211921646;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.904857962557);
    msg.setSource(54309U);
    msg.setSourceEntity(17U);
    msg.setDestination(5003U);
    msg.setDestinationEntity(230U);
    msg.timestamp_last_service = 0.220382686874;
    msg.time_next_service = 0.534208628033;
    msg.time_motor_next_service = 0.338998054782;
    msg.time_idle_ground = 0.900588809744;
    msg.time_idle_air = 0.771869017178;
    msg.time_idle_water = 0.397803005209;
    msg.time_idle_underwater = 0.510059263735;
    msg.time_idle_unknown = 0.208756845492;
    msg.time_motor_ground = 0.400445247587;
    msg.time_motor_air = 0.61494109749;
    msg.time_motor_water = 0.286753364097;
    msg.time_motor_underwater = 0.947281127085;
    msg.time_motor_unknown = 0.486336923166;
    msg.rpm_min = 21281;
    msg.rpm_max = -10339;
    msg.depth_max = 0.65465928846;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.968927790439);
    msg.setSource(5181U);
    msg.setSourceEntity(183U);
    msg.setDestination(47884U);
    msg.setDestinationEntity(52U);
    msg.timestamp_last_service = 0.119331973893;
    msg.time_next_service = 0.110229632081;
    msg.time_motor_next_service = 0.430414798695;
    msg.time_idle_ground = 0.842701347692;
    msg.time_idle_air = 0.322536702574;
    msg.time_idle_water = 0.562402158504;
    msg.time_idle_underwater = 0.360385337104;
    msg.time_idle_unknown = 0.0466433882864;
    msg.time_motor_ground = 0.674504985811;
    msg.time_motor_air = 0.240084565576;
    msg.time_motor_water = 0.866973251628;
    msg.time_motor_underwater = 0.0711454790009;
    msg.time_motor_unknown = 0.370679823189;
    msg.rpm_min = -19558;
    msg.rpm_max = -19975;
    msg.depth_max = 0.57507727702;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.397131584435);
    msg.setSource(17527U);
    msg.setSourceEntity(222U);
    msg.setDestination(25184U);
    msg.setDestinationEntity(165U);
    msg.timestamp_last_service = 0.48436696401;
    msg.time_next_service = 0.250904252247;
    msg.time_motor_next_service = 0.815102205668;
    msg.time_idle_ground = 0.510126471639;
    msg.time_idle_air = 0.290278007159;
    msg.time_idle_water = 0.0234934897093;
    msg.time_idle_underwater = 0.015313632933;
    msg.time_idle_unknown = 0.738033314422;
    msg.time_motor_ground = 0.358128567421;
    msg.time_motor_air = 0.908675231272;
    msg.time_motor_water = 0.888304396336;
    msg.time_motor_underwater = 0.350336317534;
    msg.time_motor_unknown = 0.355832827328;
    msg.rpm_min = -10640;
    msg.rpm_max = -12031;
    msg.depth_max = 0.538749526035;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.64015096374);
    msg.setSource(5772U);
    msg.setSourceEntity(29U);
    msg.setDestination(58393U);
    msg.setDestinationEntity(139U);
    msg.severity = 35U;
    msg.text.assign("NCIIRBSAPFFTOMIOYHSFQZTJQQYUHGLATTSYUWQHVUZNGEUJDNBKXPCGKJOJRILWWAVIHLPMMBRFGJWVRSNEJIEDTGSKNEVTVRCSDPVTJBBQLYKXCHGZRBGBBDXKAEMWXECUXNQLYHMOMYYCDSSRW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.892676392297);
    msg.setSource(7843U);
    msg.setSourceEntity(186U);
    msg.setDestination(56951U);
    msg.setDestinationEntity(78U);
    msg.severity = 144U;
    msg.text.assign("TESKPAKMHNEHLXNVVANKEPLBLDBSHWCSCDYQMFQDBQTTYIFGKMUGMSVDONJIXWKEGXUYLOZWMPRAQLIDLHXUUQYZWIYYDUWZRVQRTYJZCWQCOTTRAEEGSJUPNXMKTBNLOPBAFFIFKGYZJXHCRFLTCDNAGUQMWPSNTOZEVVOSOVQUXIAZHFJHCWGLSBKMGPGCMKJHFACXORYFBLJZOSVWVRMDNAZYBEG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.500454878666);
    msg.setSource(41863U);
    msg.setSourceEntity(66U);
    msg.setDestination(3845U);
    msg.setDestinationEntity(74U);
    msg.severity = 99U;
    msg.text.assign("JNZZXGHKKYANCQJXUDSXMNCJOFREFHODMREOGVMADLKPZBVTDXUDSKWQMQRLQYNTWESHWLLMJPZDCIXLQPXIXBZUMTWFKWZGACOJKWAYUUTIQYMGQYEPABTSORGODSEIVGNZHYNUBIMRBKFVVVNSXWRHRPDHTFZGYLTCPFREPNCSHQDTABIIKAWYXRUCBEIVSWAVFCRZOJGKDMAHTPIXMLBFLOPZYBKWUVAHSOCOFTBGELJNPNGI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.263838041394);
    msg.setSource(16143U);
    msg.setSourceEntity(120U);
    msg.setDestination(51582U);
    msg.setDestinationEntity(74U);
    msg.channel = 97;
    msg.value = -1887233301;
    msg.gain = 143U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.0987399346739);
    msg.setSource(50939U);
    msg.setSourceEntity(231U);
    msg.setDestination(32983U);
    msg.setDestinationEntity(145U);
    msg.channel = -84;
    msg.value = -967177948;
    msg.gain = 220U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.250248554747);
    msg.setSource(5530U);
    msg.setSourceEntity(130U);
    msg.setDestination(59452U);
    msg.setDestinationEntity(109U);
    msg.channel = -53;
    msg.value = -144123931;
    msg.gain = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.193728187063);
    msg.setSource(37665U);
    msg.setSourceEntity(227U);
    msg.setDestination(33553U);
    msg.setDestinationEntity(74U);
    msg.ch01 = 0.200566055272;
    msg.ch02 = 0.873916097505;
    msg.ch03 = 0.0846987330798;
    msg.ch04 = 0.51144334061;
    msg.ch05 = 0.306990220725;
    msg.ch06 = 0.656054948963;
    msg.ch07 = 0.527585811291;
    msg.ch08 = 0.37061618652;
    msg.ch09 = 0.257412328835;
    msg.ch10 = 0.256040688785;
    msg.ch11 = 0.964282516236;
    msg.ch12 = 0.273690983058;
    msg.ch13 = 0.974141312087;
    msg.ch14 = 0.977916108564;
    msg.ch15 = 0.939027690165;
    msg.ch16 = 0.0750068349914;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.783299918445);
    msg.setSource(53285U);
    msg.setSourceEntity(213U);
    msg.setDestination(54187U);
    msg.setDestinationEntity(169U);
    msg.ch01 = 0.458463113483;
    msg.ch02 = 0.317076302711;
    msg.ch03 = 0.578545053094;
    msg.ch04 = 0.999236173112;
    msg.ch05 = 0.332806784265;
    msg.ch06 = 0.906852920754;
    msg.ch07 = 0.445865686326;
    msg.ch08 = 0.417894717276;
    msg.ch09 = 0.953755537354;
    msg.ch10 = 0.783550175446;
    msg.ch11 = 0.747216513495;
    msg.ch12 = 0.393549695562;
    msg.ch13 = 0.45192856473;
    msg.ch14 = 0.54926955439;
    msg.ch15 = 0.322519025502;
    msg.ch16 = 0.821570937941;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.671244833387);
    msg.setSource(42441U);
    msg.setSourceEntity(251U);
    msg.setDestination(43198U);
    msg.setDestinationEntity(196U);
    msg.ch01 = 0.726884258874;
    msg.ch02 = 0.143081002559;
    msg.ch03 = 0.603934177633;
    msg.ch04 = 0.372347795946;
    msg.ch05 = 0.913813758017;
    msg.ch06 = 0.211740575352;
    msg.ch07 = 0.668794889303;
    msg.ch08 = 0.0946882238381;
    msg.ch09 = 0.020004239685;
    msg.ch10 = 0.342785481825;
    msg.ch11 = 0.632247299812;
    msg.ch12 = 0.801110930933;
    msg.ch13 = 0.609633674137;
    msg.ch14 = 0.0844491137168;
    msg.ch15 = 0.134294786482;
    msg.ch16 = 0.506184390537;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.322725790537);
    msg.setSource(11184U);
    msg.setSourceEntity(228U);
    msg.setDestination(46964U);
    msg.setDestinationEntity(126U);
    msg.value = 0.414520181723;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.700218916581);
    msg.setSource(45676U);
    msg.setSourceEntity(202U);
    msg.setDestination(50785U);
    msg.setDestinationEntity(159U);
    msg.value = 0.477651784235;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.874923806109);
    msg.setSource(2119U);
    msg.setSourceEntity(21U);
    msg.setDestination(54862U);
    msg.setDestinationEntity(54U);
    msg.value = 0.740978404556;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.23030243463);
    msg.setSource(33700U);
    msg.setSourceEntity(41U);
    msg.setDestination(39875U);
    msg.setDestinationEntity(226U);
    msg.op = 175U;
    msg.lat = 0.55403789391;
    msg.lon = 0.536443603243;
    msg.height = 0.240031775314;
    msg.depth = 0.127040363639;
    msg.alt = 0.549834740557;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.266179656408);
    msg.setSource(2036U);
    msg.setSourceEntity(69U);
    msg.setDestination(6142U);
    msg.setDestinationEntity(127U);
    msg.op = 227U;
    msg.lat = 0.731350631262;
    msg.lon = 0.830452798157;
    msg.height = 0.758901607645;
    msg.depth = 0.419303972575;
    msg.alt = 0.934643862876;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.357676355148);
    msg.setSource(59249U);
    msg.setSourceEntity(181U);
    msg.setDestination(35175U);
    msg.setDestinationEntity(11U);
    msg.op = 211U;
    msg.lat = 0.590774684727;
    msg.lon = 0.299233860762;
    msg.height = 0.226908140882;
    msg.depth = 0.748553729689;
    msg.alt = 0.463450085295;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExpandingSquare msg;
    msg.setTimeStamp(0.0498602399977);
    msg.setSource(18362U);
    msg.setSourceEntity(184U);
    msg.setDestination(41648U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.792401209039;
    msg.lon = 0.699357054298;
    msg.z = 0.0331136814238;
    msg.z_units = 81U;
    msg.width = 0.917457341619;
    msg.hstep = 0.48380747185;
    msg.speed = 0.475833538647;
    msg.speed_units = 100U;
    msg.bearing = 0.0990869197147;
    msg.curve_right = 230U;
    msg.custom.assign("DJKXYRHITLGYXNPGEZFKIIWIOJOXXCNITTZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExpandingSquare #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExpandingSquare msg;
    msg.setTimeStamp(0.84649399799);
    msg.setSource(9681U);
    msg.setSourceEntity(30U);
    msg.setDestination(12440U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.537487093376;
    msg.lon = 0.108308664327;
    msg.z = 0.37665332269;
    msg.z_units = 84U;
    msg.width = 0.40809057806;
    msg.hstep = 0.69149560677;
    msg.speed = 0.736715132544;
    msg.speed_units = 229U;
    msg.bearing = 0.352048018411;
    msg.curve_right = 206U;
    msg.custom.assign("NHJFGGPRJFWQLYKIJBXVXXBOEEFHDOLHMITKVUWCAUEAJJATBBPYUGTAYWSCCAMWRYJZZCRKJIIQNPJVSKMYHXZBVPOAYOIESKGCRSOFLOMNFINCNORBSNPWHGGNRIRMTLFMLMDZPKXHQTWMVQEOJEAOVLNPVEBQAQGXKDACQHWEXGQIWZWEPRLURVYMCTPZZXLIGHQTLJSUDVWFTBXUYGPSTDAEUKYFDUNKDMNHKSDSVY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExpandingSquare #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExpandingSquare msg;
    msg.setTimeStamp(0.171942850774);
    msg.setSource(12223U);
    msg.setSourceEntity(155U);
    msg.setDestination(55048U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.913024571091;
    msg.lon = 0.914082169506;
    msg.z = 0.0247516951768;
    msg.z_units = 167U;
    msg.width = 0.250951922759;
    msg.hstep = 0.755547055931;
    msg.speed = 0.461798932451;
    msg.speed_units = 32U;
    msg.bearing = 0.823196844502;
    msg.curve_right = 131U;
    msg.custom.assign("ZVCLVUFHHJKSMYEKIEGFZAEMLBRXHHMEZRGHGFOLXWYQYWFXKTVMQWHPDCXQRGKCFVWKQFFGSSQQGBOYDLATNIINAAUVGOEPTIZNBRJFBHOAYLZXAENYTWJFZPFEJPUAJPVGDLZIMUCWEXPXWKIAQVAVCHO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExpandingSquare #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
