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
// IMC XML MD5: 21b03be7d737aa06e5dfbad56df2b911                            *
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
    msg.setTimeStamp(0.946297721676);
    msg.setSource(12455U);
    msg.setSourceEntity(26U);
    msg.setDestination(65176U);
    msg.setDestinationEntity(37U);
    msg.state = 92U;
    msg.flags = 223U;
    msg.description.assign("FXDZTJLETNCDAMZGVYUFQOWETCPMDRQYPSNGZMAMWBNVIJNEKFGWDKHALSYLQIEXSNDLZMJWLICPFFANRKCDFYBXVYBJSCHVTAJLUPHYJGUBWVPTRMUDZOELXIBXHKREFQUHNJTMZCZKPZWONAXMPMUUURTXRSQFTBOWRWINLJSQOWSELCSXVYBZJQGWIJHGLCVRGGGIRTXBKHVVYTUNPXAEHYAIOSFDEC");

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
    msg.setTimeStamp(0.738257785739);
    msg.setSource(45413U);
    msg.setSourceEntity(20U);
    msg.setDestination(37498U);
    msg.setDestinationEntity(133U);
    msg.state = 251U;
    msg.flags = 92U;
    msg.description.assign("NNDYYTGPTGEQROCZBLJROPYTKKJBDEXFWUUJZKPIGJQMHHWKRITLGJXGHFFJGACGOQFPAULPYNNVZLCEVVICKSXVLUXQJABVIPEOORXHZ");

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
    msg.setTimeStamp(0.270819480193);
    msg.setSource(3515U);
    msg.setSourceEntity(248U);
    msg.setDestination(39872U);
    msg.setDestinationEntity(187U);
    msg.state = 173U;
    msg.flags = 46U;
    msg.description.assign("NVGJLXDKSPVUYLOOYJZXWUORFMXBZKYSBKTBJIRRHAANSOKYZUVENECGFXRXTISWSILSOILYCISCWMZQGFYWWQMXRNEFTTOUOUVCPGPXIDQDQPKNDBJHGRGPMJPWZVEMBEJUFLJHLVECSMUCHCNCBYWAMLNNUBZQMHIICKZAJIVPPDJNTKHOOFESHFGZQLHYLYKJDVBXVHAADRHMQGNKYWTQQASCWLDRQ");

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
    msg.setTimeStamp(0.261109695173);
    msg.setSource(51154U);
    msg.setSourceEntity(98U);
    msg.setDestination(50174U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.982582674586);
    msg.setSource(25005U);
    msg.setSourceEntity(56U);
    msg.setDestination(27161U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.846457377977);
    msg.setSource(38752U);
    msg.setSourceEntity(105U);
    msg.setDestination(38336U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.806170978333);
    msg.setSource(37477U);
    msg.setSourceEntity(74U);
    msg.setDestination(25344U);
    msg.setDestinationEntity(253U);
    msg.id = 187U;
    msg.label.assign("ZLITMERCDQLITOBRLZCDERNSWJTSAALYDPLVTXIHHNLVCAQOYSWBDQAFTGGQXJHVGACKMPLZURYVROJGEPFVBAJSKZTUGUMZOWVFMHUOWFKXSPDDYIIPDZIEYJU");
    msg.component.assign("YFQDMZPLBHQQHJMVBCMODWQFDNNYBSRHBDCLRYNBVJQARXHMWFATIOPKVZBGFOEMXQCQCDEZKXSLMPWBTRURAMEZXLXQJBCOTNZWDVKLEMUSYSXOIPGTFUEIJUSGVSXTRLIERCKKGEUJBRFYCLVISORVPEAIFKGANTGJNSMXUHOGYOGOHYKUWTAMAPQVUCCWNYIHKTANYXEZZRJTWZNAQHWZXPPDVUCWGFDOFDEIVFYSDJPIZAHTLSJBGIW");
    msg.act_time = 34938U;
    msg.deact_time = 21825U;

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
    msg.setTimeStamp(0.73232738691);
    msg.setSource(58117U);
    msg.setSourceEntity(97U);
    msg.setDestination(62012U);
    msg.setDestinationEntity(4U);
    msg.id = 252U;
    msg.label.assign("ZHGIVDSAALZMTQZTNHXOWVXVTBSCCSRRLMKWZOCVQAVEJMEJLBRHCCCNPEXBOXXTERLGDOJAVJNVXSKZLGIQFGZSAUYKAOUYZPUMVBTMJFYGQMTWQBIJOWINYZLGDCLJJKQWATZRCXVPRRUAN");
    msg.component.assign("SVGVILVDERSEXXJWOUTWQZCZMEZTTLOBCCFCFNDLRPABQMOXWCXUTNISRBRRNXOHTYYDINMZTPFRKXJWPZOUJLYYOZDHOBQFLIUCWSMPQBYQCWSSDTLKQPBVGREADUOYDNLNKPXGAPDAMINZASNVFKJJTHKLHJAHFHDEMFWSWAFXUUFYLPCHIGBPERXMEZGC");
    msg.act_time = 13382U;
    msg.deact_time = 14410U;

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
    msg.setTimeStamp(0.0166494859401);
    msg.setSource(51976U);
    msg.setSourceEntity(186U);
    msg.setDestination(52448U);
    msg.setDestinationEntity(200U);
    msg.id = 94U;
    msg.label.assign("VHXBFKSURXINLGEDOXLVBKSRUTIJFDDBTEUTRPYPEOMNXTMXVNJIIQRBLOHYNNBIATMBPWZUZVOMGJCGKELNDMUVQUOZAHWRPPZZDEFBRQDSCBZEFOOMIMFGASBCQKGFH");
    msg.component.assign("DXUEVQRPKHUAHDTNJSPPTKSSVJKAAMDFHBDZNFJTUOAQVZCBMRZQMCGXRMEXINCVPJGCIMDQMUWQDGZHKPWGQLCZOKSCXAAIKWRCYEJGXRISHTTEZPWCLYRQLLOTDGFZXOWJDMVSSZMUFAGHIHUK");
    msg.act_time = 26706U;
    msg.deact_time = 8845U;

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
    msg.setTimeStamp(0.173537059371);
    msg.setSource(34528U);
    msg.setSourceEntity(144U);
    msg.setDestination(21659U);
    msg.setDestinationEntity(228U);
    msg.id = 58U;

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
    msg.setTimeStamp(0.870950275512);
    msg.setSource(12649U);
    msg.setSourceEntity(84U);
    msg.setDestination(11124U);
    msg.setDestinationEntity(149U);
    msg.id = 216U;

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
    msg.setTimeStamp(0.439713640739);
    msg.setSource(52473U);
    msg.setSourceEntity(199U);
    msg.setDestination(40366U);
    msg.setDestinationEntity(1U);
    msg.id = 134U;

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
    msg.setTimeStamp(0.680716351304);
    msg.setSource(59492U);
    msg.setSourceEntity(228U);
    msg.setDestination(62499U);
    msg.setDestinationEntity(213U);
    msg.op = 90U;
    msg.list.assign("UKFROCKHAKCQYZNWPYNZWXTDWELLILHSQPUWKROQVYKPTXFIGSBZPGHMLGBOIOWRKBXCAUVRFZLAMXUGEUTTXFYJNVOZQHCREWZCZYMDHAQVAFENOIBHPTOSLUJPLVFGGMCWQULZKMFHPIAHDBBZVEJJUBNDMNSMNOJFQIYGWDMEXAXABKSMXIHFZETTYVDGHJRUSIKYNSQVRUGASBIYDP");

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
    msg.setTimeStamp(0.277217927789);
    msg.setSource(49208U);
    msg.setSourceEntity(148U);
    msg.setDestination(61783U);
    msg.setDestinationEntity(107U);
    msg.op = 106U;
    msg.list.assign("UDFVNIDGSQGKSBNHPJKDEIFLXADEPRWVPWVYCZEYGMXCIODOGWNWTQOYYGAZCKSVDXFPLGTZTREDLKVRSALWLLNMRNANMJDVUAXAINFPBOPEYLUSFYQBPRAGUEWQWJHGDZJAESMZUHFYCKKOSZIUXYJKMEQGJOIQVMEVRJCXRDCPAMHKVLJGPTSJHBYFXTHHQQRUUOFNXLIERNIOWTHXWBCOS");

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
    msg.setTimeStamp(0.812217435956);
    msg.setSource(37404U);
    msg.setSourceEntity(150U);
    msg.setDestination(13147U);
    msg.setDestinationEntity(120U);
    msg.op = 217U;
    msg.list.assign("GBREMRFJYCMNLDLEKTGOOGAEZQMNTOZKSYRDPZEVWJPGGZVJLABRLEFILJRFRJQTGUUCOQIAGEPXKIXDRUMLPDXEMBQYZV");

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
    msg.setTimeStamp(0.0860366736871);
    msg.setSource(62202U);
    msg.setSourceEntity(89U);
    msg.setDestination(21445U);
    msg.setDestinationEntity(6U);
    msg.value = 191U;

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
    msg.setTimeStamp(0.138521166628);
    msg.setSource(60869U);
    msg.setSourceEntity(63U);
    msg.setDestination(10739U);
    msg.setDestinationEntity(4U);
    msg.value = 120U;

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
    msg.setTimeStamp(0.559995732527);
    msg.setSource(5764U);
    msg.setSourceEntity(229U);
    msg.setDestination(44749U);
    msg.setDestinationEntity(127U);
    msg.value = 50U;

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
    msg.setTimeStamp(0.869627505421);
    msg.setSource(3526U);
    msg.setSourceEntity(2U);
    msg.setDestination(57143U);
    msg.setDestinationEntity(7U);
    msg.consumer.assign("KQBAVXCVJWHYOBQBSHWBQDLUYWFJCYIYJFGFBVZDXZHDSIIHSXYATMMNTIRPFVNAQIUTFBFHDDPTJHNY");
    msg.message_id = 21089U;

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
    msg.setTimeStamp(0.648869238555);
    msg.setSource(24857U);
    msg.setSourceEntity(27U);
    msg.setDestination(47195U);
    msg.setDestinationEntity(67U);
    msg.consumer.assign("JROJINNAOSFZMQCVVNFRJMCDWBTMUSQOHRNIJHCYUSQZYALRSBUSCCMHFUJNDTKZTAYMAYEGOTQHWRMQKWVV");
    msg.message_id = 36717U;

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
    msg.setTimeStamp(0.923082000373);
    msg.setSource(37781U);
    msg.setSourceEntity(129U);
    msg.setDestination(16859U);
    msg.setDestinationEntity(18U);
    msg.consumer.assign("GGZSMNNOGADFBEFAGWXANMPXWFSIRJMEBJHIZWLFMUSZJKJPWRXNVQOXUBODAPIVFQSCJCJBQBQCCIHKIIYVEXPNMZKJXLRYEXHVSWYAZTYSAFT");
    msg.message_id = 6987U;

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
    msg.setTimeStamp(0.609551714567);
    msg.setSource(13076U);
    msg.setSourceEntity(244U);
    msg.setDestination(49111U);
    msg.setDestinationEntity(221U);
    msg.type = 91U;

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
    msg.setTimeStamp(0.817201328774);
    msg.setSource(20950U);
    msg.setSourceEntity(215U);
    msg.setDestination(2224U);
    msg.setDestinationEntity(102U);
    msg.type = 183U;

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
    msg.setTimeStamp(0.989478918824);
    msg.setSource(54476U);
    msg.setSourceEntity(41U);
    msg.setDestination(47065U);
    msg.setDestinationEntity(76U);
    msg.type = 157U;

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
    msg.setTimeStamp(0.813419419451);
    msg.setSource(12580U);
    msg.setSourceEntity(117U);
    msg.setDestination(28327U);
    msg.setDestinationEntity(28U);
    msg.op = 102U;

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
    msg.setTimeStamp(0.545080311505);
    msg.setSource(35541U);
    msg.setSourceEntity(164U);
    msg.setDestination(15873U);
    msg.setDestinationEntity(233U);
    msg.op = 54U;

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
    msg.setTimeStamp(0.795249267314);
    msg.setSource(59393U);
    msg.setSourceEntity(140U);
    msg.setDestination(36539U);
    msg.setDestinationEntity(176U);
    msg.op = 246U;

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
    msg.setTimeStamp(0.162869795639);
    msg.setSource(19390U);
    msg.setSourceEntity(44U);
    msg.setDestination(60207U);
    msg.setDestinationEntity(93U);
    msg.total_steps = 19U;
    msg.step_number = 147U;
    msg.step.assign("SJFEWUHBFQEPHMPTQMJZNPUAANIKDHCPRVERLSCMGAKXDE");
    msg.flags = 224U;

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
    msg.setTimeStamp(0.999045406511);
    msg.setSource(6851U);
    msg.setSourceEntity(161U);
    msg.setDestination(38626U);
    msg.setDestinationEntity(101U);
    msg.total_steps = 228U;
    msg.step_number = 195U;
    msg.step.assign("IHVPGQSEYKNUYFOTRYWDUHZCHFLQEOXPIKPADMFZSXOIXYJSRWPBPMPAJGVVNUFLCAIOAZASVRGSXTMDLUEKCEVUJOHZIHWTKYBGWUHXGQCFKRGLWSEJTTGLWNQNLFNHJQXS");
    msg.flags = 204U;

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
    msg.setTimeStamp(0.115414650803);
    msg.setSource(49968U);
    msg.setSourceEntity(22U);
    msg.setDestination(41516U);
    msg.setDestinationEntity(227U);
    msg.total_steps = 252U;
    msg.step_number = 239U;
    msg.step.assign("SXMURSRWIQDMNOHKMKHRUBOMLFYQKFBROANILKCLNOWDEGTHQCAXNCMVIXPKXYLGIWNWQJNEYFGRUXWPIVNTYMKFDUHFOJKFAYKBLBONJCQFWVDPXSSBCQESLVJVWSVJAESTQBTZDDOUUYBOCYGMHFURVGMHLFWCVJEHSYE");
    msg.flags = 248U;

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
    msg.setTimeStamp(0.331030088493);
    msg.setSource(64326U);
    msg.setSourceEntity(118U);
    msg.setDestination(25875U);
    msg.setDestinationEntity(189U);
    msg.state = 122U;
    msg.error.assign("OLQJIHRKDBGZRCLMAUSQWDGLVADMRQSWSEHSLFKXTVDBJHVOAFZGIQEMRPYFQAFIUDYHVSOJ");

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
    msg.setTimeStamp(0.920833095957);
    msg.setSource(31258U);
    msg.setSourceEntity(238U);
    msg.setDestination(15550U);
    msg.setDestinationEntity(115U);
    msg.state = 131U;
    msg.error.assign("SEEIGDJQXWOFIDCTATOXKNDEVYWVKRNQHPPFVVYJZAZDFEUHAJTUBMNQKMFHUQFAGICASCPNVGPAPOECTWPICBHVCEDHRRKUURZLHNZDTCMORHFAJYCLSZLXERSQZSQCXJOKSZUAWFXVOGLWQPWNTBWXBDQYMKRR");

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
    msg.setTimeStamp(0.849932915765);
    msg.setSource(31705U);
    msg.setSourceEntity(213U);
    msg.setDestination(24588U);
    msg.setDestinationEntity(195U);
    msg.state = 62U;
    msg.error.assign("PKJRWOQBCUESUOQCSZTUUNYKHJHZIXNXXZHYLGQRYONYFFZDEAMLXKMIRHMTIGMZEWIBPKOHVQRSZVECNXVWWYPYPOLDAUUFDBCILCKASRTWBYEPYJQPGKDCDSNOOFBGUZVPOOLSDFEIDFBOICQLNRZNWQAMLRYRJAXTMEMNJFWQCTDASVYVUMTPKBCANTSXHFBQKTZFHXWJUMBESUILMRGGPLXDEJVLPZBGHJTVAHAFIXHJEITQKGJANG");

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
    msg.setTimeStamp(0.972651248686);
    msg.setSource(27576U);
    msg.setSourceEntity(150U);
    msg.setDestination(47504U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.157334293017);
    msg.setSource(45504U);
    msg.setSourceEntity(212U);
    msg.setDestination(15977U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.277757940938);
    msg.setSource(34591U);
    msg.setSourceEntity(6U);
    msg.setDestination(32083U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.840357357677);
    msg.setSource(34390U);
    msg.setSourceEntity(146U);
    msg.setDestination(5614U);
    msg.setDestinationEntity(173U);
    msg.op = 15U;
    msg.speed_min = 0.413122120406;
    msg.speed_max = 0.522907356573;
    msg.long_accel = 0.248600142635;
    msg.alt_max_msl = 0.170121265038;
    msg.dive_fraction_max = 0.0415835354678;
    msg.climb_fraction_max = 0.0552647785569;
    msg.bank_max = 0.178258889051;
    msg.p_max = 0.26617230457;
    msg.pitch_min = 0.240138836693;
    msg.pitch_max = 0.654773719409;
    msg.q_max = 0.549977165913;
    msg.g_min = 0.815663135697;
    msg.g_max = 0.183085760208;
    msg.g_lat_max = 0.399499089532;
    msg.rpm_min = 0.918349861127;
    msg.rpm_max = 0.295311741114;
    msg.rpm_rate_max = 0.442539640078;

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
    msg.setTimeStamp(0.214005711778);
    msg.setSource(60620U);
    msg.setSourceEntity(213U);
    msg.setDestination(42118U);
    msg.setDestinationEntity(121U);
    msg.op = 157U;
    msg.speed_min = 0.75152407769;
    msg.speed_max = 0.125055630569;
    msg.long_accel = 0.4226682832;
    msg.alt_max_msl = 0.542366549886;
    msg.dive_fraction_max = 0.65702936949;
    msg.climb_fraction_max = 0.929639689433;
    msg.bank_max = 0.534527882732;
    msg.p_max = 0.335142666571;
    msg.pitch_min = 0.47610935134;
    msg.pitch_max = 0.435428565629;
    msg.q_max = 0.318712572103;
    msg.g_min = 0.681222794137;
    msg.g_max = 0.105561006169;
    msg.g_lat_max = 0.924302393745;
    msg.rpm_min = 0.40044720616;
    msg.rpm_max = 0.446991162886;
    msg.rpm_rate_max = 0.276230339175;

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
    msg.setTimeStamp(0.97533071516);
    msg.setSource(64881U);
    msg.setSourceEntity(105U);
    msg.setDestination(35179U);
    msg.setDestinationEntity(199U);
    msg.op = 248U;
    msg.speed_min = 0.329160280302;
    msg.speed_max = 0.674950285553;
    msg.long_accel = 0.15115575866;
    msg.alt_max_msl = 0.143868859457;
    msg.dive_fraction_max = 0.9620968006;
    msg.climb_fraction_max = 0.74382585054;
    msg.bank_max = 0.411147466152;
    msg.p_max = 0.571825256373;
    msg.pitch_min = 0.727295043334;
    msg.pitch_max = 0.687382671082;
    msg.q_max = 0.495169348;
    msg.g_min = 0.11205358728;
    msg.g_max = 0.161427535646;
    msg.g_lat_max = 0.319452265064;
    msg.rpm_min = 0.432598999057;
    msg.rpm_max = 0.698829389788;
    msg.rpm_rate_max = 0.104569235392;

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
    msg.setTimeStamp(0.213056945235);
    msg.setSource(17296U);
    msg.setSourceEntity(5U);
    msg.setDestination(54430U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.546239789456);
    msg.setSource(24365U);
    msg.setSourceEntity(55U);
    msg.setDestination(52537U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.999101825889);
    msg.setSource(13430U);
    msg.setSourceEntity(123U);
    msg.setDestination(41393U);
    msg.setDestinationEntity(152U);
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 151U;
    tmp_msg_0.time_remain = 0.273622560725;
    tmp_msg_0.sched_time = 0.927352935917;
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
    msg.setTimeStamp(0.631602469287);
    msg.setSource(16489U);
    msg.setSourceEntity(95U);
    msg.setDestination(39293U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.679431514436;
    msg.lon = 0.204905802218;
    msg.height = 0.559166816794;
    msg.x = 0.779204667949;
    msg.y = 0.0989824374319;
    msg.z = 0.0935515405315;
    msg.phi = 0.889624992196;
    msg.theta = 0.977482386917;
    msg.psi = 0.0722931592345;
    msg.u = 0.0629449041774;
    msg.v = 0.100185184325;
    msg.w = 0.012562150046;
    msg.p = 0.652120062474;
    msg.q = 0.678039525994;
    msg.r = 0.329213801385;
    msg.svx = 0.718423437599;
    msg.svy = 0.342507550548;
    msg.svz = 0.697867345712;

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
    msg.setTimeStamp(0.718671719067);
    msg.setSource(34860U);
    msg.setSourceEntity(11U);
    msg.setDestination(43298U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.291518038438;
    msg.lon = 0.304423040207;
    msg.height = 0.116322641549;
    msg.x = 0.864426837949;
    msg.y = 0.813986582469;
    msg.z = 0.535338816802;
    msg.phi = 0.00425135113823;
    msg.theta = 0.711566795242;
    msg.psi = 0.934302167592;
    msg.u = 0.0103654455762;
    msg.v = 0.226206803107;
    msg.w = 0.134429611646;
    msg.p = 0.026608913214;
    msg.q = 0.662819774848;
    msg.r = 0.533960040862;
    msg.svx = 0.284355312456;
    msg.svy = 0.109986991417;
    msg.svz = 0.667789843744;

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
    msg.setTimeStamp(0.204353748965);
    msg.setSource(3809U);
    msg.setSourceEntity(58U);
    msg.setDestination(29177U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.605027471003;
    msg.lon = 0.61259830301;
    msg.height = 0.351337780915;
    msg.x = 0.143033713331;
    msg.y = 0.0654354940175;
    msg.z = 0.386906835052;
    msg.phi = 0.941693683263;
    msg.theta = 0.149358171529;
    msg.psi = 0.439158694066;
    msg.u = 0.197526129788;
    msg.v = 0.519234231476;
    msg.w = 0.427448343569;
    msg.p = 0.984485341944;
    msg.q = 0.673016280114;
    msg.r = 0.829626254013;
    msg.svx = 0.706299275857;
    msg.svy = 0.393822576181;
    msg.svz = 0.489520528234;

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
    msg.setTimeStamp(0.228705059449);
    msg.setSource(6356U);
    msg.setSourceEntity(127U);
    msg.setDestination(29370U);
    msg.setDestinationEntity(63U);
    msg.op = 15U;
    msg.entities.assign("RXUNYBTYSBENXMHWTPUUCNHZOUWVNUVLXHOFWFWKIGZTRDWGSDYSTQVWECVXOIFNQAQRTJPYKIRMJGEDXTXNICPAEJZLSENCRHVYCUMVLVSKUKAOJOHKJEJBQHLSNMSDHMRFZZEQPLCARCDALWNOVRJIKAHRKIIXPQSOXGGLMJZCYZDZBEPASKYPBSUCY");

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
    msg.setTimeStamp(0.302641498826);
    msg.setSource(23970U);
    msg.setSourceEntity(105U);
    msg.setDestination(64852U);
    msg.setDestinationEntity(59U);
    msg.op = 171U;
    msg.entities.assign("NUDYLHUBSSITQOAUJDEER");

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
    msg.setTimeStamp(0.685731668217);
    msg.setSource(7927U);
    msg.setSourceEntity(12U);
    msg.setDestination(433U);
    msg.setDestinationEntity(60U);
    msg.op = 142U;
    msg.entities.assign("YFNXJNJQKFXYPTXNQYUCROMHXUPGSXXWILMRJNWDIYWZCUJXDIKSLIVJDLYSPQHTHAGWPGGEBSGNSDKRMVCZAYSTHEPUPEFEALOHIRKTYZRCPGOVOZIVFUEWVLQLOZJCDEMERKDLQXTBDOOWHKVWAFMUALEQBXUTZGWFEGRAHHARIIMBIEQJMUOQZRJXYYYSNBMFHTF");

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
    msg.setTimeStamp(0.724540772954);
    msg.setSource(62599U);
    msg.setSourceEntity(21U);
    msg.setDestination(41456U);
    msg.setDestinationEntity(171U);
    msg.type = 35U;
    msg.speed = 23194U;
    const char tmp_msg_0[] = {-86, 68, 52, -48, -12, 124, -31, -70, -4, 96, -101, -19, -26, -30, -14, 91, -86, -96, 102, 119, 105, -73, 34, 90, 124, 4, 50, -113, -76, 53, -16, -98, -128, -68, -11, 39, 10, -47, 93, -37, 72, 60, -73, -19, 120, 120, -14, -59, -56, -108, 88, -104, 15, 115, -19, -61, 55, 61, 15, -82, -40, -125, -10, -21, -43, 28, 103, 56, -88, 43, -93, 122, -105, 117};
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
    msg.setTimeStamp(0.0515696696129);
    msg.setSource(15545U);
    msg.setSourceEntity(39U);
    msg.setDestination(28320U);
    msg.setDestinationEntity(211U);
    msg.type = 194U;
    msg.speed = 15572U;
    const char tmp_msg_0[] = {-46, -25, -89, 108, -64, -125, 95, 12, -5, -36, -82, -120, 80, -84, 89, 104, -63, -95, -22, 111, -93, -90, -81, 99, 68, 86, -93, -22, 103, 66, -4, 49, -43, -64, -25, -101, 16, -123, 36, 35, -30, 69, -21, -59, -76, 8, -31, -91, -86, -30, -102, -56, -52, -43, 116, -59, -28, -12, 2, 50, -65, -47, 18, 100, 0, 80, -115, 73, 4, 23, 104, 82, 116, -104, -99, -42, -119, 70, 38, 74, 101, 76, -20, 57, -64, -30, 57, 112, -88, -36, 48, -115, 93, -19, -84, 36, -19, -24, -39, 13, 37, 8, -102, 77, 108, 32, 57, 87, -67, -41, 120, 32, -109, -75, -21, -122, -46, 11, 100, -127, 23, 7, 100, -31, 109, 14, 100, 90, 33, -75, -13, 35, 92, 25, -9, 95, 76, 101, 71, 30, -54, -64, -22, -22, 106, 73, 110, -40, -40, 62, 96, -118, -114, -54, -96, -2, 50, -98, 1, 122, -65, -88, 32, -18, 5};
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
    msg.setTimeStamp(0.810881112356);
    msg.setSource(45073U);
    msg.setSourceEntity(54U);
    msg.setDestination(49673U);
    msg.setDestinationEntity(62U);
    msg.type = 200U;
    msg.speed = 25629U;
    const char tmp_msg_0[] = {47, 110, -58, 79, 4, 2, -55, 27, -55, 105, 113, -86, 87, -116, 19, 56, 2, 70, 26, -51, 86, 97, 107, 3, -16, 82, 65, 98, 112, 69, 77, 68, -6, -48, -116, -41, -67, -41, 25, 85, -31, -57, -42, -74, -46, 109, 55, -30, -124, 22, 34, -69, -98, -76, 18, 81, -44, 126, -46, 58, 43, -76, -126, -63, 60, -94, -123, 37, -87, 125, 60, 97, -66, -20};
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
    msg.setTimeStamp(0.799558035199);
    msg.setSource(27066U);
    msg.setSourceEntity(94U);
    msg.setDestination(18U);
    msg.setDestinationEntity(202U);
    msg.op = 251U;
    msg.tas2acc_pgain = 0.984532006661;
    msg.bank2p_pgain = 0.419264781742;

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
    msg.setTimeStamp(0.708193526321);
    msg.setSource(53851U);
    msg.setSourceEntity(186U);
    msg.setDestination(24352U);
    msg.setDestinationEntity(142U);
    msg.op = 211U;
    msg.tas2acc_pgain = 0.487866736109;
    msg.bank2p_pgain = 0.076733754154;

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
    msg.setTimeStamp(0.293443184983);
    msg.setSource(42835U);
    msg.setSourceEntity(117U);
    msg.setDestination(51580U);
    msg.setDestinationEntity(21U);
    msg.op = 0U;
    msg.tas2acc_pgain = 0.189040084555;
    msg.bank2p_pgain = 0.327986897565;

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
    msg.setTimeStamp(0.799372740784);
    msg.setSource(26098U);
    msg.setSourceEntity(161U);
    msg.setDestination(41162U);
    msg.setDestinationEntity(201U);
    msg.available = 445851195U;
    msg.value = 122U;

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
    msg.setTimeStamp(0.372437161095);
    msg.setSource(57489U);
    msg.setSourceEntity(144U);
    msg.setDestination(17112U);
    msg.setDestinationEntity(60U);
    msg.available = 1164937024U;
    msg.value = 90U;

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
    msg.setTimeStamp(0.722562252124);
    msg.setSource(58387U);
    msg.setSourceEntity(185U);
    msg.setDestination(61700U);
    msg.setDestinationEntity(244U);
    msg.available = 1668309432U;
    msg.value = 182U;

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
    msg.setTimeStamp(0.906328813466);
    msg.setSource(38547U);
    msg.setSourceEntity(158U);
    msg.setDestination(42673U);
    msg.setDestinationEntity(190U);
    msg.op = 193U;
    msg.snapshot.assign("UIFFAQIIXCWCQFTRNRXNENJISBTYDCCJAXTFIQELGKDIWQNBQHGDAJZXYVHZMSZDZRIFAOBZRDBBMULNPPAHUDBWSREGKUFLMEXSFTYNBZHQJNPKSYUMAADMMHRYHSHHJHLZGOFJJDKKVTCD");
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.865879385043;
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
    msg.setTimeStamp(0.741439462552);
    msg.setSource(33622U);
    msg.setSourceEntity(4U);
    msg.setDestination(58564U);
    msg.setDestinationEntity(243U);
    msg.op = 217U;
    msg.snapshot.assign("GJPAIINULYJRUFSQZVWQITKEORPRWFHBXPCMGGMJOBKQLLSOHKNKKSKRDIBFCJRPHAFNEORMQMCVXCULWDXJEWIHZOMWNDGXMCEBTWAFNXNQSD");
    IMC::Heartbeat tmp_msg_0;
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
    msg.setTimeStamp(0.118501491711);
    msg.setSource(55173U);
    msg.setSourceEntity(132U);
    msg.setDestination(10685U);
    msg.setDestinationEntity(140U);
    msg.op = 198U;
    msg.snapshot.assign("DIEMBPXJWHSAPKEZKHLU");
    IMC::GetWorldCoordinates tmp_msg_0;
    tmp_msg_0.tracking = 161U;
    tmp_msg_0.lat = 0.153444166059;
    tmp_msg_0.lon = 0.99466116529;
    tmp_msg_0.x = 0.536331140147;
    tmp_msg_0.y = 0.370618348258;
    tmp_msg_0.z = 0.13348824111;
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
    msg.setTimeStamp(0.843309176759);
    msg.setSource(53552U);
    msg.setSourceEntity(184U);
    msg.setDestination(21018U);
    msg.setDestinationEntity(58U);
    msg.op = 191U;
    msg.name.assign("JLAUUHHGWTKTDBBBBVNTMAPAZRVSHQZMOHUXRMTAQRGKARBAYXGMLSONBJSMDYIXDQBYHVFIOACQPWKLIOKPSAQJQUMXHTNKISZRMUDDPGMFOQJJNHYTPWPFEFUCBIEHKWGEUZRGRSTWQGBXDVQ");

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
    msg.setTimeStamp(0.192823842863);
    msg.setSource(48377U);
    msg.setSourceEntity(227U);
    msg.setDestination(29879U);
    msg.setDestinationEntity(122U);
    msg.op = 133U;
    msg.name.assign("VCMIBBBSRUKCBVGNJULMTPMSQEUEFHLHZNFZRYZDAWXJYYSVNLCPGV");

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
    msg.setTimeStamp(0.305834001615);
    msg.setSource(29095U);
    msg.setSourceEntity(177U);
    msg.setDestination(9328U);
    msg.setDestinationEntity(202U);
    msg.op = 86U;
    msg.name.assign("XDJKOXPOHOWWZXLIKPBQWNFC");

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
    msg.setTimeStamp(0.515866636483);
    msg.setSource(7558U);
    msg.setSourceEntity(36U);
    msg.setDestination(18583U);
    msg.setDestinationEntity(117U);
    msg.type = 57U;
    msg.htime = 0.981234821718;
    msg.context.assign("RGWANAWIZIIPNPREYIEDPGLKXDMQNNWYHHBDXPEJUONTFWHHHSBLCZLTFLTXUMLGLJKZVOFIQUCTXJYATFQKKKAAWTTULZHBDUOHJAGVZVPEMIBJROYZKRMZQAYUYRUGDCFDJZXVEMNSIQQOYRGECBESPJZ");
    msg.text.assign("MHSNEMWOZAUWAXMIGNSDFIIQZMYJBBQBFSJDLUJ");

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
    msg.setTimeStamp(0.0399791156537);
    msg.setSource(5886U);
    msg.setSourceEntity(158U);
    msg.setDestination(54398U);
    msg.setDestinationEntity(17U);
    msg.type = 70U;
    msg.htime = 0.273059249006;
    msg.context.assign("BXKAFJEPWWTBKGKNJBFLTBWGGJKLHLPDAZRSOWONILQJETSOIEQWNUVMMYUXDZUPMOFYCYGDDSUIFXTCXOXJDNKOBXPAORBHJCAWCFAIVYJFLARNPFQDSVXNUSADHNEFENLHSIZPHEMRZVLZSHJSGIUMYRTHFJRSCGWTHWQGDZCPTORUJBCVGCZOBHMMQHRNQVWPCVEUMEBQGLOAAZICXRYAIDNIQ");
    msg.text.assign("FZNCPKICCCAUAPLTTWOBIYVWJNBMZFGDANGZVVLDHXCRULXBJI");

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
    msg.setTimeStamp(0.990347895353);
    msg.setSource(48992U);
    msg.setSourceEntity(191U);
    msg.setDestination(53674U);
    msg.setDestinationEntity(13U);
    msg.type = 242U;
    msg.htime = 0.0629314128749;
    msg.context.assign("ZLBLGOQHMFNBIYHYWKEQANYNGIULZUMDTZDAELPLJJHVCKMWHAMHEJBDIYNCPRMBUOJEGLRTCZZNBXOVBTDCVOCRQGYLMVDNFSMAJYIXPEWEMSMFNTJLSSKKNOSRDUXUGGHISODXQQRDYUVETRSEIXAHXNEXQPTIPCRFAA");
    msg.text.assign("FOMZZOTIRKXPKJNUTBWYBGZBHZCUCWLJKZOSDMSCHLDQXEYYDPUJZLYGTCMIGLUBGAJAEAIMNDHIOVNZEZBAFIYVJVXJMGRAUVOMVPJUGMVHKDNFNWXEXPFIUFTCDYVXRKZPOORKXLH");

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
    msg.setTimeStamp(0.537842727442);
    msg.setSource(29870U);
    msg.setSourceEntity(91U);
    msg.setDestination(41554U);
    msg.setDestinationEntity(221U);
    msg.command = 6U;
    msg.htime = 0.0598299211574;

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
    msg.setTimeStamp(0.00454414807647);
    msg.setSource(24537U);
    msg.setSourceEntity(70U);
    msg.setDestination(4189U);
    msg.setDestinationEntity(145U);
    msg.command = 135U;
    msg.htime = 0.271053468339;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 90U;
    tmp_msg_0.htime = 9.64046431501e-05;
    tmp_msg_0.context.assign("YFCZVDEEFRFLYCCSJSBGFCFAUBOOFYMRJKBKUNNWPNGUNAXWVHAZBBQEBOOISMVJRHZSRQBGSPTWMQMKCEXIHLGZXWUPLHCCQHKFXBFYXTAUXHDDWFXSJBITMHNLWYMVWPTWDPTYDKTMZYJUJQINUSCALUQEGVPLWILDICFELPSGNZJCEROMAIVKZMKJPQOOHIXYZVWEBPNTSLGUZRSQIDXJEOKEDOALPATVRZTNJGTAIROQGVM");
    tmp_msg_0.text.assign("CBBQMBNBGAHEKLIVVLJADINXPLQEWVEOKRZBHLJOIUFRECPHQDMHMDYLXTDZLIFUHNPHEOOFYSELCYRXMKNIYFRKOSWYJTZSU");
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
    msg.setTimeStamp(0.600475515603);
    msg.setSource(60590U);
    msg.setSourceEntity(32U);
    msg.setDestination(32817U);
    msg.setDestinationEntity(120U);
    msg.command = 164U;
    msg.htime = 0.960129521753;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 210U;
    tmp_msg_0.htime = 0.465254618044;
    tmp_msg_0.context.assign("IKDTRYAHFIAOTNZQQSVXYCGBAGOCEZRGNNCADPPMZDKEXZPSVIVJ");
    tmp_msg_0.text.assign("FCRSWMUKAKOOXOUIOQWJRIYQCIXLKTTZMXMEJSGUDNXETEUHTKNNALERMWFZRT");
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
    msg.setTimeStamp(0.779036193421);
    msg.setSource(51181U);
    msg.setSourceEntity(240U);
    msg.setDestination(56300U);
    msg.setDestinationEntity(159U);
    msg.op = 220U;
    msg.file.assign("HPQAMTHZGLYJYMQDCJIBPRNHPIYQCKYHPCNVJYKNJMZKDUWILFPKFFTJTVAESHZBEVGZLAYMMICUKYXQQRHUOSQYAXWLMDFBOKLAZUGPAKNLZEUDRBZLLPCMOSFIQCJDXZXGUXTXEQECXGVNNYWALHDFFURDGOWTVRDOQOSRUIVNKRGPHXWPNYMBQWM");

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
    msg.setTimeStamp(0.36157526699);
    msg.setSource(60797U);
    msg.setSourceEntity(55U);
    msg.setDestination(18526U);
    msg.setDestinationEntity(53U);
    msg.op = 191U;
    msg.file.assign("XCRRIIHBSIRAWYTPDOMUZGDKEDBITGQEGQDHDLIBCSVZHVTSCLSKMKEOIXN");

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
    msg.setTimeStamp(0.540605437622);
    msg.setSource(51796U);
    msg.setSourceEntity(163U);
    msg.setDestination(55844U);
    msg.setDestinationEntity(50U);
    msg.op = 206U;
    msg.file.assign("ZGABAXCPDXBWOETGEPSIHVKMECFNASYEDLRGGHZYUUFCPVIMKMKENYFJPVKSSJSDHXNXRTPDTPOVAFSVTLKWLWHJSQZUURGNYQGAEOATIQMJQAXZKZEO");

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
    msg.setTimeStamp(0.127516568375);
    msg.setSource(7073U);
    msg.setSourceEntity(98U);
    msg.setDestination(23785U);
    msg.setDestinationEntity(188U);
    msg.op = 75U;
    msg.clock = 0.952261783238;
    msg.tz = 90;

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
    msg.setTimeStamp(0.00216790171743);
    msg.setSource(57443U);
    msg.setSourceEntity(233U);
    msg.setDestination(3293U);
    msg.setDestinationEntity(92U);
    msg.op = 134U;
    msg.clock = 0.679456219414;
    msg.tz = -127;

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
    msg.setTimeStamp(0.860521653904);
    msg.setSource(8514U);
    msg.setSourceEntity(172U);
    msg.setDestination(31637U);
    msg.setDestinationEntity(181U);
    msg.op = 100U;
    msg.clock = 0.788350534019;
    msg.tz = 103;

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
    msg.setTimeStamp(0.680007511414);
    msg.setSource(57717U);
    msg.setSourceEntity(39U);
    msg.setDestination(177U);
    msg.setDestinationEntity(165U);
    msg.conductivity = 0.862734538401;
    msg.temperature = 0.984048368442;
    msg.depth = 0.141108217272;

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
    msg.setTimeStamp(0.675400013578);
    msg.setSource(60735U);
    msg.setSourceEntity(40U);
    msg.setDestination(21135U);
    msg.setDestinationEntity(29U);
    msg.conductivity = 0.595668782356;
    msg.temperature = 0.19768790796;
    msg.depth = 0.555287561338;

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
    msg.setTimeStamp(0.732595310964);
    msg.setSource(61910U);
    msg.setSourceEntity(216U);
    msg.setDestination(30342U);
    msg.setDestinationEntity(60U);
    msg.conductivity = 0.665703239674;
    msg.temperature = 0.745960210931;
    msg.depth = 0.924053557585;

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
    msg.setTimeStamp(0.687273895026);
    msg.setSource(32411U);
    msg.setSourceEntity(229U);
    msg.setDestination(9791U);
    msg.setDestinationEntity(23U);
    msg.altitude = 0.797249115618;
    msg.roll = 12075U;
    msg.pitch = 42225U;
    msg.yaw = 6593U;
    msg.speed = 10103;

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
    msg.setTimeStamp(0.779129521599);
    msg.setSource(46900U);
    msg.setSourceEntity(136U);
    msg.setDestination(11806U);
    msg.setDestinationEntity(184U);
    msg.altitude = 0.743058705115;
    msg.roll = 23089U;
    msg.pitch = 46353U;
    msg.yaw = 14995U;
    msg.speed = 24902;

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
    msg.setTimeStamp(0.756125729385);
    msg.setSource(49990U);
    msg.setSourceEntity(145U);
    msg.setDestination(54165U);
    msg.setDestinationEntity(131U);
    msg.altitude = 0.388289504283;
    msg.roll = 32707U;
    msg.pitch = 36978U;
    msg.yaw = 53394U;
    msg.speed = -23647;

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
    msg.setTimeStamp(0.430956969792);
    msg.setSource(49927U);
    msg.setSourceEntity(201U);
    msg.setDestination(26805U);
    msg.setDestinationEntity(128U);
    msg.altitude = 0.811186029423;
    msg.width = 0.721908418158;
    msg.length = 0.00194749112911;
    msg.bearing = 0.613214299464;
    msg.pxl = 15761;
    msg.encoding = 133U;
    const char tmp_msg_0[] = {-13, 105, 122, -64, 21, 0, 100, -34, -14, 89, -88, 16, -99, 6, -56, 64, 15, 83, 26, 10, 21, 81, -58, 4, -29, 100, -72, 59, 50, -103, 97, -123, -24, 54, -4, -128, -89, -49, 33, -72, 90, 125, 55, -79, 85, -103, 17, 66, 65, -94, -59, 48, 115, -39, 36, -13, -119, -71, 75, -115, -94, -57, -41, 91, -99, -114, -101, -21, 85, -124, 27, -62, 43, 87, -15, -18, -120, 10, 124, -27, 27, -23, 43, 12, 80, 19, 96, -121, 73, 48, -68, 103, -104, 120, 47, 7, -114, 36, -120, 19, -7, -39, -4, 72, 53, -117, -29, -55, 60, 32, -45, -13, 29, 3, -104, -93, 65, -69, -35, -44, 39, 18, 68, -121, -107, 37, 31, 96, 120, 68, -18, 61, -118, 123, -59, -128, -127, 4, 115, 111, 27, 80, 65, -32, 83, -117, -60, 25, -127, 54, -83, -71, 54, 90, -94, -79, 90, 20, 99, -30, 74, 79, 10, 29, -35, 48, 36, -86, 115, -114, -102, -111, -89, 57, -100, 92, -114, 86, -37, -119, -101, -126, 120, 80, -102, 101, -43, 10, 87, -82, -98, 63, -116, 9, -37, -115, -103, -93, -68, -115, -28, -28, -81, 46, 116, 105, 0, 44, 8, 17, -65, 14, -10, 80, -9, -108, 119, 32, 53, -7, -91, 40, 117, -83, -48, 122, -59, -33, 63, -117, 66, 6, -127, -113, 88, 108, -5, 82, 106};
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
    msg.setTimeStamp(0.167614015305);
    msg.setSource(52193U);
    msg.setSourceEntity(196U);
    msg.setDestination(17924U);
    msg.setDestinationEntity(133U);
    msg.altitude = 0.324762481119;
    msg.width = 0.166954909554;
    msg.length = 0.273160179907;
    msg.bearing = 0.639981667475;
    msg.pxl = 24314;
    msg.encoding = 224U;
    const char tmp_msg_0[] = {-51, 95, 64, -41, -5, -61, -51, -35, 98, -31, -85, 61, 113, 30, -122, 99, -117, 68, 41, -121, -40, -3, -120, -26, -88, 16, 107, 44, -122, 19, 4, 25, -86, 114, -119, -42, -91, -35, -57, 14, 81, -70, 65, 103, -34, -48, -125, -8, -25, 89, -127, -50, 25, 33, -66, 18, 111, 67, 42, -111, 63, -105, -47, 47, -6, -79, -39, -101, -36, -95, -105, 90, -55, 90, 14, -61, -38, 61, 117, 23, -112, -40, -84, 47, 27, 97, 10, 45, 105, -76, 110, -38, 21, -88, -106, 112, -123, -56, -63, -120, 101, -72, -89, 40, -44, 96, -96, -87, 90, -123, -49, 114, -23, -128, 20, 100, -95, 49, 2, -39, -61, -71, 104, 16, 22, 75, 116, 100, 89, 96, 114, 83, -108, -31, 88, -80, -34, -31, -92, 86, -15, 90, -35, -40, -8, -58, 82, 117, 56, 18, -114, -64, -26, 95, -34, 6, -12, -41, -28, 55, 13, 117, 82, 101, 11, -71, 1, 35, -122, 15, 97, 84, -121, 18, -30, 89, -82, 75, -41, 93, 36, 47, -40, -92, -66, 68, -40, 41, -100, 53, -34, -36, 39, 70, -93, 126, 7, 107, -74, -20, 69, -3, 27, 15, -53, 30, -59, -53, 124, 41, 36, 10, -26, 56, 60, 88, -93, 103, -84, -40, -20, -106, 73, 76, 45, 13, 110, 64, -3, 83, 108, -52, -98, 81, 6};
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
    msg.setTimeStamp(0.363298203556);
    msg.setSource(46782U);
    msg.setSourceEntity(242U);
    msg.setDestination(1456U);
    msg.setDestinationEntity(107U);
    msg.altitude = 0.963161452029;
    msg.width = 0.475103318012;
    msg.length = 0.309494384801;
    msg.bearing = 0.219441471521;
    msg.pxl = 4497;
    msg.encoding = 91U;
    const char tmp_msg_0[] = {-80, 106, 0, -123, 27, 2, -75, 91, 53, -93, -83, -18, -117, -17, -111, 68, -64, 54, -56, -46, 15, -19, -54, -124, -93, 7, -49, -6, 32, -54, 16, -36, 84, 107, -6, -12, -119, -10, -97, 125, 34, -121, 103, 116, 77, -40, -11, -49, -22, -116, 18, 86, 18, 110, 10, 65, -92, 6, -22, 4, 16, 118, 54, 112, -90, -99, -53, 40, -70, -58, -59, 82, 15, 2, -3, 36, -59, -44, 2, 11, -77, 104, 108, -43, -115, 93, -92, -97, -122, 84, -39, 38, -41, -41, -125, 39, -10, 29, -45, 86, -72, 14, -120, 32, 36, -64, 61, -85, 27, -84, 75, -126, 76, -79, -31, 92, -84, -80, -63, -6, -39, -85, -116, 4, 45, -102, 43, -87, -96, -94, -121, 34, -8, -63, 75, -120, 114, 63, 110, 27, 44, -1, -99, -26, 62, -111, 65, 14, -38, -110, 87, -3, -30, -15, 114, 4, -28, -1, 4, -107, 27, -78, -111, 91, -100, 93, -103, -25, -111, -61, 56, -14, -53, 77, -94, 95, 105, 51, -82, -128, -19, 48, -51, -44, 8, 14, -15, 105, -59, -119, -78, 87, -8, -125, 27, -13, 9, 84, 123, -37, -118, -94, -92, -15, -29, 68, 9, -12, 21, 44, 81, -4, 48, 84, 124, 10, 81, 85, 8, 126, 106, -80, -107, -113, -87, 88, -54, 23, 35, -14, 25, -123, 101, -18, 55, 76, 96, -107, -9, -37};
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
    msg.setTimeStamp(0.556058559628);
    msg.setSource(1844U);
    msg.setSourceEntity(238U);
    msg.setDestination(11326U);
    msg.setDestinationEntity(188U);
    msg.text.assign("NEUEGRSIQHXMAOWJZPOZUNTMAMIULFCCXFGPDVCENHAULQDPGXZBF");
    msg.type = 243U;

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
    msg.setTimeStamp(0.613730955116);
    msg.setSource(35298U);
    msg.setSourceEntity(68U);
    msg.setDestination(17883U);
    msg.setDestinationEntity(122U);
    msg.text.assign("ZEYYAYWOFGOPNHKLTYINDNOKZGIVRDJPIWPLHIJYKSVFZRNTRXLGEROMFBRJWZMTXTQXEUOYCZIEQXCXTAUWVJVCVUJKKXUBDIRNVPPUBAIVFYPVPTPLWDDBFTHLLOFEIOELSFZWILCIAXYDNMHXHGEMNWADCOQRMWXGGSCSOUHKFETPZSANQQUJYUJQAVESBMBLCNBDWKBYCZUHGNDBAASRSQUDKJHQZHKKTCGGOJMSMWPQRJRHLBGVMA");
    msg.type = 108U;

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
    msg.setTimeStamp(0.890728079648);
    msg.setSource(51919U);
    msg.setSourceEntity(54U);
    msg.setDestination(16594U);
    msg.setDestinationEntity(15U);
    msg.text.assign("VZHEMIUJQYUCCQWNDAVCLEOGETBANVKLXMFYIVZAKSPAGZVYHBBFNKCNZFOTFROEQGERKHSKJFFXOGIARNENRXRVJUNKPSTQGCOGSJYSMIFMVBPOBXMEWHQZWQWBYJPWDSYPWDUBCCTRIEGMLEYEKYTLUYTZXPGLDVWFAQMPHJNXFYCNZIAADHVBJLLDXMWQDAOHIZCLLJKQPAHKGPRFQTPDSTUSDBKUMLGSZJNWUIORSROBJRXTTUMVHID");
    msg.type = 209U;

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
    msg.setTimeStamp(0.373320831179);
    msg.setSource(17229U);
    msg.setSourceEntity(20U);
    msg.setDestination(51857U);
    msg.setDestinationEntity(197U);
    msg.parameter = 133U;
    msg.numsamples = 85U;
    msg.lat = 0.609217698408;
    msg.lon = 0.101862889271;

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
    msg.setTimeStamp(0.438662553787);
    msg.setSource(30029U);
    msg.setSourceEntity(63U);
    msg.setDestination(55619U);
    msg.setDestinationEntity(209U);
    msg.parameter = 73U;
    msg.numsamples = 132U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 30847U;
    tmp_msg_0.avg = 0.912619035444;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.653934717458;
    msg.lon = 0.160710626214;

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
    msg.setTimeStamp(0.183479516898);
    msg.setSource(56062U);
    msg.setSourceEntity(99U);
    msg.setDestination(38000U);
    msg.setDestinationEntity(106U);
    msg.parameter = 79U;
    msg.numsamples = 126U;
    msg.lat = 0.17049800427;
    msg.lon = 0.432583606916;

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
    msg.setTimeStamp(0.526017191775);
    msg.setSource(52580U);
    msg.setSourceEntity(219U);
    msg.setDestination(17073U);
    msg.setDestinationEntity(85U);
    msg.depth = 24001U;
    msg.avg = 0.204623735492;

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
    msg.setTimeStamp(0.40291852175);
    msg.setSource(18687U);
    msg.setSourceEntity(41U);
    msg.setDestination(26036U);
    msg.setDestinationEntity(41U);
    msg.depth = 34119U;
    msg.avg = 0.477102695299;

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
    msg.setTimeStamp(0.666202353731);
    msg.setSource(24715U);
    msg.setSourceEntity(108U);
    msg.setDestination(9781U);
    msg.setDestinationEntity(188U);
    msg.depth = 4310U;
    msg.avg = 0.763856816371;

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
    msg.setTimeStamp(0.218429127667);
    msg.setSource(57074U);
    msg.setSourceEntity(252U);
    msg.setDestination(26879U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.918453167328);
    msg.setSource(20916U);
    msg.setSourceEntity(212U);
    msg.setDestination(64650U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.151983267234);
    msg.setSource(27276U);
    msg.setSourceEntity(231U);
    msg.setDestination(17682U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.410654426199);
    msg.setSource(57032U);
    msg.setSourceEntity(107U);
    msg.setDestination(63380U);
    msg.setDestinationEntity(172U);
    msg.sys_name.assign("VUQJNHXNMRYZGOUQPBCFYKCDLASUTLPRHWWMCICWVTSGRICLPUGYJSHNWDYIQKIDHZXMVVOLIBKAKVQREZOIHLKQAZFLFVPXNOMCTXHTTMCVEUGKRGDRZOYF");
    msg.sys_type = 226U;
    msg.owner = 20407U;
    msg.lat = 0.408398610864;
    msg.lon = 0.829568675236;
    msg.height = 0.57215608146;
    msg.services.assign("TPKGEFSTRRMYYVPLBMDSLLSIGJCOFZNQSZWXLVNOAFZJOWCDDRUAMPJFFEOTC");

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
    msg.setTimeStamp(0.215388658693);
    msg.setSource(62972U);
    msg.setSourceEntity(22U);
    msg.setDestination(6719U);
    msg.setDestinationEntity(225U);
    msg.sys_name.assign("KSLSBIITCIZWKK");
    msg.sys_type = 8U;
    msg.owner = 8178U;
    msg.lat = 0.53472070563;
    msg.lon = 0.126838685736;
    msg.height = 0.377696367133;
    msg.services.assign("XJARCBSPAILETNVDGKFASPOONUVXUBJFXTRGHULJCMCGFKXMYWFZOHVBJPACWGSFKGOMFKYPZSZAZEUYCRKGVIYQDIUMIXFTUYNKJMEQNBZLXI");

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
    msg.setTimeStamp(0.187195808435);
    msg.setSource(58325U);
    msg.setSourceEntity(230U);
    msg.setDestination(56591U);
    msg.setDestinationEntity(218U);
    msg.sys_name.assign("MWSBKYBZNFBORQCYGVFOKHFFLYOMJTCWRQIDITZNBXWTWSDPDEKPHMBVLVFHPQNIIHAMOKMWYRGFEOFEKUCPXGLUGGZPMQYKQMMRCLSOTZMDTIVALJEVHJIFIYSN");
    msg.sys_type = 235U;
    msg.owner = 6193U;
    msg.lat = 0.657968053662;
    msg.lon = 0.0122673823887;
    msg.height = 0.0125984877344;
    msg.services.assign("ZGOFPLHFPOVHCMRGSSOLDRLHZBICFEICNGSYOUGQXXSFVJYJTQTFHBKKOHWMZEAINJPAAXDEDUFYREUJKHLCKHUVFVGGPPAEDMBQIEGWLQNPBSXWSAJTZIUURIZYNWVRXFEIDDCYYPQDMPIRQKKORYYVGLTIJNNQWHIBASLEJQJBKTWQGZTOCLOZLMHMAYBUNJVTRMCXBODPVWEDUSBONNPWMAWVTTMCXJKTWRYFGKHNEQDSCZVUASMXZUXAZ");

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
    msg.setTimeStamp(0.950169805769);
    msg.setSource(3226U);
    msg.setSourceEntity(38U);
    msg.setDestination(33507U);
    msg.setDestinationEntity(99U);
    msg.service.assign("EVGRXNAZEJTSQWCYBLWYKKUFULBRAABZ");
    msg.service_type = 193U;

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
    msg.setTimeStamp(0.459490590799);
    msg.setSource(322U);
    msg.setSourceEntity(203U);
    msg.setDestination(30507U);
    msg.setDestinationEntity(222U);
    msg.service.assign("SOMQNFVZZMJAGMTSPEYNHEIPIRPMQJ");
    msg.service_type = 198U;

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
    msg.setTimeStamp(0.785437048923);
    msg.setSource(9620U);
    msg.setSourceEntity(110U);
    msg.setDestination(12504U);
    msg.setDestinationEntity(145U);
    msg.service.assign("CBVKGNTCRRHRAHXBGTZAMLEIRSUSJXCRXDOMQWLBGWQIPBRGUBKTYZSFGTWXWICJPKHDGYCFIOTQDYJPHYDAFAEDLSYAZDOVTWJMOGCHLLRK");
    msg.service_type = 190U;

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
    msg.setTimeStamp(0.321051660141);
    msg.setSource(58831U);
    msg.setSourceEntity(44U);
    msg.setDestination(42851U);
    msg.setDestinationEntity(148U);
    msg.value = 0.726139903449;

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
    msg.setTimeStamp(0.41580859873);
    msg.setSource(56766U);
    msg.setSourceEntity(68U);
    msg.setDestination(11053U);
    msg.setDestinationEntity(140U);
    msg.value = 0.0620495448418;

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
    msg.setTimeStamp(0.131164113358);
    msg.setSource(31459U);
    msg.setSourceEntity(80U);
    msg.setDestination(65291U);
    msg.setDestinationEntity(14U);
    msg.value = 0.425384948656;

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
    msg.setTimeStamp(0.538172295724);
    msg.setSource(44567U);
    msg.setSourceEntity(56U);
    msg.setDestination(15151U);
    msg.setDestinationEntity(18U);
    msg.value = 0.0563082533192;

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
    msg.setTimeStamp(0.674593532255);
    msg.setSource(13708U);
    msg.setSourceEntity(216U);
    msg.setDestination(41319U);
    msg.setDestinationEntity(8U);
    msg.value = 0.943260527371;

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
    msg.setTimeStamp(0.904587859052);
    msg.setSource(11986U);
    msg.setSourceEntity(100U);
    msg.setDestination(40502U);
    msg.setDestinationEntity(47U);
    msg.value = 0.723957653172;

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
    msg.setTimeStamp(0.658349686154);
    msg.setSource(19666U);
    msg.setSourceEntity(51U);
    msg.setDestination(41412U);
    msg.setDestinationEntity(248U);
    msg.value = 0.609517547783;

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
    msg.setTimeStamp(0.318372437235);
    msg.setSource(42077U);
    msg.setSourceEntity(73U);
    msg.setDestination(56795U);
    msg.setDestinationEntity(241U);
    msg.value = 0.826718682393;

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
    msg.setTimeStamp(0.974972498025);
    msg.setSource(38899U);
    msg.setSourceEntity(40U);
    msg.setDestination(59621U);
    msg.setDestinationEntity(207U);
    msg.value = 0.819509833614;

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
    msg.setTimeStamp(0.212058065186);
    msg.setSource(64085U);
    msg.setSourceEntity(219U);
    msg.setDestination(9706U);
    msg.setDestinationEntity(177U);
    msg.number.assign("TNIOEAGHHEGQPLIOFMYBRHYXQLRHSONKMKKGPKAYIQXWPFQPUCZGSWXKSBZLYUAVSAWFLPKRVBXIJMFCQTSNFIRGKDHVXPZONTADTZWFIVNRECQRYMYWLSQZJJAUKYTZDVJEIPQTNPPCDIWJXSTMIXFOHGADCXNHJMLBMTCTMOPUDVNXHEADNFOCJLCTVVYKQNOORIWOLJGSLZDHJZYEWMGRUUBLKXZAJWC");
    msg.timeout = 36029U;
    msg.contents.assign("UCBAEXNDATRGIKDGLLEOXWXIZQFU");

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
    msg.setTimeStamp(0.439439254924);
    msg.setSource(14523U);
    msg.setSourceEntity(68U);
    msg.setDestination(29642U);
    msg.setDestinationEntity(207U);
    msg.number.assign("CGREPIJZWBUMBVCXLJKSILYUDGPNARSCAPDQI");
    msg.timeout = 63516U;
    msg.contents.assign("HPLASEYBNOGRHFDPHKVKNORMWCPHVCZXLEEGPDAUURTDJFQTDKAZUXAHRXQJOVMZXTMEUCQWAXTBYNOGOBLSKZEWGJAUWEILABWVWQDRNTIGGNSKZGKCUOFXKIJIQSVDZRMNJUTKVNHPTXXIMSLSGYRWHDVOBZAYVAILEPHJJVSRFOEXPXPDCBCFWCITINOGSLQTRMZJDFYYLLFMFNEPBEDUHNWUCUZSJTLKVYQIMOKMFHZP");

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
    msg.setTimeStamp(0.996722123053);
    msg.setSource(29477U);
    msg.setSourceEntity(143U);
    msg.setDestination(58245U);
    msg.setDestinationEntity(168U);
    msg.number.assign("HHWREXOIJLIRBGUSJMVXEGAEJVPIDMOEIOXBLFXFCVTUPCVRGVRRSYVTONOYSGALEL");
    msg.timeout = 56017U;
    msg.contents.assign("FRNYJUATILNAXYVGXLPVSBWUSYPMPDFKQQCRRXKIAOOERWZSWTZPFSHUKIMXEJUTLLRBMDJRVSVBIJKHLVDMVEZAQHNOBIAODTPKDMMXQBUBLOGDSECCFEHOUYZJAQZGWVXEFVUQWQKZEJNHHCNMTHHNNAXGBGIUNTOCGXXYUZVTEAZWYCJECSJTOFQYZWMKPRMPFYGMRY");

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
    msg.setTimeStamp(0.230154321821);
    msg.setSource(40711U);
    msg.setSourceEntity(228U);
    msg.setDestination(61383U);
    msg.setDestinationEntity(85U);
    msg.seq = 4034260355U;
    msg.destination.assign("QIDXCSHNMSBWGJHSGF");
    msg.timeout = 35938U;
    const char tmp_msg_0[] = {10, 98, -11, 106, -9, 26, 102, 38, 85, -86, -22, -76, 103, -5, 16, 17, 117, 6, 20, -98, -8, -46, -104, 51, 3, 1, 42, -3, -72, 81, -12, 27, -60, 120, 17, -84, -5, -68, 100, -120, 120, -35, 93, 110, 35, 66, 52, 107, 73, 111, 18, -24, -73, -120, -116, -44, 95, -119, 52, 111, -6, 101, 39, 123, 20, -6, -113, -70, 67, 94, 11, -22, 64, 4, -128, 41, -55, -112, 53, -78, 5, 106, -90, 44, -50, -58, -84, -99, -68, -74, -66, -101, 11, 102, 89, 21, 27, -2, -92, 80, 13, 102, 32, -125, -73, 88, 42, -48, 56, -39, -120, -87, 104, 71, -76, -37, 97, -23, -34, 12, 106, 28, 87, -65, -2, -60, -31, 61, 11, 44, -65, -20, 44, -41, 110, 112, 94, 68, -10, -88, -90, 120, 29, 114, 125, 55, -16, 116, -24, 110, 36, 24, 25, 42, -34, 16, 100, -120, -96, 5, 26, 86, 123, 78, 87, -123, -47, -19, 40, 92, -74, 8, 3, -43, -62, 55, 3, -90, 21, -15, 79, 96, 48, 50, -101, -62, 5, 60, 29, 117, -121, 107, -110, 59, 119, -4, 118, 54, -87, 99, 126, -90, -47, -118, -27, -48, -50, 59, -74, 88, 90, 92, 37, 95, -41, 28, 75, 83, -21, 71, 29, 22, -12, 83, 48, -75, -86, 66, -57, 6, 9, 91, -97, -10, 112, -75, -119, 8, -45, 0, 70, 56, -16, 4, 52, 17, 124, 46, 18, 48};
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
    msg.setTimeStamp(0.954692623267);
    msg.setSource(17379U);
    msg.setSourceEntity(78U);
    msg.setDestination(33425U);
    msg.setDestinationEntity(27U);
    msg.seq = 3069024678U;
    msg.destination.assign("BCOOIPGCFQZEBQNFL");
    msg.timeout = 36008U;
    const char tmp_msg_0[] = {-35, -86, -56, -108, 20, -110, 24, -19, -44, -70, -53, 35, -80, -70, 73, -110, 14, -97, 67, -55, 25, 40, 52, -32, 44, -104, -55, 57, 25, 22, -54, -124, 27, -124, 16, -114, -49, -115, -41, 17, -100, 20, -86, -56, -4, -37, -6, 80, 74, 29, 68, 18, -35, 23, -90, -40, 88, -22, 72, 115, -60, -66, -80, 0, -117, 22, 21, -114, -89, -111, 32, 103, -65, -78, 68, -74, 114, -79, -58, -113, -23, -73, 9, 124, -58, -6, -113, 94, 73, -95, 115, 41, -70, -29, 48, 51, 40, -123, 96, -82, -115, 118, -53, 3, -128, -62, 11, 31, 99, -61, -79, 103, -120, -19, -49, 78, -87, 10, -103, -58, 98, 110, -14, -59, -14, 37, 8, -107, 115, -102, 45, -35, -58, -75, -2, 28, 67, -4, -82, -19, 36, 78, 92, -105, 68, -48, 29, 61, -51, -32, -22, 123, -117, 112, -93, 85, -59, -25, 20, 94, 73, 20, 36, -53, 84, -78, 29, -51, -120, -58, 70, -110, -65, 115, -96, -89, -42, -34, 72, -123, 48, 78, -70, -88, 0, 112, 95, -49, -81, -93};
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
    msg.setTimeStamp(0.127132585516);
    msg.setSource(5718U);
    msg.setSourceEntity(248U);
    msg.setDestination(1153U);
    msg.setDestinationEntity(211U);
    msg.seq = 1094764167U;
    msg.destination.assign("QZLHQVHJFQXSXFGSPDRCJSVUBSDUNDEBKNFENQTPMZTCXPEFSLMQXEQXRLGTSLEJWACJNBOHMAYISRXPYMNNEUVZITEHCXWRAIYVNUKPUPWUMGVRO");
    msg.timeout = 63632U;
    const char tmp_msg_0[] = {-18, 59, 10, -81, -115, -50, -37, 7, 48, -29, 112, -24, -70, -106, -21, -32, -17, -5, -1, 110, -12, 112, -70, -38, -108, 87, 125, -61, 24, -107, -110, -124, -54, 55, 55, 70, -2, 106, -108, 23, 32, -88, 78, 64, 89, 63, 105, -11, 83, -20, 86, 7, -24, -40, -127, 104, -73, -20, -103, -52, 39, -122, -60, 122, 104, 22, -57, -71, -19, -7, -47, 99, 112, 56, -55, 30, -43, -119, 32, 109, -24, -74, 22, 123, 39, 119, -36, 2, 10, -83, 51, 61, -7, 113, 114, -34, -51, 75, -101, -115, -92, 29, 112, 13, -1, 81, -93, -31, 122, -128, -75, 120, -119, 24, -23, 123, 88, -41, 80, -3, 70, 103, -83, 89, 85, -31, -41, -33, -93, 84, -25, -89, -50, -5, -20, -87, -126, 110, 100, -63, 4, -59, -56, -42, -121, 61, 5, 50, -7, 106, 103, -68, -78, -124, 118, 52, 1, 46, -58, -19, -92, 101, -114, -66, 14, 24, 35, 122, 123, -109, 78, -58, 9, 85, 80, -83, -10, 39, 123, 19, -116, -122, -50, -53, 35, 12, 55, 75, 53, -58, -1, 20, 81, -67, 115, -105, 73, 79, -52, 31, -41, -49, -119, 15};
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
    msg.setTimeStamp(0.35769785648);
    msg.setSource(53865U);
    msg.setSourceEntity(171U);
    msg.setDestination(26720U);
    msg.setDestinationEntity(90U);
    msg.source.assign("CJFWZRIGCERHFIEHYBAEROZTSWKNOKNJHSAONUVVEAHZIYJGKGUPGYAUOJXXOVBBCROXZQBYYKBMSFQK");
    const char tmp_msg_0[] = {36, -44, -100, 120, -41, -27, -71, 61, -57, -73, -25, -33, 51, -102, 119, -10, 48, -1, -14, -65, -23, -62, 82, 90, -97, 106, 64, 18, 124, -53, -37, -98, 65, -127, -33, -68, 101, -120, -20, 25, -62, 52, 91, -15, 65, -73, 102, 11, -84, 94, 50, 118, 61, 23, 26, -93, -97, 54, -122, -15, -39, 119, -38, 45, -70, -83, 115, -39, -125, -30, -123, 96, -128, 119, -49, -10, 120, 78, 9, 87, 42, -90, 49, 88, -13, 51, -5, 71, -56, 124, 10, 89, 63, -16, -10, -59, -58, -61, 3, -91, -22, 97, 29, 23, -97, -25, -71, -8, -75, 37, -74, 108, 91, -88, 104, -50, -106, 24, 87, -96, -88, 86, -120, 83, -15, 102, -118, -93, -104, 85, 7, -117, -79, -70, -92, 49, -6, -3, 71, 29, 64, 75, -84, 19, 85, -5, 49, 93, -115, 85, 5, 72, -80, -98, 103, 97, -50, 71, -114, 47, -15, 105, -9, -38, -41, 38, 75, 68, -39, 59, 27, -43, 34, -95, -28, -51, -4, 64, -85, 24, -79, -4, 114, 93, 109, -74, -39, -122, -48, -66, 94, 40, 40, -116, 124, -62, 119, -25, 13, -67, -16, 57, -125, -35, -103, -14, 68, -43, 16, -100, -81, -80, 50, 28, -87, 90, 8, -84, 15, -6, 68, 71, 114, -49, 3};
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
    msg.setTimeStamp(0.571032925696);
    msg.setSource(62680U);
    msg.setSourceEntity(176U);
    msg.setDestination(58464U);
    msg.setDestinationEntity(224U);
    msg.source.assign("CTTZOOXUMCLWQEXMXFBHKHFKZDO");
    const char tmp_msg_0[] = {-42, 76, 5, -124, -23, -80, -48, 16, -92, 52, -53, -20, 107, -15, 109, -88, -102, -1, 103, -128, 67, 53, 86, -96, -49, 19, -53, -61, 69, 82, -16, 39, -63, -115, -115, 88, 102};
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
    msg.setTimeStamp(0.375196512929);
    msg.setSource(55585U);
    msg.setSourceEntity(37U);
    msg.setDestination(6807U);
    msg.setDestinationEntity(68U);
    msg.source.assign("EBQCKHHNZFUVFMWXXMVAFHPSCNUUORQBPBTAMDTZBKLKEQHFECOPRJELWBDJTGCGGKZZYBYVNEFAFXPPGZRWGXEASBVIOROWQEJRFIMTSKBVGOPTMJXNOIQYNCIBAZDUEVHYVJWTLVDYYFWLKUINPCQAUVSUGHYRSPAEMPADNZCCZJWKNQJAGICJLDWIZ");
    const char tmp_msg_0[] = {117, 91, 32, -113, -4, 116, 7, 0, 123, 105, 113, -27, 70, 57, -53, -39, -95, -66, 26, -36, 68, 55, 84, -29, -17, 126, -101, -25, 41, 38, -85, -70, -66, -71, 41, 29, -71, 17, -88, -98, -113, -103, 27, 8, 68, -115, -65, 79, -63, -117, 43, 1, 27, 99, -100, 54, -84, 68, 13, 2, 54, 121, 14, -33, -17, -22, -2, 103, -12, 82, -111, 99, -85, -74, 101, -87, 119, -119, 91, 87, 52, 54, -1, 125, -91, 17, -112, 111, -109, -26, -45, -13, 28, -31, 10, 77, 73, 109, 85, -54, -86, -8, 40, 0, -48, -3, 61, -114, 13, -1, -44, 41, 76, -44, 52, 71, 27, -4, -11, 59, -122, 4, 62, -116, 109, -61, 79, 9, 36, 66, -78, 25, 12, 67, -78, 64, 102, 4, 34, 17, 88, -41, -92, 64, -25, -123, 9, -88, 61, -48, 10, 104, -57, 124, 94, 116, -127, -70, -35, -125, -68, 112, -100, -127, -4, -84, -50, -5, 44, 99, 83, -37, -124, -128, 72, 117, 17, -111, 36, 3, 94, -67, -12, -29, -59, 69, -109, 104, 103, 53, 72, -110, 104, 2, -99, 123, -58, 108, 47, -19, 4, -93, -12, 113, -51, 54, 74, -70, -55, -2, -9, -71, 109, 24, 37, -44, 32, 123, 105, 49};
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
    msg.setTimeStamp(0.040661649866);
    msg.setSource(1775U);
    msg.setSourceEntity(125U);
    msg.setDestination(60394U);
    msg.setDestinationEntity(243U);
    msg.seq = 1533456067U;
    msg.state = 233U;
    msg.error.assign("KEWTWMVFGKBFHPBSTIFODQYZOYIJUQAQDSZVMSRZKMIPYXPRBOSHWDLRETUBPCBGHBDLCTSUILUQWEZKBSJZYNHJHEDVYNVXUSPMKHEAFQOTSDTAPIBORVAEFIGVMCDYHWREXTZRDFGTBOPUFQUGVCVOJCAGYCGZWLCGWKGXIVMSUPRCAELLQXNOKHAXZMGPHKZMWLTFBISTFDXJVPOFJJQLAJNKXLJUDNZ");

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
    msg.setTimeStamp(0.866632661006);
    msg.setSource(51676U);
    msg.setSourceEntity(30U);
    msg.setDestination(53858U);
    msg.setDestinationEntity(91U);
    msg.seq = 3124920098U;
    msg.state = 222U;
    msg.error.assign("NIHPBHIKRWEITVRADFGALOUQELJUQPEMOBLRVNMAKQLZLNOXXWLZVFTIVDSROJYGSXRSSBGXORYGUKGUVPSPMGUTDBBHCTXYKUFSJAVGBYXEXCNLCJPZDAIXHDWJVSEKFWPVTTUCFHUFJNCSZ");

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
    msg.setTimeStamp(0.0308506098395);
    msg.setSource(23384U);
    msg.setSourceEntity(132U);
    msg.setDestination(34762U);
    msg.setDestinationEntity(190U);
    msg.seq = 2326937000U;
    msg.state = 248U;
    msg.error.assign("CDQMYHILIYXNUGTZJCRUOFRAHRWRQFHBSNXCXVZIBASOZBSMZUPCGGBYFYSRPZGPILCCQSQJVFLHEPKBOUALISVXNABEKGUEEADXUPXOTCSOBTBCVHVQMRNPMUQVNJAMVZQGATJPVJDQWR");

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
    msg.setTimeStamp(0.590470624116);
    msg.setSource(21205U);
    msg.setSourceEntity(60U);
    msg.setDestination(1831U);
    msg.setDestinationEntity(206U);
    msg.origin.assign("FYGEQWAHJKBXXTSYSGXLVHBKUDLXTAQENQMLFFYTSXYCDPEFCEDMINIXMMRKZCHRQPJZIESQRJWSZOJZMCSCFXKLNMW");
    msg.text.assign("KUINUYEENQJQK");

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
    msg.setTimeStamp(0.393460033844);
    msg.setSource(8012U);
    msg.setSourceEntity(208U);
    msg.setDestination(157U);
    msg.setDestinationEntity(54U);
    msg.origin.assign("BPMKYAWQGJGAJZZJXVODCVZTAXMHDUKQUJYFEYPAMHUDMBERUZO");
    msg.text.assign("JQBVUYVQBXOXVYORRUOZCMTUXJFPTBDKMXWCTJNUONNFGHFZUAIDRHIPNOVCCGLSMAZHZLXZYBJQAGTZVENJSOVMMKPKZBQGHNIMQALCERWUTEDKXEYYRSEGVPVWIVLKDXPDHUKTIYEEQRSSGTCDHYQLORCGREFWFITGHCDAWFSNSLWPILYYZKJJSWLOROJ");

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
    msg.setTimeStamp(0.512748826995);
    msg.setSource(22854U);
    msg.setSourceEntity(40U);
    msg.setDestination(17043U);
    msg.setDestinationEntity(17U);
    msg.origin.assign("JUIALAKDCVKLCMZMXWLESARMBBDUKJDSHZNIMFNCTOUOEASTXMDXWVQQFOGUJTZAPXLRFMKXCBGORRWGBIKLYPSWHGAKRVBTZTAMZZ");
    msg.text.assign("UBERLSDWCZTIIYPZGRNLDJIDTTPVDVIKQKYIHUJBBFJFMSLWPAWRZYWEYRRZXOKUPQQTHMTGVKZJDATNAFZIZVJBMPJANHRGLCTKGFUQIIALUBFOAVXPJHRERKSSFHYPCUUAWSMHFQHSZLYBPCNPOGOJPOAK");

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
    msg.setTimeStamp(0.473152823252);
    msg.setSource(24746U);
    msg.setSourceEntity(192U);
    msg.setDestination(9592U);
    msg.setDestinationEntity(66U);
    msg.origin.assign("KLDLCISMFIZTIRCSBMOEVEO");
    msg.htime = 0.154463111555;
    msg.lat = 0.992550094592;
    msg.lon = 0.244043652696;
    const char tmp_msg_0[] = {-76, 32, 65, -89, 11, -107, -33, 97, -95, -109, 13, -101, 25, -92, -66, -56, -27, 47, 38, 114, -44, 99, 6, 88, -76, -102, -104, 58, 32, -119, -121, -39, 102, 51, -108, 1, -83, -79, -27, 95, 110, 22, 70, 125, 124, -94, -21, -128, 92, 6, -1, -37, 9, 6, -26, 66, -90, 41, -58, 117, 47, -14, -2, -57, 46, 40, -125, -43, -98, -68, 105, -114, 0, 102, 42, -105, 31, 84, 3, -117, -91, 6, 111, -74, -105, 53, -97, -39, 50, -72, 27, 49, 87, -108, -94, 106, -53, 106, 79, 22, 37, -19, 20, -51, 111, -52, 86, -23, 109, -47, -56, 11, -17, -5, -63, 89, 92, 20, -108, 13, -17, -46, -97, -32, -75, 94, 76, -60, 79, -22, 92, -10, 93, 125, 60, -34, -83, 29, 25, -72, -117, 47, -78, -55, 18, 118, -10, -103, 30, 112, -11, -63, -34, -108, -76, 99, 7, -9, 119, -39, -32, 122, -128, -100, 10, 71, 4, -16, -26, 31, -85, -76, 115, -111, 51, -66, -127, 109, -37, 49, -45, 8, 31, -54, -11, -6, 44, -98, 68};
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
    msg.setTimeStamp(0.237797692672);
    msg.setSource(48807U);
    msg.setSourceEntity(139U);
    msg.setDestination(47787U);
    msg.setDestinationEntity(18U);
    msg.origin.assign("UVRILNMJMFDBFSUNIQWJYEAOJPHNTHNOKAZQLXJWTVGTMDGKDPFBATEEZYIXTWRZEZKLVACSMJNEOCZNJISDKLDTWKPQFRFYMCZEVOTEPJIPGRPFNFQXAXBXGMCQLOZWGLAGHCV");
    msg.htime = 0.454665556879;
    msg.lat = 0.969074000516;
    msg.lon = 0.528609064079;
    const char tmp_msg_0[] = {-97, -100, -117, -61, 18, -72, 99, 19, 24, -62, -83, 78, -66, -103, 122, 55, 10, -110, -93, -114, -24, -120, 3, -114, 45, 20, -11, 19, 65, -13, -115, 31, 117, -73, 61, -57, -46, -72, -98, -116, 100, -124, -3, -121, -46, 125, -21, -48, -74, 55, 71, 49, 47, 21, 31, 116, 31, 111, -51, -52, -19, 60, 34, -74, -24, -55, -104, -92, -29, 102, -125, -81, 33, -16, 110, -42, -41, 24, 78, -56, -113, 36, 77, -44, -97, -19, -30, 8, 94, -28, 30, -12, -115, -89, -86, 18, -96, -51, -18, 87, 77, 4, -94, -31, 20, 9, 51, -124, 36, 96, 78, -56, 111, 12, -93, 7, 54, -40, 99, 112, 60, -65, -22, 37, 43, 69, -49, 98, 114, 121, 76, -98, 112, -35, -74, 55, 73, -115, 102, -16, -37, -17, -40, -62, -48, 102, 102, 58, -60, 91, -65, -115, -48, -3, -19, -106, -56, -97, 42, 115, -128, 67, 29, 108, 60, -72, 122, -84, 82, 82, -79, 14, -72, -123, 2, -48, -34, -29, 94, 106, -113, -33, 102, 77, -25, -60, -49, 11, 72, 18, 21, -121, -91, -51, -23, -10, -80, -79, -19, 53, -51, 125, -20, 67, -46, -12, -42, -26, 15, -12, -62, 102, -27, -93, 44, -28, -60, 76, -42, 125, 31, -63, -43, 18, 64, 2};
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
    msg.setTimeStamp(0.228178970793);
    msg.setSource(30211U);
    msg.setSourceEntity(167U);
    msg.setDestination(60159U);
    msg.setDestinationEntity(147U);
    msg.origin.assign("PUDJVQIUBVYSKWTSUDGGKMQ");
    msg.htime = 0.461231926229;
    msg.lat = 0.0705472382141;
    msg.lon = 0.760209498681;
    const char tmp_msg_0[] = {-41, 70, -38, 113, -69, -57, 118, -72, -77, 69, -46, -120, -73, -14, -41, -122, -39, -82, -104, -73, -80, -1, -58, -22, -78, 62, -12, 82, 48, 91, -42, 14, 40, 71, -88, 121, 27, -96, 49, -20, -120, 105, 3, -74, -31, -7, 97, -104, 97, -109, -115, -79, 81, 89, -17, 57, -65, 109, -121, -113, 19, -62, -125, -72, 72, -98, -65, 102, 79, 20, -63, -2, 112, -56, -78, 3, -125, 123, 109, 105, -87, -124, 120, -117, 89, -122, -43, -101, 93, -91, -66, 37, -96, 6, 26, -39, 95, -47, 21, 75, 41, -5, 24, 76, -82, 50, 124, 88, -81, -84, 23, 104, -54, -78, 39, -66, 74, -124, 16, 21, 36, -110, -114, 117, 41, -101, -85, -83, -98, -12, -8, 111, 61, -76, 18, 75, -41, 50, -44, -52, -35, -101, 116, -21, -31, 36, 76, -40, -119, 51, 103, -62, 93, -16, -64, -56, -112, -44, -22, -57, 71, -74, -35, -91, 19, 94, -31, 97, -15, -118, -25, 111, 34, 88, -95, -70, 59, 54, 24, -127, 14, 4, 82, 16, -43, -19, 36, -13, -15, 8, 118, 89, 126, -47, -36, -104, 110, -13, 37, -111, -67, 52, -6, 40, -125, 11, -119, -18, 20, 61, 78, -83};
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
    msg.setTimeStamp(0.593159880857);
    msg.setSource(33713U);
    msg.setSourceEntity(48U);
    msg.setDestination(20231U);
    msg.setDestinationEntity(227U);
    msg.req_id = 62109U;
    msg.ttl = 40251U;
    msg.destination.assign("HSWDAKWIKSPOVMAJBIZYGPVCRMJYBLKPCTTXHBGUWUJWCIYGHZLGXCLWJU");
    const char tmp_msg_0[] = {3, 92, 68, -32, -33, 22, -62, 32, -124, -9, -28, 115, -31, 77, 99, -108, 62, 53, -56, -102, -25, -82, -95, 45, -70, 62, -27, -64, -73, -52, 20, -94, 76, -60, 88, -100, 56, -36, 57, 50, -104, -48, -68, -13, -27, -105, -82, -21, 55, -7, -72, -42, 41, 29, -44, 119, 85, -40, -67, 60, -116, 10, 103, -73, 81, -21, 126, -22, -79, -53, 63, -124, 124, -95, 10, 90, -105, 30, 58, -24, -37, 101, -84, -10, 56, -72, 79, 118, 3, 112, 51, -2, -41, 34, 65, 46, 88, 42, -103, -56, -45, -114, -24, -90, 79, -9, 113, 96, 8, 123, 86, -123, -32, 65, -63, 51, -85, -46, 116, 9, 113, -19, 103, -9, -82, 16, 38, -115, -23, -14, -13, 104, 83, 50, -8, 30, 104, -126, -100, 39, 34, 86, 12, -72, -32, -107, -86, 101, -71, 35, -70, -51, 23, -47, -50, 110, -63, -8, 112, 13, 45, 100, -57, 85, 70, -18, -53, 74, -34, 75, 117, -10, -120, 7};
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
    msg.setTimeStamp(0.973238472382);
    msg.setSource(64786U);
    msg.setSourceEntity(138U);
    msg.setDestination(7207U);
    msg.setDestinationEntity(185U);
    msg.req_id = 51830U;
    msg.ttl = 24053U;
    msg.destination.assign("ACCTXEOSOMJMRG");
    const char tmp_msg_0[] = {-11, 100, 99, -42, -88, -78, -69, -64, -56, -94, -52, 76, -16, 6, 101, 54, -125, 43, -101};
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
    msg.setTimeStamp(0.541673827752);
    msg.setSource(649U);
    msg.setSourceEntity(240U);
    msg.setDestination(24390U);
    msg.setDestinationEntity(183U);
    msg.req_id = 59788U;
    msg.ttl = 49521U;
    msg.destination.assign("HHXPZPKWERT");
    const char tmp_msg_0[] = {-20, 71, -124, 11, -19, -80, -88, -37, 115, 124, 5, 108, 77, -7, 16, -48, -112, -8, -97, 116, 112, 48, 12, -11, 68, -94, 73, 61, 35, -12, -66, -79, 84, 22, 65, -123, -114, 24, 110, -58, -18, -26, -113, -103, -33, -86, 8, 8, 24, -108, 70, 82, 93, 17, 14, 52, 46, 55, -39, 116, 93, -3, 109, -52, -114, 105, 65, 79, -84, 37, -37, 46, 119, 92, 122, 21, 54, -85, 9, -28, 103, -77, 110, -62, 122, 1, 96, 98, 118, -16, 81, 123, -111, -64, -50, 16, 62, 76, -66, 101, 100, -91, 7, 91, 49, -54, 41, 54, 11, -41, 105, -125, -36, -127, 88, -58, -36, 100, -80, 109, 76, -26, 122, 62, 109, 54, -125, -39, 70, 121, -88, -117, -36, 56, -6, 34, -79, 1, 75, 75, 106, -82, 14, -49, -122, 27, -75, -62, -21, 43, -98, -34, 109, 27, 5, 0, 122, -88, -45, 124, -37, 45, 38, 121, -56, 120, 27, -37, -76, 29, 27, -91, -58, 58, 69, 17, 14, -36, -71, 56, 38, -92, -111, 17, 107, 104, -45, -17, 38, -6, 75, -49, 36, 109, -113, -86, 85, -7, 89};
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
    msg.setTimeStamp(0.748389387964);
    msg.setSource(43704U);
    msg.setSourceEntity(56U);
    msg.setDestination(6072U);
    msg.setDestinationEntity(132U);
    msg.req_id = 18197U;
    msg.status = 2U;
    msg.text.assign("DFNMPENFSEZYHNZANMEQKESTUAULXIVVCYLFOVWUOQRLSIYMFHAMBJWROUNGDMBXRFDBIIRVPBUPLTVTWTASCILTRDLLBMTKKRQZFJWEOPUWAAJJGODQJAHDORMFXGZTKVRKTZFWKBHIOOCCJCUDHWHELGGZQQRZNIOVSENDHQMCBEAKYKGSYUEGWFZYVYKDXXNPSWCZYHY");

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
    msg.setTimeStamp(0.0866836316003);
    msg.setSource(8001U);
    msg.setSourceEntity(186U);
    msg.setDestination(55672U);
    msg.setDestinationEntity(123U);
    msg.req_id = 41275U;
    msg.status = 37U;
    msg.text.assign("LVNGRUXPIXZLVOWBBPULANTDLUNNYMPOJJWYCIHWAGKAVLYGHTCDRXUGVFSTXISENWPUXBVIZQCIFJCMEMDPAHBGPFHUSWMLJZIWQKPFRJERFVNEXKLEUWIJDTOKAZYCRDRJKIQKBUTWPVQGJCOGKRPXJYZHYQQZYAMHFCDBTHTMZJSEMECBQPKDKEDASHOT");

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
    msg.setTimeStamp(0.356981121151);
    msg.setSource(14557U);
    msg.setSourceEntity(111U);
    msg.setDestination(31264U);
    msg.setDestinationEntity(38U);
    msg.req_id = 64580U;
    msg.status = 165U;
    msg.text.assign("VEOXAFGLHZNSZVSDIQAMJAWNSUHUTXHKLVRSOVNSAWWPWRWTQHFJKVFEKQKEQYOTCFZDYDEFZOIPMYKHCUENZUTZWCMBCBLSMWRDXPLUGABPU");

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
    msg.setTimeStamp(0.6437286398);
    msg.setSource(55292U);
    msg.setSourceEntity(60U);
    msg.setDestination(37998U);
    msg.setDestinationEntity(3U);
    msg.group_name.assign("WBYOISOXSMUAPVYOFYRKZDPOEBBOGXZRRHZHCCFLMVLNODEIUSILDLFGYHKQVYBZODWGFSTZEENMCWUWM");
    msg.links = 1841623571U;

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
    msg.setTimeStamp(0.603724894369);
    msg.setSource(32580U);
    msg.setSourceEntity(90U);
    msg.setDestination(38919U);
    msg.setDestinationEntity(74U);
    msg.group_name.assign("AZCRRGKVNHMPUBHHRZVLGXQJXTZSNLVMHTKVNAQORWONDIHTIREPWFQUUSJDFBICGRHQGTJFMCUSGDCSYVYJWGBMQXPJZWFMCYRNIPUKAOQSKLEGYWZDNKYZWXEXABMMAFOXMYAAGWLIDCOPLPDKDBPMZLOQKJIOOBKUVJQWAQBETCNBVETLISPCSQJOZUGGUVDKCOFYUIR");
    msg.links = 1117657148U;

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
    msg.setTimeStamp(0.524894317853);
    msg.setSource(4946U);
    msg.setSourceEntity(242U);
    msg.setDestination(36755U);
    msg.setDestinationEntity(111U);
    msg.group_name.assign("YIOPOAPMAIBWIGEZAUMZRLTBSEWVZJUZQHXBBNYDRFQHXZRGDPQAWAVREKLHUXDHLUCUMOJXIEXCPNAOSUCSCXFJIDWWDFKRKHLZXEGBECOTGRMSFZTGQRJSBQNNDYJQTVHVYJJLDWKRPXYBSVGHQILSOMMFWIVZKTNKRSBVEGAXNBNEYPKEJOTTKECSBDPVICDDPGQJMCVULXLYKTZKFQRFAGFQNPGWHNCILHTOMUHLTOZFAMVJYFU");
    msg.links = 527707240U;

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
    msg.setTimeStamp(0.593936054334);
    msg.setSource(57009U);
    msg.setSourceEntity(115U);
    msg.setDestination(6676U);
    msg.setDestinationEntity(222U);
    msg.groupname.assign("SXFCANYMAEXTJGGTXLVFQLOBLVBWZXDZJRSMWJWASTCHVWWLOZPUCHVRBEKICCPUJUSICHNKWXJNYQDIZHODFAVXUQHWGKSIMPGTCRJIPPHEULHHFTNLGBNOVIECXZYXFBAANCFEEFWYIJOMKRRGJFBOOYDKMTGEHLQNUAYJOB");
    msg.action = 232U;
    msg.grouplist.assign("EGQFMMVRVNYCTJFGCEVVLYYAWUSFPGFRCUBOLWSXWTTKQOAQDJRQMDQZYCAPYGHBVCESVLIFZXPLDADGUSVCAUOEIRFYJXDOBSSWZPHYCOBXLNQTKMOIOARTCBRJFJIBFDHIAAKXKHWZDZCIJCHRKFLRFJJHUGNGKZIEBKE");

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
    msg.setTimeStamp(0.905413014344);
    msg.setSource(56904U);
    msg.setSourceEntity(51U);
    msg.setDestination(38514U);
    msg.setDestinationEntity(230U);
    msg.groupname.assign("XSNKDQGVBULVBYZUCEFKFEOFPCBORPOCFBLKPGWEFHQGUZTQASWRTCQMARJKRLGEHELKPZXGDIESIRMXCAIXYFD");
    msg.action = 14U;
    msg.grouplist.assign("IZAODSKMWFUQKELEBAVFXIURCYWPOBRFVOQUTDVITTMCFHPWVZLXUZRJPAMVIEGDNSYBANAKFOFEVVCKJDEGLJIMTFUKEHEQXHJNDHNFJNWIUROSCJPGLUDTBHSYJVLFIOZLPTTNAZGHPRYAPDSMXSUESZCSSBXWKIKBQZAZWURXYNXEWQDQGQMQMRSBZVLYYGIGCTBJGICGJHNKHTFXAYOMEOLWRCONPMRNDVKPYHQQLWMJPOUBGHCD");

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
    msg.setTimeStamp(0.0759564197185);
    msg.setSource(48882U);
    msg.setSourceEntity(149U);
    msg.setDestination(20248U);
    msg.setDestinationEntity(235U);
    msg.groupname.assign("WEKUACOPICUKABGDYZBQHTXALBEVYATBGTBOCGMZVDFBHBQNCQRYYWFGVTJTECJHWFGSRGAGNYDCVZJDMMZIRPZEPZQBQAZINVSZFPKSDIWFSGWXLQULCNEWRXBHCDIYONVMHLHRDXODJMRVWLXEPTKAXQFSIFLPUSJIVYJGHERRUHMWFSULXUKAJK");
    msg.action = 20U;
    msg.grouplist.assign("WQQGFPSODKESRCZMFVAGNVLQXHZCGPTJKYCUHVNIDVLYSDNJDISQBJVHPYJRABXHPOKLJUWWTQMUZCIYSXFMYIFSGAOFANUTERWXSN");

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
    msg.setTimeStamp(0.951404993237);
    msg.setSource(62665U);
    msg.setSourceEntity(58U);
    msg.setDestination(400U);
    msg.setDestinationEntity(240U);
    msg.value = 0.677732278786;
    msg.sys_src = 7565U;

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
    msg.setTimeStamp(0.591197628794);
    msg.setSource(21803U);
    msg.setSourceEntity(120U);
    msg.setDestination(64279U);
    msg.setDestinationEntity(21U);
    msg.value = 0.0638931609429;
    msg.sys_src = 58168U;

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
    msg.setTimeStamp(0.852270536039);
    msg.setSource(2769U);
    msg.setSourceEntity(159U);
    msg.setDestination(9855U);
    msg.setDestinationEntity(87U);
    msg.value = 0.248658461745;
    msg.sys_src = 15342U;

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
    msg.setTimeStamp(0.733819318375);
    msg.setSource(60374U);
    msg.setSourceEntity(239U);
    msg.setDestination(20123U);
    msg.setDestinationEntity(152U);
    msg.value = 0.696593092433;
    msg.units = 73U;

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
    msg.setTimeStamp(0.879715078277);
    msg.setSource(57390U);
    msg.setSourceEntity(82U);
    msg.setDestination(53285U);
    msg.setDestinationEntity(73U);
    msg.value = 0.401236346058;
    msg.units = 118U;

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
    msg.setTimeStamp(0.551569137364);
    msg.setSource(20169U);
    msg.setSourceEntity(51U);
    msg.setDestination(51644U);
    msg.setDestinationEntity(179U);
    msg.value = 0.569070338704;
    msg.units = 230U;

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
    msg.setTimeStamp(0.994993286922);
    msg.setSource(3427U);
    msg.setSourceEntity(214U);
    msg.setDestination(31016U);
    msg.setDestinationEntity(250U);
    msg.base_lat = 0.643235514844;
    msg.base_lon = 0.629561039901;
    msg.base_time = 0.579161700216;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 24173U;
    tmp_msg_0.priority = -105;
    tmp_msg_0.x = -29353;
    tmp_msg_0.y = 14698;
    tmp_msg_0.z = 477;
    tmp_msg_0.t = 17321;
    IMC::AutonomousSection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.634196442244;
    tmp_tmp_msg_0_0.lon = 0.532594925146;
    tmp_tmp_msg_0_0.speed = 0.770852460573;
    tmp_tmp_msg_0_0.speed_units = 70U;
    tmp_tmp_msg_0_0.limits = 43U;
    tmp_tmp_msg_0_0.max_depth = 0.78045371279;
    tmp_tmp_msg_0_0.min_alt = 0.419061450684;
    tmp_tmp_msg_0_0.time_limit = 0.337633576837;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.164805708834;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.474359572171;
    tmp_tmp_msg_0_0.area_limits.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.controller.assign("YNIBAPKEHFHAXDVKUKRDWWUGAQBZSBZXBUAKRGQNTWRJCVRGFOKEKYGYEWUYPGNAIDHFNZAYTGAMWMETHWJZRJPZISKSOUCVOSMWBGNBOTZFARLOECHTZXCPGLHHRLPPBSBOVRMCBUJLWODENSVLDPEHYPOSIEMQSFTQXIJYMWJPZJXUQNTQSVUDWJXILFEKPFHBAYQFNCIIKUSGLITIMXVUX");
    tmp_tmp_msg_0_0.custom.assign("YCXFZKLREUVNLPWTISQPAPTAQAYGOSIEOUHEVVHLWKPFWTNYSDRNBOJSFNHPIFHJHLZGGTMSRYVCVUC");
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
    msg.setTimeStamp(0.919375650064);
    msg.setSource(58279U);
    msg.setSourceEntity(184U);
    msg.setDestination(53591U);
    msg.setDestinationEntity(51U);
    msg.base_lat = 0.879679895694;
    msg.base_lon = 0.278604749557;
    msg.base_time = 0.868516974768;

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
    msg.setTimeStamp(0.938148494628);
    msg.setSource(39859U);
    msg.setSourceEntity(7U);
    msg.setDestination(45394U);
    msg.setDestinationEntity(175U);
    msg.base_lat = 0.861794125092;
    msg.base_lon = 0.927704396434;
    msg.base_time = 0.256465596344;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 34643U;
    tmp_msg_0.destination = 45001U;
    tmp_msg_0.timeout = 0.685738781119;
    IMC::PlanDBState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_count = 45971U;
    tmp_tmp_msg_0_0.plan_size = 141319176U;
    tmp_tmp_msg_0_0.change_time = 0.561219307397;
    tmp_tmp_msg_0_0.change_sid = 39251U;
    tmp_tmp_msg_0_0.change_sname.assign("MLXZNIWTNZATMTFUVGYJYEUVCSMOQUCFRPHDHPESDIBLCUXEOBPTFAHV");
    const char tmp_tmp_tmp_msg_0_0_0[] = {-27, 124, 123, 81, -36, 43, -73, -102, -28, 26, 32, -84, 4, 0, -112, -40, 0, -38, -127, 113, -38, -51, 71, -80, 46, -92, 123, 74, -65, 25, 126, 68, 64, -121, 97, -117, 90, -84, -122, -70, 122, -26, -46, -39, -93, 95, -8, -113, 117, 105, -81, 41, 114, -93, 83};
    tmp_tmp_msg_0_0.md5.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    IMC::PlanDBInformation tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.plan_id.assign("KKRZWLTNHSUTLRDLZLGSSWJMWEFXUDIMVUCAFJBJZVZBTPIDNBGTXRJXIPDFYBJSYNOPNVSIIYHACAFTYOXXLGLQWVEVIRCWQLJFJNNDMYGLWDQORGBYEXPUTBAAVMCMQIKKLMYOKUHAOUEST");
    tmp_tmp_tmp_msg_0_0_1.plan_size = 27731U;
    tmp_tmp_tmp_msg_0_0_1.change_time = 0.418527035829;
    tmp_tmp_tmp_msg_0_0_1.change_sid = 40897U;
    tmp_tmp_tmp_msg_0_0_1.change_sname.assign("HBXNOYFQYTYUVCNXOLIHNLKYSOSFCXYJRVXXPQEPTRVKPBXPJRZMGGUVATNWRXWJOYVAYHGAIEUPEZSJFRDHJATOTZTRVHUOTKSEWPSZDWUZNUCUOFTFENGQHMKMCNHZYWFKJZFQMNYIQSINOVSOONQWWGLALLZEJQVPXHPDJDIUL");
    const char tmp_tmp_tmp_tmp_msg_0_0_1_0[] = {44, 49, 116, -90, -62, 104, -25, -29, 56, -9, 104, 35, -3, -116, -46, 29, -24, -80, -71, -9, -113, -120, -18, -89, 59, -111, -78, -34, -2, 23, 16, -20, -20, 98, 103, 110, -108, 118, 26, -79, -95, 89, -79, 60, -86, 76, 35, 88, -113, -70, -30, -40, 5, 110, 25, -1, 29, 94, 63, -7, 117, 55, 18, -61, -24, -87, -25, 94, -21, -57, 28, -86, -115, 6, -94, 75, 85, 13, 118, 73, -29, 22, -127, -33, -86, 23, -43, -91, 97, -22, 93, -108, -41, 83, -21, -117, 39, 19, -66, -12, -67, -25, 124, -30, 123, -102, -103, -112, 53, 20, 69, 0, 76, -27, 54, -115, -12, -52, 14, 59, -108, 123, 103, -99, 63, -41, 2, 93, -25, -125, -117, -19, -94, 9, -31, 10, -39, 74, -27, -124, 6, 104, 57, 118, 107, 124, -29, 33, 69, 54, 113, -94, -36, -31, 47, 92, 52, -34, 1, -23, 0, -15, -84, 32, 38, -84, 58, 55, -84, -17, -89, -76, -89, 13, 82, -60, 49, 34, 78, -85, -114, 61, 80, -117, -29, 119, 98, 72, -90, 102, -24, -109, 83, -38, -47, -1, 68, 100, -31, -82, 85, 56, -89, 69, 92, -104, -102};
    tmp_tmp_tmp_msg_0_0_1.md5.assign(tmp_tmp_tmp_tmp_msg_0_0_1_0, tmp_tmp_tmp_tmp_msg_0_0_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_1_0));
    tmp_tmp_msg_0_0.plans_info.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.488282730979);
    msg.setSource(26239U);
    msg.setSourceEntity(169U);
    msg.setDestination(25723U);
    msg.setDestinationEntity(76U);
    msg.base_lat = 0.604097730268;
    msg.base_lon = 0.428993193001;
    msg.base_time = 0.785488026324;
    const char tmp_msg_0[] = {-41, -123, -60, -67, 36, 16, 50, -42, -45, 4, -91, -12, -15, -69, -111, 65, 48, -19, -47, 74, 41, -17, -99, -125, -29, 86, 96, 9, 77, 80, -95, -25, 69, -9, 68, 24, 119, 78, 54, 39, -2, -108, -46, -45, 21, -57, 109, -59, 123, -17, 120, -109, 21, 54, 57, -91, 120, 18, -38, 19, 94, -19, 108, -107, 96, 46, 25, 3, -74, 21, -11, -13, -117, 100, -28, -23, -42, 26, 15, 121, 118};
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
    msg.setTimeStamp(0.0108638833811);
    msg.setSource(27579U);
    msg.setSourceEntity(157U);
    msg.setDestination(27070U);
    msg.setDestinationEntity(194U);
    msg.base_lat = 0.761409352873;
    msg.base_lon = 0.925478099986;
    msg.base_time = 0.467209936318;
    const char tmp_msg_0[] = {-39, -27, 124, 82, 87, 26, -106, 63, -8, 76, 89, -107, 53, 31, 23, 14, 42, 113, 17, 60, 35, -9, -47, -91, 115, -19, -3, 58, -45, 121, -89, -10, -107, 72, 9, 18, -82, -2, 29};
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
    msg.setTimeStamp(0.121493587337);
    msg.setSource(6586U);
    msg.setSourceEntity(111U);
    msg.setDestination(37507U);
    msg.setDestinationEntity(185U);
    msg.base_lat = 0.192434346624;
    msg.base_lon = 0.167684217853;
    msg.base_time = 0.402357791263;
    const char tmp_msg_0[] = {125, 92, 35, 81, 93, -52, -115, -74, -38, 62, 8, -70, -78, -120, -46, -116, 89, -79, -20, 107, 125, -16, 110, 23, -57, 104, 15, -101, -121, -117, -21, -8, 43, -50, -42};
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
    msg.setTimeStamp(0.907080297257);
    msg.setSource(18973U);
    msg.setSourceEntity(48U);
    msg.setDestination(33626U);
    msg.setDestinationEntity(150U);
    msg.sys_id = 49145U;
    msg.priority = 38;
    msg.x = -13200;
    msg.y = 26679;
    msg.z = 25311;
    msg.t = 10397;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.317178215661;
    tmp_msg_0.lon = 0.830447722006;
    tmp_msg_0.depth = 115U;
    tmp_msg_0.speed = 0.75857725754;
    tmp_msg_0.psi = 0.0851166847861;
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
    msg.setTimeStamp(0.29591509876);
    msg.setSource(27106U);
    msg.setSourceEntity(142U);
    msg.setDestination(58660U);
    msg.setDestinationEntity(197U);
    msg.sys_id = 15439U;
    msg.priority = 66;
    msg.x = 23415;
    msg.y = -19697;
    msg.z = 28705;
    msg.t = -23671;
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 20708U;
    tmp_msg_0.status = 93U;
    tmp_msg_0.text.assign("VNGTYPSCLKOJUIAMXUVKTJMJGLPTTRGMVPZRGCJBSMUXWKFIIPVBYAQTYVFIYUNLAQUESOFPLKFGMRDDEYNNXJCCCJWIKUTGLYCAPHBLEEOWRNZYIALEWORAWFVDEGHCXQSBROFBDPUNNWSAAHNZQXJHMSXWFGBOQ");
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
    msg.setTimeStamp(0.561564334496);
    msg.setSource(37564U);
    msg.setSourceEntity(222U);
    msg.setDestination(15119U);
    msg.setDestinationEntity(12U);
    msg.sys_id = 37110U;
    msg.priority = -20;
    msg.x = -5543;
    msg.y = 6853;
    msg.z = 6770;
    msg.t = -30732;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.445941815612;
    tmp_msg_0.lon = 0.140795604488;
    tmp_msg_0.z = 0.258285971316;
    tmp_msg_0.z_units = 233U;
    tmp_msg_0.speed = 0.0186183120996;
    tmp_msg_0.speed_units = 115U;
    tmp_msg_0.bearing = 0.419143861813;
    tmp_msg_0.cross_angle = 0.743970647431;
    tmp_msg_0.width = 0.263499934291;
    tmp_msg_0.length = 0.399492174158;
    tmp_msg_0.coff = 241U;
    tmp_msg_0.angaperture = 0.97780112923;
    tmp_msg_0.range = 3465U;
    tmp_msg_0.overlap = 80U;
    tmp_msg_0.flags = 6U;
    tmp_msg_0.custom.assign("SZARBCMPJFCBORRAJODBLPKHRFPOYFHAOQWOCRVZUWDTUMMLHVNZLOFOAGDMCF");
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
    msg.setTimeStamp(0.588758687362);
    msg.setSource(32916U);
    msg.setSourceEntity(197U);
    msg.setDestination(39435U);
    msg.setDestinationEntity(74U);
    msg.req_id = 43326U;
    msg.type = 221U;
    msg.max_size = 17732U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.744392800269;
    tmp_msg_0.base_lon = 0.771174285804;
    tmp_msg_0.base_time = 0.55030008249;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 22227U;
    tmp_tmp_msg_0_0.destination = 45361U;
    tmp_tmp_msg_0_0.timeout = 0.00710004928768;
    IMC::UamTxFrame tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.seq = 65295U;
    tmp_tmp_tmp_msg_0_0_0.sys_dst.assign("TQEYKIHCBZGQDSVBVLDKWBETRM");
    tmp_tmp_tmp_msg_0_0_0.flags = 32U;
    const char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {3, -67, 92, -87, -66, -107, 70, 107, -15, -91, 112, -7, -85, 61, 38, 6, -26, -18, 86, -123, 99, 20, 89, -97, -62, -32, 78, -119, -60, 4, -105, 52, 87, 5, 34, -8, 121, -120, 69, 105, 49, -52, 125, 116, -57, -37, 5, -6, -118, -13, 28, -7, 59, -34, 23, 82, 29, 37, 35, -20, 59, 81, 97, 12, 109, 70, 86, 34, 63, 86, 32, -99, -78, -116, -39, 111, -5, -32, -120, -42, -63, -21, -39, 6, 93, 0, -69, -113, 48, -14, -52, 34, -33, -18, 27, -38, 115, -124, -71, -80, 100, 78, 1, -97, 13, 122, 54, 57, 110, -41, -1, -46, 22, -125, 123, -7, -110, -6, -94, 50, 125, -107, 31, 49, -94, -90, -70, -50, 5, 106, -40, -18, 120, 42, -84, -18, -89, -114, 38, 37, -4, 35, -4};
    tmp_tmp_tmp_msg_0_0_0.data.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
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
    msg.setTimeStamp(0.422487375747);
    msg.setSource(764U);
    msg.setSourceEntity(103U);
    msg.setDestination(22959U);
    msg.setDestinationEntity(133U);
    msg.req_id = 29810U;
    msg.type = 125U;
    msg.max_size = 36143U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.624932983785;
    tmp_msg_0.base_lon = 0.25189717886;
    tmp_msg_0.base_time = 0.143793318572;
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
    msg.setTimeStamp(0.554560307268);
    msg.setSource(19337U);
    msg.setSourceEntity(41U);
    msg.setDestination(2650U);
    msg.setDestinationEntity(88U);
    msg.req_id = 20208U;
    msg.type = 72U;
    msg.max_size = 51311U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.650694666723;
    tmp_msg_0.base_lon = 0.9821244219;
    tmp_msg_0.base_time = 0.907208743488;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 4032U;
    tmp_tmp_msg_0_0.destination = 47686U;
    tmp_tmp_msg_0_0.timeout = 0.730330007385;
    IMC::SoiCommand tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.type = 85U;
    tmp_tmp_tmp_msg_0_0_0.command = 171U;
    tmp_tmp_tmp_msg_0_0_0.settings.assign("WPOLDHQTJDFVAHMJXQKBRWEKDJETZYXHAJOMUHABXMMUSBQIOYNCWVMGNYKCWOAPEOYYKGZDQIQLUHFKANONOISAMUDFQOUISLJJHRBJSZYSZNDVZNTRGVBQXVQYNCTFOMPGQGKWKJCLVFJPPVELBDUWAFWPSVBIREUINALXVTR");
    IMC::SoiPlan tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.plan_id = 64519U;
    tmp_tmp_tmp_msg_0_0_0.plan.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.info.assign("AYWYMWEQCYLXHASPBRPJCKRTYXQPJHKGPIFAWOITOBHMKFZDISCBVFZJDEAZSRLSWNBFUGBZUGQNUDRVYABEIYZXVWXWNQXVQUBREFIWBASINDZUMGJUPAELQER");
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.687611790712);
    msg.setSource(33315U);
    msg.setSourceEntity(230U);
    msg.setDestination(848U);
    msg.setDestinationEntity(210U);
    msg.original_source = 54461U;
    msg.destination = 43639U;
    msg.timeout = 0.953836862755;
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("JUKWLEBORPRLVPPOEUJEKJHSFPGERGHNUTFRYPBVDEDPYKJYHXYPGDHTS");
    tmp_msg_0.lat = 0.694041844592;
    tmp_msg_0.lon = 0.137113372353;
    tmp_msg_0.z = 0.249926158341;
    tmp_msg_0.z_units = 91U;
    tmp_msg_0.cog = 0.428015503454;
    tmp_msg_0.sog = 0.845612515708;
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
    msg.setTimeStamp(0.977816388621);
    msg.setSource(50471U);
    msg.setSourceEntity(3U);
    msg.setDestination(64550U);
    msg.setDestinationEntity(71U);
    msg.original_source = 39914U;
    msg.destination = 41487U;
    msg.timeout = 0.843761738013;
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VGKESLVMOJLJFUASCEJYFNCIKBGBNQCBWBFEAHSVJWXETMRWPCRHBJHMDLOUJUUWXASUSBXOWJTSQYRVCEOFDMYHPZGWZEBVALQZTDYMIVQBCAGLNYPWSZYEMKOOPMCHQJXIGZIRXTVNUPMELAITPUWXXNYEDRGOHKFHRPDOJIZDUUTCFYJZXQZKPPKFWWFODATUKGMZPITHVDRRHLLBVNQAKNRKDNQSBZAHISQCYFFTYGVLMNXCEOSAL");
    tmp_msg_0.predicate.assign("NWWXZUBEAFATHKXUTRNRBCJEAYRGOXZHPJGBEAWCGFVXTGKVSTJEPYLKIQGDMXWAUTLNRQMBCHTSJQEEQJYAFLMZE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TCHYFLBOIPJIVYTCFCXMSJDCXEHWJUWFWBVKNRZSINKN");
    tmp_tmp_msg_0_0.attr_type = 203U;
    tmp_tmp_msg_0_0.min.assign("CECPXUFKYWLNOFKMLJEOUYOUNUJTMZZCQPHTVQKKAYWHDMZRBOYMLWBCXSNBSGDZPUWTWVEYPARIYNLRWSAFAXTFEQSKAGVXVCVUSFQIXPJZOGEBSCTZVFGWDBBXPRQSPCAHBRZJKYMYRCIUMNQIVDQJWYDELLEDCTCKPHQGTGJRLFGRQWHJNTFUIAAXDVOVHGHXJIOIJIISNNFBXGKTNUTMA");
    tmp_tmp_msg_0_0.max.assign("NZLDXKYXOFROKSZLHZGQIETFKEKPECFQLIZNSUXBXSPTBISIGYRZOANHOMKMJYBPKYVIUVFLKFCLPJHFWNWZUBJTTANYHRJEMVFSG");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0576178721766);
    msg.setSource(21214U);
    msg.setSourceEntity(130U);
    msg.setDestination(11326U);
    msg.setDestinationEntity(34U);
    msg.original_source = 64598U;
    msg.destination = 40120U;
    msg.timeout = 0.801002095629;
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.10309047695;
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
    msg.setTimeStamp(0.24419093282);
    msg.setSource(6873U);
    msg.setSourceEntity(222U);
    msg.setDestination(36896U);
    msg.setDestinationEntity(11U);
    msg.type = 230U;
    msg.comm_interface = 34748U;
    msg.model = 18436U;
    msg.list.assign("GVEKLCWLKBQXDUUTAOBULNIOULQXFFXIBQTRXHHFPXNBGWSSRIZMFZBNEBUUJSLDRTTELSNEBTEFDPAQDXYKTIMLOL");

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
    msg.setTimeStamp(0.8691068558);
    msg.setSource(62846U);
    msg.setSourceEntity(189U);
    msg.setDestination(29088U);
    msg.setDestinationEntity(147U);
    msg.type = 68U;
    msg.comm_interface = 38721U;
    msg.model = 46774U;
    msg.list.assign("AAQCECOZRAKXRUKXHLPIBDJBYICKHVWFHZXZMXKBAOCXVHFVGPWJHPNRSWDOHMFVWXQVPEZDJFQEWTGCGDTQOMQEEKEXMPKORRJKIQKLZLVCFBQBNSVJGJLLMBMJUCIBFAJTIPCRSYROXXGVLWMQKNBAPTIFBWFNDNFPNEDEVRUQIZZIWHHQAUDUNGYYZMWFJZNIGSRCTBDXSUDNOAIYLSTSTMDJMGWYOYSZLSAT");

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
    msg.setTimeStamp(0.996229638906);
    msg.setSource(36749U);
    msg.setSourceEntity(122U);
    msg.setDestination(27254U);
    msg.setDestinationEntity(125U);
    msg.type = 52U;
    msg.comm_interface = 5735U;
    msg.model = 38972U;
    msg.list.assign("KYJFLJCQHYUUNCKSSSHOVZMWMPNMDRAJUGCYHYWGPDAPWNQSJSBMEXUKEGQPYFKRTJEOMVIBABOCEEUMKBYDFLVIJZEBYYBQKPICTHRZNIPSXZTEWQBXLTOQULMRKLPOZLWTTGZLTRALDQGSFZQG");

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
    msg.setTimeStamp(0.823440241858);
    msg.setSource(49980U);
    msg.setSourceEntity(54U);
    msg.setDestination(5398U);
    msg.setDestinationEntity(17U);
    msg.type = 159U;
    msg.req_id = 1675850779U;
    msg.ttl = 18723U;
    msg.code = 199U;
    msg.destination.assign("RJKFELUWZMXPQHNEYXTKBRSMSTUUIABEQYMWRFAHLYNLCRDCGADIVIURSQJYPPHBIOUODETLZJLDBEBEVXZKXRYJYZFNVLPFCPWEGWGJOONHXAOVHOX");
    msg.source.assign("FKYQEHHCMTKAJOVWKEZOSNHMROGHAUZKJW");
    msg.acknowledge = 8U;
    msg.status = 79U;
    const char tmp_msg_0[] = {-53, 94, -116, -42, -52, -31, 117, -120, -83, -113, -97, -112, 52, 99, 50, -55, 124, -121, -103, -25, 61, 60, 119, -22, -73, -83, -115, -72, -62, -52, -21, -20, 49, -121, 47, 8, -13, 7, -26, 91, 98, -125, -62, -57, 120, 55, 53, -109, 105, 41, 16, -65, -81, 66};
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
    msg.setTimeStamp(0.0976446195527);
    msg.setSource(5243U);
    msg.setSourceEntity(141U);
    msg.setDestination(19667U);
    msg.setDestinationEntity(10U);
    msg.type = 206U;
    msg.req_id = 4069807347U;
    msg.ttl = 24446U;
    msg.code = 34U;
    msg.destination.assign("LHHTGMGTVDLHPJCMTPOZKAWQUNLLJMVJYLGCFSISNIIYYNUCJSSSYUEVBCVXPSPJKGAEKKRUOASCBOTDPRPWDKQQXPPNKZNLVZZKIQWRTUZSJGCEHAYHKMBAHXLYYHYOENZIRWQA");
    msg.source.assign("VQPXFKCPECLVGYYHENOLYHEOKFVJFHDLDHGQTRDCJIOMDAFWZIRNQNKZEVIVSJWTBM");
    msg.acknowledge = 225U;
    msg.status = 54U;
    const char tmp_msg_0[] = {-21, -106, 18, 52, -69, -12, -108, 90, -62, -11, -34, 5, -109, 114, -120, 62, -78, 60, -6, 81, 108, 47, 70, -128, 101, 9, 71, -50, -96, 43, 65, -126, 70, -78, -43, 125, 105, -2, -80, -100, -52, -125, -113, -11, -118, 45, 56, 117, 105, 35, -55, 36, -128, -20, 22, 0, -6, 68, 20, -76, 54, -54, 68, 55, 62, -4, -2, 15, 17, 100, 17, 114, -60, -84, -8, -54, -113, 14, 52, 104, -30, 107, 110, -117, -94, -90, 59, -58, 81, 115, -37, -56, -127, -33, -3, -10, 86, 22, -49, 67, -80, -46, -82, 30, 81, -42, 123, -34, 114, 31, 1, -42, 23, -52, -70, 2, -99, 122, -106, -40, -58, -103, -65, -128, -38, 12, 115, 85, -80, -92, -84, 47, -45, -35, -68, -6, -8, -57, 54, -86, 65, 5, -105, 101, 73, -118, -118, -79, -38};
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
    msg.setTimeStamp(0.905809601838);
    msg.setSource(29490U);
    msg.setSourceEntity(162U);
    msg.setDestination(37492U);
    msg.setDestinationEntity(206U);
    msg.type = 101U;
    msg.req_id = 4216086533U;
    msg.ttl = 48333U;
    msg.code = 122U;
    msg.destination.assign("QAIZHOTAPZQCHMLGYSOXVQLWOKCJJRHRYMMVHPVQVLRJBFCTJSLDSZSDUHMVWCEKKAUQDCQZCYCPAWMCUIHFYTXWNSHZIZZP");
    msg.source.assign("TYYKQJAZJRHKXVOEPNCGELASITIERPRUGFEOZKBQRYFDKNCOQXCDOOTLFFCTMUKFWSGQBCQYUMOSXQBWBLYVPMGBFVWGAMSBZIPWMJSXZVKHVQSJKCYXTPFLVLFWQOZIRMHXJNDWJUJIKFNZHRELHEEZVATXIFDUYKDIHYGSARNWCOPZBMOCGVEUWAJYAGLNBULPMUZERIPSGCTSLWNXMDDSLBTMW");
    msg.acknowledge = 158U;
    msg.status = 18U;
    const char tmp_msg_0[] = {-61, -106, -117, 103, -10, -127, 72, 94, -84, -49, -1, 37, 1, -52, 63, -96, 97, 24, -14, -48, -28, -7, 23, 59, -61, -116, -88, 38, -118, -29, 90, -92, 52, 14, 93, 106, -122, 98, 110, -40, -34, 82, -98, 69, 32, 7, 62, -17, -18, 75, -114, 80, 107, 62, -68, -106, 99, 18, -108, -81, -22, -73, -30, -86, 71, 83, -35, -62, 119, -50, -31, -124, 95, 35, 29, -128, 25, 2, -11, -52, -59, 87, 3, -15, -45, 105, 88, 64, -25, -80, -91, 66, -118, -98, -26, 24, 48, -75, 60, -32, 115, 67, -6, -113, -50, -101, -10, -104, 53, 73, 106, -115, -76, -108, -124, -58, -124, 111, -99, 95, 55, 101, -28, -18, -74, 116, 120, 105, 109, -8, -125, -125, 123, -102, -75, -20, 124, 100, -125, -74, -86, -72, 96, -6, -20, -113, 72, 99, -39, -13, 48, 104, -27, 50, -90, 69, 93, 68, -110, -22, 89, 0, -11, -107, 67, 120, -109, -127, 32, 63, -76, -74, -116, -89, 45, -31, -123, -98, -37, -6, 72, -2, -110, -107, -27, 93, 70, -110, 108, 119, 9, 125, 25, 1, -33, 67, -73, -35, 92, 15, -51, 18, -126, -71, 41, 23, 116, -59, 96, 58, 27, 90, -62, 102, 34, 111, 77, 96, 77, -37, -106, -3, 79, 12, -118, -71, -45, 111, 112, 67, -124, 7, -21, 42, -25, 14, -93, -19, 101, -121, -44, -1, 15, -58, -11, -68, -9, -79, -58, -54, -12};
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
    msg.setTimeStamp(0.335874459071);
    msg.setSource(58006U);
    msg.setSourceEntity(51U);
    msg.setDestination(37332U);
    msg.setDestinationEntity(90U);
    msg.id = 63U;
    msg.range = 0.32921943983;

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
    msg.setTimeStamp(0.499123730073);
    msg.setSource(57914U);
    msg.setSourceEntity(208U);
    msg.setDestination(6161U);
    msg.setDestinationEntity(145U);
    msg.id = 17U;
    msg.range = 0.693728653669;

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
    msg.setTimeStamp(0.66187578474);
    msg.setSource(42556U);
    msg.setSourceEntity(87U);
    msg.setDestination(51877U);
    msg.setDestinationEntity(42U);
    msg.id = 40U;
    msg.range = 0.0313739059796;

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
    msg.setTimeStamp(0.87259121535);
    msg.setSource(53856U);
    msg.setSourceEntity(22U);
    msg.setDestination(44927U);
    msg.setDestinationEntity(72U);
    msg.beacon.assign("EXTJUVNGQOJWDADXBAMVYZIKNRBRJNDOOQQTAOBJYELCIWHSIPGQINGFTCZZMKXFZKIAUFHBZMYKWUJJCIYOHHAYCSAXPSURCAHGDM");
    msg.lat = 0.0409956721541;
    msg.lon = 0.746073368501;
    msg.depth = 0.9459648121;
    msg.query_channel = 189U;
    msg.reply_channel = 117U;
    msg.transponder_delay = 107U;

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
    msg.setTimeStamp(0.724257799551);
    msg.setSource(37567U);
    msg.setSourceEntity(83U);
    msg.setDestination(21231U);
    msg.setDestinationEntity(146U);
    msg.beacon.assign("HKNNWESEXYFYDXEAVREWBZRGUOFPKAMGXNLRIXFJDZQCFGAOUIKIBUVRLYEVLXFHYMCSTUKFT");
    msg.lat = 0.138878149593;
    msg.lon = 0.202416013448;
    msg.depth = 0.437364023494;
    msg.query_channel = 251U;
    msg.reply_channel = 31U;
    msg.transponder_delay = 236U;

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
    msg.setTimeStamp(0.672744419479);
    msg.setSource(53203U);
    msg.setSourceEntity(200U);
    msg.setDestination(722U);
    msg.setDestinationEntity(33U);
    msg.beacon.assign("VKBPCXSWYZGEJVTHLHAWRKTVCDJCGSGMWRLYHVNLDBNDMDIEFQJXGZAHSPFEMSGSUYXOLKBCVFSPGJVSMWNWQOZEUIRANPUOWIXOHF");
    msg.lat = 0.82873251546;
    msg.lon = 0.855590501732;
    msg.depth = 0.503844108154;
    msg.query_channel = 227U;
    msg.reply_channel = 95U;
    msg.transponder_delay = 78U;

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
    msg.setTimeStamp(0.545783494334);
    msg.setSource(46891U);
    msg.setSourceEntity(29U);
    msg.setDestination(41104U);
    msg.setDestinationEntity(165U);
    msg.op = 15U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NAJJWPUGBMJHJBDSXXPSJSEKOBRDBGGSRDMCTXDOWLWUQDFXLLPOOIZWAYYQZBNPYYXZYUFNZJHVYMCUHMRBIQEQQRHIFRTKOZKOAVSNCYCAKRPKUTKWTVCJZIFPRWVXCDCZUHARVEWAFGPMMQUTQUINWISICAGJKBLTMAGNPNLVKNYNNLHZEVSZDOHOXOLJFQXHAEEGLUIQDPVBDTJGHLWMEFTTSOZQFKXV");
    tmp_msg_0.lat = 0.116944702021;
    tmp_msg_0.lon = 0.148046287742;
    tmp_msg_0.depth = 0.796141387247;
    tmp_msg_0.query_channel = 235U;
    tmp_msg_0.reply_channel = 218U;
    tmp_msg_0.transponder_delay = 9U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.723778105843);
    msg.setSource(62497U);
    msg.setSourceEntity(115U);
    msg.setDestination(9954U);
    msg.setDestinationEntity(249U);
    msg.op = 179U;

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
    msg.setTimeStamp(0.344297879821);
    msg.setSource(12011U);
    msg.setSourceEntity(254U);
    msg.setDestination(8138U);
    msg.setDestinationEntity(206U);
    msg.op = 11U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JUKHPDYJBTPVEMEQBJZJEWGVMGLLCQBGIMKDPXXEFZPOTNXPONUYLYLBQKMAJVXLGWTGEAHUSVGTTBAOYEMKZFETALVDXQWMUCNJBSUSWZKMIXRRDVIPFCTGHKRBZIMHZHHVJXZBQUFKOXFRFNXQQBSRARORDCWFSNZILRHGDQKUVADCHKNTDNRWCBYPUTESZCYWUEQNRI");
    tmp_msg_0.lat = 0.548231203052;
    tmp_msg_0.lon = 0.992169962539;
    tmp_msg_0.depth = 0.858007220394;
    tmp_msg_0.query_channel = 206U;
    tmp_msg_0.reply_channel = 17U;
    tmp_msg_0.transponder_delay = 153U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.568800681711);
    msg.setSource(61653U);
    msg.setSourceEntity(96U);
    msg.setDestination(38988U);
    msg.setDestinationEntity(156U);
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 134U;
    tmp_msg_0.x = 0.868452551447;
    tmp_msg_0.y = 0.576792191589;
    tmp_msg_0.z = 0.196155983963;
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
    msg.setTimeStamp(0.00573423982797);
    msg.setSource(28078U);
    msg.setSourceEntity(46U);
    msg.setDestination(45931U);
    msg.setDestinationEntity(54U);
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 56U;
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
    msg.setTimeStamp(0.654498106835);
    msg.setSource(18336U);
    msg.setSourceEntity(24U);
    msg.setDestination(8253U);
    msg.setDestinationEntity(151U);
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.733871290119;
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
    msg.setTimeStamp(0.106757392412);
    msg.setSource(41867U);
    msg.setSourceEntity(101U);
    msg.setDestination(58515U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.588004565353;
    msg.lon = 0.152279503048;
    msg.depth = 0.0445916595587;
    msg.sentence.assign("PGZWTUZQOSTPYBJXRDFOHZWJFRIWSEVYPXFDUYJHLXDWIBTABNYOAJJVCOYVCUNVGEBKZLFUTISOBOPMRNCZ");
    msg.txtime = 0.145779429949;
    msg.modem_type.assign("YHLAHWTCMCCAIBRGVMLAIZUIBFTSILYNGOJLCCUXVQBFTQHPPDTJKHXXESLCAFMNMENSAMEHHMWSOGCSTPTKABNVFQNXUNRJDYOVHJZSMSLBKDZUAKIRGYDZRWMVQYUDUJRBTRNQJGNDBNNOOFVZMKUZBQ");
    msg.sys_src.assign("XGWXYWZRDRRXOCVMKXMTULNABCPGNKDILDSRHEPWEVJUYFCZYQKHVWDU");
    msg.seq = 52958U;
    msg.sys_dst.assign("JAKVUMEIKZTGQXUIVWQQFYQOUCOVBHZUNBYHCDVSHLNUSILEIPINUNZSZXKFPRXDCRRIMFBJSYISXJOYPQJWXVVZBASONCACISWYAMCLNYWXPGZWGDTYXYPFHLBAPPLDFCOJRKWEEZIDGXBUQHQLULBUGROFNYZJTVLJMBRONOUTCTEMDBSVRDS");
    msg.flags = 181U;
    const char tmp_msg_0[] = {74, 78, -112, 120, 36, -66, 4, 115, 83, 61, 97, -91, 24, 119, 24, 74, -56, 30, 99, 7, -58, -65, 36, 52, -127, -105, -113, 79, -13, 62, 123, -35, -105, -56, -83, 61, -94, 16, -104, -90, 78, -3, 113, -20, 66, 0, 27, -40, 22, 25, 123, 9, 25, 70, 74, -36, 13, -121, -9, 116, 5, -12, -110, -61, 55, -122, 38, -81, -111, 13, -128, -128, -17, 23, -125, -102, -16, 107, -2, 71, -39, -38, 0, -72, -124, 20, -38, -53, 46, -113, 49, -85, 105, -13, 114, -114, -33, 100, 0, -64, 21, 33, -11, -48, -110, -38, 24, -28, 21, -68, 83, 42, -62, -3, -80, -107, 69, -94, -124, 16, -116, -76, 15, 43, 90, -120, -74, 87, -73, 92, 74, 37, 84, -126, -127, -124, -32, 41, 21, -105, 90, -62, 17, -26, -37, -76, -124, 119, -89, 112, -9, 24, 64, -125, 31, 118, 92, 51, 12, 115, 28, 33, -86, -51, 65, 20, 106, 89, -47, 32, 34, -6, -105, 6, 102, 96};
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
    msg.setTimeStamp(0.743291064273);
    msg.setSource(32032U);
    msg.setSourceEntity(56U);
    msg.setDestination(51775U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.156489839624;
    msg.lon = 0.280358562652;
    msg.depth = 0.340036423826;
    msg.sentence.assign("EFZMPHVUDMDSFUKUMNBKWLOKDDJNUSCDNHNRKZYJCLITZFWGJAXZUVEAZANFFTBVDQVSYSPHREPXVFZAGBJFJGXYBDJPMYDFYQKPAILHBLIYCSCJBYWWTEOCIWGXQGCSUAMRMRARNTCHEIRPMPQFUCGLXWROPWHJZXHWKQSQVASXMWKLLHJVCOVTOKGLINBOBTOKASYPQBEJDOYZZUFXMBTNKGHOEQSRTOCIGINGAIXVHLTEDQNLREYZUXQEUP");
    msg.txtime = 0.472817509824;
    msg.modem_type.assign("RUZDOUCEMFTNZITKBIXBMXXGMGCPWYNHOJTY");
    msg.sys_src.assign("NKBKFUOBNBSGA");
    msg.seq = 23517U;
    msg.sys_dst.assign("TFHPMNRJBWCMAULERAFDNEJZOIZUBPQNNNJTTCXWTACBUOLQSVEFVDLSHJ");
    msg.flags = 73U;
    const char tmp_msg_0[] = {-13, 50, -60, -62, -75, -1, 86, -12, -72, 119, 95, 76, -125, 82, 113, -4, 16, 71, 67, 95, 116, 88, 27, 94, -34, -29, 126, -73, -112, -33, 83, -10, -49, 70, -97, -55, 5, -66};
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
    msg.setTimeStamp(0.320655054038);
    msg.setSource(12792U);
    msg.setSourceEntity(211U);
    msg.setDestination(2609U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.0188566461362;
    msg.lon = 0.0312644966067;
    msg.depth = 0.857159843446;
    msg.sentence.assign("OXCGKVOASYMTDVGWZPWYTAOIIQWHIBEUBLQZDTAVFRTEMUSSULVEINYAJVDQBRWDEFIVEMDQHEPZEHPABISTJWPDUYXSSFYIVPLJYLZBGHUSTEXHMCJIUPCGKJJWFQONDGKTHLBDRXYZCNGFRQOFWCHXISYXJMZKVUQLR");
    msg.txtime = 0.999390777659;
    msg.modem_type.assign("ASRFFAKXZYPIWIVFYEJBBOPYCMIKSPEQLDPMSFYTHWZCHAGLREIQIMDUOLWGQRFNSPYEKIILTUBHPRKUQGHKGEYZCUXLYFHLCGFSDAMXJGJZAURTNSAWVVWMGYAZCRKKPUTRLJTJHECUUFTHV");
    msg.sys_src.assign("KBKDTMMDLBCQZEGHNMZVZASISKUXUUROMCEBXGEULCFXFJSBYZIWYZXJLKSGTVSOFVJAM");
    msg.seq = 16774U;
    msg.sys_dst.assign("VWOKUJLSXVYYVQNMCUYXJAPGVFDFDIGIQLRSONQVMUAODXYMUCULYBPGYZTLIOJCZUNKKWNDJEAXUYBRIREDTOYTSDMKROEEITVDQSNSOBLEBUTJZGK");
    msg.flags = 15U;
    const char tmp_msg_0[] = {-40, 51, 79, -93, 2, 10, 11, 119, 10, -111, -56, -5, 69, 85, 28, -2, 93, 88, -38, 38, -42, -29, 19, -116, -38, -59, 30, -7, -21, 64, -14, 79, 124, -83, 36, -20, 28, -74, -81, 58, 38, -57, -32, -88, -1, -123, 101, 40, -21, -4, 69, 73, -121, -100, -3, 124, -31, -77, 98, 118, -28, -12, -79, -101, -116, 64, -38, -47, 67, -118, 72, 10, -67, -46, 72, -104, 99, -57, 84, 60, -19, 41, -106, 32, -48, 37, -26, 64, -13, -75, 8, 39, 91, 17, -109, 57, 63, 45, 61, 63, 98, -54, 27, 44, -72, -80, -108, 101, 58, 109, -89, -21, -116, -4, 80, 41, -20, -92, -125, 118, -35, -87, 50, 62, 5, -31, -75, 71, 10, 73, 42, 6, 79, 67, -49, 49, 66, 72, -11, 111, 38, 50, -78, 62, 65, 87, -18, -84, 117, 97, -13, -34, 10, -82, -69, -62, -73, 126, -22, -121, -81, 57, 97, -80, -6, 48, -116};
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
    msg.setTimeStamp(0.683641710469);
    msg.setSource(56615U);
    msg.setSourceEntity(89U);
    msg.setDestination(50838U);
    msg.setDestinationEntity(161U);
    msg.op = 81U;
    msg.system.assign("BDXJUGPXUAOIGOCNILNJSHAXXQHRYNCVPQFVYJHQBBXONRVKFCRKLUZIPKAPFCLJKYMCADUYJDRSDRGSLEIWEJCTVPAFXMMCCSMQENFQAWZJNGLZJOFFTHAIXOBTIXWOBXVEQCOVUEPTBICBKOUJDSEVQDMZIABKYHGYTTQSRLTERJUMZDZOWYMBVSWDKFNGZUZZHKUXREMNIWHHVLFLTPFAPWGWMWRPUPLATWBMKYHSDENGOGZKEDGSN");
    msg.range = 0.847901347634;
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.147839563785;
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
    msg.setTimeStamp(0.36329382407);
    msg.setSource(32897U);
    msg.setSourceEntity(185U);
    msg.setDestination(42787U);
    msg.setDestinationEntity(160U);
    msg.op = 61U;
    msg.system.assign("UTRAZXUCNEDDEJLQMSWFPNXTJNSJCKRISTHZRGGYRNZLVKQSVTDGXFMOZWNFXHRHVHRCXQAIZQBY");
    msg.range = 0.353919560125;
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 236U;
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
    msg.setTimeStamp(0.65039635798);
    msg.setSource(20524U);
    msg.setSourceEntity(173U);
    msg.setDestination(27386U);
    msg.setDestinationEntity(31U);
    msg.op = 219U;
    msg.system.assign("TOSQHOJWAGLFEKEDZYMXYQMBZSOQMQASCUDCRCVBULYDDAVGRMONPGGHWIKHIIGNXRNLLFVCFUYHGQNIBRXBKNGIXCXJIYAHSAJOZJRHNDKPQKEWALUJUKFEMNCCPHFOPLIREZFECVUTKQYNWVJZOOXDXWXAOOMFQFIUEGHMBAJRFMBZTZDPSDMHMBWJRYPBSDVEAYDNRNCHPZ");
    msg.range = 0.496201035753;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 41414U;
    tmp_msg_0.lat = 0.0259273467576;
    tmp_msg_0.lon = 0.191329032163;
    tmp_msg_0.z = 0.550919412568;
    tmp_msg_0.z_units = 164U;
    tmp_msg_0.duration = 52623U;
    tmp_msg_0.speed = 0.962781433292;
    tmp_msg_0.speed_units = 72U;
    tmp_msg_0.type = 189U;
    tmp_msg_0.radius = 0.638597904736;
    tmp_msg_0.length = 0.356476760126;
    tmp_msg_0.bearing = 0.998982282328;
    tmp_msg_0.direction = 19U;
    tmp_msg_0.custom.assign("VFFLFAYMBRDNUEPXIPOJHWIWCJPZGBTREXJYZWUFYINJZOXUMCJRJDFBDMATVOWXYHLGOKBEQNKNALDQXBRHWRLGWYYCYTGRXVBEZZHORKIYIQFZVHTZVEQINWSUNDTBEPKWANEYBOUIJMGKYV");
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
    msg.setTimeStamp(0.333327922638);
    msg.setSource(60426U);
    msg.setSourceEntity(62U);
    msg.setDestination(62783U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.983212958357);
    msg.setSource(59836U);
    msg.setSourceEntity(160U);
    msg.setDestination(38475U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.58249045206);
    msg.setSource(2477U);
    msg.setSourceEntity(120U);
    msg.setDestination(33019U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.496070195485);
    msg.setSource(42423U);
    msg.setSourceEntity(110U);
    msg.setDestination(61108U);
    msg.setDestinationEntity(51U);
    msg.list.assign("RJVPYDNEPPBQUBLZKXLEYOMHODNGLPUQVEKQQLXUZABIOBATJHQPUECZXBRCKNCGNYTJIRDPWWRMBWWJVJRUMAILGVTSJUPYKUNCTFDIOUAOBXHMCYWHYZXMRIGKOBRHSIVYQKLSGACDETYHYWSZNRKAHCFPOIH");

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
    msg.setTimeStamp(0.986780695115);
    msg.setSource(30126U);
    msg.setSourceEntity(115U);
    msg.setDestination(55365U);
    msg.setDestinationEntity(167U);
    msg.list.assign("CCPYIKUQUGRQAVKMWHZEITTOFODJCODQBJABKNSSDBVCTWKGDWKLQEUKRARIPTJHQBKNNLZDNSDJOHBRSL");

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
    msg.setTimeStamp(0.471117101169);
    msg.setSource(41757U);
    msg.setSourceEntity(65U);
    msg.setDestination(24918U);
    msg.setDestinationEntity(183U);
    msg.list.assign("YGDTYRNIJHQYCXOEIVFFISJRALCDGJJLQAMNZXKEUGZISSFZNPEGVWVWUILMZBBWSVEEHWO");

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
    msg.setTimeStamp(0.308078603373);
    msg.setSource(43130U);
    msg.setSourceEntity(12U);
    msg.setDestination(32202U);
    msg.setDestinationEntity(144U);
    msg.peer.assign("XAXTMEGMYRDJZYAEELXTWBDIZEGYOPVHXUYQWVCRENFXKTGVXULOUFECPVCWVJTBQUHNRLKGGFSESSAGSFBLJHRFIUKRMGOQPISJHENZLWJIIMPIZHDCPFJNNLPIFDYDWYSXQNSOCMTQKOHAZUGOBXVNRZOOMEYIMPYZDRURQZULKNJDBPCYNWASPQCBUZRAIIKSTDXHLABGMKHAJYMAQVUCAXCKHFZJBOKL");
    msg.rssi = 0.846494412405;
    msg.integrity = 23117U;

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
    msg.setTimeStamp(0.980098020007);
    msg.setSource(34994U);
    msg.setSourceEntity(80U);
    msg.setDestination(26652U);
    msg.setDestinationEntity(238U);
    msg.peer.assign("FEVMZRCMQSWLHEAQVZKXHSOWCTFANWINTXYEDTWBGBHCEHUCGPVQZHUQJVNJLMJFEASYECAZYQDWOGHQALOHSRBRIADMZRVBPKLLGYDUSJY");
    msg.rssi = 0.325953997091;
    msg.integrity = 12730U;

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
    msg.setTimeStamp(0.546079421533);
    msg.setSource(39248U);
    msg.setSourceEntity(153U);
    msg.setDestination(52266U);
    msg.setDestinationEntity(166U);
    msg.peer.assign("SHBOPKTZWPLLQPUXGZJGNGYQNCHENOKGKPMAKQENGWPVYBDHZYKXINNJDRCRMXSLQUNPFLAHJCUONUWIMJXFRPWKDHCYQRVATTAJJVGGNFOYOBVKXQZEWSSTEVXHQKUUBPZUIRTFVIHSDTJQJS");
    msg.rssi = 0.556135821214;
    msg.integrity = 15691U;

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
    msg.setTimeStamp(0.598233431579);
    msg.setSource(5178U);
    msg.setSourceEntity(84U);
    msg.setDestination(46996U);
    msg.setDestinationEntity(13U);
    msg.req_id = 48424U;
    msg.destination.assign("THDQUGUMXFVWKCYBPUFHVMNBJLESUQJEZFTVV");
    msg.timeout = 0.18214953839;
    msg.range = 0.923099720674;
    msg.type = 128U;
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.644198844837;
    tmp_msg_0.y = 0.229378599877;
    tmp_msg_0.z = 0.580560709994;
    tmp_msg_0.vx = 0.711084601882;
    tmp_msg_0.vy = 0.58824544928;
    tmp_msg_0.vz = 0.185795485246;
    tmp_msg_0.ax = 0.0745355865344;
    tmp_msg_0.ay = 0.886659989807;
    tmp_msg_0.az = 0.551018341452;
    tmp_msg_0.flags = 11981U;
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
    msg.setTimeStamp(0.339640197778);
    msg.setSource(34683U);
    msg.setSourceEntity(159U);
    msg.setDestination(62529U);
    msg.setDestinationEntity(135U);
    msg.req_id = 9191U;
    msg.destination.assign("MTOTJEGZLOZAHQKVWZWYXBXXFDQUBLBSWNGRMJTGRRTDLVILLUSVAVTTRHEWGKARJMDNFBVOPLSAFUPFXEMNCDFAAEQUWPYWWKISZOJKXHGSUONKIQVCOPCQE");
    msg.timeout = 0.322901927837;
    msg.range = 0.235644128514;
    msg.type = 67U;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.694728559006;
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
    msg.setTimeStamp(0.00186479445565);
    msg.setSource(14200U);
    msg.setSourceEntity(121U);
    msg.setDestination(16072U);
    msg.setDestinationEntity(243U);
    msg.req_id = 9660U;
    msg.destination.assign("NSBZRBGXCGIZUTUVJPKFVQIDRANIQJXTECXKHGOAADCLRXZMLRWJNWCJVWNSBYTVKVYJPPBMSQXAZLEWFMCKCCBGEJBXQREYGTZPYHDMOQMZTWPTJUYFGGRGLMULLNUPFDHHITLHAVLBNWACUNIXFEKSTPUNDQDKGIDSMOJAHKUEHFYXMINFAWPXSPFMUVR");
    msg.timeout = 0.559346094396;
    msg.range = 0.811780376867;
    msg.type = 226U;
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SUAJNTAUXXSYHFNMKAPUBQIXX");
    tmp_msg_0.value.assign("FQDNKFMZXKIGGMXVQAJLBCRPWAQWJGCTSFZOHISWLNZCJOLVHPXTFBAMZVBZHPRIAVKYPXVXJPTYJLBPHOLKTCGAJWDCUDTLVG");
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
    msg.setTimeStamp(0.363216299113);
    msg.setSource(20882U);
    msg.setSourceEntity(213U);
    msg.setDestination(22775U);
    msg.setDestinationEntity(23U);
    msg.req_id = 60843U;
    msg.type = 17U;
    msg.status = 157U;
    msg.info.assign("OFFSKPBMWGUWARNKXDPEIUCJMYGKZVCRPQXIFMHTUDYQAPFIPTMAGKEHRJOCNAQIZTOWWJWQJXNBBVUIOANTBODYKMUSQKDLLTVQGLOTFRHQFRCUGRSLTKZZSVNYPZMSOHNX");
    msg.range = 0.784269555785;

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
    msg.setTimeStamp(0.806671206516);
    msg.setSource(44044U);
    msg.setSourceEntity(251U);
    msg.setDestination(45608U);
    msg.setDestinationEntity(84U);
    msg.req_id = 29941U;
    msg.type = 111U;
    msg.status = 24U;
    msg.info.assign("KRMPAEXPEISAIRFTLPQADGTYXONEQZZJPMCIMSAEXFGEOIGTCSHFGTPZBHNSHGYGDJREAPYJXHDOUNLYUBQEGLFPNJSRYDVXMQAFMKWUNEKLDMIXTZXHAOWVLWSVYSWLTCBURTAUIUVZGFOZRBSENW");
    msg.range = 0.399498748446;

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
    msg.setTimeStamp(0.678906335552);
    msg.setSource(55537U);
    msg.setSourceEntity(118U);
    msg.setDestination(36017U);
    msg.setDestinationEntity(136U);
    msg.req_id = 37891U;
    msg.type = 240U;
    msg.status = 229U;
    msg.info.assign("OWUMQBIEVRMEBRBZJKROJKVMZGPCSOYDTOBKPXFBNFSPJLMAJJPYVEUPCDXWAFYDHNNZFIXIQTWFJJIGUQLSZAAFUCUTCWFUODKHLHZGJZBVLVKDWWQAXWNDVIBYJHGOIDEFECYXTURQXGRHNNPEHSYLPGMNAULZXQSLSYCCLWNMYCQECJKEWKDTIPHWFPTMRCMDKYVZADZVRGMY");
    msg.range = 0.685741269782;

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
    msg.setTimeStamp(0.287889441904);
    msg.setSource(38307U);
    msg.setSourceEntity(231U);
    msg.setDestination(49838U);
    msg.setDestinationEntity(121U);
    msg.value = 29977;

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
    msg.setTimeStamp(0.419657275466);
    msg.setSource(16411U);
    msg.setSourceEntity(237U);
    msg.setDestination(47590U);
    msg.setDestinationEntity(157U);
    msg.value = -24424;

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
    msg.setTimeStamp(0.974810880416);
    msg.setSource(4042U);
    msg.setSourceEntity(193U);
    msg.setDestination(10724U);
    msg.setDestinationEntity(18U);
    msg.value = 29304;

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
    msg.setTimeStamp(0.0128382075811);
    msg.setSource(13686U);
    msg.setSourceEntity(62U);
    msg.setDestination(2443U);
    msg.setDestinationEntity(26U);
    msg.value = 0.601212683306;

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
    msg.setTimeStamp(0.830348176787);
    msg.setSource(59834U);
    msg.setSourceEntity(118U);
    msg.setDestination(60854U);
    msg.setDestinationEntity(218U);
    msg.value = 0.834174106145;

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
    msg.setTimeStamp(0.34696320447);
    msg.setSource(62157U);
    msg.setSourceEntity(225U);
    msg.setDestination(18432U);
    msg.setDestinationEntity(233U);
    msg.value = 0.45476461415;

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
    msg.setTimeStamp(0.500155772352);
    msg.setSource(41428U);
    msg.setSourceEntity(62U);
    msg.setDestination(3940U);
    msg.setDestinationEntity(51U);
    msg.value = 0.0149030676171;

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
    msg.setTimeStamp(0.807279567718);
    msg.setSource(27127U);
    msg.setSourceEntity(15U);
    msg.setDestination(12830U);
    msg.setDestinationEntity(20U);
    msg.value = 0.12169501258;

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
    msg.setTimeStamp(0.647740493871);
    msg.setSource(33832U);
    msg.setSourceEntity(208U);
    msg.setDestination(63053U);
    msg.setDestinationEntity(102U);
    msg.value = 0.326929645659;

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
    msg.setTimeStamp(0.823164238346);
    msg.setSource(9673U);
    msg.setSourceEntity(242U);
    msg.setDestination(13133U);
    msg.setDestinationEntity(183U);
    msg.validity = 5368U;
    msg.type = 230U;
    msg.utc_year = 50875U;
    msg.utc_month = 34U;
    msg.utc_day = 42U;
    msg.utc_time = 0.156685434558;
    msg.lat = 0.536975964396;
    msg.lon = 0.892771070132;
    msg.height = 0.390796804153;
    msg.satellites = 89U;
    msg.cog = 0.920829471438;
    msg.sog = 0.468713802253;
    msg.hdop = 0.960979109892;
    msg.vdop = 0.233615321445;
    msg.hacc = 0.466003944282;
    msg.vacc = 0.2056396907;

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
    msg.setTimeStamp(0.299345183938);
    msg.setSource(36527U);
    msg.setSourceEntity(132U);
    msg.setDestination(48891U);
    msg.setDestinationEntity(83U);
    msg.validity = 44325U;
    msg.type = 120U;
    msg.utc_year = 49343U;
    msg.utc_month = 184U;
    msg.utc_day = 15U;
    msg.utc_time = 0.71456274872;
    msg.lat = 0.654766128467;
    msg.lon = 0.0811525311622;
    msg.height = 0.575170945559;
    msg.satellites = 46U;
    msg.cog = 0.632204869415;
    msg.sog = 0.596390759807;
    msg.hdop = 0.484344511099;
    msg.vdop = 0.134023098322;
    msg.hacc = 0.225675124859;
    msg.vacc = 0.218821020425;

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
    msg.setTimeStamp(0.592774988537);
    msg.setSource(41152U);
    msg.setSourceEntity(214U);
    msg.setDestination(21567U);
    msg.setDestinationEntity(233U);
    msg.validity = 18745U;
    msg.type = 189U;
    msg.utc_year = 17543U;
    msg.utc_month = 195U;
    msg.utc_day = 227U;
    msg.utc_time = 0.438388635541;
    msg.lat = 0.784407187322;
    msg.lon = 0.833230868115;
    msg.height = 0.261599634489;
    msg.satellites = 69U;
    msg.cog = 0.692153106229;
    msg.sog = 0.619288771161;
    msg.hdop = 0.938879712675;
    msg.vdop = 0.531635963668;
    msg.hacc = 0.039701495887;
    msg.vacc = 0.294419324269;

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
    msg.setTimeStamp(0.148314525753);
    msg.setSource(4056U);
    msg.setSourceEntity(245U);
    msg.setDestination(41538U);
    msg.setDestinationEntity(183U);
    msg.time = 0.681860514476;
    msg.phi = 0.719273103463;
    msg.theta = 0.973032976027;
    msg.psi = 0.158591794072;
    msg.psi_magnetic = 0.0847700390981;

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
    msg.setTimeStamp(0.273884503301);
    msg.setSource(14106U);
    msg.setSourceEntity(184U);
    msg.setDestination(13050U);
    msg.setDestinationEntity(118U);
    msg.time = 0.580133292151;
    msg.phi = 0.345435245432;
    msg.theta = 0.824425589913;
    msg.psi = 0.915048065116;
    msg.psi_magnetic = 0.0311964338264;

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
    msg.setTimeStamp(0.799638106122);
    msg.setSource(57627U);
    msg.setSourceEntity(143U);
    msg.setDestination(15659U);
    msg.setDestinationEntity(8U);
    msg.time = 0.303651472022;
    msg.phi = 0.872519745142;
    msg.theta = 0.318935786225;
    msg.psi = 0.976996461099;
    msg.psi_magnetic = 0.422297750625;

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
    msg.setTimeStamp(0.600341162944);
    msg.setSource(48890U);
    msg.setSourceEntity(183U);
    msg.setDestination(7716U);
    msg.setDestinationEntity(146U);
    msg.time = 0.545432425293;
    msg.x = 0.339129817812;
    msg.y = 0.337202983571;
    msg.z = 0.802303326891;
    msg.timestep = 0.346803949739;

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
    msg.setTimeStamp(0.00924805423345);
    msg.setSource(57460U);
    msg.setSourceEntity(210U);
    msg.setDestination(35187U);
    msg.setDestinationEntity(232U);
    msg.time = 0.340843143768;
    msg.x = 0.917921828804;
    msg.y = 0.993336020013;
    msg.z = 0.265276992014;
    msg.timestep = 0.543643233661;

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
    msg.setTimeStamp(0.640100236745);
    msg.setSource(25508U);
    msg.setSourceEntity(144U);
    msg.setDestination(62301U);
    msg.setDestinationEntity(20U);
    msg.time = 0.108465093319;
    msg.x = 0.0308512405442;
    msg.y = 0.827371731055;
    msg.z = 0.0375053110361;
    msg.timestep = 0.549356821624;

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
    msg.setTimeStamp(0.869055857685);
    msg.setSource(59404U);
    msg.setSourceEntity(166U);
    msg.setDestination(36254U);
    msg.setDestinationEntity(201U);
    msg.time = 0.291819979568;
    msg.x = 0.577980680198;
    msg.y = 0.0960661604502;
    msg.z = 0.124722335075;

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
    msg.setTimeStamp(0.213671942745);
    msg.setSource(55873U);
    msg.setSourceEntity(236U);
    msg.setDestination(12569U);
    msg.setDestinationEntity(111U);
    msg.time = 0.709977077392;
    msg.x = 0.0687835930694;
    msg.y = 0.800292264388;
    msg.z = 0.783253142049;

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
    msg.setTimeStamp(0.0871389099313);
    msg.setSource(32433U);
    msg.setSourceEntity(123U);
    msg.setDestination(47202U);
    msg.setDestinationEntity(84U);
    msg.time = 0.390165815373;
    msg.x = 0.117522805045;
    msg.y = 0.121996954517;
    msg.z = 0.793583915412;

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
    msg.setTimeStamp(0.218733969328);
    msg.setSource(44793U);
    msg.setSourceEntity(167U);
    msg.setDestination(27507U);
    msg.setDestinationEntity(203U);
    msg.time = 0.683761858985;
    msg.x = 0.853853756688;
    msg.y = 0.940820491019;
    msg.z = 0.900118902273;

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
    msg.setTimeStamp(0.931246544312);
    msg.setSource(28416U);
    msg.setSourceEntity(31U);
    msg.setDestination(52926U);
    msg.setDestinationEntity(83U);
    msg.time = 0.107304857659;
    msg.x = 0.260674210984;
    msg.y = 0.399560530376;
    msg.z = 0.508569205351;

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
    msg.setTimeStamp(0.231409988097);
    msg.setSource(35734U);
    msg.setSourceEntity(157U);
    msg.setDestination(26735U);
    msg.setDestinationEntity(50U);
    msg.time = 0.576070520023;
    msg.x = 0.382160121657;
    msg.y = 0.0975325571944;
    msg.z = 0.478695628017;

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
    msg.setTimeStamp(0.92456619712);
    msg.setSource(35909U);
    msg.setSourceEntity(239U);
    msg.setDestination(47517U);
    msg.setDestinationEntity(90U);
    msg.time = 0.791235843753;
    msg.x = 0.497835982434;
    msg.y = 0.810745847937;
    msg.z = 0.866609130243;

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
    msg.setTimeStamp(0.726525973223);
    msg.setSource(5804U);
    msg.setSourceEntity(216U);
    msg.setDestination(12835U);
    msg.setDestinationEntity(142U);
    msg.time = 0.928221794267;
    msg.x = 0.107243009217;
    msg.y = 0.348344359356;
    msg.z = 0.614090821854;

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
    msg.setTimeStamp(0.398374983759);
    msg.setSource(44214U);
    msg.setSourceEntity(167U);
    msg.setDestination(4870U);
    msg.setDestinationEntity(254U);
    msg.time = 0.945077844584;
    msg.x = 0.585299065285;
    msg.y = 0.436911995905;
    msg.z = 0.507241081182;

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
    msg.setTimeStamp(0.592239127246);
    msg.setSource(53339U);
    msg.setSourceEntity(86U);
    msg.setDestination(47751U);
    msg.setDestinationEntity(130U);
    msg.validity = 56U;
    msg.x = 0.154947441115;
    msg.y = 0.986560831074;
    msg.z = 0.628432971726;

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
    msg.setTimeStamp(0.484567279229);
    msg.setSource(902U);
    msg.setSourceEntity(66U);
    msg.setDestination(24519U);
    msg.setDestinationEntity(90U);
    msg.validity = 16U;
    msg.x = 0.49457688299;
    msg.y = 0.769718810223;
    msg.z = 0.34794048906;

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
    msg.setTimeStamp(0.769840744299);
    msg.setSource(43925U);
    msg.setSourceEntity(226U);
    msg.setDestination(720U);
    msg.setDestinationEntity(249U);
    msg.validity = 244U;
    msg.x = 0.257251531539;
    msg.y = 0.534667077779;
    msg.z = 0.393426409615;

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
    msg.setTimeStamp(0.376497362927);
    msg.setSource(52063U);
    msg.setSourceEntity(121U);
    msg.setDestination(46706U);
    msg.setDestinationEntity(77U);
    msg.validity = 191U;
    msg.x = 0.344277598526;
    msg.y = 0.610697957258;
    msg.z = 0.00651072267168;

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
    msg.setTimeStamp(0.469087279326);
    msg.setSource(57431U);
    msg.setSourceEntity(217U);
    msg.setDestination(41060U);
    msg.setDestinationEntity(112U);
    msg.validity = 166U;
    msg.x = 0.16581100364;
    msg.y = 0.898934006067;
    msg.z = 0.809879714086;

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
    msg.setTimeStamp(0.274743932788);
    msg.setSource(45775U);
    msg.setSourceEntity(20U);
    msg.setDestination(59296U);
    msg.setDestinationEntity(191U);
    msg.validity = 126U;
    msg.x = 0.348059075914;
    msg.y = 0.31727101835;
    msg.z = 0.764591654789;

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
    msg.setTimeStamp(0.365260881511);
    msg.setSource(57182U);
    msg.setSourceEntity(243U);
    msg.setDestination(25348U);
    msg.setDestinationEntity(22U);
    msg.time = 0.781378734048;
    msg.x = 0.361157512411;
    msg.y = 0.571955291989;
    msg.z = 0.488794948731;

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
    msg.setTimeStamp(0.0922533796531);
    msg.setSource(9686U);
    msg.setSourceEntity(125U);
    msg.setDestination(25283U);
    msg.setDestinationEntity(64U);
    msg.time = 0.790727971266;
    msg.x = 0.231501967388;
    msg.y = 0.693172849142;
    msg.z = 0.0891033301285;

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
    msg.setTimeStamp(0.567700455098);
    msg.setSource(24265U);
    msg.setSourceEntity(228U);
    msg.setDestination(33513U);
    msg.setDestinationEntity(34U);
    msg.time = 0.0895338551481;
    msg.x = 0.625428687361;
    msg.y = 0.968449139474;
    msg.z = 0.00929301525651;

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
    msg.setTimeStamp(0.626338158838);
    msg.setSource(21904U);
    msg.setSourceEntity(2U);
    msg.setDestination(59391U);
    msg.setDestinationEntity(217U);
    msg.validity = 56U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0533505181696;
    tmp_msg_0.y = 0.620852282036;
    tmp_msg_0.z = 0.126687539986;
    tmp_msg_0.phi = 0.566509712441;
    tmp_msg_0.theta = 0.380043559042;
    tmp_msg_0.psi = 0.617205268583;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.755343676063;
    tmp_msg_1.beam_height = 0.445266183381;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.140303449573;

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
    msg.setTimeStamp(0.690268630434);
    msg.setSource(27360U);
    msg.setSourceEntity(211U);
    msg.setDestination(17786U);
    msg.setDestinationEntity(188U);
    msg.validity = 245U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.863293255706;
    tmp_msg_0.y = 0.466581058734;
    tmp_msg_0.z = 0.0656922014469;
    tmp_msg_0.phi = 0.956482746652;
    tmp_msg_0.theta = 0.999867931545;
    tmp_msg_0.psi = 0.990146035313;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.0577548564427;
    tmp_msg_1.beam_height = 0.0740486849951;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.0318753218823;

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
    msg.setTimeStamp(0.478879614321);
    msg.setSource(64754U);
    msg.setSourceEntity(83U);
    msg.setDestination(46858U);
    msg.setDestinationEntity(64U);
    msg.validity = 238U;
    msg.value = 0.926770105545;

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
    msg.setTimeStamp(0.688692355342);
    msg.setSource(16539U);
    msg.setSourceEntity(97U);
    msg.setDestination(22864U);
    msg.setDestinationEntity(67U);
    msg.value = 0.785962220488;

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
    msg.setTimeStamp(0.865917584133);
    msg.setSource(65025U);
    msg.setSourceEntity(219U);
    msg.setDestination(31850U);
    msg.setDestinationEntity(144U);
    msg.value = 0.0413561887214;

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
    msg.setTimeStamp(0.806532196438);
    msg.setSource(15010U);
    msg.setSourceEntity(36U);
    msg.setDestination(41155U);
    msg.setDestinationEntity(175U);
    msg.value = 0.94836121603;

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
    msg.setTimeStamp(0.938416027702);
    msg.setSource(110U);
    msg.setSourceEntity(128U);
    msg.setDestination(17874U);
    msg.setDestinationEntity(97U);
    msg.value = 0.112109991979;

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
    msg.setTimeStamp(0.985935512157);
    msg.setSource(39688U);
    msg.setSourceEntity(111U);
    msg.setDestination(27948U);
    msg.setDestinationEntity(63U);
    msg.value = 0.967151253177;

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
    msg.setTimeStamp(0.582540920379);
    msg.setSource(28334U);
    msg.setSourceEntity(53U);
    msg.setDestination(44041U);
    msg.setDestinationEntity(88U);
    msg.value = 0.0286930674854;

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
    msg.setTimeStamp(0.671045077132);
    msg.setSource(43836U);
    msg.setSourceEntity(85U);
    msg.setDestination(65510U);
    msg.setDestinationEntity(243U);
    msg.value = 0.506153823405;

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
    msg.setTimeStamp(0.167067645471);
    msg.setSource(21413U);
    msg.setSourceEntity(30U);
    msg.setDestination(12442U);
    msg.setDestinationEntity(130U);
    msg.value = 0.0408823477725;

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
    msg.setTimeStamp(0.324587946134);
    msg.setSource(36725U);
    msg.setSourceEntity(15U);
    msg.setDestination(60815U);
    msg.setDestinationEntity(137U);
    msg.value = 0.775655519249;

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
    msg.setTimeStamp(0.181735662825);
    msg.setSource(9763U);
    msg.setSourceEntity(114U);
    msg.setDestination(3247U);
    msg.setDestinationEntity(106U);
    msg.value = 0.450668097322;

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
    msg.setTimeStamp(0.625629442869);
    msg.setSource(29443U);
    msg.setSourceEntity(198U);
    msg.setDestination(55303U);
    msg.setDestinationEntity(160U);
    msg.value = 0.492707579403;

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
    msg.setTimeStamp(0.136577142965);
    msg.setSource(46323U);
    msg.setSourceEntity(207U);
    msg.setDestination(63515U);
    msg.setDestinationEntity(75U);
    msg.value = 0.469374331064;

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
    msg.setTimeStamp(0.697965297577);
    msg.setSource(18516U);
    msg.setSourceEntity(129U);
    msg.setDestination(63400U);
    msg.setDestinationEntity(47U);
    msg.value = 0.286221391835;

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
    msg.setTimeStamp(0.022116187119);
    msg.setSource(60190U);
    msg.setSourceEntity(98U);
    msg.setDestination(9586U);
    msg.setDestinationEntity(96U);
    msg.value = 0.221369611102;

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
    msg.setTimeStamp(0.715630946407);
    msg.setSource(26254U);
    msg.setSourceEntity(24U);
    msg.setDestination(5976U);
    msg.setDestinationEntity(10U);
    msg.value = 0.0135679348121;

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
    msg.setTimeStamp(0.879307188136);
    msg.setSource(38671U);
    msg.setSourceEntity(3U);
    msg.setDestination(30037U);
    msg.setDestinationEntity(1U);
    msg.value = 0.991306451375;

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
    msg.setTimeStamp(0.48192051999);
    msg.setSource(64297U);
    msg.setSourceEntity(14U);
    msg.setDestination(54853U);
    msg.setDestinationEntity(171U);
    msg.value = 0.780904631369;

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
    msg.setTimeStamp(0.231141924575);
    msg.setSource(34866U);
    msg.setSourceEntity(195U);
    msg.setDestination(27128U);
    msg.setDestinationEntity(137U);
    msg.value = 0.788298527397;

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
    msg.setTimeStamp(0.807132600997);
    msg.setSource(15466U);
    msg.setSourceEntity(205U);
    msg.setDestination(46210U);
    msg.setDestinationEntity(6U);
    msg.value = 0.44035577796;

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
    msg.setTimeStamp(0.984948997767);
    msg.setSource(5787U);
    msg.setSourceEntity(100U);
    msg.setDestination(21711U);
    msg.setDestinationEntity(107U);
    msg.value = 0.0114464426657;

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
    msg.setTimeStamp(0.990201835228);
    msg.setSource(28931U);
    msg.setSourceEntity(167U);
    msg.setDestination(58599U);
    msg.setDestinationEntity(141U);
    msg.value = 0.751786754009;

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
    msg.setTimeStamp(0.368141364747);
    msg.setSource(7484U);
    msg.setSourceEntity(218U);
    msg.setDestination(18791U);
    msg.setDestinationEntity(95U);
    msg.value = 0.617629486869;

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
    msg.setTimeStamp(0.347712607227);
    msg.setSource(58009U);
    msg.setSourceEntity(177U);
    msg.setDestination(21033U);
    msg.setDestinationEntity(196U);
    msg.value = 0.505207750524;

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
    msg.setTimeStamp(0.151398105686);
    msg.setSource(59077U);
    msg.setSourceEntity(182U);
    msg.setDestination(20717U);
    msg.setDestinationEntity(60U);
    msg.value = 0.764869694585;

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
    msg.setTimeStamp(0.933072826412);
    msg.setSource(1202U);
    msg.setSourceEntity(8U);
    msg.setDestination(60110U);
    msg.setDestinationEntity(125U);
    msg.direction = 0.533808811387;
    msg.speed = 0.339038395544;
    msg.turbulence = 0.94321247767;

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
    msg.setTimeStamp(0.904106025897);
    msg.setSource(35828U);
    msg.setSourceEntity(129U);
    msg.setDestination(65203U);
    msg.setDestinationEntity(77U);
    msg.direction = 0.432291159187;
    msg.speed = 0.514335241287;
    msg.turbulence = 0.722899758172;

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
    msg.setTimeStamp(0.0674641908343);
    msg.setSource(3496U);
    msg.setSourceEntity(22U);
    msg.setDestination(37653U);
    msg.setDestinationEntity(90U);
    msg.direction = 0.594278842982;
    msg.speed = 0.579935743737;
    msg.turbulence = 0.371239139115;

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
    msg.setTimeStamp(0.530531792155);
    msg.setSource(34716U);
    msg.setSourceEntity(41U);
    msg.setDestination(38783U);
    msg.setDestinationEntity(239U);
    msg.value = 0.0422051028473;

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
    msg.setTimeStamp(0.432917164574);
    msg.setSource(62956U);
    msg.setSourceEntity(183U);
    msg.setDestination(31530U);
    msg.setDestinationEntity(210U);
    msg.value = 0.5631294002;

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
    msg.setTimeStamp(0.618281911141);
    msg.setSource(31030U);
    msg.setSourceEntity(65U);
    msg.setDestination(62297U);
    msg.setDestinationEntity(206U);
    msg.value = 0.186227509117;

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
    msg.setTimeStamp(0.63640519952);
    msg.setSource(50199U);
    msg.setSourceEntity(64U);
    msg.setDestination(34792U);
    msg.setDestinationEntity(87U);
    msg.value.assign("HZSFKLDVTBXMZHWJSEAPSEHGPVYMCWMBUZFKKVASQTLAGCYDYTGQYBCZGWRJMVPIYCOFFZZVFQLJPBKIBYQ");

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
    msg.setTimeStamp(0.449762336467);
    msg.setSource(9518U);
    msg.setSourceEntity(43U);
    msg.setDestination(21217U);
    msg.setDestinationEntity(218U);
    msg.value.assign("EIJTIJGFJOKWCALNTAXJGUQHLPPMMOYJANUKBKMHTCIXVUWYIAWMIEPIQNONQFPOHZUFCZOPQRFKEHCGSNPZTIKGCGBBDVDJLBSYHLQVEYKXOJCRSUMTRBTIWZIGABHJMBKXMZXAEFYDVQNOBZYXFWWNSJVROONQFYYEVWRPJDDAPTVUZWYECHN");

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
    msg.setTimeStamp(0.480499863019);
    msg.setSource(47369U);
    msg.setSourceEntity(101U);
    msg.setDestination(45100U);
    msg.setDestinationEntity(157U);
    msg.value.assign("JQQZVBFMTVVEINAVTIVOAWATTJCKKHIHJJVPUQUFRFMXLKWHMOPJWRZOZTPNFIBSFQCIRUSSDCXPTTHYNQGWBCPWWSJMCQXJHQMMLYPAHBRKQZRCXLGBIYVXPAYRCMDEINXLGKOOMMQNFDHLVDMLETEAGGBBYZDGLIEWKYOXNKNUEQPTZUZJZOYRDCJGPSUIESCWLYAEJOTYULFWXGOUKVEZRFHSDKPRNFDNGUH");

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
    msg.setTimeStamp(0.945104681243);
    msg.setSource(59621U);
    msg.setSourceEntity(122U);
    msg.setDestination(13764U);
    msg.setDestinationEntity(55U);
    const char tmp_msg_0[] = {-1, 48, -106, -61, -15, 12, -4, -60, -79, 22, -81, 4, 14, 106, -21, 54, 5, 123, -75, -21, 58, 67, 77, -75, 16, -61, 25, 81, -12, -43, -17, 67, 124, -100, -30, 25, 51, 107, 112, -34, -50, 27, -77, -66, 81, -69, 98, -36, -15, 81, -43, -108, -70, -84, -120, 49, -30, 76, 50, 45, -94, 30, -14, -65, 4, 54, 56, -42, 70, -126, -54, 72, 95, 125, 32, 108, 47, 20, 7, -66, -91, 40, 38, -105, -94, 17, -49, 86, 24, -123, 35, 35, -104, -72, 3, 1, -1, -53, 9, 12};
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
    msg.setTimeStamp(0.509384559629);
    msg.setSource(6181U);
    msg.setSourceEntity(31U);
    msg.setDestination(35021U);
    msg.setDestinationEntity(167U);
    const char tmp_msg_0[] = {117, 125, -30, 4, 101, 106, -90, 97, 61, 13, 87, -30, -95, -98, -96, -95, -27, -16, -96, 92, 108, 23, 25, 121, 99, -84, -36, -5, -113, -14, 88, -128, -94, -89, 5, 68, -86, -110, -52, 39, -49, -120, 17, 84, 81, -10, -39, -63, -91, 106, 42, 65, 40, 70, 116, 27, 7, 42, -108, 40, -22, 73, 64, 79, -3, 106, -60, 30, -31, -61, 3, 14, -50, 11, 108, 109, -126, 98, -20, 82, -3, 56, -39, -96, 77, -84, 27, -89, -118, 14, 126, -49, 11, -36, 25, 26, 49, 38, 4, 43, 20, 11, -62, -74, 72, 118, 4, 60, 3, 11, -3, -115, -104, 17, 90, 75, -21, -117, -58, 15, 59, -91, 48, -2, 37, -38, 14, 26, -63, -121, -112, -73, 14, -89, 68, 39, 5, 44, 91, 88, 77, -25, 59, 78, -46, -58, 108, -60, 93, 68, -13, -10, 80, -68, -5, -29, 73, 91, 13, -116, -83, -38, -58, -61, -31, -73, -89, 119, -92, 26, 25, 98, 43, 99, 125, 15, -88, -88, -109, -13, -128, -65, -98, -14, -67, 55, -75, 120, -61, -110, -83, 10, 8, -80, 34, 11, 2, 106, 16, -65, -47, -53, 69, -18, -26, 78, 119, 25, 42, 0, 124, -105, 84, 15, -65};
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
    msg.setTimeStamp(0.613249961477);
    msg.setSource(46574U);
    msg.setSourceEntity(41U);
    msg.setDestination(47811U);
    msg.setDestinationEntity(201U);
    const char tmp_msg_0[] = {101, -64, -32, -11, 54, -15, 15, -114, -115, -100, -97, -53, 106, 108, 113, -54, -82, 126, 114, 31, 57, -96, 82, 14, 75, 83, -126, -68, 109, 82, 94, -57, -116, 73, 100, -126, -19, 21, 25, -121, -40, 77, 22, -69, -88, 105, -70, 21, 87, 0, -82, -12, -111, -22, 114, -123, 97, 50, 54, 7, -112, -86, -14, -57, -45, -4, 22, -96, -80, -78, -70, -45, 72, -68, -104, -67, 29, 83, 76, 8, 67, -91, 9, 119, -97, -82, 58, -100, 31, -9, 42, 95, 40, 19, -17, 4, -37, 52, 125, -30, -6, 88, 20, 122, 5, 80, -105, 46, 51, -112, 19, 51, -15, -115, -55, -92, -53, 17, -124, 9, 106, 102, 115, -111, -86, 81, 113, 85, 78, 85, 91, 1, -88, -44, 64, -68, 0, 67};
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
    msg.setTimeStamp(0.262623232385);
    msg.setSource(51343U);
    msg.setSourceEntity(21U);
    msg.setDestination(10813U);
    msg.setDestinationEntity(185U);
    msg.value = 0.831165007708;

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
    msg.setTimeStamp(0.320357657857);
    msg.setSource(37988U);
    msg.setSourceEntity(71U);
    msg.setDestination(42172U);
    msg.setDestinationEntity(204U);
    msg.value = 0.319602458982;

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
    msg.setTimeStamp(0.404375051737);
    msg.setSource(60954U);
    msg.setSourceEntity(12U);
    msg.setDestination(59273U);
    msg.setDestinationEntity(17U);
    msg.value = 0.292509246092;

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
    msg.setTimeStamp(0.459189193961);
    msg.setSource(58433U);
    msg.setSourceEntity(109U);
    msg.setDestination(40881U);
    msg.setDestinationEntity(152U);
    msg.type = 75U;
    msg.frequency = 3864152152U;
    msg.min_range = 1216U;
    msg.max_range = 4801U;
    msg.bits_per_point = 242U;
    msg.scale_factor = 0.374608817788;
    const char tmp_msg_0[] = {15, -75, 23, 68, -86, 19, 120, 113, -72, 30, -83, -70, -106, 53, 15, 118, -48, -53, -46, 15, -88, 121, -121, -12, 122, -31, 20, 102, 21, -71, -9, 73, -70, 94, -79, -56, -127, -24, -9, -27, 107, -75, -8, -121, -31, 65, 56, 69, 0, -4, -110, 19, -91, -8, -49, -110, 23, 103, 125, -112, 32, 103, 81, -70, 52, -12, 39, 44, -102, 108, 49, 77, 39, -85, 21, -34, 113, -51, -109, -114, -18, -85, 98, 17, 6, 105, -63, -30, -53, 104, 80, -23, 55, -36, 79, -108, 69, -7, -25, -124, 84, 14, -31, -106, 68, 80, 118, 22, -21, -72, 125, 64, -77, 79, 72, 49, -82, -71, 109, 52, 114, -37, 34, -111, -80, -33, 77, 118, -1, -69};
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
    msg.setTimeStamp(0.159844472183);
    msg.setSource(9980U);
    msg.setSourceEntity(25U);
    msg.setDestination(16086U);
    msg.setDestinationEntity(124U);
    msg.type = 73U;
    msg.frequency = 1427755550U;
    msg.min_range = 19493U;
    msg.max_range = 55709U;
    msg.bits_per_point = 114U;
    msg.scale_factor = 0.0661209845807;
    const char tmp_msg_0[] = {70, -61, -9, 40, 73, 49, -29, 53, -43, -47, -75, 1, -5, 117, 33, -10, 67, 2, -75, 43, -116, 30, -24, 84, -30, -35, -41, -65, 105, 19, -110, -77, -38, -58, -100};
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
    msg.setTimeStamp(0.109445752618);
    msg.setSource(21377U);
    msg.setSourceEntity(247U);
    msg.setDestination(33316U);
    msg.setDestinationEntity(125U);
    msg.type = 142U;
    msg.frequency = 376527666U;
    msg.min_range = 18407U;
    msg.max_range = 26867U;
    msg.bits_per_point = 145U;
    msg.scale_factor = 0.0500760157426;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.37105573001;
    tmp_msg_0.beam_height = 0.85980437117;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {40, 49, -26, 31, 79, -52, -33, -11, 92, -74, 76, -5, 43, -30, 44, -62, 14, -11, -18, -7, -119, -95, 66, -82, 118, 21, -89, 66, -119, 9, 30, 59, 113, -59, 64, -78, 106, -49, -102, 59, -24, 83, -6, -36, 51, 99, -89, -72, 62, 104, 122, 50, 42, -4, 3, -53, -119, 95, 126, 69, -104, 60, 7, -112, 44, -109, 122, 63, -44, -23, -116, -77, -37, -85, -6, 28, 96, 108, -67, -30, -53, -27, -28, -56, -77, 68, -20, 97, 52, -93, -37, -60, -20, -116, -42, 20, 92, -91, 114, -76, -21, 2, 62, 35, 108, 51, 110, 76, 63, -110, 52, 115, 7, -120, -38, -115, 96, 39, -61, -37, 1, -103, -126, -105, -65};
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
    msg.setTimeStamp(0.858724796751);
    msg.setSource(55782U);
    msg.setSourceEntity(45U);
    msg.setDestination(38328U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.260963372308);
    msg.setSource(35360U);
    msg.setSourceEntity(215U);
    msg.setDestination(4223U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.146816125558);
    msg.setSource(23484U);
    msg.setSourceEntity(115U);
    msg.setDestination(30800U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.782059229725);
    msg.setSource(18456U);
    msg.setSourceEntity(252U);
    msg.setDestination(48224U);
    msg.setDestinationEntity(60U);
    msg.op = 172U;

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
    msg.setTimeStamp(0.52431873394);
    msg.setSource(15574U);
    msg.setSourceEntity(35U);
    msg.setDestination(28784U);
    msg.setDestinationEntity(87U);
    msg.op = 136U;

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
    msg.setTimeStamp(0.672398943134);
    msg.setSource(51728U);
    msg.setSourceEntity(58U);
    msg.setDestination(63710U);
    msg.setDestinationEntity(158U);
    msg.op = 10U;

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
    msg.setTimeStamp(0.971231471077);
    msg.setSource(20722U);
    msg.setSourceEntity(140U);
    msg.setDestination(8798U);
    msg.setDestinationEntity(8U);
    msg.value = 0.932425933752;
    msg.confidence = 0.79319866586;
    msg.opmodes.assign("VCFXZNMECEHKXKWAIETUCCEVUPPMFGJMAWVRBWJCLAGPYAJGOGZQSTABKFLBRKWQDLJOAYWFJEDPZNIBWNKGFNNDBECURPLXDRLOYVFTZTASCFYKNYIUSLWUYQOWVNICJINSHIUJGRJJAUSDSTSTGKCPWZVHPWXKRHH");

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
    msg.setTimeStamp(0.765361585782);
    msg.setSource(43127U);
    msg.setSourceEntity(243U);
    msg.setDestination(16484U);
    msg.setDestinationEntity(70U);
    msg.value = 0.419862204669;
    msg.confidence = 0.547231223739;
    msg.opmodes.assign("YULAKTGCRXKMSYBLAIWACHUACOFOJTQTQNJHXDTGNHVZLUGDYUISIDHCYDGRQJBXWTARVXPMUGZJBTIZQREFQVNCYEICDFJCGOVARCUNQMTEIQXWINHULYZWBERVMKKOOSYVRB");

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
    msg.setTimeStamp(0.591024924501);
    msg.setSource(56598U);
    msg.setSourceEntity(73U);
    msg.setDestination(48710U);
    msg.setDestinationEntity(136U);
    msg.value = 0.0872456056276;
    msg.confidence = 0.46988597389;
    msg.opmodes.assign("WDVWSAQNQEDPJSBPXADFJPUNTHQXMHAIUCCYEFUFSESTORTLMZXRHVJOAFDGAHZPIKJMLIBRYGMLRIOWVJTDOGSUZUAQEJQMLL");

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
    msg.setTimeStamp(0.812981305237);
    msg.setSource(60623U);
    msg.setSourceEntity(108U);
    msg.setDestination(40645U);
    msg.setDestinationEntity(154U);
    msg.itow = 3275922794U;
    msg.lat = 0.438871775722;
    msg.lon = 0.797327778807;
    msg.height_ell = 0.818181055902;
    msg.height_sea = 0.816113796185;
    msg.hacc = 0.122125269693;
    msg.vacc = 0.380544988381;
    msg.vel_n = 0.502864778609;
    msg.vel_e = 0.817017205263;
    msg.vel_d = 0.189332437246;
    msg.speed = 0.393758063641;
    msg.gspeed = 0.254167160593;
    msg.heading = 0.693403391926;
    msg.sacc = 0.218152548878;
    msg.cacc = 0.77998149994;

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
    msg.setTimeStamp(0.706838829933);
    msg.setSource(52881U);
    msg.setSourceEntity(185U);
    msg.setDestination(50721U);
    msg.setDestinationEntity(243U);
    msg.itow = 3218241787U;
    msg.lat = 0.461477280355;
    msg.lon = 0.208539744918;
    msg.height_ell = 0.0279114478322;
    msg.height_sea = 0.973385069605;
    msg.hacc = 0.288641748049;
    msg.vacc = 0.619871154308;
    msg.vel_n = 0.89566237072;
    msg.vel_e = 0.245592491561;
    msg.vel_d = 0.185416927723;
    msg.speed = 0.362912911517;
    msg.gspeed = 0.0472324991917;
    msg.heading = 0.137259697346;
    msg.sacc = 0.46737124474;
    msg.cacc = 0.0508372762259;

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
    msg.setTimeStamp(0.972057028389);
    msg.setSource(43843U);
    msg.setSourceEntity(1U);
    msg.setDestination(50948U);
    msg.setDestinationEntity(148U);
    msg.itow = 1455955738U;
    msg.lat = 0.652450711145;
    msg.lon = 0.893880627235;
    msg.height_ell = 0.877336740144;
    msg.height_sea = 0.529080734463;
    msg.hacc = 0.616076269046;
    msg.vacc = 0.44510466823;
    msg.vel_n = 0.318595123191;
    msg.vel_e = 0.524271661369;
    msg.vel_d = 0.450068634448;
    msg.speed = 0.107021099711;
    msg.gspeed = 0.724670466677;
    msg.heading = 0.281587882992;
    msg.sacc = 0.448492377569;
    msg.cacc = 0.542654236069;

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
    msg.setTimeStamp(0.695311773714);
    msg.setSource(6102U);
    msg.setSourceEntity(244U);
    msg.setDestination(39434U);
    msg.setDestinationEntity(53U);
    msg.id = 85U;
    msg.value = 0.268020052042;

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
    msg.setTimeStamp(0.418053810217);
    msg.setSource(44615U);
    msg.setSourceEntity(121U);
    msg.setDestination(35586U);
    msg.setDestinationEntity(82U);
    msg.id = 24U;
    msg.value = 0.988530709985;

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
    msg.setTimeStamp(0.372620825136);
    msg.setSource(60898U);
    msg.setSourceEntity(47U);
    msg.setDestination(18400U);
    msg.setDestinationEntity(218U);
    msg.id = 167U;
    msg.value = 0.0498394351865;

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
    msg.setTimeStamp(0.0124367555471);
    msg.setSource(5969U);
    msg.setSourceEntity(126U);
    msg.setDestination(42058U);
    msg.setDestinationEntity(136U);
    msg.x = 0.327761075687;
    msg.y = 0.362652823212;
    msg.z = 0.479070968819;
    msg.phi = 0.287908738502;
    msg.theta = 0.864416131981;
    msg.psi = 0.352203887488;

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
    msg.setTimeStamp(0.318794338739);
    msg.setSource(655U);
    msg.setSourceEntity(201U);
    msg.setDestination(45984U);
    msg.setDestinationEntity(68U);
    msg.x = 0.448322249673;
    msg.y = 0.132170261485;
    msg.z = 0.840892244491;
    msg.phi = 0.83926316508;
    msg.theta = 0.736052688621;
    msg.psi = 0.179627621753;

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
    msg.setTimeStamp(0.372103034477);
    msg.setSource(20981U);
    msg.setSourceEntity(145U);
    msg.setDestination(2121U);
    msg.setDestinationEntity(173U);
    msg.x = 0.985162669285;
    msg.y = 0.400775119571;
    msg.z = 0.537999205794;
    msg.phi = 0.286512264528;
    msg.theta = 0.715922097888;
    msg.psi = 0.428985643421;

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
    msg.setTimeStamp(0.333515689067);
    msg.setSource(2661U);
    msg.setSourceEntity(21U);
    msg.setDestination(10051U);
    msg.setDestinationEntity(106U);
    msg.beam_width = 0.577661648442;
    msg.beam_height = 0.565286753276;

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
    msg.setTimeStamp(0.107762921619);
    msg.setSource(31817U);
    msg.setSourceEntity(43U);
    msg.setDestination(54571U);
    msg.setDestinationEntity(29U);
    msg.beam_width = 0.440736867593;
    msg.beam_height = 0.294884094115;

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
    msg.setTimeStamp(0.243736461157);
    msg.setSource(26115U);
    msg.setSourceEntity(96U);
    msg.setDestination(56480U);
    msg.setDestinationEntity(119U);
    msg.beam_width = 0.726582885031;
    msg.beam_height = 0.640471937435;

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
    msg.setTimeStamp(0.216425609187);
    msg.setSource(15939U);
    msg.setSourceEntity(160U);
    msg.setDestination(10466U);
    msg.setDestinationEntity(213U);
    msg.sane = 52U;

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
    msg.setTimeStamp(0.222180417014);
    msg.setSource(62901U);
    msg.setSourceEntity(109U);
    msg.setDestination(3719U);
    msg.setDestinationEntity(19U);
    msg.sane = 51U;

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
    msg.setTimeStamp(0.97080794905);
    msg.setSource(23946U);
    msg.setSourceEntity(109U);
    msg.setDestination(19589U);
    msg.setDestinationEntity(144U);
    msg.sane = 40U;

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
    msg.setTimeStamp(0.526542295323);
    msg.setSource(57783U);
    msg.setSourceEntity(52U);
    msg.setDestination(9206U);
    msg.setDestinationEntity(111U);
    msg.value = 0.641853267314;

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
    msg.setTimeStamp(0.356337394865);
    msg.setSource(57357U);
    msg.setSourceEntity(176U);
    msg.setDestination(34474U);
    msg.setDestinationEntity(159U);
    msg.value = 0.954120240504;

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
    msg.setTimeStamp(0.361400553436);
    msg.setSource(25042U);
    msg.setSourceEntity(80U);
    msg.setDestination(24374U);
    msg.setDestinationEntity(235U);
    msg.value = 0.481109605335;

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
    msg.setTimeStamp(0.0681797516306);
    msg.setSource(3087U);
    msg.setSourceEntity(156U);
    msg.setDestination(62694U);
    msg.setDestinationEntity(87U);
    msg.value = 0.260531982664;

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
    msg.setTimeStamp(0.50681514593);
    msg.setSource(54445U);
    msg.setSourceEntity(202U);
    msg.setDestination(5282U);
    msg.setDestinationEntity(254U);
    msg.value = 0.363349009987;

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
    msg.setTimeStamp(0.436535705246);
    msg.setSource(35651U);
    msg.setSourceEntity(77U);
    msg.setDestination(19625U);
    msg.setDestinationEntity(244U);
    msg.value = 0.510313030889;

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
    msg.setTimeStamp(0.346612793679);
    msg.setSource(18205U);
    msg.setSourceEntity(202U);
    msg.setDestination(22145U);
    msg.setDestinationEntity(222U);
    msg.value = 0.672294389025;

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
    msg.setTimeStamp(0.0290914208474);
    msg.setSource(11922U);
    msg.setSourceEntity(213U);
    msg.setDestination(19775U);
    msg.setDestinationEntity(223U);
    msg.value = 0.36716329737;

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
    msg.setTimeStamp(0.620298114237);
    msg.setSource(62996U);
    msg.setSourceEntity(243U);
    msg.setDestination(39215U);
    msg.setDestinationEntity(249U);
    msg.value = 0.142348293229;

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
    msg.setTimeStamp(0.465183534119);
    msg.setSource(45995U);
    msg.setSourceEntity(139U);
    msg.setDestination(46679U);
    msg.setDestinationEntity(88U);
    msg.value = 0.643310137949;

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
    msg.setTimeStamp(0.069005995234);
    msg.setSource(15701U);
    msg.setSourceEntity(101U);
    msg.setDestination(16810U);
    msg.setDestinationEntity(184U);
    msg.value = 0.871059855676;

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
    msg.setTimeStamp(0.885507479108);
    msg.setSource(24542U);
    msg.setSourceEntity(84U);
    msg.setDestination(22840U);
    msg.setDestinationEntity(1U);
    msg.value = 0.803571241317;

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
    msg.setTimeStamp(0.192304127002);
    msg.setSource(4766U);
    msg.setSourceEntity(52U);
    msg.setDestination(21484U);
    msg.setDestinationEntity(164U);
    msg.value = 0.586586125129;

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
    msg.setTimeStamp(0.398024839788);
    msg.setSource(433U);
    msg.setSourceEntity(17U);
    msg.setDestination(22447U);
    msg.setDestinationEntity(227U);
    msg.value = 0.938878301499;

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
    msg.setTimeStamp(0.949885269969);
    msg.setSource(16024U);
    msg.setSourceEntity(231U);
    msg.setDestination(29542U);
    msg.setDestinationEntity(63U);
    msg.value = 0.165939965688;

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
    msg.setTimeStamp(0.252012381911);
    msg.setSource(32290U);
    msg.setSourceEntity(120U);
    msg.setDestination(22908U);
    msg.setDestinationEntity(96U);
    msg.value = 0.978052487771;

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
    msg.setTimeStamp(0.0445979620268);
    msg.setSource(54675U);
    msg.setSourceEntity(30U);
    msg.setDestination(7075U);
    msg.setDestinationEntity(240U);
    msg.value = 0.400364942739;

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
    msg.setTimeStamp(0.431602503887);
    msg.setSource(18284U);
    msg.setSourceEntity(150U);
    msg.setDestination(33497U);
    msg.setDestinationEntity(183U);
    msg.value = 0.200802429821;

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
    msg.setTimeStamp(0.990536352417);
    msg.setSource(28713U);
    msg.setSourceEntity(0U);
    msg.setDestination(26451U);
    msg.setDestinationEntity(186U);
    msg.value = 0.40549394489;

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
    msg.setTimeStamp(0.216175942408);
    msg.setSource(39664U);
    msg.setSourceEntity(138U);
    msg.setDestination(35974U);
    msg.setDestinationEntity(9U);
    msg.value = 0.298053166242;

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
    msg.setTimeStamp(0.0955392097978);
    msg.setSource(63578U);
    msg.setSourceEntity(235U);
    msg.setDestination(61583U);
    msg.setDestinationEntity(96U);
    msg.value = 0.967451716905;

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
    msg.setTimeStamp(0.885449609505);
    msg.setSource(3232U);
    msg.setSourceEntity(61U);
    msg.setDestination(22915U);
    msg.setDestinationEntity(177U);
    msg.value = 0.467610570754;

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
    msg.setTimeStamp(0.203056042402);
    msg.setSource(2953U);
    msg.setSourceEntity(157U);
    msg.setDestination(34217U);
    msg.setDestinationEntity(116U);
    msg.value = 0.582544795723;

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
    msg.setTimeStamp(0.993174784856);
    msg.setSource(57139U);
    msg.setSourceEntity(65U);
    msg.setDestination(42136U);
    msg.setDestinationEntity(88U);
    msg.value = 0.521273721954;

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
    msg.setTimeStamp(0.762157639018);
    msg.setSource(41908U);
    msg.setSourceEntity(17U);
    msg.setDestination(56199U);
    msg.setDestinationEntity(224U);
    msg.validity = 50211U;
    msg.type = 142U;
    msg.tow = 2296885157U;
    msg.base_lat = 0.512523338127;
    msg.base_lon = 0.841663361438;
    msg.base_height = 0.543096812994;
    msg.n = 0.538463248132;
    msg.e = 0.409933077101;
    msg.d = 0.841194186917;
    msg.v_n = 0.229160450782;
    msg.v_e = 0.0317739743783;
    msg.v_d = 0.44087320594;
    msg.satellites = 212U;
    msg.iar_hyp = 4581U;
    msg.iar_ratio = 0.554584633637;

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
    msg.setTimeStamp(0.498468607526);
    msg.setSource(48603U);
    msg.setSourceEntity(16U);
    msg.setDestination(57692U);
    msg.setDestinationEntity(52U);
    msg.validity = 35238U;
    msg.type = 16U;
    msg.tow = 1336525886U;
    msg.base_lat = 0.715787691533;
    msg.base_lon = 0.99415786;
    msg.base_height = 0.991716435173;
    msg.n = 0.947410305428;
    msg.e = 0.388130714573;
    msg.d = 0.590320413777;
    msg.v_n = 0.632067510305;
    msg.v_e = 0.399317120238;
    msg.v_d = 0.078565489519;
    msg.satellites = 74U;
    msg.iar_hyp = 17968U;
    msg.iar_ratio = 0.425644192754;

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
    msg.setTimeStamp(0.472545089957);
    msg.setSource(59168U);
    msg.setSourceEntity(230U);
    msg.setDestination(37320U);
    msg.setDestinationEntity(53U);
    msg.validity = 5909U;
    msg.type = 211U;
    msg.tow = 3596927211U;
    msg.base_lat = 0.266371575309;
    msg.base_lon = 0.270188141122;
    msg.base_height = 0.541961868666;
    msg.n = 0.216406859482;
    msg.e = 0.719183927695;
    msg.d = 0.0301674022185;
    msg.v_n = 0.0277947765032;
    msg.v_e = 0.930512665883;
    msg.v_d = 0.233695851128;
    msg.satellites = 144U;
    msg.iar_hyp = 8231U;
    msg.iar_ratio = 0.656675015999;

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
    msg.setTimeStamp(0.492610110304);
    msg.setSource(50953U);
    msg.setSourceEntity(84U);
    msg.setDestination(15879U);
    msg.setDestinationEntity(162U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.795246414528;
    tmp_msg_0.lon = 0.333878287767;
    tmp_msg_0.height = 0.933857408325;
    tmp_msg_0.x = 0.933965569544;
    tmp_msg_0.y = 0.929655873349;
    tmp_msg_0.z = 0.732796488819;
    tmp_msg_0.phi = 0.509284773397;
    tmp_msg_0.theta = 0.387678802692;
    tmp_msg_0.psi = 0.70809803962;
    tmp_msg_0.u = 0.0111118861122;
    tmp_msg_0.v = 0.645728600921;
    tmp_msg_0.w = 0.362177797757;
    tmp_msg_0.vx = 0.744267460751;
    tmp_msg_0.vy = 0.357753667808;
    tmp_msg_0.vz = 0.0793252211422;
    tmp_msg_0.p = 0.694507468157;
    tmp_msg_0.q = 0.403760519555;
    tmp_msg_0.r = 0.157245947044;
    tmp_msg_0.depth = 0.0600790836036;
    tmp_msg_0.alt = 0.605177126499;
    msg.state.set(tmp_msg_0);
    msg.type = 225U;

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
    msg.setTimeStamp(0.699060915953);
    msg.setSource(63507U);
    msg.setSourceEntity(97U);
    msg.setDestination(27037U);
    msg.setDestinationEntity(227U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.17450139483;
    tmp_msg_0.lon = 0.577502832236;
    tmp_msg_0.height = 0.612073873977;
    tmp_msg_0.x = 0.253422208937;
    tmp_msg_0.y = 0.11922806682;
    tmp_msg_0.z = 0.248548957221;
    tmp_msg_0.phi = 0.140676354756;
    tmp_msg_0.theta = 0.758059415347;
    tmp_msg_0.psi = 0.494048875992;
    tmp_msg_0.u = 0.811908765484;
    tmp_msg_0.v = 0.679059344957;
    tmp_msg_0.w = 0.464036436971;
    tmp_msg_0.vx = 0.497903876862;
    tmp_msg_0.vy = 0.709066768134;
    tmp_msg_0.vz = 0.249248936547;
    tmp_msg_0.p = 0.4663735627;
    tmp_msg_0.q = 0.0192685901738;
    tmp_msg_0.r = 0.522319231373;
    tmp_msg_0.depth = 0.480137409939;
    tmp_msg_0.alt = 0.126710874639;
    msg.state.set(tmp_msg_0);
    msg.type = 25U;

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
    msg.setTimeStamp(0.431523109367);
    msg.setSource(15829U);
    msg.setSourceEntity(83U);
    msg.setDestination(15417U);
    msg.setDestinationEntity(11U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.308899489121;
    tmp_msg_0.lon = 0.355570451023;
    tmp_msg_0.height = 0.282766212641;
    tmp_msg_0.x = 0.4497323024;
    tmp_msg_0.y = 0.742426823772;
    tmp_msg_0.z = 0.459740193383;
    tmp_msg_0.phi = 0.574063624678;
    tmp_msg_0.theta = 0.042235008758;
    tmp_msg_0.psi = 0.900031711271;
    tmp_msg_0.u = 0.601097289726;
    tmp_msg_0.v = 0.406219363713;
    tmp_msg_0.w = 0.957417968388;
    tmp_msg_0.vx = 0.338011796428;
    tmp_msg_0.vy = 0.73885974248;
    tmp_msg_0.vz = 0.644548766607;
    tmp_msg_0.p = 0.862964756119;
    tmp_msg_0.q = 0.689583276238;
    tmp_msg_0.r = 0.928499217936;
    tmp_msg_0.depth = 0.403216721236;
    tmp_msg_0.alt = 0.797092129331;
    msg.state.set(tmp_msg_0);
    msg.type = 117U;

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
    msg.setTimeStamp(0.671095141278);
    msg.setSource(50302U);
    msg.setSourceEntity(216U);
    msg.setDestination(17672U);
    msg.setDestinationEntity(74U);
    msg.value = 0.656983986144;

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
    msg.setTimeStamp(0.00267396332896);
    msg.setSource(49230U);
    msg.setSourceEntity(160U);
    msg.setDestination(4697U);
    msg.setDestinationEntity(34U);
    msg.value = 0.84488802143;

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
    msg.setTimeStamp(0.0538951935563);
    msg.setSource(59878U);
    msg.setSourceEntity(186U);
    msg.setDestination(30756U);
    msg.setDestinationEntity(234U);
    msg.value = 0.344788416274;

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
    msg.setTimeStamp(0.116134177154);
    msg.setSource(38099U);
    msg.setSourceEntity(142U);
    msg.setDestination(26578U);
    msg.setDestinationEntity(40U);
    msg.value = 0.656621795193;

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
    msg.setTimeStamp(0.486741450381);
    msg.setSource(26430U);
    msg.setSourceEntity(241U);
    msg.setDestination(52562U);
    msg.setDestinationEntity(49U);
    msg.value = 0.768183203048;

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
    msg.setTimeStamp(0.483166702846);
    msg.setSource(44923U);
    msg.setSourceEntity(182U);
    msg.setDestination(60723U);
    msg.setDestinationEntity(14U);
    msg.value = 0.976517557709;

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
    msg.setTimeStamp(0.83953882283);
    msg.setSource(40477U);
    msg.setSourceEntity(67U);
    msg.setDestination(61858U);
    msg.setDestinationEntity(44U);
    msg.value = 0.768204745758;

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
    msg.setTimeStamp(0.611349291816);
    msg.setSource(60260U);
    msg.setSourceEntity(120U);
    msg.setDestination(14123U);
    msg.setDestinationEntity(30U);
    msg.value = 0.889458550653;

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
    msg.setTimeStamp(0.0200964126165);
    msg.setSource(15988U);
    msg.setSourceEntity(208U);
    msg.setDestination(45000U);
    msg.setDestinationEntity(252U);
    msg.value = 0.922663249023;

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
    msg.setTimeStamp(0.746570844305);
    msg.setSource(22963U);
    msg.setSourceEntity(149U);
    msg.setDestination(42277U);
    msg.setDestinationEntity(168U);
    msg.value = 0.473122129276;

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
    msg.setTimeStamp(0.729012212249);
    msg.setSource(38706U);
    msg.setSourceEntity(179U);
    msg.setDestination(29534U);
    msg.setDestinationEntity(86U);
    msg.value = 0.200618440534;

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
    msg.setTimeStamp(0.663291104925);
    msg.setSource(64690U);
    msg.setSourceEntity(57U);
    msg.setDestination(5057U);
    msg.setDestinationEntity(5U);
    msg.value = 0.850582826114;

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
    msg.setTimeStamp(0.768490570618);
    msg.setSource(51998U);
    msg.setSourceEntity(37U);
    msg.setDestination(12898U);
    msg.setDestinationEntity(237U);
    msg.value = 0.334089287818;

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
    msg.setTimeStamp(0.615716613423);
    msg.setSource(59445U);
    msg.setSourceEntity(223U);
    msg.setDestination(13834U);
    msg.setDestinationEntity(143U);
    msg.value = 0.30480663117;

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
    msg.setTimeStamp(0.24219574824);
    msg.setSource(34870U);
    msg.setSourceEntity(158U);
    msg.setDestination(33804U);
    msg.setDestinationEntity(199U);
    msg.value = 0.384285154936;

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
    msg.setTimeStamp(0.140472681922);
    msg.setSource(10698U);
    msg.setSourceEntity(190U);
    msg.setDestination(60454U);
    msg.setDestinationEntity(174U);
    msg.id = 49U;
    msg.zoom = 91U;
    msg.action = 3U;

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
    msg.setTimeStamp(0.360854574229);
    msg.setSource(45323U);
    msg.setSourceEntity(172U);
    msg.setDestination(703U);
    msg.setDestinationEntity(119U);
    msg.id = 87U;
    msg.zoom = 187U;
    msg.action = 78U;

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
    msg.setTimeStamp(0.69127413078);
    msg.setSource(26862U);
    msg.setSourceEntity(12U);
    msg.setDestination(5366U);
    msg.setDestinationEntity(202U);
    msg.id = 177U;
    msg.zoom = 162U;
    msg.action = 249U;

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
    msg.setTimeStamp(0.85725923854);
    msg.setSource(25346U);
    msg.setSourceEntity(73U);
    msg.setDestination(6201U);
    msg.setDestinationEntity(76U);
    msg.id = 194U;
    msg.value = 0.816434599757;

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
    msg.setTimeStamp(0.292476235677);
    msg.setSource(46737U);
    msg.setSourceEntity(32U);
    msg.setDestination(19369U);
    msg.setDestinationEntity(17U);
    msg.id = 142U;
    msg.value = 0.980862743404;

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
    msg.setTimeStamp(0.588891145783);
    msg.setSource(50521U);
    msg.setSourceEntity(110U);
    msg.setDestination(12987U);
    msg.setDestinationEntity(124U);
    msg.id = 36U;
    msg.value = 0.402486494943;

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
    msg.setTimeStamp(0.982131612169);
    msg.setSource(51394U);
    msg.setSourceEntity(112U);
    msg.setDestination(10197U);
    msg.setDestinationEntity(202U);
    msg.id = 244U;
    msg.value = 0.418192544657;

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
    msg.setTimeStamp(0.648701861362);
    msg.setSource(10981U);
    msg.setSourceEntity(231U);
    msg.setDestination(43267U);
    msg.setDestinationEntity(190U);
    msg.id = 80U;
    msg.value = 0.290396691733;

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
    msg.setTimeStamp(0.0782299249112);
    msg.setSource(26044U);
    msg.setSourceEntity(150U);
    msg.setDestination(21523U);
    msg.setDestinationEntity(235U);
    msg.id = 241U;
    msg.value = 0.653967689798;

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
    msg.setTimeStamp(0.0618275499402);
    msg.setSource(8256U);
    msg.setSourceEntity(72U);
    msg.setDestination(13899U);
    msg.setDestinationEntity(222U);
    msg.id = 40U;
    msg.angle = 0.497628218088;

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
    msg.setTimeStamp(0.131269728515);
    msg.setSource(17042U);
    msg.setSourceEntity(168U);
    msg.setDestination(30891U);
    msg.setDestinationEntity(91U);
    msg.id = 94U;
    msg.angle = 0.308588248354;

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
    msg.setTimeStamp(0.874586362863);
    msg.setSource(46862U);
    msg.setSourceEntity(231U);
    msg.setDestination(23964U);
    msg.setDestinationEntity(35U);
    msg.id = 97U;
    msg.angle = 0.124402096448;

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
    msg.setTimeStamp(0.525967153149);
    msg.setSource(22831U);
    msg.setSourceEntity(88U);
    msg.setDestination(58125U);
    msg.setDestinationEntity(244U);
    msg.op = 212U;
    msg.actions.assign("MRVHYWTHDAWRFHHPBRBVJLGQXEWJKTVGZDQMYCLXHICBEHXPGVDPSKEDXORLZWLEFVIXRMNGZYFGGRHMA");

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
    msg.setTimeStamp(0.25531229315);
    msg.setSource(22874U);
    msg.setSourceEntity(188U);
    msg.setDestination(62716U);
    msg.setDestinationEntity(251U);
    msg.op = 121U;
    msg.actions.assign("PNJQZCJXNHZXQNBRLYLXSDBMUQYAWLZAUMOOKIJDTBHLCEHRQKMWSMUWRWPAKJWRYOBZHKZOMAPUEOFDDBNMUDMTSQXKQUWGHTKGEDFYNFFPOJGNFHCRJIZYPOTTDLASGMBPXLGTVOVIBJCKVFWVPIQZTWCRVHBYVDSSDPFVIIRUELQJQYOFZLENHTBGLKIPCWXCVSIE");

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
    msg.setTimeStamp(0.508198433005);
    msg.setSource(39304U);
    msg.setSourceEntity(78U);
    msg.setDestination(37488U);
    msg.setDestinationEntity(173U);
    msg.op = 164U;
    msg.actions.assign("LROOZBKWUKOSWFMXVODKXAFEBCJLRSWNBLQVUXRILOJDKLCQQYLMFUCTNEWDJFICMDXNSQPZGTJIQGZKPBMHUZPHFQPAWGXESM");

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
    msg.setTimeStamp(0.879994790413);
    msg.setSource(33551U);
    msg.setSourceEntity(140U);
    msg.setDestination(2164U);
    msg.setDestinationEntity(45U);
    msg.actions.assign("NGYWQOFBCMXSXP");

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
    msg.setTimeStamp(0.471137576798);
    msg.setSource(14529U);
    msg.setSourceEntity(83U);
    msg.setDestination(59776U);
    msg.setDestinationEntity(61U);
    msg.actions.assign("TSBRNEPJMDKDGNSLPBKVLCAUQUQLYMALSCPSZLRWMCUHBTCGHRNSWPZXPVJTQACEIXYMDKI");

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
    msg.setTimeStamp(0.397041635371);
    msg.setSource(2583U);
    msg.setSourceEntity(238U);
    msg.setDestination(892U);
    msg.setDestinationEntity(101U);
    msg.actions.assign("HMHXYQOLVLFBHUCDDQFXKOYFOYSTZSNGZMUZVIADJNANNQVFQCJJXMLSOKPAURNPDWVZIOETHXMOSJZWVEXBTDSBFDPIMPJYKWLUUDCUORBGQYKDLBX");

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
    msg.setTimeStamp(0.6542784391);
    msg.setSource(18341U);
    msg.setSourceEntity(51U);
    msg.setDestination(20616U);
    msg.setDestinationEntity(8U);
    msg.button = 34U;
    msg.value = 176U;

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
    msg.setTimeStamp(0.314981315318);
    msg.setSource(7777U);
    msg.setSourceEntity(152U);
    msg.setDestination(21831U);
    msg.setDestinationEntity(121U);
    msg.button = 102U;
    msg.value = 181U;

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
    msg.setTimeStamp(0.275994072745);
    msg.setSource(65126U);
    msg.setSourceEntity(34U);
    msg.setDestination(10931U);
    msg.setDestinationEntity(101U);
    msg.button = 197U;
    msg.value = 57U;

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
    msg.setTimeStamp(0.809868008152);
    msg.setSource(47837U);
    msg.setSourceEntity(56U);
    msg.setDestination(26983U);
    msg.setDestinationEntity(152U);
    msg.op = 189U;
    msg.text.assign("EOKMAKWJVSYQNHPKRHAIPZEMGZAHMMYTZFRXBJSIBOCSXOSKLANDZXJYKMLFUPIRUROLAUUYSVPCBQRYYDMN");

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
    msg.setTimeStamp(0.618028558847);
    msg.setSource(47346U);
    msg.setSourceEntity(254U);
    msg.setDestination(57886U);
    msg.setDestinationEntity(148U);
    msg.op = 136U;
    msg.text.assign("CDMCCILQOYGUSLDRJFWHYHITMNHUPDTVFPOVNKBNJGBRPUNOTFJYSZCDXQLBKBLVAIZOYLCFSGBKNGXJUKKVMDNIPTQAGHTILZXJAENPIEPIMYMCLWDPOAHWOASZMKVOWKQQZPASMEHWXGGHDTTAGTRFXOYJYAPQCSJKLNRVIDXAAFFYXGRMCBC");

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
    msg.setTimeStamp(0.482471581406);
    msg.setSource(28694U);
    msg.setSourceEntity(51U);
    msg.setDestination(57025U);
    msg.setDestinationEntity(108U);
    msg.op = 152U;
    msg.text.assign("QMGKEGHFMLULYXAXVMSZQVUIKGIBPRLGPMLIPXZRTEKNKBIRTHEQAYTZYBISWQRMDIYBJNAOPQLCFSLYSL");

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
    msg.setTimeStamp(0.610704934576);
    msg.setSource(24318U);
    msg.setSourceEntity(174U);
    msg.setDestination(55735U);
    msg.setDestinationEntity(188U);
    msg.op = 28U;
    msg.time_remain = 0.796124245577;
    msg.sched_time = 0.888413583014;

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
    msg.setTimeStamp(0.0707476059414);
    msg.setSource(5688U);
    msg.setSourceEntity(22U);
    msg.setDestination(19201U);
    msg.setDestinationEntity(170U);
    msg.op = 45U;
    msg.time_remain = 0.571885253455;
    msg.sched_time = 0.592748369146;

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
    msg.setTimeStamp(0.941030330636);
    msg.setSource(33363U);
    msg.setSourceEntity(164U);
    msg.setDestination(18761U);
    msg.setDestinationEntity(205U);
    msg.op = 41U;
    msg.time_remain = 0.800689136857;
    msg.sched_time = 0.182917124964;

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
    msg.setTimeStamp(0.173866380361);
    msg.setSource(33707U);
    msg.setSourceEntity(139U);
    msg.setDestination(21792U);
    msg.setDestinationEntity(216U);
    msg.name.assign("RNLQGYXOAIEUDZPLIFERQOQALUIBXLFBQKYMRYZRWIOJUKATKPTQPWXNGJXNFTZTHDHMGEMWPUEQRRKIKFRNLRNFVCBLESBVTTGQSMPOCAOTVGJGEEVONSWXYBB");
    msg.op = 247U;
    msg.sched_time = 0.808842231797;

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
    msg.setTimeStamp(0.850005300271);
    msg.setSource(3323U);
    msg.setSourceEntity(209U);
    msg.setDestination(47019U);
    msg.setDestinationEntity(176U);
    msg.name.assign("VWJKCNPYCWPTJJYNFFPTOSHLMYSDXDTLTLGVZHMYKAVWRSXYVV");
    msg.op = 249U;
    msg.sched_time = 0.407186441071;

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
    msg.setTimeStamp(0.843950739008);
    msg.setSource(35729U);
    msg.setSourceEntity(7U);
    msg.setDestination(15418U);
    msg.setDestinationEntity(162U);
    msg.name.assign("KRHZWQEZVYMWMEQQGBTSRNTJIFPDOIGDHKYTRVZUXCEXNBSCPSQBMFOUYLQNHDXIGNSBLMBFCHSXHKPYLHPXINXOXGJYVFOWKWBWVBKO");
    msg.op = 191U;
    msg.sched_time = 0.540175963126;

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
    msg.setTimeStamp(0.215511023183);
    msg.setSource(46383U);
    msg.setSourceEntity(35U);
    msg.setDestination(44192U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.867398718235);
    msg.setSource(36028U);
    msg.setSourceEntity(41U);
    msg.setDestination(56102U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.97252698923);
    msg.setSource(64409U);
    msg.setSourceEntity(109U);
    msg.setDestination(54517U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.226055131614);
    msg.setSource(14325U);
    msg.setSourceEntity(84U);
    msg.setDestination(32086U);
    msg.setDestinationEntity(85U);
    msg.name.assign("BDBKYQECJKBDLNJKATRFZQVJOXRUWDBHSTRUMGIVTSPIIU");
    msg.state = 55U;

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
    msg.setTimeStamp(0.789872690718);
    msg.setSource(54848U);
    msg.setSourceEntity(94U);
    msg.setDestination(33087U);
    msg.setDestinationEntity(94U);
    msg.name.assign("KWOEZDVMNXPQFGNTBAQRCNEHDXTBXZDLVOBHUIVXHFOWOTYLNEJDKDOPVTIKGCKXRSQFCMCHWPGBBRLVTSVIMVKWDIPURYKFQADSWLPFYPCUBJGYEYLXXSZKLZBSJLSHJVONGAHKQUUDATPZMWEORIJROQVIBBNZFJTFATUKCLZGSYPNMWDXOSIFHJJYRHM");
    msg.state = 90U;

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
    msg.setTimeStamp(0.636998025648);
    msg.setSource(27048U);
    msg.setSourceEntity(54U);
    msg.setDestination(29697U);
    msg.setDestinationEntity(211U);
    msg.name.assign("WRUUJGBRSAOEAFJFIUJHAEYNCWYRPIZJPSPVZTDATFVFKCZYRMBOQQSETFIPGFGCWOJISNJJRTCZTZDJPVOESINARXWLQNXGGVNQEYVQBVIVNXFINBTICWEWNLMMWQQOZOXQMCFUHLFUXPRXLSHGNGULLRSZKFGHKKBXDXQBWAEKBAPOKDUKMMPCSAUGDEKLVBWOVBYKDCHJK");
    msg.state = 50U;

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
    msg.setTimeStamp(0.905912705524);
    msg.setSource(43295U);
    msg.setSourceEntity(4U);
    msg.setDestination(61232U);
    msg.setDestinationEntity(167U);
    msg.name.assign("RRIFSZQTZKXUYZYHVFTIMZAXJRADCEJOZQKKQDJWQUTUQNCPVYAGEEPNONNMRABWZGUALCYMPMZLEVNDXHHOGROLLXMNNTGXEVLHKQFOSMLGPHSMBTBABUZEVCWGJCPJFSMVFXGJDTIUWXYXCTKQYIIGXQREDBSIPWROKERSVJEFZ");
    msg.value = 46U;

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
    msg.setTimeStamp(0.558017321996);
    msg.setSource(44516U);
    msg.setSourceEntity(72U);
    msg.setDestination(46523U);
    msg.setDestinationEntity(228U);
    msg.name.assign("BWSXVWURGHZFUKPCVCSIVPZMNQCASNBGJIZIRCDPPLYAWKAUXVYYYZXCHKUTYMETYGRSPMAHNVFEUWBLRNVLSHERBJGFBXOJRCMYWHCLDYOEPQJTBGGBJZTHNRSMHTLDQQKODHJIADPOIFLZZGWOVEPFQVBNKSKXWFKBVAACUPQDHXDACEKDOPLFIUBQYNWTUL");
    msg.value = 239U;

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
    msg.setTimeStamp(0.647904663701);
    msg.setSource(8258U);
    msg.setSourceEntity(71U);
    msg.setDestination(64748U);
    msg.setDestinationEntity(185U);
    msg.name.assign("VSDWAVTKIYBFJLEWOEWLKLGLHETJNZNUUJFTVBZXVAHIPXRACJDUTJPBKLYBTEJMBZVQGOAPFNMRLLOPDQNTCCTHIAFOIWAZUJYNRKSDWQREGEHGUPNDKZFQVPZHZHOCMLKSAJLVABFFTFFICCNXYMUOPWQIIBYIAUEDQVDXWMWZEGHXMNMMDICVYPNZSSQMNUKHJDBOXCYXXSWKGXYOEGBQ");
    msg.value = 106U;

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
    msg.setTimeStamp(0.113184032857);
    msg.setSource(33681U);
    msg.setSourceEntity(126U);
    msg.setDestination(23112U);
    msg.setDestinationEntity(137U);
    msg.name.assign("JGOFCYYOLOMXRFUPRGZXXKVV");

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
    msg.setTimeStamp(0.169189488);
    msg.setSource(8301U);
    msg.setSourceEntity(93U);
    msg.setDestination(11081U);
    msg.setDestinationEntity(115U);
    msg.name.assign("QLZTMKRGDFGSVCNZWPRKULQZXBWYUXCCNQIZPWSOHVBIKGCIGVX");

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
    msg.setTimeStamp(0.983635620606);
    msg.setSource(20863U);
    msg.setSourceEntity(47U);
    msg.setDestination(28413U);
    msg.setDestinationEntity(111U);
    msg.name.assign("QTMSHNLWGMPAEWYCQIMUOZYDICOIDDRGUNCQRODYAKCSLGHDIRVNUYGCKMXCMJJHPCALSBLBOOTBEETGMKHLLNYGJPEVAJ");

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
    msg.setTimeStamp(0.640263719654);
    msg.setSource(41836U);
    msg.setSourceEntity(97U);
    msg.setDestination(43877U);
    msg.setDestinationEntity(84U);
    msg.name.assign("ZOPDFQZRBDGWFZMQIXSTKUIWWDSRBBUOBIXYSFDVQAJUQHGLAVAHULMNMUXHDQMQTNJTJBPVPTGJMUPYIKRK");
    msg.value = 206U;

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
    msg.setTimeStamp(0.0580129040537);
    msg.setSource(33757U);
    msg.setSourceEntity(106U);
    msg.setDestination(60721U);
    msg.setDestinationEntity(45U);
    msg.name.assign("JAIWCCUNNLDHLQPVBEMZBSBHTKDGWXBMIKSPDILZOZHAJLFJAARFOFVGDPJHYTJISZEYFSKARXDXOBFJZ");
    msg.value = 187U;

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
    msg.setTimeStamp(0.354175627123);
    msg.setSource(30129U);
    msg.setSourceEntity(112U);
    msg.setDestination(21060U);
    msg.setDestinationEntity(71U);
    msg.name.assign("XLHYKRXKRTZPISUIOMECQCYYUUFSCTDKNMWFRODVGXYPBXTNFOMNRAEBOKMYIFPZBRGNOTZHXPQMPSJNEBMQVIRSHPCTTWOIAPKLIWXGDAQCAVBNDEKPGYRKDCUWNMZRVBFQCFZVHYSSAEEWWQOCQVAO");
    msg.value = 13U;

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
    msg.setTimeStamp(0.27079912706);
    msg.setSource(16618U);
    msg.setSourceEntity(69U);
    msg.setDestination(27574U);
    msg.setDestinationEntity(29U);
    msg.id = 201U;
    msg.period = 1847057924U;
    msg.duty_cycle = 3991910952U;

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
    msg.setTimeStamp(0.0316473122126);
    msg.setSource(15880U);
    msg.setSourceEntity(214U);
    msg.setDestination(44990U);
    msg.setDestinationEntity(39U);
    msg.id = 65U;
    msg.period = 13436539U;
    msg.duty_cycle = 4186598668U;

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
    msg.setTimeStamp(0.0342722758937);
    msg.setSource(52261U);
    msg.setSourceEntity(203U);
    msg.setDestination(6487U);
    msg.setDestinationEntity(224U);
    msg.id = 254U;
    msg.period = 1927779197U;
    msg.duty_cycle = 1376015764U;

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
    msg.setTimeStamp(0.642362540102);
    msg.setSource(19298U);
    msg.setSourceEntity(173U);
    msg.setDestination(39729U);
    msg.setDestinationEntity(48U);
    msg.id = 231U;
    msg.period = 2202647476U;
    msg.duty_cycle = 166938369U;

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
    msg.setTimeStamp(0.261061266639);
    msg.setSource(56576U);
    msg.setSourceEntity(0U);
    msg.setDestination(62551U);
    msg.setDestinationEntity(182U);
    msg.id = 106U;
    msg.period = 3891247180U;
    msg.duty_cycle = 1676486884U;

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
    msg.setTimeStamp(0.910659570942);
    msg.setSource(5933U);
    msg.setSourceEntity(65U);
    msg.setDestination(43302U);
    msg.setDestinationEntity(105U);
    msg.id = 54U;
    msg.period = 1182145851U;
    msg.duty_cycle = 2717916360U;

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
    msg.setTimeStamp(0.564356988283);
    msg.setSource(50622U);
    msg.setSourceEntity(202U);
    msg.setDestination(6497U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.57285785914;
    msg.lon = 0.908312381321;
    msg.height = 0.592171764736;
    msg.x = 0.132331397337;
    msg.y = 0.648697664064;
    msg.z = 0.758635613096;
    msg.phi = 0.547058482673;
    msg.theta = 0.65900751596;
    msg.psi = 0.994414592542;
    msg.u = 0.818149095282;
    msg.v = 0.898312419329;
    msg.w = 0.407822285853;
    msg.vx = 0.630759658867;
    msg.vy = 0.479231208849;
    msg.vz = 0.0720966852877;
    msg.p = 0.698680214423;
    msg.q = 0.714334557868;
    msg.r = 0.728955920603;
    msg.depth = 0.345815508073;
    msg.alt = 0.57876477101;

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
    msg.setTimeStamp(0.776854049979);
    msg.setSource(50747U);
    msg.setSourceEntity(48U);
    msg.setDestination(40866U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.50631406241;
    msg.lon = 0.355702078596;
    msg.height = 0.952944595372;
    msg.x = 0.0775153547077;
    msg.y = 0.157140070254;
    msg.z = 0.871134838194;
    msg.phi = 0.462118414606;
    msg.theta = 0.751106114638;
    msg.psi = 0.45947050413;
    msg.u = 0.247690607719;
    msg.v = 0.0542997465106;
    msg.w = 0.55281142815;
    msg.vx = 0.733574188457;
    msg.vy = 0.786080048356;
    msg.vz = 0.63272216978;
    msg.p = 0.586397595212;
    msg.q = 0.404700879751;
    msg.r = 0.327237407241;
    msg.depth = 0.235364960547;
    msg.alt = 0.723161489295;

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
    msg.setTimeStamp(0.898343360898);
    msg.setSource(47052U);
    msg.setSourceEntity(19U);
    msg.setDestination(61871U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.400268352188;
    msg.lon = 0.352431809244;
    msg.height = 0.089215511317;
    msg.x = 0.328963771806;
    msg.y = 0.336385563977;
    msg.z = 0.885784571203;
    msg.phi = 0.273394138718;
    msg.theta = 0.503060388582;
    msg.psi = 0.197682830071;
    msg.u = 0.819461710676;
    msg.v = 0.0661839187699;
    msg.w = 0.067578245193;
    msg.vx = 0.725740358789;
    msg.vy = 0.593605728682;
    msg.vz = 0.383098909048;
    msg.p = 0.2896166536;
    msg.q = 0.110873199412;
    msg.r = 0.11049679449;
    msg.depth = 0.575443613688;
    msg.alt = 0.755435141604;

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
    msg.setTimeStamp(0.956336244672);
    msg.setSource(63627U);
    msg.setSourceEntity(215U);
    msg.setDestination(33807U);
    msg.setDestinationEntity(43U);
    msg.x = 0.735078362559;
    msg.y = 0.201126751925;
    msg.z = 0.749497873892;

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
    msg.setTimeStamp(0.687604802212);
    msg.setSource(44045U);
    msg.setSourceEntity(254U);
    msg.setDestination(37989U);
    msg.setDestinationEntity(96U);
    msg.x = 0.109373239797;
    msg.y = 0.611375689749;
    msg.z = 0.174057550868;

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
    msg.setTimeStamp(0.554288164236);
    msg.setSource(36056U);
    msg.setSourceEntity(4U);
    msg.setDestination(28607U);
    msg.setDestinationEntity(254U);
    msg.x = 0.122698553616;
    msg.y = 0.978713669025;
    msg.z = 0.0463776074931;

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
    msg.setTimeStamp(0.0653590915981);
    msg.setSource(23390U);
    msg.setSourceEntity(228U);
    msg.setDestination(43085U);
    msg.setDestinationEntity(32U);
    msg.value = 0.552119706354;

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
    msg.setTimeStamp(0.123444234086);
    msg.setSource(21279U);
    msg.setSourceEntity(180U);
    msg.setDestination(15599U);
    msg.setDestinationEntity(27U);
    msg.value = 0.14771633164;

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
    msg.setTimeStamp(0.737320406868);
    msg.setSource(59492U);
    msg.setSourceEntity(86U);
    msg.setDestination(20189U);
    msg.setDestinationEntity(70U);
    msg.value = 0.470791044489;

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
    msg.setTimeStamp(0.230861547821);
    msg.setSource(56141U);
    msg.setSourceEntity(82U);
    msg.setDestination(48452U);
    msg.setDestinationEntity(68U);
    msg.value = 0.101776898577;

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
    msg.setTimeStamp(0.485394642608);
    msg.setSource(20025U);
    msg.setSourceEntity(150U);
    msg.setDestination(46346U);
    msg.setDestinationEntity(134U);
    msg.value = 0.140079263299;

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
    msg.setTimeStamp(0.573539562124);
    msg.setSource(37807U);
    msg.setSourceEntity(90U);
    msg.setDestination(897U);
    msg.setDestinationEntity(77U);
    msg.value = 0.657904308488;

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
    msg.setTimeStamp(0.849048519705);
    msg.setSource(29082U);
    msg.setSourceEntity(241U);
    msg.setDestination(2428U);
    msg.setDestinationEntity(209U);
    msg.x = 0.954001918661;
    msg.y = 0.569486111375;
    msg.z = 0.0169647798598;
    msg.phi = 0.359634717457;
    msg.theta = 0.747839696396;
    msg.psi = 0.884552168028;
    msg.p = 0.24517949995;
    msg.q = 0.77889919236;
    msg.r = 0.972639203169;
    msg.u = 0.497179671028;
    msg.v = 0.93587476736;
    msg.w = 0.985636304401;
    msg.bias_psi = 0.0563359223703;
    msg.bias_r = 0.363127722352;

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
    msg.setTimeStamp(0.110003631697);
    msg.setSource(1669U);
    msg.setSourceEntity(116U);
    msg.setDestination(537U);
    msg.setDestinationEntity(190U);
    msg.x = 0.936789866933;
    msg.y = 0.926763758944;
    msg.z = 0.681703678096;
    msg.phi = 0.413710037801;
    msg.theta = 0.40298122107;
    msg.psi = 0.810387662544;
    msg.p = 0.598836848413;
    msg.q = 0.525420233943;
    msg.r = 0.0695481083256;
    msg.u = 0.183472196579;
    msg.v = 0.117374745385;
    msg.w = 0.370846741089;
    msg.bias_psi = 0.00762122564444;
    msg.bias_r = 0.0489628903805;

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
    msg.setTimeStamp(0.0955567504809);
    msg.setSource(1995U);
    msg.setSourceEntity(177U);
    msg.setDestination(18916U);
    msg.setDestinationEntity(225U);
    msg.x = 0.950552142499;
    msg.y = 0.313448357024;
    msg.z = 0.730584426837;
    msg.phi = 0.325274328276;
    msg.theta = 0.298388297721;
    msg.psi = 0.783012893706;
    msg.p = 0.797872586424;
    msg.q = 0.805962247292;
    msg.r = 0.424431202836;
    msg.u = 0.999131524513;
    msg.v = 0.531467492037;
    msg.w = 0.910712539161;
    msg.bias_psi = 0.29513523163;
    msg.bias_r = 0.707088257864;

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
    msg.setTimeStamp(0.783880650073);
    msg.setSource(62543U);
    msg.setSourceEntity(132U);
    msg.setDestination(32688U);
    msg.setDestinationEntity(85U);
    msg.bias_psi = 0.47527941547;
    msg.bias_r = 0.173847677478;
    msg.cog = 0.22449510849;
    msg.cyaw = 0.0234455764892;
    msg.lbl_rej_level = 0.134550145554;
    msg.gps_rej_level = 0.536855599155;
    msg.custom_x = 0.592891434615;
    msg.custom_y = 0.202824553968;
    msg.custom_z = 0.230960250177;

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
    msg.setTimeStamp(0.0201726557793);
    msg.setSource(2545U);
    msg.setSourceEntity(89U);
    msg.setDestination(45554U);
    msg.setDestinationEntity(130U);
    msg.bias_psi = 0.461679864529;
    msg.bias_r = 0.436352990467;
    msg.cog = 0.883095726299;
    msg.cyaw = 0.0901694661842;
    msg.lbl_rej_level = 0.146789934612;
    msg.gps_rej_level = 0.528707489829;
    msg.custom_x = 0.0519519605793;
    msg.custom_y = 0.883739213506;
    msg.custom_z = 0.570379999792;

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
    msg.setTimeStamp(0.0759733186758);
    msg.setSource(18405U);
    msg.setSourceEntity(236U);
    msg.setDestination(25934U);
    msg.setDestinationEntity(158U);
    msg.bias_psi = 0.339156165267;
    msg.bias_r = 0.182258815678;
    msg.cog = 0.417000177036;
    msg.cyaw = 0.990788110257;
    msg.lbl_rej_level = 0.720026967736;
    msg.gps_rej_level = 0.159806821086;
    msg.custom_x = 0.292134454868;
    msg.custom_y = 0.441524693115;
    msg.custom_z = 0.111680821373;

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
    msg.setTimeStamp(0.865627969804);
    msg.setSource(14785U);
    msg.setSourceEntity(239U);
    msg.setDestination(51607U);
    msg.setDestinationEntity(48U);
    msg.utc_time = 0.20049050657;
    msg.reason = 251U;

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
    msg.setTimeStamp(0.0449859302978);
    msg.setSource(64201U);
    msg.setSourceEntity(167U);
    msg.setDestination(4056U);
    msg.setDestinationEntity(20U);
    msg.utc_time = 0.730729964039;
    msg.reason = 100U;

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
    msg.setTimeStamp(0.275787720206);
    msg.setSource(27569U);
    msg.setSourceEntity(134U);
    msg.setDestination(48474U);
    msg.setDestinationEntity(79U);
    msg.utc_time = 0.223120480257;
    msg.reason = 146U;

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
    msg.setTimeStamp(0.802884870071);
    msg.setSource(51538U);
    msg.setSourceEntity(26U);
    msg.setDestination(28954U);
    msg.setDestinationEntity(59U);
    msg.id = 152U;
    msg.range = 0.815616137925;
    msg.acceptance = 229U;

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
    msg.setTimeStamp(0.723910407204);
    msg.setSource(24461U);
    msg.setSourceEntity(248U);
    msg.setDestination(4146U);
    msg.setDestinationEntity(219U);
    msg.id = 179U;
    msg.range = 0.373974195466;
    msg.acceptance = 34U;

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
    msg.setTimeStamp(0.204037981317);
    msg.setSource(27514U);
    msg.setSourceEntity(81U);
    msg.setDestination(37097U);
    msg.setDestinationEntity(86U);
    msg.id = 220U;
    msg.range = 0.722951466721;
    msg.acceptance = 250U;

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
    msg.setTimeStamp(0.481976052971);
    msg.setSource(40915U);
    msg.setSourceEntity(151U);
    msg.setDestination(23026U);
    msg.setDestinationEntity(87U);
    msg.type = 145U;
    msg.reason = 190U;
    msg.value = 0.173394745374;
    msg.timestep = 0.976940004907;

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
    msg.setTimeStamp(0.520123575996);
    msg.setSource(3437U);
    msg.setSourceEntity(133U);
    msg.setDestination(23880U);
    msg.setDestinationEntity(159U);
    msg.type = 203U;
    msg.reason = 32U;
    msg.value = 0.487055816886;
    msg.timestep = 0.237525231411;

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
    msg.setTimeStamp(0.0213690746135);
    msg.setSource(55511U);
    msg.setSourceEntity(223U);
    msg.setDestination(5027U);
    msg.setDestinationEntity(9U);
    msg.type = 111U;
    msg.reason = 196U;
    msg.value = 0.290581340272;
    msg.timestep = 0.801677072305;

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
    msg.setTimeStamp(0.0867454178761);
    msg.setSource(50874U);
    msg.setSourceEntity(245U);
    msg.setDestination(41744U);
    msg.setDestinationEntity(153U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QNTYKMOPXLEKTWNIRJRDDZMRQPVYGLFWQUORRAIGGFZBGTYWVYBMHUVDROZPSWLPDQABACQCESNIXCOKENGXCTVIKMJCOPNCVGZLBCWXFDAQNMUEICVHHHWUUSOZUAQWJTNNMYSBCVQJZYGIWJPJVMLFSIFLXOLRBSZBDVQXMAKWVAUJKTYYHHCUXJHTDZZZAGLRGBWJKPHSNF");
    tmp_msg_0.lat = 0.562435104616;
    tmp_msg_0.lon = 0.194304058807;
    tmp_msg_0.depth = 0.793641970499;
    tmp_msg_0.query_channel = 160U;
    tmp_msg_0.reply_channel = 172U;
    tmp_msg_0.transponder_delay = 7U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0867831281799;
    msg.y = 0.719648414242;
    msg.var_x = 0.842158244435;
    msg.var_y = 0.97075013384;
    msg.distance = 0.812621975379;

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
    msg.setTimeStamp(0.863392621635);
    msg.setSource(23179U);
    msg.setSourceEntity(38U);
    msg.setDestination(55534U);
    msg.setDestinationEntity(165U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GWXVCJRALLKPHUPVBYSAAAUESPNMIFBZQHKXWSRABQRAYQEZTZBXADZHDQKNORQNWWCFKOUWBWLZVKFJZBKVEWHHQUTEPESTITEHNLVDUQYSODBSAMSMQIVERRWRDNGGSZBWCJUPRLKKXISPOMTXCNEDKCTOYQTVZAMHXFYGXUMOJJYDNDG");
    tmp_msg_0.lat = 0.61575167495;
    tmp_msg_0.lon = 0.0242726950567;
    tmp_msg_0.depth = 0.814932595099;
    tmp_msg_0.query_channel = 178U;
    tmp_msg_0.reply_channel = 225U;
    tmp_msg_0.transponder_delay = 204U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.661821511159;
    msg.y = 0.967616186752;
    msg.var_x = 0.867485913758;
    msg.var_y = 0.710340539825;
    msg.distance = 0.500566553663;

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
    msg.setTimeStamp(0.386281687701);
    msg.setSource(28540U);
    msg.setSourceEntity(213U);
    msg.setDestination(53519U);
    msg.setDestinationEntity(7U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RLVAKSVUEPJZMFRXOBBYZULXXFKOGQPVPHCBHZEGEMUKUMSIGYTDKIABHCCNFCSETYDSWOAYYHIOPKLTYGSLTMJDFBDBMCZQNQJJVWGNFKTYIFOOOPASWUZIAHWNOAAOUAAXWAMRLPWPYFQXKKPTVCOMLBWEFCECIZZRJNNGTQHHKGXTURGMQQYHDVNPIIUHDLVBRCJYGEBWDUDVJHNFPJZXRSMNCGXDMNEZTRLETZFWIQLLKXDQVUSSSBJRQJ");
    tmp_msg_0.lat = 0.646968155087;
    tmp_msg_0.lon = 0.109027488831;
    tmp_msg_0.depth = 0.701456581521;
    tmp_msg_0.query_channel = 129U;
    tmp_msg_0.reply_channel = 250U;
    tmp_msg_0.transponder_delay = 16U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.877016480189;
    msg.y = 0.618895922482;
    msg.var_x = 0.422274405864;
    msg.var_y = 0.227017928188;
    msg.distance = 0.852391530286;

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
    msg.setTimeStamp(0.131518554339);
    msg.setSource(2404U);
    msg.setSourceEntity(32U);
    msg.setDestination(2261U);
    msg.setDestinationEntity(157U);
    msg.state = 73U;

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
    msg.setTimeStamp(0.724392659485);
    msg.setSource(22878U);
    msg.setSourceEntity(39U);
    msg.setDestination(21375U);
    msg.setDestinationEntity(193U);
    msg.state = 225U;

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
    msg.setTimeStamp(0.0453477041485);
    msg.setSource(18873U);
    msg.setSourceEntity(239U);
    msg.setDestination(43983U);
    msg.setDestinationEntity(82U);
    msg.state = 211U;

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
    msg.setTimeStamp(0.553104506224);
    msg.setSource(15482U);
    msg.setSourceEntity(180U);
    msg.setDestination(31806U);
    msg.setDestinationEntity(247U);
    msg.x = 0.189159946701;
    msg.y = 0.335347382253;
    msg.z = 0.534287337962;

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
    msg.setTimeStamp(0.977997607009);
    msg.setSource(3708U);
    msg.setSourceEntity(244U);
    msg.setDestination(44653U);
    msg.setDestinationEntity(24U);
    msg.x = 0.50409404238;
    msg.y = 0.986778220924;
    msg.z = 0.302431481785;

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
    msg.setTimeStamp(0.801624877188);
    msg.setSource(43124U);
    msg.setSourceEntity(171U);
    msg.setDestination(10032U);
    msg.setDestinationEntity(0U);
    msg.x = 0.946476882684;
    msg.y = 0.478317146188;
    msg.z = 0.986824972423;

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
    msg.setTimeStamp(0.697018054693);
    msg.setSource(22349U);
    msg.setSourceEntity(172U);
    msg.setDestination(39144U);
    msg.setDestinationEntity(247U);
    msg.va = 0.695955378698;
    msg.aoa = 0.483482032017;
    msg.ssa = 0.310229212285;

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
    msg.setTimeStamp(0.940043791682);
    msg.setSource(63684U);
    msg.setSourceEntity(148U);
    msg.setDestination(17326U);
    msg.setDestinationEntity(41U);
    msg.va = 0.168694008531;
    msg.aoa = 0.464438267607;
    msg.ssa = 0.183434812601;

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
    msg.setTimeStamp(0.649809160906);
    msg.setSource(56102U);
    msg.setSourceEntity(26U);
    msg.setDestination(63300U);
    msg.setDestinationEntity(254U);
    msg.va = 0.0141605580962;
    msg.aoa = 0.576022204215;
    msg.ssa = 0.103785051386;

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
    msg.setTimeStamp(0.506420519207);
    msg.setSource(21648U);
    msg.setSourceEntity(232U);
    msg.setDestination(20291U);
    msg.setDestinationEntity(87U);
    msg.value = 0.477545543233;

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
    msg.setTimeStamp(0.419130589407);
    msg.setSource(639U);
    msg.setSourceEntity(77U);
    msg.setDestination(54739U);
    msg.setDestinationEntity(134U);
    msg.value = 0.468465193102;

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
    msg.setTimeStamp(0.751430407716);
    msg.setSource(65272U);
    msg.setSourceEntity(208U);
    msg.setDestination(57158U);
    msg.setDestinationEntity(28U);
    msg.value = 0.95110479699;

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
    msg.setTimeStamp(0.839928850296);
    msg.setSource(54780U);
    msg.setSourceEntity(162U);
    msg.setDestination(44391U);
    msg.setDestinationEntity(253U);
    msg.value = 0.826913247605;
    msg.z_units = 231U;

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
    msg.setTimeStamp(0.967871826957);
    msg.setSource(62165U);
    msg.setSourceEntity(136U);
    msg.setDestination(10604U);
    msg.setDestinationEntity(253U);
    msg.value = 0.411656405222;
    msg.z_units = 201U;

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
    msg.setTimeStamp(0.294711821162);
    msg.setSource(3941U);
    msg.setSourceEntity(202U);
    msg.setDestination(51752U);
    msg.setDestinationEntity(158U);
    msg.value = 0.538071439844;
    msg.z_units = 205U;

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
    msg.setTimeStamp(0.937139324217);
    msg.setSource(16258U);
    msg.setSourceEntity(18U);
    msg.setDestination(12247U);
    msg.setDestinationEntity(225U);
    msg.value = 0.866487221726;
    msg.speed_units = 253U;

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
    msg.setTimeStamp(0.557034169157);
    msg.setSource(46869U);
    msg.setSourceEntity(171U);
    msg.setDestination(2050U);
    msg.setDestinationEntity(107U);
    msg.value = 0.244195710266;
    msg.speed_units = 174U;

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
    msg.setTimeStamp(0.24781775193);
    msg.setSource(28589U);
    msg.setSourceEntity(252U);
    msg.setDestination(32636U);
    msg.setDestinationEntity(31U);
    msg.value = 0.315474724338;
    msg.speed_units = 26U;

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
    msg.setTimeStamp(0.222120656319);
    msg.setSource(40365U);
    msg.setSourceEntity(26U);
    msg.setDestination(2845U);
    msg.setDestinationEntity(82U);
    msg.value = 0.788107764052;

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
    msg.setTimeStamp(0.647758277848);
    msg.setSource(64065U);
    msg.setSourceEntity(168U);
    msg.setDestination(17884U);
    msg.setDestinationEntity(214U);
    msg.value = 0.460666980424;

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
    msg.setTimeStamp(0.840249641046);
    msg.setSource(15067U);
    msg.setSourceEntity(186U);
    msg.setDestination(32801U);
    msg.setDestinationEntity(214U);
    msg.value = 0.773455739446;

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
    msg.setTimeStamp(0.000556913443624);
    msg.setSource(43365U);
    msg.setSourceEntity(182U);
    msg.setDestination(58577U);
    msg.setDestinationEntity(113U);
    msg.value = 0.085836754395;

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
    msg.setTimeStamp(0.202012346827);
    msg.setSource(29663U);
    msg.setSourceEntity(6U);
    msg.setDestination(57085U);
    msg.setDestinationEntity(181U);
    msg.value = 0.0308170756443;

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
    msg.setTimeStamp(0.642099581558);
    msg.setSource(3867U);
    msg.setSourceEntity(248U);
    msg.setDestination(45977U);
    msg.setDestinationEntity(205U);
    msg.value = 0.0967904965608;

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
    msg.setTimeStamp(0.0620555911389);
    msg.setSource(35498U);
    msg.setSourceEntity(2U);
    msg.setDestination(24880U);
    msg.setDestinationEntity(226U);
    msg.value = 0.960971808651;

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
    msg.setTimeStamp(0.250252974719);
    msg.setSource(31776U);
    msg.setSourceEntity(216U);
    msg.setDestination(60092U);
    msg.setDestinationEntity(79U);
    msg.value = 0.868198446644;

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
    msg.setTimeStamp(0.8681277221);
    msg.setSource(48170U);
    msg.setSourceEntity(59U);
    msg.setDestination(32590U);
    msg.setDestinationEntity(34U);
    msg.value = 0.318509650277;

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
    msg.setTimeStamp(0.226227654399);
    msg.setSource(25769U);
    msg.setSourceEntity(174U);
    msg.setDestination(56158U);
    msg.setDestinationEntity(247U);
    msg.path_ref = 1930446576U;
    msg.start_lat = 0.868968051438;
    msg.start_lon = 0.375640916842;
    msg.start_z = 0.141095625306;
    msg.start_z_units = 87U;
    msg.end_lat = 0.27884088592;
    msg.end_lon = 0.581124271851;
    msg.end_z = 0.507101007817;
    msg.end_z_units = 56U;
    msg.speed = 0.307366048273;
    msg.speed_units = 119U;
    msg.lradius = 0.596756570462;
    msg.flags = 48U;

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
    msg.setTimeStamp(0.476658905082);
    msg.setSource(46212U);
    msg.setSourceEntity(92U);
    msg.setDestination(36435U);
    msg.setDestinationEntity(146U);
    msg.path_ref = 236590253U;
    msg.start_lat = 0.242827736937;
    msg.start_lon = 0.66609800396;
    msg.start_z = 0.472325357611;
    msg.start_z_units = 1U;
    msg.end_lat = 0.240851768779;
    msg.end_lon = 0.121319963881;
    msg.end_z = 0.349163564583;
    msg.end_z_units = 8U;
    msg.speed = 0.0105207616046;
    msg.speed_units = 155U;
    msg.lradius = 0.857813073528;
    msg.flags = 247U;

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
    msg.setTimeStamp(0.803198166554);
    msg.setSource(12617U);
    msg.setSourceEntity(203U);
    msg.setDestination(51501U);
    msg.setDestinationEntity(114U);
    msg.path_ref = 263330365U;
    msg.start_lat = 0.907328720104;
    msg.start_lon = 0.66881875844;
    msg.start_z = 0.973823896211;
    msg.start_z_units = 212U;
    msg.end_lat = 0.504056894053;
    msg.end_lon = 0.0854101990983;
    msg.end_z = 0.458068077162;
    msg.end_z_units = 129U;
    msg.speed = 0.464926272658;
    msg.speed_units = 199U;
    msg.lradius = 0.270523154538;
    msg.flags = 189U;

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
    msg.setTimeStamp(0.592622226005);
    msg.setSource(52074U);
    msg.setSourceEntity(215U);
    msg.setDestination(60237U);
    msg.setDestinationEntity(74U);
    msg.x = 0.725093124187;
    msg.y = 0.400663291653;
    msg.z = 0.0721543696974;
    msg.k = 0.390050408913;
    msg.m = 0.264027993337;
    msg.n = 0.0800007721208;
    msg.flags = 150U;

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
    msg.setTimeStamp(0.119317917271);
    msg.setSource(11199U);
    msg.setSourceEntity(8U);
    msg.setDestination(54513U);
    msg.setDestinationEntity(210U);
    msg.x = 0.661609013657;
    msg.y = 0.772928476522;
    msg.z = 0.628003059276;
    msg.k = 0.581857235318;
    msg.m = 0.4690804502;
    msg.n = 0.0605098487252;
    msg.flags = 200U;

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
    msg.setTimeStamp(0.81969339141);
    msg.setSource(8826U);
    msg.setSourceEntity(132U);
    msg.setDestination(38706U);
    msg.setDestinationEntity(65U);
    msg.x = 0.0700915195863;
    msg.y = 0.0998332444276;
    msg.z = 0.0244553337514;
    msg.k = 0.00458606704874;
    msg.m = 0.917662900498;
    msg.n = 0.585881956806;
    msg.flags = 161U;

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
    msg.setTimeStamp(0.106214074323);
    msg.setSource(65282U);
    msg.setSourceEntity(194U);
    msg.setDestination(13770U);
    msg.setDestinationEntity(215U);
    msg.value = 0.260414308487;

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
    msg.setTimeStamp(0.499461544807);
    msg.setSource(46595U);
    msg.setSourceEntity(106U);
    msg.setDestination(56261U);
    msg.setDestinationEntity(184U);
    msg.value = 0.877876172038;

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
    msg.setTimeStamp(0.830440456667);
    msg.setSource(28661U);
    msg.setSourceEntity(87U);
    msg.setDestination(32642U);
    msg.setDestinationEntity(210U);
    msg.value = 0.964323345708;

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
    msg.setTimeStamp(0.185966872108);
    msg.setSource(60846U);
    msg.setSourceEntity(125U);
    msg.setDestination(561U);
    msg.setDestinationEntity(61U);
    msg.u = 0.0874237333979;
    msg.v = 0.602394454668;
    msg.w = 0.553398713515;
    msg.p = 0.798455960553;
    msg.q = 0.0459107214017;
    msg.r = 0.132830083659;
    msg.flags = 154U;

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
    msg.setTimeStamp(0.276900072891);
    msg.setSource(40674U);
    msg.setSourceEntity(35U);
    msg.setDestination(15151U);
    msg.setDestinationEntity(173U);
    msg.u = 0.542775884794;
    msg.v = 0.719231532196;
    msg.w = 0.462130484207;
    msg.p = 0.634537594364;
    msg.q = 0.964608601294;
    msg.r = 0.555755702389;
    msg.flags = 209U;

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
    msg.setTimeStamp(0.983676348466);
    msg.setSource(50184U);
    msg.setSourceEntity(16U);
    msg.setDestination(4080U);
    msg.setDestinationEntity(42U);
    msg.u = 0.867338721698;
    msg.v = 0.654376755724;
    msg.w = 0.0354531826642;
    msg.p = 0.444918823315;
    msg.q = 0.40132921943;
    msg.r = 0.942953973319;
    msg.flags = 125U;

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
    msg.setTimeStamp(0.40290899769);
    msg.setSource(23434U);
    msg.setSourceEntity(12U);
    msg.setDestination(8649U);
    msg.setDestinationEntity(122U);
    msg.path_ref = 2187618303U;
    msg.start_lat = 0.789019899515;
    msg.start_lon = 0.446111079089;
    msg.start_z = 0.930023666755;
    msg.start_z_units = 43U;
    msg.end_lat = 0.610719017471;
    msg.end_lon = 0.818398457069;
    msg.end_z = 0.637916534865;
    msg.end_z_units = 113U;
    msg.lradius = 0.871117525973;
    msg.flags = 129U;
    msg.x = 0.073548306755;
    msg.y = 0.107463082482;
    msg.z = 0.331504713559;
    msg.vx = 0.685428836066;
    msg.vy = 0.551239685422;
    msg.vz = 0.829712267099;
    msg.course_error = 0.237058869159;
    msg.eta = 10911U;

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
    msg.setTimeStamp(0.0346890868394);
    msg.setSource(47808U);
    msg.setSourceEntity(47U);
    msg.setDestination(46685U);
    msg.setDestinationEntity(1U);
    msg.path_ref = 224034173U;
    msg.start_lat = 0.78667076607;
    msg.start_lon = 0.186472825588;
    msg.start_z = 0.557168998952;
    msg.start_z_units = 180U;
    msg.end_lat = 0.21499596776;
    msg.end_lon = 0.149131741543;
    msg.end_z = 0.689369702807;
    msg.end_z_units = 226U;
    msg.lradius = 0.154462433904;
    msg.flags = 151U;
    msg.x = 0.633172126196;
    msg.y = 0.730537813243;
    msg.z = 0.0720919487913;
    msg.vx = 0.123880056932;
    msg.vy = 0.862552604846;
    msg.vz = 0.921875629352;
    msg.course_error = 0.205542313283;
    msg.eta = 56998U;

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
    msg.setTimeStamp(0.537416088734);
    msg.setSource(3237U);
    msg.setSourceEntity(209U);
    msg.setDestination(60158U);
    msg.setDestinationEntity(64U);
    msg.path_ref = 583560208U;
    msg.start_lat = 0.429060357675;
    msg.start_lon = 0.887247411149;
    msg.start_z = 0.337868180672;
    msg.start_z_units = 123U;
    msg.end_lat = 0.244466255802;
    msg.end_lon = 0.751715290133;
    msg.end_z = 0.93766236133;
    msg.end_z_units = 98U;
    msg.lradius = 0.406550299254;
    msg.flags = 19U;
    msg.x = 0.58733553665;
    msg.y = 0.173853462702;
    msg.z = 0.192553597779;
    msg.vx = 0.542629360093;
    msg.vy = 0.334455460796;
    msg.vz = 0.0796674288533;
    msg.course_error = 0.415510791972;
    msg.eta = 41465U;

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
    msg.setTimeStamp(0.847061104698);
    msg.setSource(10094U);
    msg.setSourceEntity(112U);
    msg.setDestination(25816U);
    msg.setDestinationEntity(197U);
    msg.k = 0.707631202493;
    msg.m = 0.928017683177;
    msg.n = 0.861689985544;

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
    msg.setTimeStamp(0.451142416241);
    msg.setSource(2221U);
    msg.setSourceEntity(220U);
    msg.setDestination(4503U);
    msg.setDestinationEntity(2U);
    msg.k = 0.389831610637;
    msg.m = 0.550158034392;
    msg.n = 0.130969574775;

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
    msg.setTimeStamp(0.965063059695);
    msg.setSource(45573U);
    msg.setSourceEntity(134U);
    msg.setDestination(57105U);
    msg.setDestinationEntity(83U);
    msg.k = 0.503322679053;
    msg.m = 0.885033356258;
    msg.n = 0.31596230547;

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
    msg.setTimeStamp(0.292504186884);
    msg.setSource(7018U);
    msg.setSourceEntity(246U);
    msg.setDestination(32974U);
    msg.setDestinationEntity(55U);
    msg.p = 0.817690352727;
    msg.i = 0.823946367434;
    msg.d = 0.212380490169;
    msg.a = 0.512234250804;

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
    msg.setTimeStamp(0.0378433786732);
    msg.setSource(21560U);
    msg.setSourceEntity(39U);
    msg.setDestination(52372U);
    msg.setDestinationEntity(21U);
    msg.p = 0.802437721217;
    msg.i = 0.717263786822;
    msg.d = 0.714718953519;
    msg.a = 0.930993946014;

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
    msg.setTimeStamp(0.909118907063);
    msg.setSource(2277U);
    msg.setSourceEntity(212U);
    msg.setDestination(36637U);
    msg.setDestinationEntity(24U);
    msg.p = 0.841279375169;
    msg.i = 0.399181521043;
    msg.d = 0.881683228731;
    msg.a = 0.0930806315407;

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
    msg.setTimeStamp(0.598474302054);
    msg.setSource(5370U);
    msg.setSourceEntity(140U);
    msg.setDestination(8515U);
    msg.setDestinationEntity(130U);
    msg.op = 136U;

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
    msg.setTimeStamp(0.396512892077);
    msg.setSource(7783U);
    msg.setSourceEntity(196U);
    msg.setDestination(12900U);
    msg.setDestinationEntity(185U);
    msg.op = 5U;

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
    msg.setTimeStamp(0.902914841585);
    msg.setSource(64506U);
    msg.setSourceEntity(52U);
    msg.setDestination(52355U);
    msg.setDestinationEntity(101U);
    msg.op = 243U;

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
    msg.setTimeStamp(0.174384480121);
    msg.setSource(22475U);
    msg.setSourceEntity(193U);
    msg.setDestination(61631U);
    msg.setDestinationEntity(223U);
    msg.x = 0.791114311495;
    msg.y = 0.428559598696;
    msg.z = 0.412354030028;
    msg.vx = 0.079510900935;
    msg.vy = 0.987001194734;
    msg.vz = 0.584335129759;
    msg.ax = 0.504541945652;
    msg.ay = 0.535788075456;
    msg.az = 0.89042485296;
    msg.flags = 65283U;

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
    msg.setTimeStamp(0.617989236989);
    msg.setSource(23062U);
    msg.setSourceEntity(176U);
    msg.setDestination(61614U);
    msg.setDestinationEntity(112U);
    msg.x = 0.810916223923;
    msg.y = 0.175774317423;
    msg.z = 0.660418353919;
    msg.vx = 0.972709266532;
    msg.vy = 0.151771249787;
    msg.vz = 0.503329390287;
    msg.ax = 0.533982368666;
    msg.ay = 0.0260266093419;
    msg.az = 0.0288452818553;
    msg.flags = 15114U;

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
    msg.setTimeStamp(0.803223493842);
    msg.setSource(23060U);
    msg.setSourceEntity(192U);
    msg.setDestination(18523U);
    msg.setDestinationEntity(216U);
    msg.x = 0.461450039816;
    msg.y = 0.178164903996;
    msg.z = 0.262418526742;
    msg.vx = 0.505882583071;
    msg.vy = 0.0899825905161;
    msg.vz = 0.421067742157;
    msg.ax = 0.755320973758;
    msg.ay = 0.14361754979;
    msg.az = 0.450496839597;
    msg.flags = 8117U;

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
    msg.setTimeStamp(0.714526277933);
    msg.setSource(48005U);
    msg.setSourceEntity(34U);
    msg.setDestination(55714U);
    msg.setDestinationEntity(133U);
    msg.value = 0.182655972996;

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
    msg.setTimeStamp(0.180300214953);
    msg.setSource(15076U);
    msg.setSourceEntity(5U);
    msg.setDestination(34529U);
    msg.setDestinationEntity(137U);
    msg.value = 0.860457939686;

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
    msg.setTimeStamp(0.314015803305);
    msg.setSource(52281U);
    msg.setSourceEntity(166U);
    msg.setDestination(47079U);
    msg.setDestinationEntity(16U);
    msg.value = 0.667880356318;

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
    msg.setTimeStamp(0.802298995029);
    msg.setSource(31068U);
    msg.setSourceEntity(90U);
    msg.setDestination(19068U);
    msg.setDestinationEntity(233U);
    msg.timeout = 39738U;
    msg.lat = 0.899478137727;
    msg.lon = 0.994158220592;
    msg.z = 0.489849712828;
    msg.z_units = 179U;
    msg.speed = 0.581608887186;
    msg.speed_units = 132U;
    msg.roll = 0.906216212909;
    msg.pitch = 0.925020375907;
    msg.yaw = 0.565065944693;
    msg.custom.assign("UHKLIZIPZVYNHFWHMBBZQGLFQXEYKXUVIGOBNTFARWFRMDGJIWHMUIEEELWQYCOVGYEOYDOACZCBMRHVSVXPMDTAZPSNTJQQLCSNFZHTBUVANSVIBOMNSULKWUIJOKLVEGQUXKCSODBYSWFLBASKSPXFRJVYETJFTPORJDXZMBQTRCPECHFLE");

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
    msg.setTimeStamp(0.922242096145);
    msg.setSource(39773U);
    msg.setSourceEntity(249U);
    msg.setDestination(32460U);
    msg.setDestinationEntity(83U);
    msg.timeout = 36859U;
    msg.lat = 0.905225219762;
    msg.lon = 0.22500530187;
    msg.z = 0.173868151451;
    msg.z_units = 176U;
    msg.speed = 0.469263980659;
    msg.speed_units = 39U;
    msg.roll = 0.424880352986;
    msg.pitch = 0.513526475693;
    msg.yaw = 0.556276822052;
    msg.custom.assign("MFLSOQCZAHKBXSYUQJEIAUTFMYETPNQFOBMARPWXQWXORGPUWTNEBHQVMCULCHFILZLEHLPIYYUIHUWATZ");

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
    msg.setTimeStamp(0.371876225966);
    msg.setSource(35421U);
    msg.setSourceEntity(107U);
    msg.setDestination(41856U);
    msg.setDestinationEntity(53U);
    msg.timeout = 65310U;
    msg.lat = 0.162579513098;
    msg.lon = 0.53915924644;
    msg.z = 0.784344667004;
    msg.z_units = 184U;
    msg.speed = 0.282466414693;
    msg.speed_units = 245U;
    msg.roll = 0.979481163357;
    msg.pitch = 0.233089702179;
    msg.yaw = 0.240245294098;
    msg.custom.assign("PVLILZAKKHLERBXXONKWCRVXOYBHLCITNIQWSBUBTRFZ");

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
    msg.setTimeStamp(0.6550136671);
    msg.setSource(3947U);
    msg.setSourceEntity(73U);
    msg.setDestination(16478U);
    msg.setDestinationEntity(176U);
    msg.timeout = 17744U;
    msg.lat = 0.249370931772;
    msg.lon = 0.178751282916;
    msg.z = 0.338661429912;
    msg.z_units = 226U;
    msg.speed = 0.186267923999;
    msg.speed_units = 76U;
    msg.duration = 18773U;
    msg.radius = 0.609111598965;
    msg.flags = 242U;
    msg.custom.assign("XZZMARRZFFASIDRMEWRDXNUASWPXBJFTYZGUTUMCLRCKSEALLEHNYIEPMPWXMYPHECKCLDBJCLHXCGLNCTQGURJYOVSGQQBGUHONSYDRZWVSMBTAWZSKOPWIEQOTJBYQVPLVFLEOXORBPFIJAFACYKQSNWQVSVBVDHKFSHYHHLVOCATPQJODGXIWIMXHIKZG");

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
    msg.setTimeStamp(0.811871773893);
    msg.setSource(16694U);
    msg.setSourceEntity(203U);
    msg.setDestination(65257U);
    msg.setDestinationEntity(8U);
    msg.timeout = 43629U;
    msg.lat = 0.565827324629;
    msg.lon = 0.893175929357;
    msg.z = 0.772540052056;
    msg.z_units = 191U;
    msg.speed = 0.828953095555;
    msg.speed_units = 43U;
    msg.duration = 14179U;
    msg.radius = 0.956766545089;
    msg.flags = 223U;
    msg.custom.assign("HXEXYZKROZCKBCBVDOMMCLTULLPVALPEGTKNHDIDRSAIABZNKUJDXWFMMRLWYZSIXJUBGHSJGTKHJ");

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
    msg.setTimeStamp(0.0146583334472);
    msg.setSource(682U);
    msg.setSourceEntity(45U);
    msg.setDestination(58213U);
    msg.setDestinationEntity(32U);
    msg.timeout = 33750U;
    msg.lat = 0.748677598596;
    msg.lon = 0.649793231314;
    msg.z = 0.289320866579;
    msg.z_units = 202U;
    msg.speed = 0.188276420089;
    msg.speed_units = 221U;
    msg.duration = 5513U;
    msg.radius = 0.927656227223;
    msg.flags = 250U;
    msg.custom.assign("ZDSPTMANNBLBXWJEAMRPFZUOJUBIMXTRRRXZPNVW");

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
    msg.setTimeStamp(0.52389050857);
    msg.setSource(65340U);
    msg.setSourceEntity(118U);
    msg.setDestination(36105U);
    msg.setDestinationEntity(248U);
    msg.custom.assign("IZMOBZMRKKHGJMEBAXXWAWDZVFYEXWTPMCCRNTXAGACPZSIZBIBEILJMGXVZWXUBFFUOHVGHHYGLJVZWHQPWIWKFXWSRUPPSYNFJJNQQSRLGYNEABKUTRXPHPDRJWQNHAXTAERSYLIESACUUPODJLOLZMYVDTCMORSEAIBYTNDIKPFBIOQNMZKTDUQMQGCLCDNEDCOGJFURGOYFYONNVGJIVESKUFRFTLDTQPLAXZVHCOKCSEVTQVH");

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
    msg.setTimeStamp(0.416072713133);
    msg.setSource(18792U);
    msg.setSourceEntity(124U);
    msg.setDestination(12143U);
    msg.setDestinationEntity(42U);
    msg.custom.assign("GJRFVEKMUHYJHABTBQJIIWBZMSATWIBJUVYDGYXPMGOUBCHCIHTPPUXJLLUUJQVPTHJZMAIUMTGYNSTFTGAWXNSKFRWEOBKYYRNDIEVCZLACZBISWICEHHJCWSQRPNJVXWDQPDIFETRNZLNIMYYFROGFXAHKKVZRJZBLOFADRNPHKELDDPET");

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
    msg.setTimeStamp(0.644458665008);
    msg.setSource(48813U);
    msg.setSourceEntity(115U);
    msg.setDestination(30667U);
    msg.setDestinationEntity(37U);
    msg.custom.assign("ASEHGBFSVSEFDMHVITNHIZPZQVYRIFJXVKQOZOMPOJBKKOHQWBDDVOVYWJGZURNIXWWMKAKDLTNVURPMZFURQSJUGPEPSDJTSEZXCCGIECMNENMQHKUUXCLXCHZHGKSAFZFWUDNWAEBTYOQFYHOBPTPIHWVLQZXYRYRDPFASBEQDOGA");

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
    msg.setTimeStamp(0.635999962222);
    msg.setSource(44376U);
    msg.setSourceEntity(140U);
    msg.setDestination(19724U);
    msg.setDestinationEntity(46U);
    msg.timeout = 47201U;
    msg.lat = 0.273050173788;
    msg.lon = 0.728436309968;
    msg.z = 0.0419566715524;
    msg.z_units = 176U;
    msg.duration = 35071U;
    msg.speed = 0.282190878777;
    msg.speed_units = 185U;
    msg.type = 56U;
    msg.radius = 0.339837118582;
    msg.length = 0.559520368256;
    msg.bearing = 0.451992270952;
    msg.direction = 78U;
    msg.custom.assign("QGKMRZXJTWBEWVXEHEAWCIGEHYRNSWYRTDSJXGFZ");

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
    msg.setTimeStamp(0.121236378948);
    msg.setSource(52175U);
    msg.setSourceEntity(192U);
    msg.setDestination(8503U);
    msg.setDestinationEntity(215U);
    msg.timeout = 2202U;
    msg.lat = 0.897797206804;
    msg.lon = 0.892254213771;
    msg.z = 0.352516171736;
    msg.z_units = 63U;
    msg.duration = 30470U;
    msg.speed = 0.704612602202;
    msg.speed_units = 91U;
    msg.type = 156U;
    msg.radius = 0.622813640528;
    msg.length = 0.948893778847;
    msg.bearing = 0.813029831475;
    msg.direction = 164U;
    msg.custom.assign("KQOVKSZTUHYUG");

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
    msg.setTimeStamp(0.402717972713);
    msg.setSource(22546U);
    msg.setSourceEntity(156U);
    msg.setDestination(63683U);
    msg.setDestinationEntity(101U);
    msg.timeout = 51945U;
    msg.lat = 0.655655039309;
    msg.lon = 0.543909661523;
    msg.z = 0.861346841224;
    msg.z_units = 48U;
    msg.duration = 47294U;
    msg.speed = 0.637832174565;
    msg.speed_units = 215U;
    msg.type = 136U;
    msg.radius = 0.799036311393;
    msg.length = 0.745437803652;
    msg.bearing = 0.806031946243;
    msg.direction = 140U;
    msg.custom.assign("JEADKQDHKMJLLEHLIVNWUIREOUSORBPISALVRGZSHURTTERMUSUDUBNAURUSGYFIVCFBZBTZQKVEGHKQGVKWMQRQOXUJIPOYIXIKOOAMRVPAFCDNBDVCPYYGP");

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
    msg.setTimeStamp(0.0426280259228);
    msg.setSource(6309U);
    msg.setSourceEntity(70U);
    msg.setDestination(23648U);
    msg.setDestinationEntity(232U);
    msg.duration = 14673U;
    msg.custom.assign("UYXNKDKGAUSHEFUMXHLWTICLWV");

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
    msg.setTimeStamp(0.94068473527);
    msg.setSource(21980U);
    msg.setSourceEntity(81U);
    msg.setDestination(37923U);
    msg.setDestinationEntity(92U);
    msg.duration = 51060U;
    msg.custom.assign("UQJXERAFMNYZYPWAZXRDNLFEIULKDXDAKW");

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
    msg.setTimeStamp(0.733360288665);
    msg.setSource(15454U);
    msg.setSourceEntity(242U);
    msg.setDestination(7444U);
    msg.setDestinationEntity(253U);
    msg.duration = 21101U;
    msg.custom.assign("IWLYADLDJGTOHWXIFDBTOYTNGPXSTEDXPXRTCUEOIKEICGDOHDALYKKSROQMMHBWKVILHXZWOGSCNQ");

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
    msg.setTimeStamp(0.80939059465);
    msg.setSource(48664U);
    msg.setSourceEntity(62U);
    msg.setDestination(55088U);
    msg.setDestinationEntity(228U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.0295569236;
    msg.control.set(tmp_msg_0);
    msg.duration = 21299U;
    msg.custom.assign("MWRDQAMONKATFSDUJXHLERUTMCDNTSYFTBLEELYPDQOLCJMBQEWIXZMGLKBBFXPCQUMIATCLUMGFBUCHJCGJWPAPONWVTIEEZWSOGXESVYRPGZHYPDSSJRHGJLOKVYIDCCENVUIFTFLHPXNPZNHGWBFMQAYOGAXRK");

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
    msg.setTimeStamp(0.416835103353);
    msg.setSource(26467U);
    msg.setSourceEntity(27U);
    msg.setDestination(37976U);
    msg.setDestinationEntity(19U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.0156681671021;
    msg.control.set(tmp_msg_0);
    msg.duration = 13599U;
    msg.custom.assign("HUBAWEODAYJQEOFQRGRLYQRLVGXJEHKGU");

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
    msg.setTimeStamp(0.747275972611);
    msg.setSource(14830U);
    msg.setSourceEntity(127U);
    msg.setDestination(25384U);
    msg.setDestinationEntity(239U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1660473898U;
    tmp_msg_0.start_lat = 0.164816594871;
    tmp_msg_0.start_lon = 0.512447983299;
    tmp_msg_0.start_z = 0.735032208754;
    tmp_msg_0.start_z_units = 88U;
    tmp_msg_0.end_lat = 0.00336396177841;
    tmp_msg_0.end_lon = 0.874618496724;
    tmp_msg_0.end_z = 0.0628469961669;
    tmp_msg_0.end_z_units = 78U;
    tmp_msg_0.speed = 0.826987550227;
    tmp_msg_0.speed_units = 217U;
    tmp_msg_0.lradius = 0.810564316777;
    tmp_msg_0.flags = 212U;
    msg.control.set(tmp_msg_0);
    msg.duration = 7103U;
    msg.custom.assign("YQJEQBXGLWWBGQSDDWWSIVDUIGUMSCRAVBZUMYJMWLRYIXZIGMIAKNBASPYUARJILKFOYMKMJVZZJUKFWACXXCRVGPLCPCHTPXKEJTSBNRRDTXJBVEOIVFNQIBDMDTCYUEDYMSNUGZTCHGLHQQYYXEOOAYWHUSMTKFTLAWPXBQNTEZNGVFLNDCZCFJHHNFXMWRDKOS");

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
    msg.setTimeStamp(0.473709524879);
    msg.setSource(58219U);
    msg.setSourceEntity(207U);
    msg.setDestination(59751U);
    msg.setDestinationEntity(220U);
    msg.timeout = 24592U;
    msg.lat = 0.721920299251;
    msg.lon = 0.886402227978;
    msg.z = 0.127976225501;
    msg.z_units = 232U;
    msg.speed = 0.187504075801;
    msg.speed_units = 86U;
    msg.bearing = 0.0829332951651;
    msg.cross_angle = 0.571182165827;
    msg.width = 0.9834532861;
    msg.length = 0.410365816077;
    msg.hstep = 0.34059164085;
    msg.coff = 34U;
    msg.alternation = 252U;
    msg.flags = 248U;
    msg.custom.assign("LAKIORMOZJGLBXQXOVUKCCDKXJUVJGTGFZNSJUPILTCTWRLYVAGEZLGHUNSKAXRONDGBQISMYMIAULDZQJSWIPPZQKHTOUCROBOEPWMFYHLVBKCFQVRDMQUFABPJIREFFCTNXPJGVJEBBACTRDDBFLKNEYTMXPTLDZMWWASKXTSESQGTVYOCAHSNCAJHHIOPPWHFASYXHULMVECGYXDZNEUHXRUNKQSNYVINYMHF");

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
    msg.setTimeStamp(0.598033757961);
    msg.setSource(12713U);
    msg.setSourceEntity(227U);
    msg.setDestination(7614U);
    msg.setDestinationEntity(50U);
    msg.timeout = 17559U;
    msg.lat = 0.849986331572;
    msg.lon = 0.339682588928;
    msg.z = 0.298459198699;
    msg.z_units = 200U;
    msg.speed = 0.00639954817132;
    msg.speed_units = 176U;
    msg.bearing = 0.693606185351;
    msg.cross_angle = 0.955580068894;
    msg.width = 0.506317830603;
    msg.length = 0.551850999926;
    msg.hstep = 0.574480333935;
    msg.coff = 157U;
    msg.alternation = 242U;
    msg.flags = 38U;
    msg.custom.assign("ELQFBVQNTYGGIOONQXDJDTHKUKOPHXYVADHLAUEPRBXTISWOERKQWVFQNKUXWCEDDMOISL");

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
    msg.setTimeStamp(0.894810275063);
    msg.setSource(4720U);
    msg.setSourceEntity(241U);
    msg.setDestination(22614U);
    msg.setDestinationEntity(120U);
    msg.timeout = 63530U;
    msg.lat = 0.801584952708;
    msg.lon = 0.562299430925;
    msg.z = 0.520100393981;
    msg.z_units = 14U;
    msg.speed = 0.0304538553655;
    msg.speed_units = 118U;
    msg.bearing = 0.949519676802;
    msg.cross_angle = 0.276234952613;
    msg.width = 0.09148515506;
    msg.length = 0.852681868626;
    msg.hstep = 0.656034717985;
    msg.coff = 209U;
    msg.alternation = 206U;
    msg.flags = 124U;
    msg.custom.assign("YICDZBJJLTVVDHKZPXFLRTEUYAWLRZGETCMGHKDAJNDQKSSYSXIZRUYILZJUUVYEZIQUNOLPQGDRBNQOYXDNPUESLCPMIOPBXZEWXAXNFTKORUOTG");

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
    msg.setTimeStamp(0.107124868525);
    msg.setSource(28818U);
    msg.setSourceEntity(20U);
    msg.setDestination(38472U);
    msg.setDestinationEntity(114U);
    msg.timeout = 9634U;
    msg.lat = 0.578408272931;
    msg.lon = 0.539656600777;
    msg.z = 0.636239083009;
    msg.z_units = 102U;
    msg.speed = 0.869850646598;
    msg.speed_units = 197U;
    msg.custom.assign("XYSZYGIRCLEMJKIWHNZURUIMFBQMQXFUVBTODY");

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
    msg.setTimeStamp(0.282679494595);
    msg.setSource(30924U);
    msg.setSourceEntity(55U);
    msg.setDestination(31826U);
    msg.setDestinationEntity(8U);
    msg.timeout = 60553U;
    msg.lat = 0.0543312322691;
    msg.lon = 0.79749839407;
    msg.z = 0.727908848758;
    msg.z_units = 139U;
    msg.speed = 0.975897787099;
    msg.speed_units = 203U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.544968053763;
    tmp_msg_0.y = 0.36968039865;
    tmp_msg_0.z = 0.674655275318;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WFCMDVIGDNCGYKHZWHTPZTWLQVVJZRMPIIGAJOZAMLUGNVCRHVDQRMWESYQRDOUPAOCQOCXHWXYTLNRQWERVODMROPCQVK");

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
    msg.setTimeStamp(0.143637353244);
    msg.setSource(36063U);
    msg.setSourceEntity(162U);
    msg.setDestination(3414U);
    msg.setDestinationEntity(126U);
    msg.timeout = 22066U;
    msg.lat = 0.464178571624;
    msg.lon = 0.430427949643;
    msg.z = 0.0709801644588;
    msg.z_units = 162U;
    msg.speed = 0.254051252096;
    msg.speed_units = 154U;
    msg.custom.assign("XFYJUZEFNBXVIGROURNKSVARERMMHAKAXHRFGTLDPPFJIYUBVZJEPMHBYXLXDSWLAHZHDIDNNBVLJKPOINXOMCBNSYSBUOOINQTXKQPIPMYQSOSHGOQHSTZEOQDWDRGLEKDUNRYZEVAAWCASFHABTUQTJPXYWRPPZTCNBIFTAJJKQGKGVGTJXQGVFEILYLZCLMGYKHPCFKSJCZURZMWTWMWIHMOCYS");

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
    msg.setTimeStamp(0.293239016862);
    msg.setSource(17007U);
    msg.setSourceEntity(27U);
    msg.setDestination(50064U);
    msg.setDestinationEntity(148U);
    msg.x = 0.223921983903;
    msg.y = 0.0342198655491;
    msg.z = 0.0992419309945;

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
    msg.setTimeStamp(0.913450193189);
    msg.setSource(44016U);
    msg.setSourceEntity(153U);
    msg.setDestination(14398U);
    msg.setDestinationEntity(134U);
    msg.x = 0.222617447042;
    msg.y = 0.804016625936;
    msg.z = 0.731896116012;

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
    msg.setTimeStamp(0.0631300603128);
    msg.setSource(29378U);
    msg.setSourceEntity(144U);
    msg.setDestination(2481U);
    msg.setDestinationEntity(246U);
    msg.x = 0.435041030197;
    msg.y = 0.318936079365;
    msg.z = 0.62275273716;

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
    msg.setTimeStamp(0.441208316273);
    msg.setSource(25876U);
    msg.setSourceEntity(33U);
    msg.setDestination(2828U);
    msg.setDestinationEntity(148U);
    msg.timeout = 40123U;
    msg.lat = 0.675586014047;
    msg.lon = 0.0894536586569;
    msg.z = 0.315183039901;
    msg.z_units = 13U;
    msg.amplitude = 0.641161310085;
    msg.pitch = 0.937351739476;
    msg.speed = 0.720228136626;
    msg.speed_units = 162U;
    msg.custom.assign("CMOFPCRXXPBCJRZPAOLFECNKYHFUFBGYNYHVBSNWJUZTYRWEBQHZXZYBJERPALIXHUWHCSGEADIXCVSKJAYPZNWBUBSCHFVVGIEOPIFTNFCVVUGLZSNMBPTJXSLMGZEFPNWQQDUDJWUHAMDLAXKMSMLRLEIDMSFKBVDTARAKOICGRGZNZONVEXKRUDCISWJXFOKOQMDRZXDAKNOL");

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
    msg.setTimeStamp(0.0823411360425);
    msg.setSource(52350U);
    msg.setSourceEntity(56U);
    msg.setDestination(63659U);
    msg.setDestinationEntity(216U);
    msg.timeout = 23359U;
    msg.lat = 0.550798973901;
    msg.lon = 0.0479062674365;
    msg.z = 0.890039043514;
    msg.z_units = 213U;
    msg.amplitude = 0.230571052592;
    msg.pitch = 0.15268278581;
    msg.speed = 0.929211512774;
    msg.speed_units = 48U;
    msg.custom.assign("EBFLEUDQDVZYOBUVFGYPGPPAQDYTLHEWDKBIZFBYSXRZHHXRUJCRWNBDIDOYMHTSUNRTVZRGVTNSIPMTWFSSABSPSJKUIXQYEKIZADXJWHMAWKHWNKZZGZUTMSKEEDYALQTODGEUBXQJGXOOGFLVX");

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
    msg.setTimeStamp(0.752123934228);
    msg.setSource(21534U);
    msg.setSourceEntity(68U);
    msg.setDestination(59839U);
    msg.setDestinationEntity(211U);
    msg.timeout = 468U;
    msg.lat = 0.0408953819689;
    msg.lon = 0.724210163413;
    msg.z = 0.226766834063;
    msg.z_units = 246U;
    msg.amplitude = 0.129825773335;
    msg.pitch = 0.0125881045729;
    msg.speed = 0.58113654751;
    msg.speed_units = 84U;
    msg.custom.assign("GWEGPTIXGGRUSRUUHAUHABILCNQEFSBEQGMZLJQRKXBAKNOYJJHLJYMXJTCEHOFRUJSMCHCIBJIZYEFGCXADPYNZNAXGRBJYDVMSTWLDWMZYEKGQ");

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
    msg.setTimeStamp(0.110768353119);
    msg.setSource(40473U);
    msg.setSourceEntity(42U);
    msg.setDestination(60585U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.778753351193);
    msg.setSource(54981U);
    msg.setSourceEntity(168U);
    msg.setDestination(44690U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.345396231425);
    msg.setSource(50845U);
    msg.setSourceEntity(62U);
    msg.setDestination(24511U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.941270407634);
    msg.setSource(35974U);
    msg.setSourceEntity(55U);
    msg.setDestination(33621U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.750188977298;
    msg.lon = 0.532892825026;
    msg.z = 0.451657550852;
    msg.z_units = 124U;
    msg.radius = 0.0837281288397;
    msg.duration = 40023U;
    msg.speed = 0.436763188221;
    msg.speed_units = 208U;
    msg.custom.assign("UESXQATGKFNJSMQUWTHRRDDBYOAMYWHYQEDFRK");

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
    msg.setTimeStamp(0.651222988595);
    msg.setSource(20939U);
    msg.setSourceEntity(252U);
    msg.setDestination(44946U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.750329371858;
    msg.lon = 0.449420841851;
    msg.z = 0.461947444622;
    msg.z_units = 123U;
    msg.radius = 0.733616473974;
    msg.duration = 44125U;
    msg.speed = 0.93561638246;
    msg.speed_units = 252U;
    msg.custom.assign("OILFBXQXRMASTNTZVCJNZKOVTSJXKPNFSEAJWJFTBAHKHRJQVTNWKBNPGXDOUB");

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
    msg.setTimeStamp(0.469376672583);
    msg.setSource(60479U);
    msg.setSourceEntity(116U);
    msg.setDestination(34222U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.810314957415;
    msg.lon = 0.868366325339;
    msg.z = 0.104995885614;
    msg.z_units = 194U;
    msg.radius = 0.799082154766;
    msg.duration = 52297U;
    msg.speed = 0.113939803679;
    msg.speed_units = 21U;
    msg.custom.assign("ZHRJGGPMMKJMCDAJDXHJYOQRFQNMQRLWFBIJPHSRWLZYCSXTXNKMPVJVQWQIKYGMBMHURKNXXFTAEYESZZBTSIPFTVGEAIEKKSHYSIUYAIYZONKRLTBFJPDUAVTOUFAG");

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
    msg.setTimeStamp(0.333324880017);
    msg.setSource(398U);
    msg.setSourceEntity(227U);
    msg.setDestination(25059U);
    msg.setDestinationEntity(150U);
    msg.timeout = 31568U;
    msg.flags = 4U;
    msg.lat = 0.0150823784869;
    msg.lon = 0.833766782742;
    msg.start_z = 0.0988310575682;
    msg.start_z_units = 217U;
    msg.end_z = 0.0982672645902;
    msg.end_z_units = 106U;
    msg.radius = 0.700096113961;
    msg.speed = 0.103982477922;
    msg.speed_units = 133U;
    msg.custom.assign("OETPZFEIAVOCQOCDXLJGPBZTHCDHBPFUBKPXTTPOXVMSTOILSEVSAUNOMBRACSWJPMLCIJIBNERNJOLFYMBAKRUNQJKUICZEHVIALWHWFPXGYKZWQJFINEGKXDAPSNNGQMXDARFDXWRKQCQJDYIEJCGYCBYZUMMESMQMULPX");

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
    msg.setTimeStamp(0.351473395626);
    msg.setSource(46364U);
    msg.setSourceEntity(56U);
    msg.setDestination(22987U);
    msg.setDestinationEntity(39U);
    msg.timeout = 73U;
    msg.flags = 42U;
    msg.lat = 0.552260351674;
    msg.lon = 0.348522279706;
    msg.start_z = 0.654709560093;
    msg.start_z_units = 7U;
    msg.end_z = 0.846698932033;
    msg.end_z_units = 47U;
    msg.radius = 0.32043909281;
    msg.speed = 0.00582112099198;
    msg.speed_units = 110U;
    msg.custom.assign("WPGEQCRJUAFNAHPRHPKYMWKSTGIBNWDQYGLZNWLBTSZIXJATAAXLITVRTTXIBHMORENGQJZTNFZRCGWR");

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
    msg.setTimeStamp(0.947885162174);
    msg.setSource(4904U);
    msg.setSourceEntity(232U);
    msg.setDestination(7742U);
    msg.setDestinationEntity(127U);
    msg.timeout = 12107U;
    msg.flags = 224U;
    msg.lat = 0.728560173287;
    msg.lon = 0.140138608253;
    msg.start_z = 0.369854748236;
    msg.start_z_units = 34U;
    msg.end_z = 0.984821695489;
    msg.end_z_units = 192U;
    msg.radius = 0.455496338886;
    msg.speed = 0.697892805971;
    msg.speed_units = 87U;
    msg.custom.assign("OVCVCWTUBFFOKVDWRHQDNXGYEXSSANQEQJBUORHEBAQFILUZONOZGYXPGMEMIIWYFDYPQVXKTGAJBETZZHSDKZQJBTDALRCNUNHMBCVWVXTWYYDGKUILHHSTLNAUCPWJJEHCLIJCMKAKRIRLVRLFCGKISETIFFXYQDPAMPMGBFGWWMPJ");

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
    msg.setTimeStamp(0.339900529023);
    msg.setSource(28618U);
    msg.setSourceEntity(238U);
    msg.setDestination(43441U);
    msg.setDestinationEntity(108U);
    msg.timeout = 28946U;
    msg.lat = 0.434637858623;
    msg.lon = 0.0618695439317;
    msg.z = 0.654591310098;
    msg.z_units = 26U;
    msg.speed = 0.566251800848;
    msg.speed_units = 88U;
    msg.custom.assign("DEGMNPMAGWOPDZNZRZXTASAICYRJGEMUHYLNTIIDKLCKJGNWAVXMCIOIIQSSFJYKBNHDRBDYHXSOFJYMMWACNBVPBCIY");

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
    msg.setTimeStamp(0.292638096506);
    msg.setSource(1301U);
    msg.setSourceEntity(79U);
    msg.setDestination(60565U);
    msg.setDestinationEntity(56U);
    msg.timeout = 23296U;
    msg.lat = 0.255558977862;
    msg.lon = 0.230321985512;
    msg.z = 0.776421438852;
    msg.z_units = 15U;
    msg.speed = 0.146072464828;
    msg.speed_units = 51U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.958877055381;
    tmp_msg_0.y = 0.598094668654;
    tmp_msg_0.z = 0.248967639405;
    tmp_msg_0.t = 0.111399882557;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OMTBTMLPIXXQYESWSQALCOUEJXCOMNXOBKGRSGHUZBFYUQAVHWLIGPWHYCDZMYVWZRLYTBOHAKAGNIRWENQIKWF");

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
    msg.setTimeStamp(0.579425195831);
    msg.setSource(27103U);
    msg.setSourceEntity(119U);
    msg.setDestination(40863U);
    msg.setDestinationEntity(125U);
    msg.timeout = 15310U;
    msg.lat = 0.141361472942;
    msg.lon = 0.857516663298;
    msg.z = 0.877812528121;
    msg.z_units = 123U;
    msg.speed = 0.641366465094;
    msg.speed_units = 23U;
    msg.custom.assign("GWSYDWPIDPTH");

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
    msg.setTimeStamp(0.0287413493544);
    msg.setSource(42577U);
    msg.setSourceEntity(141U);
    msg.setDestination(9565U);
    msg.setDestinationEntity(227U);
    msg.x = 0.741612080054;
    msg.y = 0.649943883839;
    msg.z = 0.843311491455;
    msg.t = 0.315648543831;

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
    msg.setTimeStamp(0.67583569833);
    msg.setSource(41493U);
    msg.setSourceEntity(230U);
    msg.setDestination(19113U);
    msg.setDestinationEntity(177U);
    msg.x = 0.37693216774;
    msg.y = 0.576076573392;
    msg.z = 0.41528571942;
    msg.t = 0.728228773832;

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
    msg.setTimeStamp(0.335777843428);
    msg.setSource(37397U);
    msg.setSourceEntity(235U);
    msg.setDestination(57119U);
    msg.setDestinationEntity(143U);
    msg.x = 0.656865930882;
    msg.y = 0.343439894758;
    msg.z = 0.662286038287;
    msg.t = 0.410681896847;

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
    msg.setTimeStamp(0.829896650029);
    msg.setSource(54331U);
    msg.setSourceEntity(200U);
    msg.setDestination(50312U);
    msg.setDestinationEntity(158U);
    msg.timeout = 4261U;
    msg.name.assign("DRFJOOQSTPADAABQSWCWACULMWXLICZKXDUMQIENRGKDLTZTYKOGCGEXNTZCAKLOTWHEBZZFGFBJMEKVOSSVFNXNTTVUOPGJUCNJPNHJZLWDFNKFKYROHAMLCVHFOJVWYPZD");
    msg.custom.assign("FVQKNUUZLYYGUVMHICJXKPRUIERPHASWKGWUGLKNEVTXZYZDXMQEHEWKWHDMBCBIIIVSKPNHJYQABTLGCRMBBQBZPEMZLATXAT");

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
    msg.setTimeStamp(0.579344139801);
    msg.setSource(48700U);
    msg.setSourceEntity(119U);
    msg.setDestination(64913U);
    msg.setDestinationEntity(8U);
    msg.timeout = 39421U;
    msg.name.assign("PVTDTCGHDZXVHRJLPJTCQGQVWIKMZZGBDYDQOKZFSHARTBPUNRJWZYEFEEMCQXZWDLJOOYRGHSMMHCDHQXBRKQPTYHBNFPIGAJSIFLWEEGWXWNRNCYAIUXIYAADYKUZXUJPUDURCEEPBLUUUHFHSBPWYICRDSVZXVYTKLJMZRDGNBOLJEFQQVTCVLMJICKBAMGNITFVPULWS");
    msg.custom.assign("SQTSLXGXXDQGLSPBMBQIEPRYLBPOHYDVQMWHUFTGLHZDMVWJMSNPEOTZUCVXKEIBLKICPYHROFEZOJKIDAOTBISLTNDZFWBHOUDWBTJIZCPVWKGNGNBNOVQVRCPCGRYMNQVKJGWOMLFNHTEZKOAVJTRECZSXLIMSEEGREAIUH");

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
    msg.setTimeStamp(0.154160883475);
    msg.setSource(14056U);
    msg.setSourceEntity(123U);
    msg.setDestination(25293U);
    msg.setDestinationEntity(168U);
    msg.timeout = 40003U;
    msg.name.assign("EWODYXKNCMADRFOSVHGVETJPVWQUKQTMYFGQITABGEQHKRZVPWMDDIICAOJGCFALMTTVXTEKBOYELYEXYIRMSHMWZPACLWKPXQRIV");
    msg.custom.assign("EYBZSCFCIZNLYSZNRZWWCVRJEXTIWZRUQXESLPSNVLOLGAAFUBWFZYQRYQRXWOAYBNHXHHPVXKMMAFDVDJGOKSDACFYAQPTCVMULBYDTOSLDVELRIOAXBUHMUJITGAJUEKZEONHKJPKZIBCDWEFDTLDARBTQMXOFFJXPRQYIYMRYUHKRCTJGOHNCEZKKBXLWZVXTLCFPVHAGTUTIBGEPGOND");

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
    msg.setTimeStamp(0.239218839802);
    msg.setSource(29522U);
    msg.setSourceEntity(71U);
    msg.setDestination(8194U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.66995037108;
    msg.lon = 0.53314763153;
    msg.z = 0.120757186339;
    msg.z_units = 175U;
    msg.speed = 0.465904249884;
    msg.speed_units = 128U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.899268993299;
    tmp_msg_0.y = 0.759450003255;
    tmp_msg_0.z = 0.847902911276;
    tmp_msg_0.t = 0.92630494763;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.496101454688;
    msg.custom.assign("GVHEBPIVPHCYVTTHJEXVNEYBKCHIQOZVWNIYZSPZRQZCAGXLYHTKS");

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
    msg.setTimeStamp(0.239300932005);
    msg.setSource(46277U);
    msg.setSourceEntity(96U);
    msg.setDestination(37360U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.0311144264516;
    msg.lon = 0.234410210153;
    msg.z = 0.949793669498;
    msg.z_units = 92U;
    msg.speed = 0.00146772387433;
    msg.speed_units = 74U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59854U;
    tmp_msg_0.off_x = 0.480820414637;
    tmp_msg_0.off_y = 0.813963840713;
    tmp_msg_0.off_z = 0.0659330888456;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.505995492873;
    msg.custom.assign("ILRIKIVRNFPKCFSZ");

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
    msg.setTimeStamp(0.479322486105);
    msg.setSource(62237U);
    msg.setSourceEntity(142U);
    msg.setDestination(22308U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.947881876205;
    msg.lon = 0.954361342226;
    msg.z = 0.274553192448;
    msg.z_units = 66U;
    msg.speed = 0.862370562026;
    msg.speed_units = 215U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.398858041974;
    tmp_msg_0.y = 0.14258193683;
    tmp_msg_0.z = 0.977202354803;
    tmp_msg_0.t = 0.558003170408;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.0651667011345;
    msg.custom.assign("MMATJBIWZFMXEEHVAXAHJMHOBUWEAIWLTVQLLCFDPTXEQWRRXFBJEKOFUIYIMUGHAISWSTKPXURQFPXNIGCFFKAWXENQGGNDKYDDJCSQOVVKWSUCDTIHYSCYPBIIJGMPIBTPRLLNKZBGBQNOVAEGZQSNTOJMXZZGYAZSJDWRPMLAXVCOCKJNCZTGWUPSFTYHOZNSRFUYHDVMZTYDJUOWVABQBBHDHSNPLUREUHCKYCVOKGKEJ");

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
    msg.setTimeStamp(0.632604149802);
    msg.setSource(29797U);
    msg.setSourceEntity(98U);
    msg.setDestination(40591U);
    msg.setDestinationEntity(187U);
    msg.vid = 52743U;
    msg.off_x = 0.940751580661;
    msg.off_y = 0.671727239412;
    msg.off_z = 0.10314925728;

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
    msg.setTimeStamp(0.188429176384);
    msg.setSource(41935U);
    msg.setSourceEntity(251U);
    msg.setDestination(28262U);
    msg.setDestinationEntity(4U);
    msg.vid = 29221U;
    msg.off_x = 0.873722501746;
    msg.off_y = 0.64243961197;
    msg.off_z = 0.869449940364;

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
    msg.setTimeStamp(0.0223778072572);
    msg.setSource(55114U);
    msg.setSourceEntity(122U);
    msg.setDestination(17564U);
    msg.setDestinationEntity(8U);
    msg.vid = 58470U;
    msg.off_x = 0.739614745551;
    msg.off_y = 0.216053735494;
    msg.off_z = 0.993328331349;

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
    msg.setTimeStamp(0.618752644219);
    msg.setSource(28918U);
    msg.setSourceEntity(48U);
    msg.setDestination(38773U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.962188290299);
    msg.setSource(18544U);
    msg.setSourceEntity(168U);
    msg.setDestination(32128U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.409936485941);
    msg.setSource(8049U);
    msg.setSourceEntity(106U);
    msg.setDestination(39459U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.0152415212592);
    msg.setSource(63398U);
    msg.setSourceEntity(45U);
    msg.setDestination(30218U);
    msg.setDestinationEntity(78U);
    msg.mid = 7349U;

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
    msg.setTimeStamp(0.820786070668);
    msg.setSource(63715U);
    msg.setSourceEntity(98U);
    msg.setDestination(55413U);
    msg.setDestinationEntity(201U);
    msg.mid = 18712U;

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
    msg.setTimeStamp(0.930406505499);
    msg.setSource(19962U);
    msg.setSourceEntity(26U);
    msg.setDestination(20144U);
    msg.setDestinationEntity(132U);
    msg.mid = 38747U;

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
    msg.setTimeStamp(0.284281147051);
    msg.setSource(62328U);
    msg.setSourceEntity(115U);
    msg.setDestination(39727U);
    msg.setDestinationEntity(125U);
    msg.state = 240U;
    msg.eta = 27183U;
    msg.info.assign("WIARUDQIXYRKMSQJWFEYVAWLCIUFVWASISHNPTUXPJYJLEMBQVBJASYIWCYBZJDHMIXZMEHOT");

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
    msg.setTimeStamp(0.60368904145);
    msg.setSource(60958U);
    msg.setSourceEntity(9U);
    msg.setDestination(42889U);
    msg.setDestinationEntity(123U);
    msg.state = 22U;
    msg.eta = 6025U;
    msg.info.assign("KLAYQKDKAJJFGQDRRRLWTHHGWUCSIFZGCTBEVPAPYSVXSTYYRASCXJWUMHMAERZOVBSMQXRRZIPHMONAXOEVRWFEJFXNGFHCBKQPENCAKAGY");

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
    msg.setTimeStamp(0.696341299782);
    msg.setSource(9503U);
    msg.setSourceEntity(150U);
    msg.setDestination(43673U);
    msg.setDestinationEntity(233U);
    msg.state = 185U;
    msg.eta = 57518U;
    msg.info.assign("YCCCNTXRGKAULNVDABVGAZTQPLJEDJINUBQZUWEIWSGJHWLFUNRFOCLXIZXYESIRSLNZGMSIDOORUCEMFOAMHDIFBGHGMXUZYEBFPUCWAKKYWBXOHPSVXQHQFMVWGPMLSYLEMAFVDRYNCJKJNTOJXJOQJBUDRQBZQVVDOKWISNGLMWPXPHPEBUCKICQOCFUKITXNYSWNTKHYPZATDTVPVQBHPADEGASDY");

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
    msg.setTimeStamp(0.482372788483);
    msg.setSource(37041U);
    msg.setSourceEntity(38U);
    msg.setDestination(6389U);
    msg.setDestinationEntity(233U);
    msg.system = 56752U;
    msg.duration = 31426U;
    msg.speed = 0.0321821650296;
    msg.speed_units = 104U;
    msg.x = 0.411300127893;
    msg.y = 0.730394903016;
    msg.z = 0.420226187708;
    msg.z_units = 2U;

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
    msg.setTimeStamp(0.54817281239);
    msg.setSource(46901U);
    msg.setSourceEntity(108U);
    msg.setDestination(30733U);
    msg.setDestinationEntity(191U);
    msg.system = 46057U;
    msg.duration = 37483U;
    msg.speed = 0.627972192349;
    msg.speed_units = 247U;
    msg.x = 0.909251128989;
    msg.y = 0.0816650189777;
    msg.z = 0.539585882922;
    msg.z_units = 47U;

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
    msg.setTimeStamp(0.9610915179);
    msg.setSource(12985U);
    msg.setSourceEntity(41U);
    msg.setDestination(36263U);
    msg.setDestinationEntity(14U);
    msg.system = 42381U;
    msg.duration = 35582U;
    msg.speed = 0.609582409646;
    msg.speed_units = 33U;
    msg.x = 0.288835069047;
    msg.y = 0.695672350466;
    msg.z = 0.428237871734;
    msg.z_units = 62U;

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
    msg.setTimeStamp(0.575632626676);
    msg.setSource(64511U);
    msg.setSourceEntity(234U);
    msg.setDestination(29443U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.681331406501;
    msg.lon = 0.65213493925;
    msg.speed = 0.726648296384;
    msg.speed_units = 11U;
    msg.duration = 43937U;
    msg.sys_a = 28877U;
    msg.sys_b = 1272U;
    msg.move_threshold = 0.338374136746;

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
    msg.setTimeStamp(0.586807643233);
    msg.setSource(17553U);
    msg.setSourceEntity(175U);
    msg.setDestination(12695U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.351162706347;
    msg.lon = 0.740935653982;
    msg.speed = 0.913235260275;
    msg.speed_units = 40U;
    msg.duration = 6387U;
    msg.sys_a = 57227U;
    msg.sys_b = 53119U;
    msg.move_threshold = 0.175334299127;

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
    msg.setTimeStamp(0.938388302324);
    msg.setSource(30056U);
    msg.setSourceEntity(56U);
    msg.setDestination(22152U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.112859754679;
    msg.lon = 0.871613419545;
    msg.speed = 0.703713014674;
    msg.speed_units = 62U;
    msg.duration = 55485U;
    msg.sys_a = 5025U;
    msg.sys_b = 17924U;
    msg.move_threshold = 0.401485056603;

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
    msg.setTimeStamp(0.190082006805);
    msg.setSource(18960U);
    msg.setSourceEntity(187U);
    msg.setDestination(25467U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.424246954567;
    msg.lon = 0.0748660415608;
    msg.z = 0.519913947009;
    msg.z_units = 155U;
    msg.speed = 0.719581315709;
    msg.speed_units = 238U;
    msg.custom.assign("HNVULTXEFMGKTAJYHAWIPLDPTORGSZURNQLRHJTOPNLXQOOCRITMWBKXKOAUZVQXVHBAVGWVHYYVMRLQBIBVAVABLSHMZXGYIFWGSEPQZDOZTWVTLOKZDPNFNFEPQDZEQCRRSHOBLPQFCXYRUOEMDCA");

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
    msg.setTimeStamp(0.32468953052);
    msg.setSource(23978U);
    msg.setSourceEntity(224U);
    msg.setDestination(57276U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.0389220310876;
    msg.lon = 0.556202403029;
    msg.z = 0.661479588382;
    msg.z_units = 217U;
    msg.speed = 0.701626803702;
    msg.speed_units = 14U;
    msg.custom.assign("XJQCXCAMITCHLNFMFNHHTNQCEKGEBTWIXCIGANDJGBJKMOASNPZFOFBKVXIPHFGWRQXSOTKYAVCRDDRVSZEONWMQYOJTQOYBEKTKVYVSKTZDLAHZPBIEURUETOKVEYBXOTEQZYPDHHPXGWABPJMPEMZQDUIZLLVKLBIUNAVILSXCRRDZWYWJBVGHPMTRYLWSADGRJRULXHPVWUXRSFAWJQHJZUCSEUJGCSCYFNLYIDMNNLIUGKAOMQZMF");

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
    msg.setTimeStamp(0.292746051221);
    msg.setSource(48750U);
    msg.setSourceEntity(31U);
    msg.setDestination(28620U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.170948578653;
    msg.lon = 0.952851054723;
    msg.z = 0.719658433817;
    msg.z_units = 207U;
    msg.speed = 0.627291243626;
    msg.speed_units = 57U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.185858510931;
    tmp_msg_0.lon = 0.898261692952;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TQCBHZLVEPIYOFQNCBMWOXSJAPCDZVAZXCRMIYOWXSHOEIWUXYHXAREVTJWKMAULBCQGSLGNMGHEPFOPSTSOGURAGHXIKSZNQBASVUJQ");

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
    msg.setTimeStamp(0.348650483737);
    msg.setSource(63063U);
    msg.setSourceEntity(12U);
    msg.setDestination(61522U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.143976279385;
    msg.lon = 0.086072423507;

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
    msg.setTimeStamp(0.568063275792);
    msg.setSource(28239U);
    msg.setSourceEntity(51U);
    msg.setDestination(21274U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.0247578858364;
    msg.lon = 0.533357065524;

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
    msg.setTimeStamp(0.588799667244);
    msg.setSource(846U);
    msg.setSourceEntity(81U);
    msg.setDestination(57942U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.198382404395;
    msg.lon = 0.994843708801;

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
    msg.setTimeStamp(0.614676121921);
    msg.setSource(10676U);
    msg.setSourceEntity(249U);
    msg.setDestination(8797U);
    msg.setDestinationEntity(190U);
    msg.timeout = 61461U;
    msg.lat = 0.109198499128;
    msg.lon = 0.56425665185;
    msg.z = 0.400437057005;
    msg.z_units = 48U;
    msg.pitch = 0.841113596386;
    msg.amplitude = 0.389834549533;
    msg.duration = 20552U;
    msg.speed = 0.111946445892;
    msg.speed_units = 210U;
    msg.radius = 0.965427634896;
    msg.direction = 19U;
    msg.custom.assign("VPDGQYZTQJXUHPAOLXVBZKHMYNTDQMXVXICWQGBEGQRTILTWBSOJRXYQGJQEJCHBSFAEZMALNCIZDCMGGELKUYUWOEANRKDZVVPKFUFSRMKPGBJFAJHDNMPYUIWAGFBSVQUNHBUBRTSATRHGYCGYDSLOSJIDHHODKIAHOUVDEFPAEVZIIYMXLVTEKNTMYZQFTCFPXQWWBTXWKOEJPMOOIYW");

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
    msg.setTimeStamp(0.175531648132);
    msg.setSource(8604U);
    msg.setSourceEntity(80U);
    msg.setDestination(57309U);
    msg.setDestinationEntity(180U);
    msg.timeout = 45746U;
    msg.lat = 0.329433086932;
    msg.lon = 0.723839091646;
    msg.z = 0.148586006364;
    msg.z_units = 194U;
    msg.pitch = 0.823395336111;
    msg.amplitude = 0.778026834234;
    msg.duration = 54712U;
    msg.speed = 0.24879963942;
    msg.speed_units = 122U;
    msg.radius = 0.825666503842;
    msg.direction = 105U;
    msg.custom.assign("EOTMVDDYTGHHUVMQAAIBFZPQGPDNOKWVOYJXLKMALSPENRSKMSPGCHBMPJYFPBQKFVGVYXXRAFVNLSEMZAKHQGEKOZBQEOMEWUWEIRNACJLFCGGHNKLRZRFUHBTYFNIMWBGTZXW");

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
    msg.setTimeStamp(0.009137792088);
    msg.setSource(21593U);
    msg.setSourceEntity(243U);
    msg.setDestination(36859U);
    msg.setDestinationEntity(208U);
    msg.timeout = 45101U;
    msg.lat = 0.097208988723;
    msg.lon = 0.588023684425;
    msg.z = 0.313300781839;
    msg.z_units = 98U;
    msg.pitch = 0.346271156861;
    msg.amplitude = 0.00700663868653;
    msg.duration = 7702U;
    msg.speed = 0.676748591715;
    msg.speed_units = 67U;
    msg.radius = 0.899468073538;
    msg.direction = 35U;
    msg.custom.assign("VFTZISCFUHYNHUWZKRFULEELJVGRGAFJDZMCLZEYHXGKWEEHPOMJQTPNRTCFLXVEOXSYXEFPHPXZDMJQOUSLAIFJYQVWOQGUWWUCKFNPVTVIRPPUXABTVGASNKMDNSRDBLFATBQEIZCHCWKTVGMNUXYMJJBNFOBHLGUSNGYTRGMZBBOIKGJILVMLPTYIBDCMYZSQRYONMDXISPKBW");

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
    msg.setTimeStamp(0.97526232949);
    msg.setSource(10600U);
    msg.setSourceEntity(75U);
    msg.setDestination(44U);
    msg.setDestinationEntity(46U);
    msg.formation_name.assign("FAXYKEJZQMEXNVAUPGRURKUDUOSIWGVVMAFDKHQXJSMHTJEYGH");
    msg.reference_frame = 251U;
    msg.custom.assign("VXDBDFQXKTTUBRDUFEWTYKAKJLUKEXUOFLPJIJYNPSIKMPHKFMWCKXEEBPRJQYNAIIDGAFZQQHCGPZYDDISYRSUTODIOAREJVVDHHKURHMMGPWRRMZDWIQEGMUWCQNNBQHOHOQYRVTTWKATQVCPOOJYMMWJFLIXINSZCXFIXNMGLBGUTEUGGWPXSCCJQBOVBEMBAZHVZZCLBLXSEPZNYASHEPKFLZYLOOJUNWNW");

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
    msg.setTimeStamp(0.282780849176);
    msg.setSource(2037U);
    msg.setSourceEntity(22U);
    msg.setDestination(46627U);
    msg.setDestinationEntity(155U);
    msg.formation_name.assign("JDCFIOBAPQXAIBMDNPMHUKNMOPYHYXPNHRGANRTSGXIRRPNKTHGQQBKRGXVFCWLGTSCEAKQSQGZMUPYJYFXMJDHXAVFGZEPFAAUYEB");
    msg.reference_frame = 227U;
    msg.custom.assign("NPPCHBZVFTWXQSGGMDXUSPCOPIUGEFCZJTMHEGIWPLREEIPFNMJBJCYAPJQWWLXNHWDALOQXBRTBHPZKAFKWYLQIPOOPOBDCQCEIQDVRUGZBOHVNJTKWLLSZJVMKRFJKGSFMRASGCURUBCFNLBIWLSRNJUNDUYQFKYEDRUQZZVEUSMHXXOIOEYUEXISTHNHHMIGKZTNARBYDOFTXARSZABYKDMJVWQMKYVVIKJYSLDDC");

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
    msg.setTimeStamp(0.529479786139);
    msg.setSource(18393U);
    msg.setSourceEntity(187U);
    msg.setDestination(27699U);
    msg.setDestinationEntity(74U);
    msg.formation_name.assign("OBOAAIDZWTUDHWYYDTUPHJGVKMTYXCQGXEKNJJNPCIABLBDKEBAAXXBWHSPSQODOLVSVVNILXTBQGXYQSLTQPZWMYVZKCDZILMZOIXENKUNNTQAMJNTBMEWAFOHUNNILAQQPPIOPHULURWJZDPGZEORUADEFXLZIYEXPVHUFFGQCBPMJSCGSYFCERRRGWXOSYCVCDRFKHSMC");
    msg.reference_frame = 192U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 65504U;
    tmp_msg_0.off_x = 0.0631987348968;
    tmp_msg_0.off_y = 0.0449521370211;
    tmp_msg_0.off_z = 0.962612062239;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("SOQEHMLOSAKZDLILEKKINJOGARYUKUPYEIXWWXSHVVXFFPDJCNYLVDTJCEIISSUHBGXEXPJWBIQZZBAXGMQNAJMQRBNQVUSWTVEOXNEKNOAHRLOGQYYUVRDIDWHTSQXMLCNTHTTBFOJLJ");

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
    msg.setTimeStamp(0.434935314634);
    msg.setSource(55587U);
    msg.setSourceEntity(31U);
    msg.setDestination(4086U);
    msg.setDestinationEntity(149U);
    msg.group_name.assign("BFYWBEJFZDINYDWXLUGSRAFQNJHPFNCAIQOEKOSBGRQFSCKKCDSEAOXEZGJUSILWRJKVYKARPEGBYUTZHTEPDCYBINPSQUSYPXSJXQLPKCVIEMZLTNVLVTNXTTZHUWBMOXQWCGMQIQCOJWXBJDSWWAQARURDHIWZTZDHFJNXXLVHUOYYIVTMOGQZUHAZMDAOGGPMEZKTVDFRLUJIGCPHVLBGKDMHEUYIRYMVM");
    msg.formation_name.assign("IPXVQBMHODBDPYZSJTHGFMZRWMIMEVJXLVYG");
    msg.plan_id.assign("MZMHXAFCUKKCVXWWMCLPLQEZSMXTWFPTSIWYZUHTAQOCWBOOYGEFOMFVJTASOSWPGMBCKNSHHFBGJGTIQLEG");
    msg.description.assign("OTFCTBMDNVVPOEQUOAGQLVJSLDBHZQFFIDIUFPZHGDTZSWPXYUUKYLYLBKESMEXCCMDXZIQKAWZYGJYRBJCFGCCVHOWJOYRGMPCMXXTTUGRDETLLWEGW");
    msg.leader_speed = 0.645455794718;
    msg.leader_bank_lim = 0.582621319746;
    msg.pos_sim_err_lim = 0.657309060765;
    msg.pos_sim_err_wrn = 0.481107114498;
    msg.pos_sim_err_timeout = 1708U;
    msg.converg_max = 0.0528740193108;
    msg.converg_timeout = 38628U;
    msg.comms_timeout = 1025U;
    msg.turb_lim = 0.481664775426;
    msg.custom.assign("XYGGYZGZIWHGNBFXNITBVHIWCYBYKLJTDDBBGQNVSIZFDOJSSWVTKFUCIEEJPPLMJKRDACXXAQQOMDTGVIMGIVRLTUTERMDMMSCOCAUACENEDHUVJPXPZIWWNXQKFJAPOBQEVZPMYRRFEMDANGZSQFKWJTRQXAHQNVXHSUCWMFQBITKUZFIKHSYONRYVL");

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
    msg.setTimeStamp(0.108165233075);
    msg.setSource(19537U);
    msg.setSourceEntity(87U);
    msg.setDestination(6121U);
    msg.setDestinationEntity(233U);
    msg.group_name.assign("VCQMDFUMMZTFVFEJSVFLWNLZJKDCVSTGYGKENPNMBZIPOVDPWSXPEQTTALMTDBPDGQAAWUAHVCEDKIRCOURABKRXPHLVXBYFJKZUAICRYSHYPXFOXKHERXOML");
    msg.formation_name.assign("URBHEDCXTHHSEFNPWOHWIBKEEDWCXDGWBUQFOPAJYFPHPRNFMTCUYKSWCDMEKDCGNETSEHNRJBRUVPVKCUSOFMDUNLAILGZFVPMNGOTTRPTYVBLIOAICGEAZXVAJDVLIGJBQCULBHCJYMAIFOGVKKFOMAPSIBGVWRXJQZJSHZRWZMXGEJJYGRFQQUYYZKDHKWUIBJZKTDVMTIWEOMASRPRNXPXXSKYNYHMFWQBL");
    msg.plan_id.assign("TLROXNVXUKZQFLCPCANAGCZAEXQX");
    msg.description.assign("UHWTTQYJXXDIFBIOLVCHLSSTINGLFEVTWJCVPDHTFRSEMJZJGPMAQIIUKBWFMQYZLCKZHGNXWUWNIUZ");
    msg.leader_speed = 0.792174616068;
    msg.leader_bank_lim = 0.700163900519;
    msg.pos_sim_err_lim = 0.384498634226;
    msg.pos_sim_err_wrn = 0.779634496572;
    msg.pos_sim_err_timeout = 46905U;
    msg.converg_max = 0.776237798491;
    msg.converg_timeout = 38020U;
    msg.comms_timeout = 51093U;
    msg.turb_lim = 0.717384763177;
    msg.custom.assign("KISZXKDCTWEGRRJQCTSTOVQAJQDRMHLQCTURKLQNDWMNUOPJFNGAUHWIUNFZASAHYSTCYTNDGBVGVSKXKOFFBHHMLBHYBLXFLKAENTZEGIOKFARAYIJXSLMVVBPDUSQQJDTPSMCWU");

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
    msg.setTimeStamp(0.624424917621);
    msg.setSource(44987U);
    msg.setSourceEntity(121U);
    msg.setDestination(46044U);
    msg.setDestinationEntity(237U);
    msg.group_name.assign("PLZZDSYHVCCIQORIXQXSIPQAZWLFJKOJAOYISHMIGMMDXAXPBOSHAHNIBVVNCAVETINENMZDPKKZTPTVURQFFWEW");
    msg.formation_name.assign("ESMIBCYOLDCFSYJJWRDRXFGPAEUTYVFWFKATVZHIEHASDFDYSQOKZWGBHUYFPLINLOBZXPHZCALGQEEBCJUPEOVMEHTNREVUJWCMNTXMTIEAYGJLGTDTPVKDKBLWGCOSKIRRNLCMNQUAXRUDMIWQDQJVDYKTBFFHXNZWBN");
    msg.plan_id.assign("IQCBHNYBEQUUDKDNCHPVAFKVUYOJAMQNQYWFSTPDMEZELFROSMYUNCPPAGJUDZTNZAQZCBTUULZKLWCOWIXSJNIYSLUKTTPXRFORHQWBNHJGBFXVZIODBDGDGPXWQSWDJWLGFIIMXKXUESLGWOOQIMVJJON");
    msg.description.assign("NTMTINGOJBYZXMJXWZBLUGIFEY");
    msg.leader_speed = 0.928675480229;
    msg.leader_bank_lim = 0.00346986622168;
    msg.pos_sim_err_lim = 0.954516536231;
    msg.pos_sim_err_wrn = 0.546249840794;
    msg.pos_sim_err_timeout = 38124U;
    msg.converg_max = 0.529760119089;
    msg.converg_timeout = 15439U;
    msg.comms_timeout = 18868U;
    msg.turb_lim = 0.0381949178519;
    msg.custom.assign("ZSFDTRRFPYHUGCUPTGLFBXJRYBAQENH");

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
    msg.setTimeStamp(0.507801284436);
    msg.setSource(40416U);
    msg.setSourceEntity(103U);
    msg.setDestination(31611U);
    msg.setDestinationEntity(112U);
    msg.control_src = 42619U;
    msg.control_ent = 118U;
    msg.timeout = 0.486428392245;
    msg.loiter_radius = 0.662063222226;
    msg.altitude_interval = 0.664713179206;

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
    msg.setTimeStamp(0.900080533758);
    msg.setSource(49410U);
    msg.setSourceEntity(166U);
    msg.setDestination(56071U);
    msg.setDestinationEntity(150U);
    msg.control_src = 18310U;
    msg.control_ent = 149U;
    msg.timeout = 0.664500418407;
    msg.loiter_radius = 0.648687407371;
    msg.altitude_interval = 0.906367913416;

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
    msg.setTimeStamp(0.976817497504);
    msg.setSource(34902U);
    msg.setSourceEntity(85U);
    msg.setDestination(17394U);
    msg.setDestinationEntity(39U);
    msg.control_src = 161U;
    msg.control_ent = 117U;
    msg.timeout = 0.0779409784589;
    msg.loiter_radius = 0.858922392009;
    msg.altitude_interval = 0.181903508632;

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
    msg.setTimeStamp(0.0794827361402);
    msg.setSource(33534U);
    msg.setSourceEntity(16U);
    msg.setDestination(22665U);
    msg.setDestinationEntity(234U);
    msg.flags = 117U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.772946460445;
    tmp_msg_0.speed_units = 106U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.439529004611;
    tmp_msg_1.z_units = 244U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.541229608648;
    msg.lon = 0.73944802638;
    msg.radius = 0.753596121451;

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
    msg.setTimeStamp(0.114411579014);
    msg.setSource(22148U);
    msg.setSourceEntity(128U);
    msg.setDestination(26655U);
    msg.setDestinationEntity(142U);
    msg.flags = 21U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.588928414876;
    tmp_msg_0.speed_units = 233U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.758169899957;
    tmp_msg_1.z_units = 249U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.292777712039;
    msg.lon = 0.875566887255;
    msg.radius = 0.530610412235;

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
    msg.setTimeStamp(0.188209696011);
    msg.setSource(8153U);
    msg.setSourceEntity(121U);
    msg.setDestination(45586U);
    msg.setDestinationEntity(16U);
    msg.flags = 249U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.357526492091;
    tmp_msg_0.speed_units = 210U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.630917876978;
    tmp_msg_1.z_units = 215U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.678656148999;
    msg.lon = 0.699450315376;
    msg.radius = 0.329743816918;

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
    msg.setTimeStamp(0.249497922937);
    msg.setSource(26153U);
    msg.setSourceEntity(13U);
    msg.setDestination(1845U);
    msg.setDestinationEntity(99U);
    msg.control_src = 9771U;
    msg.control_ent = 86U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 119U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0773646223695;
    tmp_tmp_msg_0_0.speed_units = 247U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.106319436292;
    tmp_tmp_msg_0_1.z_units = 146U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0353822173658;
    tmp_msg_0.lon = 0.600053126041;
    tmp_msg_0.radius = 0.702741553199;
    msg.reference.set(tmp_msg_0);
    msg.state = 102U;
    msg.proximity = 25U;

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
    msg.setTimeStamp(0.432880602934);
    msg.setSource(34006U);
    msg.setSourceEntity(61U);
    msg.setDestination(10664U);
    msg.setDestinationEntity(166U);
    msg.control_src = 14397U;
    msg.control_ent = 70U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 90U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.47520721993;
    tmp_tmp_msg_0_0.speed_units = 236U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.207486437318;
    tmp_tmp_msg_0_1.z_units = 244U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0877205527786;
    tmp_msg_0.lon = 0.783942189435;
    tmp_msg_0.radius = 0.676959284199;
    msg.reference.set(tmp_msg_0);
    msg.state = 194U;
    msg.proximity = 196U;

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
    msg.setTimeStamp(0.290337141998);
    msg.setSource(59896U);
    msg.setSourceEntity(25U);
    msg.setDestination(16948U);
    msg.setDestinationEntity(102U);
    msg.control_src = 39459U;
    msg.control_ent = 57U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 213U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.600824926744;
    tmp_tmp_msg_0_0.speed_units = 201U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.605048630741;
    tmp_tmp_msg_0_1.z_units = 234U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.119852805661;
    tmp_msg_0.lon = 0.443151181281;
    tmp_msg_0.radius = 0.965917719979;
    msg.reference.set(tmp_msg_0);
    msg.state = 237U;
    msg.proximity = 100U;

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
    msg.setTimeStamp(0.00687316861998);
    msg.setSource(27938U);
    msg.setSourceEntity(62U);
    msg.setDestination(46878U);
    msg.setDestinationEntity(43U);
    msg.ax_cmd = 0.216715130769;
    msg.ay_cmd = 0.991786319065;
    msg.az_cmd = 0.463708599373;
    msg.ax_des = 0.221889878143;
    msg.ay_des = 0.302357883304;
    msg.az_des = 0.575132038153;
    msg.virt_err_x = 0.182566726167;
    msg.virt_err_y = 0.475575447712;
    msg.virt_err_z = 0.346489840611;
    msg.surf_fdbk_x = 0.129997827515;
    msg.surf_fdbk_y = 0.583318535131;
    msg.surf_fdbk_z = 0.66773588704;
    msg.surf_unkn_x = 0.423327994419;
    msg.surf_unkn_y = 0.611912971249;
    msg.surf_unkn_z = 0.0350967076772;
    msg.ss_x = 0.513779206906;
    msg.ss_y = 0.122050950689;
    msg.ss_z = 0.466434974236;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("LIVYXNNOGVVMGHBUXQQGNCCZZWMPUXHNMIWTOYFNHFZVXFDLQKBRRMXXQFYJTFWVSKDHEAYPWWSLTMOEGUOXJCTKRSHABCUBPSRBKYUQGHRVECAKZZRJRPHLGKDXXLQSSTPNWHUFIYQPBEELUPVQAUTMMGERKJFDCDBV");
    tmp_msg_0.dist = 0.710711604308;
    tmp_msg_0.err = 0.614845617805;
    tmp_msg_0.ctrl_imp = 0.204874269986;
    tmp_msg_0.rel_dir_x = 0.567916771583;
    tmp_msg_0.rel_dir_y = 0.681788489232;
    tmp_msg_0.rel_dir_z = 0.179043008808;
    tmp_msg_0.err_x = 0.329727392706;
    tmp_msg_0.err_y = 0.0273885106002;
    tmp_msg_0.err_z = 0.200705616971;
    tmp_msg_0.rf_err_x = 0.747305558624;
    tmp_msg_0.rf_err_y = 0.148884695778;
    tmp_msg_0.rf_err_z = 0.514326816686;
    tmp_msg_0.rf_err_vx = 0.577709468403;
    tmp_msg_0.rf_err_vy = 0.52821514063;
    tmp_msg_0.rf_err_vz = 0.625923771433;
    tmp_msg_0.ss_x = 0.742320925621;
    tmp_msg_0.ss_y = 0.0245766145556;
    tmp_msg_0.ss_z = 0.573857773393;
    tmp_msg_0.virt_err_x = 0.855060012448;
    tmp_msg_0.virt_err_y = 0.709560227005;
    tmp_msg_0.virt_err_z = 0.855612032698;
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
    msg.setTimeStamp(0.699349556689);
    msg.setSource(23632U);
    msg.setSourceEntity(73U);
    msg.setDestination(47684U);
    msg.setDestinationEntity(172U);
    msg.ax_cmd = 0.206560427874;
    msg.ay_cmd = 0.9352587634;
    msg.az_cmd = 0.165670598071;
    msg.ax_des = 0.276998478155;
    msg.ay_des = 0.577493622612;
    msg.az_des = 0.322866857527;
    msg.virt_err_x = 0.677400743738;
    msg.virt_err_y = 0.938173731362;
    msg.virt_err_z = 0.495027363897;
    msg.surf_fdbk_x = 0.827912549012;
    msg.surf_fdbk_y = 0.912022338784;
    msg.surf_fdbk_z = 0.35333793742;
    msg.surf_unkn_x = 0.39172172421;
    msg.surf_unkn_y = 0.0294334706869;
    msg.surf_unkn_z = 0.221061806395;
    msg.ss_x = 0.218972151839;
    msg.ss_y = 0.0752816019648;
    msg.ss_z = 0.799361261464;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("XRDMPGURRTOUBMHWZWYNEWPXDOUANJIMXYLGUGKXAWZYSLYBSNFGCETLIMTJQMVJUMKYXGUFYUCOQ");
    tmp_msg_0.dist = 0.752752561799;
    tmp_msg_0.err = 0.446705497165;
    tmp_msg_0.ctrl_imp = 0.681269646895;
    tmp_msg_0.rel_dir_x = 0.789552757267;
    tmp_msg_0.rel_dir_y = 0.87154087351;
    tmp_msg_0.rel_dir_z = 0.29173033631;
    tmp_msg_0.err_x = 0.888887271816;
    tmp_msg_0.err_y = 0.48844374797;
    tmp_msg_0.err_z = 0.999040380445;
    tmp_msg_0.rf_err_x = 0.0883629750927;
    tmp_msg_0.rf_err_y = 0.0540994310873;
    tmp_msg_0.rf_err_z = 0.489789645404;
    tmp_msg_0.rf_err_vx = 0.522651378144;
    tmp_msg_0.rf_err_vy = 0.343672549683;
    tmp_msg_0.rf_err_vz = 0.8368562571;
    tmp_msg_0.ss_x = 0.915938908108;
    tmp_msg_0.ss_y = 0.387744243281;
    tmp_msg_0.ss_z = 0.20517640619;
    tmp_msg_0.virt_err_x = 0.837652486571;
    tmp_msg_0.virt_err_y = 0.225695476723;
    tmp_msg_0.virt_err_z = 0.0255575889268;
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
    msg.setTimeStamp(0.490893516476);
    msg.setSource(60846U);
    msg.setSourceEntity(30U);
    msg.setDestination(10317U);
    msg.setDestinationEntity(127U);
    msg.ax_cmd = 0.0867374475902;
    msg.ay_cmd = 0.626985604003;
    msg.az_cmd = 0.0279029531239;
    msg.ax_des = 0.823741810576;
    msg.ay_des = 0.280390717245;
    msg.az_des = 0.179308554524;
    msg.virt_err_x = 0.508912091347;
    msg.virt_err_y = 0.804260357326;
    msg.virt_err_z = 0.0613819992553;
    msg.surf_fdbk_x = 0.952387929913;
    msg.surf_fdbk_y = 0.412877209137;
    msg.surf_fdbk_z = 0.0737998987694;
    msg.surf_unkn_x = 0.481764827402;
    msg.surf_unkn_y = 0.649781963095;
    msg.surf_unkn_z = 0.99428768139;
    msg.ss_x = 0.610498333841;
    msg.ss_y = 0.472983535761;
    msg.ss_z = 0.586122399117;

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
    msg.setTimeStamp(0.337671646352);
    msg.setSource(18425U);
    msg.setSourceEntity(204U);
    msg.setDestination(40799U);
    msg.setDestinationEntity(148U);
    msg.s_id.assign("LAJMPNSLWEMEHVIVFBSYICAKFSOJUQPZQECLNUNISOEULFTNAAD");
    msg.dist = 0.60597492762;
    msg.err = 0.973412516765;
    msg.ctrl_imp = 0.240372914519;
    msg.rel_dir_x = 0.338222834681;
    msg.rel_dir_y = 0.320817201692;
    msg.rel_dir_z = 0.358090957533;
    msg.err_x = 0.813810923802;
    msg.err_y = 0.0193093220841;
    msg.err_z = 0.510929362313;
    msg.rf_err_x = 0.891896245302;
    msg.rf_err_y = 0.756937510498;
    msg.rf_err_z = 0.552036002976;
    msg.rf_err_vx = 0.0801216718709;
    msg.rf_err_vy = 0.293482573384;
    msg.rf_err_vz = 0.823221399097;
    msg.ss_x = 0.481990096145;
    msg.ss_y = 0.464573688213;
    msg.ss_z = 0.376520093553;
    msg.virt_err_x = 0.255667937036;
    msg.virt_err_y = 0.00784907884455;
    msg.virt_err_z = 0.63255512967;

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
    msg.setTimeStamp(0.716190317221);
    msg.setSource(18582U);
    msg.setSourceEntity(100U);
    msg.setDestination(18170U);
    msg.setDestinationEntity(40U);
    msg.s_id.assign("NTMVMJZVLMDVDRIJSYAHKXFIZSUUTYWPKFYVPDDARNAOQRKXCNTVUENBCSMNBYMHKEVVFCJQGRNFYDVFZRIDHAUCNSCBZLTGERKWLUQJEAWGYRXXHTATENXUBCQNQHTAKJRGHPHMLZFDLOJLBBMOIW");
    msg.dist = 0.0579171046011;
    msg.err = 0.14823643313;
    msg.ctrl_imp = 0.0155367407956;
    msg.rel_dir_x = 0.796247734179;
    msg.rel_dir_y = 0.773894223371;
    msg.rel_dir_z = 0.118435442712;
    msg.err_x = 0.754053230382;
    msg.err_y = 0.852475418513;
    msg.err_z = 0.167472381883;
    msg.rf_err_x = 0.38402705613;
    msg.rf_err_y = 0.860696470289;
    msg.rf_err_z = 0.0727659066379;
    msg.rf_err_vx = 0.0407707253375;
    msg.rf_err_vy = 0.981991762738;
    msg.rf_err_vz = 0.811784856263;
    msg.ss_x = 0.355727515687;
    msg.ss_y = 0.356473809053;
    msg.ss_z = 0.708962021393;
    msg.virt_err_x = 0.39530640864;
    msg.virt_err_y = 0.465519396188;
    msg.virt_err_z = 0.694926292441;

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
    msg.setTimeStamp(0.174349054571);
    msg.setSource(47593U);
    msg.setSourceEntity(30U);
    msg.setDestination(15728U);
    msg.setDestinationEntity(65U);
    msg.s_id.assign("QWJYXNHBOHJBDCUWSMLVQGJEMEHYLQHYDRHYRAT");
    msg.dist = 0.338632072791;
    msg.err = 0.4257988314;
    msg.ctrl_imp = 0.687741050337;
    msg.rel_dir_x = 0.136282715283;
    msg.rel_dir_y = 0.384414407456;
    msg.rel_dir_z = 0.227417641178;
    msg.err_x = 0.320297871862;
    msg.err_y = 0.199822456697;
    msg.err_z = 0.520658173409;
    msg.rf_err_x = 0.158167564547;
    msg.rf_err_y = 0.444810056408;
    msg.rf_err_z = 0.575162531903;
    msg.rf_err_vx = 0.119715192098;
    msg.rf_err_vy = 0.77455321682;
    msg.rf_err_vz = 0.406444467777;
    msg.ss_x = 0.021998062091;
    msg.ss_y = 0.35286760622;
    msg.ss_z = 0.454712561675;
    msg.virt_err_x = 0.569721076158;
    msg.virt_err_y = 0.836935774895;
    msg.virt_err_z = 0.901128495062;

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
    msg.setTimeStamp(0.3528729729);
    msg.setSource(24699U);
    msg.setSourceEntity(251U);
    msg.setDestination(18676U);
    msg.setDestinationEntity(47U);
    msg.timeout = 50811U;
    msg.rpm = 0.835019339227;
    msg.direction = 205U;
    msg.custom.assign("MVIZWUGRBZYWTXSFQDLZBMHTRMSELWPLETYMGMQKUVFEQCSNDJDJMBUHNAZATKRDNSWIAIUUSRAXYZPYJBMOTHFYPFYNEONTOVFHDFILMVTSKKEKUKJPSIJIEVUPYGZ");

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
    msg.setTimeStamp(0.0387856138308);
    msg.setSource(59497U);
    msg.setSourceEntity(69U);
    msg.setDestination(39608U);
    msg.setDestinationEntity(48U);
    msg.timeout = 17160U;
    msg.rpm = 0.954740277549;
    msg.direction = 20U;
    msg.custom.assign("LCUQZTLNYSXMIOEWJFYUVUOBXTBOASKBPUYYRZHBJRLDWZMCOKJDAIXENHTIEBQRTBAROHZSQPKCPZUV");

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
    msg.setTimeStamp(0.67472152414);
    msg.setSource(55988U);
    msg.setSourceEntity(178U);
    msg.setDestination(53277U);
    msg.setDestinationEntity(62U);
    msg.timeout = 7355U;
    msg.rpm = 0.531975986859;
    msg.direction = 52U;
    msg.custom.assign("DWFCURFQOCHWLCBAYUOYQQHEOOFSYRETXMPRSDYVOPGNTEGTCUPDOZFDDWBZPSIMIAGVXNLFSJMLIBILLJXBUQDUEKYVCWFFPXMIUECNDKMRVBZCCRJQSTMWZKKHENHSGUKQVJJWTVZBXKCFTXTRPSNA");

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
    msg.setTimeStamp(0.515450461588);
    msg.setSource(18893U);
    msg.setSourceEntity(47U);
    msg.setDestination(15068U);
    msg.setDestinationEntity(99U);
    msg.formation_name.assign("VKZDNOYGHIWYQDMYPTCEJHQBIQMKWMWVZTNVNFIGDQZYHRKZSUXPLJHWYORRVSKCPNNAHVRPLJNX");
    msg.type = 135U;
    msg.op = 134U;
    msg.group_name.assign("SDRPVBNRRGWLJBFHUOVZKWFRUIFBVDNCFKANGFDWQQSNJRTQMHKOKJTOUWELRVIYZIKTAMLMVMMLCYUFLGDHMIVDEPLDZZPTGGHERVAOXAUONPDTHAEJUQDKWZHMYXINXTQXJPWXZRKCSEEKSPQEAJYZLKVMAGHYRJCYUEUBVCSTWWHMSLFZYBNDIJYOYMPCAKJPESGXBXNBFPXZZPDGXQFQUOAARTOBWFINIXUCWQOHHEOCSTCBJTS");
    msg.plan_id.assign("OGBVWLTRYQVETTLGEPBFFURKHKNAXYBCNFDMSGXRSLSIXODJNPHCSVYIRECKUQWGZDZAIVRFBCREBL");
    msg.description.assign("WVXVKIVEBUSBLUQSNUIUTOLNQDHYEYYXWVTVMNQIGPJAEXTXROQLLMDOHKPHZUEGZJXFSTECUCKKSSAIRAJHYIDBLYRGJVZCKYPJINBMZBKVQEAFVECORMWAWBGFMGDAHCMWZQAVTJDBBRKGNXJDTZRAGPRLSRTQZTCSENL");
    msg.reference_frame = 134U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 17109U;
    tmp_msg_0.off_x = 0.11141798689;
    tmp_msg_0.off_y = 0.18525567334;
    tmp_msg_0.off_z = 0.582657924075;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.919951631533;
    msg.leader_speed_min = 0.551296215975;
    msg.leader_speed_max = 0.656655870606;
    msg.leader_alt_min = 0.00778012576021;
    msg.leader_alt_max = 0.854967654249;
    msg.pos_sim_err_lim = 0.0816439005028;
    msg.pos_sim_err_wrn = 0.699588541323;
    msg.pos_sim_err_timeout = 50190U;
    msg.converg_max = 0.675918814681;
    msg.converg_timeout = 46148U;
    msg.comms_timeout = 49574U;
    msg.turb_lim = 0.58051229741;
    msg.custom.assign("DPSGOUMBICCQHDXGTWFYTSEMDCLRFRLQJRYKWRAGBVFPNDVIGYARNLHXCSKNSAZQZASORIVMPBMAUYBMHWQIJIAGXJJZXYEQRNFKKTBVSMQYJKWTDXIWUBELZHPBIRCMNZG");

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
    msg.setTimeStamp(0.471782206185);
    msg.setSource(33457U);
    msg.setSourceEntity(10U);
    msg.setDestination(5191U);
    msg.setDestinationEntity(0U);
    msg.formation_name.assign("PDCPYSEATAYTSKLMRBHGVNKBKRNVZYQCAGKYNKIVDETKPXGNTKXZGLUEASYEVBUAVEQOTRQUTINQKUEOWWVHWONMXPPLDNLIDGBNFXPSGMDCWAKVHSWQJDPOMDIXCRPVHFJOSSZJQTCAGOJWFZRLECOVGOBLXKDUBCY");
    msg.type = 73U;
    msg.op = 199U;
    msg.group_name.assign("FPJVGQAPPCQWFZBNHOROECSCXCEQWSYWIOHWMHPRVIFTSKBMSONMGYANREGRBTNYAIKMVUXUKYXUIVMVERHPKLLLVIZCIXUDWNZPMYAIJUFACBBTAEEMTKYHGDQPTQEDDOSYXOJKHGGWJFZSZDKXUVRQXAURMSMFWBZMJPAJYOEQFJFLHNUSCIBWOBPDZT");
    msg.plan_id.assign("WVQYWIBRHWFXCYPEGWANQKULJKYURJAPTPPSTQPGKCXUKQJHYMACPXXF");
    msg.description.assign("AWNDHBKVBPLGTSGVDPFTIZSBDXRYVAVHXUMVOPSLMCELDSV");
    msg.reference_frame = 147U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 917U;
    tmp_msg_0.off_x = 0.735865160959;
    tmp_msg_0.off_y = 0.867181461243;
    tmp_msg_0.off_z = 0.470255980437;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.894204577092;
    msg.leader_speed_min = 0.377533621741;
    msg.leader_speed_max = 0.162879688821;
    msg.leader_alt_min = 0.676025108168;
    msg.leader_alt_max = 0.158128312619;
    msg.pos_sim_err_lim = 0.154577442321;
    msg.pos_sim_err_wrn = 0.259410415425;
    msg.pos_sim_err_timeout = 28072U;
    msg.converg_max = 0.801494407209;
    msg.converg_timeout = 42193U;
    msg.comms_timeout = 61382U;
    msg.turb_lim = 0.428810267557;
    msg.custom.assign("GTQHZKTRIXNCMQXBIWINJEBOACVPFRTXZPSFHFFLAJPGBPSQNMMKTSWUCDVPULJJMBGNOKEOKCOUONFZEZLAHXCIHYGDMEGCAGCERYCWCZLWITDNKVYSRNZ");

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
    msg.setTimeStamp(0.919263026999);
    msg.setSource(31107U);
    msg.setSourceEntity(119U);
    msg.setDestination(64679U);
    msg.setDestinationEntity(237U);
    msg.formation_name.assign("ZJVHWCTASOCQNRATFSNXFGQJZULIWSLKWCLNPHYOMMCQZACO");
    msg.type = 174U;
    msg.op = 127U;
    msg.group_name.assign("ZYDNVRULMDXQFQRPJEOYBTKWPGACWWMERNCKBLPOJVDZAWUGWQXZNTIIQVZZKZTVNCNOXULGGUFTVNVWEOOPBGEOUPKWHHYRIQQYONCUJL");
    msg.plan_id.assign("WYEIJZGPFOBSRPZWIFMQREBHCPQGZEEXJIEDAPBGHDBJ");
    msg.description.assign("PIKFSTCHZHYDARBNAVBOYNVEJKGUOMPXISQRNTWZKXXJKGHQBRXUUUOZFALGSHQQGBFDJWWTCLHANRZOZVBPHMFSAWUEWNNSTQKIGEYYCPPOGQXTRRGKBSQIMDCVVEUQSDUKEJMHWKTVUIHMPMRMPCFWSJFADERNJTTVSZLPOXLXNIKXYILQZDGZALDSIUTDHZ");
    msg.reference_frame = 7U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 60158U;
    tmp_msg_0.off_x = 0.590451817811;
    tmp_msg_0.off_y = 0.0469563588849;
    tmp_msg_0.off_z = 0.791877697314;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.214666783512;
    msg.leader_speed_min = 0.762507964483;
    msg.leader_speed_max = 0.326841106805;
    msg.leader_alt_min = 0.934170166294;
    msg.leader_alt_max = 0.98803732213;
    msg.pos_sim_err_lim = 0.672984047061;
    msg.pos_sim_err_wrn = 0.806637089744;
    msg.pos_sim_err_timeout = 15556U;
    msg.converg_max = 0.545220863373;
    msg.converg_timeout = 8560U;
    msg.comms_timeout = 61436U;
    msg.turb_lim = 0.0446350406686;
    msg.custom.assign("SKZCNDZSETENKPQRJDQZGPPHXTCEYIKCVRYMPUQGWKZGCBYOLCIEGFNWUOFAPYUHAIMIPXWDOHBHCKNZYVMQJYOSHADBZRTWOPLXUMXCAGLKYRHFDNVORIEGBMALAKTBEXOWYSVIPNOHEJIZFRFZHQFKBTMBJWSXCOSXS");

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
    msg.setTimeStamp(0.904653838209);
    msg.setSource(47417U);
    msg.setSourceEntity(48U);
    msg.setDestination(25369U);
    msg.setDestinationEntity(122U);
    msg.timeout = 27401U;
    msg.lat = 0.263138107085;
    msg.lon = 0.282808315722;
    msg.z = 0.946838602236;
    msg.z_units = 146U;
    msg.speed = 0.543071762174;
    msg.speed_units = 129U;
    msg.custom.assign("QZPFRPDUKTTZOGIATOBBLRBYGAHBMZNMQAWETVMMKUISJHQUKSKCXUXGMIEGWYLSEVYGHWJJFTYAUP");

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
    msg.setTimeStamp(0.81174927323);
    msg.setSource(5253U);
    msg.setSourceEntity(112U);
    msg.setDestination(25021U);
    msg.setDestinationEntity(21U);
    msg.timeout = 27988U;
    msg.lat = 0.549428378065;
    msg.lon = 0.0482689471348;
    msg.z = 0.569445380399;
    msg.z_units = 246U;
    msg.speed = 0.420754232865;
    msg.speed_units = 238U;
    msg.custom.assign("ATFFULOFGHIMCZEDYJKPCBPHDFAGJMHQNSWKQVELUXLWQBGTIPVFZSQAFPPZCYDZETWWEMEUGWXJQYWCUKBABVBSTEQNDLBRYAPFCACGMHJVXSYFOXRIUHSH");

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
    msg.setTimeStamp(0.159731048842);
    msg.setSource(49522U);
    msg.setSourceEntity(203U);
    msg.setDestination(7608U);
    msg.setDestinationEntity(65U);
    msg.timeout = 14769U;
    msg.lat = 0.441792908382;
    msg.lon = 0.91721708844;
    msg.z = 0.482711258976;
    msg.z_units = 39U;
    msg.speed = 0.314027792909;
    msg.speed_units = 123U;
    msg.custom.assign("XSBJANKPNGEPWPIBNBSPMXYPCFBOGEKVWTRCUSJKHOLKIPWONUUMCLBLAZQTNIFINLMMHYWEAPCZVKCHENSMKQZGBETKUEGSSZJOYRQZFJUDRDXVFAXYBFHFGQVGEEKJUOTYWCTDIPCPFCHUHLYHXCAWX");

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
    msg.setTimeStamp(0.80601810387);
    msg.setSource(58111U);
    msg.setSourceEntity(239U);
    msg.setDestination(6140U);
    msg.setDestinationEntity(196U);
    msg.timeout = 46648U;
    msg.lat = 0.152836071691;
    msg.lon = 0.735628955943;
    msg.z = 0.52439462743;
    msg.z_units = 110U;
    msg.speed = 0.640600618485;
    msg.speed_units = 194U;
    msg.custom.assign("DLWOSAGTWSMNOQEIVNWCTOLTSNFPUNOPYMYXUSVVORFMPNKETUGPAC");

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
    msg.setTimeStamp(0.00748623610925);
    msg.setSource(48997U);
    msg.setSourceEntity(134U);
    msg.setDestination(10233U);
    msg.setDestinationEntity(148U);
    msg.timeout = 10184U;
    msg.lat = 0.831882795413;
    msg.lon = 0.516526139004;
    msg.z = 0.934192750751;
    msg.z_units = 175U;
    msg.speed = 0.0601867892096;
    msg.speed_units = 104U;
    msg.custom.assign("WXMJRENYSEMREMZHRIVIQZPHVYADKINLXDAYZGDRFJTHGHWYCTWBFTXUWHSSXARKHVCFCOBAAVTLEDLVNVAOHOYAEOZZKOMKJPCNCXLWQVYUDRGYMPCFVZRAGVWEIAQIBXGDUYPPNM");

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
    msg.setTimeStamp(0.762135318768);
    msg.setSource(57302U);
    msg.setSourceEntity(118U);
    msg.setDestination(19592U);
    msg.setDestinationEntity(208U);
    msg.timeout = 30421U;
    msg.lat = 0.478233400684;
    msg.lon = 0.514527174541;
    msg.z = 0.360456999074;
    msg.z_units = 218U;
    msg.speed = 0.127017495122;
    msg.speed_units = 81U;
    msg.custom.assign("VOSJBBSIHNTKLKDHCVTYXBQHPMNYSPOMOEYECBUMHQIUTNTWXCULPNQPXKWDFULSVFQBSMAHUCNTVUBRAGCITWAQELAZXIDWOJLZKSJFRKZFJWPINYDRELGRZBIICPXYIJRANETHV");

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
    msg.setTimeStamp(0.776691629721);
    msg.setSource(63069U);
    msg.setSourceEntity(220U);
    msg.setDestination(18509U);
    msg.setDestinationEntity(123U);
    msg.arrival_time = 0.525117402194;
    msg.lat = 0.964224763931;
    msg.lon = 0.805980892519;
    msg.z = 0.134700550443;
    msg.z_units = 161U;
    msg.travel_z = 0.322238832326;
    msg.travel_z_units = 13U;
    msg.delayed = 140U;

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
    msg.setTimeStamp(0.376317244532);
    msg.setSource(13880U);
    msg.setSourceEntity(85U);
    msg.setDestination(14061U);
    msg.setDestinationEntity(79U);
    msg.arrival_time = 0.454252406184;
    msg.lat = 0.261028003903;
    msg.lon = 0.710331105586;
    msg.z = 0.396032635196;
    msg.z_units = 56U;
    msg.travel_z = 0.0509477953888;
    msg.travel_z_units = 69U;
    msg.delayed = 44U;

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
    msg.setTimeStamp(0.645859905367);
    msg.setSource(41831U);
    msg.setSourceEntity(83U);
    msg.setDestination(64682U);
    msg.setDestinationEntity(95U);
    msg.arrival_time = 0.795745725105;
    msg.lat = 0.836558311746;
    msg.lon = 0.28950546827;
    msg.z = 0.254431568306;
    msg.z_units = 174U;
    msg.travel_z = 0.315201489838;
    msg.travel_z_units = 140U;
    msg.delayed = 178U;

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
    msg.setTimeStamp(0.114365885274);
    msg.setSource(44349U);
    msg.setSourceEntity(27U);
    msg.setDestination(23562U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.964934399756;
    msg.lon = 0.510057084819;
    msg.z = 0.874027805776;
    msg.z_units = 253U;
    msg.speed = 0.635693375795;
    msg.speed_units = 123U;
    msg.bearing = 0.816083807638;
    msg.cross_angle = 0.587395543317;
    msg.width = 0.402947399955;
    msg.length = 0.211965953931;
    msg.coff = 53U;
    msg.angaperture = 0.857906780402;
    msg.range = 25942U;
    msg.overlap = 25U;
    msg.flags = 9U;
    msg.custom.assign("KBXCZOIPFRNIGOXSLZMOUJFLGXIASCAANWYQYDVWWHQEKDMZRTSXADNJDMSTEURUVHMMVKTEPHSQPLEGUUAUTFZBIHMEVVJDAPZIWXAJBWENDIXKTPBYVUVBKWHPOBRLZUYYVQW");

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
    msg.setTimeStamp(0.891124480591);
    msg.setSource(7026U);
    msg.setSourceEntity(203U);
    msg.setDestination(48118U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.202452139151;
    msg.lon = 0.0874428938881;
    msg.z = 0.323290860743;
    msg.z_units = 167U;
    msg.speed = 0.799117841481;
    msg.speed_units = 97U;
    msg.bearing = 0.634084513795;
    msg.cross_angle = 0.854787097616;
    msg.width = 0.906623033443;
    msg.length = 0.0694549359012;
    msg.coff = 153U;
    msg.angaperture = 0.405744454325;
    msg.range = 56810U;
    msg.overlap = 62U;
    msg.flags = 193U;
    msg.custom.assign("NRICFJEQLWXILWXNIHBMNOHIUTVODXMOCCGHTYMPZIXUIYDFCBMSZSDPWTGEYHMXEFUKPRDQHGGTRBMROXUEKABESVUNRJDRKQSGVOYGXMXBLROLTKJLWKVQ");

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
    msg.setTimeStamp(0.463958931079);
    msg.setSource(46144U);
    msg.setSourceEntity(7U);
    msg.setDestination(12944U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.301363101882;
    msg.lon = 0.963648379136;
    msg.z = 0.614000009587;
    msg.z_units = 147U;
    msg.speed = 0.0689657965318;
    msg.speed_units = 152U;
    msg.bearing = 0.0142277359714;
    msg.cross_angle = 0.0995949862972;
    msg.width = 0.0405142606772;
    msg.length = 0.330057670769;
    msg.coff = 18U;
    msg.angaperture = 0.212467319373;
    msg.range = 20224U;
    msg.overlap = 149U;
    msg.flags = 26U;
    msg.custom.assign("QZCRCPQRIZIISJECGLDW");

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
    msg.setTimeStamp(0.0153497942052);
    msg.setSource(59579U);
    msg.setSourceEntity(191U);
    msg.setDestination(30415U);
    msg.setDestinationEntity(222U);
    msg.timeout = 21441U;
    msg.lat = 0.339276049354;
    msg.lon = 0.380695174882;
    msg.z = 0.34060685001;
    msg.z_units = 29U;
    msg.speed = 0.801935886159;
    msg.speed_units = 143U;
    msg.syringe0 = 124U;
    msg.syringe1 = 10U;
    msg.syringe2 = 53U;
    msg.custom.assign("QHJWDDKOUCUVYYHOTJBHABLTRWHVWYNSACRSOYPGTLZCNMNECFEBQZMJVIZNXPR");

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
    msg.setTimeStamp(0.963827473485);
    msg.setSource(48502U);
    msg.setSourceEntity(131U);
    msg.setDestination(5920U);
    msg.setDestinationEntity(193U);
    msg.timeout = 59547U;
    msg.lat = 0.748458272676;
    msg.lon = 0.923063349844;
    msg.z = 0.450618441282;
    msg.z_units = 201U;
    msg.speed = 0.718734017966;
    msg.speed_units = 147U;
    msg.syringe0 = 158U;
    msg.syringe1 = 0U;
    msg.syringe2 = 126U;
    msg.custom.assign("LTTAVOXOZCXSOCECHJMPQDAPOQQIPMJKFMGZHCTEKBAYLGRBSZLKZISTVPJXBCEAVFMYVHKRPDZFUZHWOOKKYXXWXJLNGFICRNJHEAQB");

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
    msg.setTimeStamp(0.582705213869);
    msg.setSource(45429U);
    msg.setSourceEntity(32U);
    msg.setDestination(21791U);
    msg.setDestinationEntity(32U);
    msg.timeout = 26100U;
    msg.lat = 0.504189159783;
    msg.lon = 0.269419762164;
    msg.z = 0.213020200772;
    msg.z_units = 241U;
    msg.speed = 0.312725138746;
    msg.speed_units = 228U;
    msg.syringe0 = 165U;
    msg.syringe1 = 103U;
    msg.syringe2 = 205U;
    msg.custom.assign("ESRXQCTZFGHWIPCVHQYQJDICVJNOFNKFOBKXOMNNBNVCLKSNHTYHWJGHEXZCTDSXMGBGGKKLIFPRLIOSBUZXLYDYTJVQQHAWGPQUPAXYPQAIJEFAKOBPTJGTKXCCKVHYHKQOBRTRBZWJZALFBIS");

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
    msg.setTimeStamp(0.659959066161);
    msg.setSource(4965U);
    msg.setSourceEntity(195U);
    msg.setDestination(40168U);
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
    msg.setTimeStamp(0.806602202633);
    msg.setSource(47658U);
    msg.setSourceEntity(28U);
    msg.setDestination(40527U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.728474495425);
    msg.setSource(23119U);
    msg.setSourceEntity(15U);
    msg.setDestination(44837U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.487209041727);
    msg.setSource(64236U);
    msg.setSourceEntity(239U);
    msg.setDestination(788U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.830878379993;
    msg.lon = 0.0583919429414;
    msg.z = 0.625955010579;
    msg.z_units = 25U;
    msg.speed = 0.227093730733;
    msg.speed_units = 251U;
    msg.takeoff_pitch = 0.748313906651;
    msg.custom.assign("HEARVLZAOHXEDUIVMKGKSEEPZMSCPUIQMTAYQELCZIOKEXXMBHGOAXSLEGFUGOWTRXMHQVKKYOLQHIYFEIIAJABMTRXTNWHWUYVLDGWWKKSYLBVDATAFTYQJRXDVZGIDUSYPNZRCTGZWFNJBFJGTTBBOMYLMJPCBNULKKFWZSFWZJRPGBKQYEJADCNRHIDQCDSJJY");

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
    msg.setTimeStamp(0.548378359903);
    msg.setSource(53349U);
    msg.setSourceEntity(103U);
    msg.setDestination(9359U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.952133366019;
    msg.lon = 0.39891505572;
    msg.z = 0.665399581009;
    msg.z_units = 172U;
    msg.speed = 0.689861593206;
    msg.speed_units = 234U;
    msg.takeoff_pitch = 0.967933851361;
    msg.custom.assign("ZJIDMUEFLTITXGVFMCENCNITYFGHWBPXSSLPMNMGRVCWYTYKUWUSVWKEFCZEKXBXMNGYDOBEDWJGOPZVDDAJLVEAZNKQUIXLSMOQJQKAVJEXGZRDPGWOBHKCAZRAEFPOBDWLN");

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
    msg.setTimeStamp(0.718398408096);
    msg.setSource(56867U);
    msg.setSourceEntity(47U);
    msg.setDestination(61200U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.526331742099;
    msg.lon = 0.344426440479;
    msg.z = 0.156473573144;
    msg.z_units = 246U;
    msg.speed = 0.598313079021;
    msg.speed_units = 189U;
    msg.takeoff_pitch = 0.972204774565;
    msg.custom.assign("RVTDFJKWWSDEGGOFWOJACUGRGJAUPXIRIZPVHGJYONMQZNIHXMPJPAVKGMEPIDYYUSOIFLZULJQYECOATHQHQMDQOSZTCIQWZUFCFYYCEMQKWHYEKMYXBTNTFVLMPLRMUQNBTXDLGMKAHBJVXYRAHNKAWJVLIJLSFKDNUOSQZNOPXTSKJKGXIEGERWCBXUSDGRDUNOCRQSHXWZHVLBSFZDRBPEKFWEPVTRTZAEY");

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
    msg.setTimeStamp(0.36056211098);
    msg.setSource(7700U);
    msg.setSourceEntity(238U);
    msg.setDestination(61160U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.20253586283;
    msg.lon = 0.649889600997;
    msg.z = 0.20240679438;
    msg.z_units = 190U;
    msg.speed = 0.0219485556365;
    msg.speed_units = 57U;
    msg.abort_z = 0.105241777262;
    msg.bearing = 0.209199987034;
    msg.glide_slope = 33U;
    msg.glide_slope_alt = 0.54082173947;
    msg.custom.assign("VWUSQVZDTMDFCUFHEICBJWQAFZYBVMHNKAYRJUMBTJCLXJQUXGPACBVKFXCYZXSACJZKLZKEGZFPDSIDDZPTXUNRFKOPILTHTHYDGBSDZDTRFJKPOOXVWALFGMGBHEOQOSCFNJSYEQGXJTOKLSNWESBJWYTWAEPVYJBCMLIHRHLNHMVQZGYRUNSIMQGUOLRONYGOELDNUOVPRBTGAASQCVWNFEKDPQIWIHPYTXZ");

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
    msg.setTimeStamp(0.333112163547);
    msg.setSource(53521U);
    msg.setSourceEntity(102U);
    msg.setDestination(26752U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.021389379953;
    msg.lon = 0.842408323267;
    msg.z = 0.167631581672;
    msg.z_units = 189U;
    msg.speed = 0.360328335888;
    msg.speed_units = 4U;
    msg.abort_z = 0.819574986329;
    msg.bearing = 0.906496261218;
    msg.glide_slope = 131U;
    msg.glide_slope_alt = 0.753866781369;
    msg.custom.assign("FXAAOCWKIZICVVWJUQFAJLLI");

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
    msg.setTimeStamp(0.634489867488);
    msg.setSource(10241U);
    msg.setSourceEntity(111U);
    msg.setDestination(52551U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.955205834947;
    msg.lon = 0.430627912879;
    msg.z = 0.860088668277;
    msg.z_units = 164U;
    msg.speed = 0.926707337594;
    msg.speed_units = 1U;
    msg.abort_z = 0.768995717074;
    msg.bearing = 0.362350152968;
    msg.glide_slope = 29U;
    msg.glide_slope_alt = 0.735734954289;
    msg.custom.assign("FTAJVANFQKMRMGRXIGIRBLBVENTTHPFCXIMFIZAHIDRWVXFWHLQ");

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
    msg.setTimeStamp(0.758798525717);
    msg.setSource(4056U);
    msg.setSourceEntity(21U);
    msg.setDestination(62805U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.833764076283;
    msg.lon = 0.5240759895;
    msg.speed = 0.143715988179;
    msg.speed_units = 230U;
    msg.limits = 206U;
    msg.max_depth = 0.80867048579;
    msg.min_alt = 0.258466382918;
    msg.time_limit = 0.621262382197;
    msg.controller.assign("ZUDTSRBVZMYQHMKANYQOKEEMSYABPQKDPFQNXTRZWKZFHBJLFOQCDRISGCGEUMTJUGEIXILFHPDMRNEGBZDJICRLLJNXPJWTZPRUDKSAGV");
    msg.custom.assign("UNZQBMKDTMTVRAHJQCUFHQCGAFIAOFRSLNMBIDXVLIGKIHJBGNLUBSJOOXJDMKUCNWKEXKMSOUTYKY");

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
    msg.setTimeStamp(0.911796104405);
    msg.setSource(59070U);
    msg.setSourceEntity(39U);
    msg.setDestination(44808U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.159121533277;
    msg.lon = 0.518657750863;
    msg.speed = 0.459548508677;
    msg.speed_units = 35U;
    msg.limits = 188U;
    msg.max_depth = 0.840243332068;
    msg.min_alt = 0.0154123703587;
    msg.time_limit = 0.277908377107;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.908460205657;
    tmp_msg_0.lon = 0.183631235195;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("JOKRYLWEHRAOCJXGSXMILZTPZUVFSFUDXHVSGEYRUSZJCWQSABUEUITVNQEDMAKMVHFGCGACPNOWIBKPRYJGWJXLBBHDYWFWYM");
    msg.custom.assign("HOIXEUBTDJSVRELSCICZSHLFQLYMCQGPBEKVSQZNXJCUAPUAGPATZKRVWSCRBBWAQYWXZGOUMNWJGGQVOLRPFMFLXHIDTYTSTYVNAWNHTSARKNCHPKJYRDOLKYTEKIOZXOAZVXQZWQVKAIGMEKGFIWIOCFJIXNKBNRMXUOBJEYPYKVWTPZJBIMFQHUNHVGVFUWFECDYDM");

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
    msg.setTimeStamp(0.183892911786);
    msg.setSource(30860U);
    msg.setSourceEntity(74U);
    msg.setDestination(33094U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.619145960717;
    msg.lon = 0.05812863686;
    msg.speed = 0.383540934249;
    msg.speed_units = 93U;
    msg.limits = 31U;
    msg.max_depth = 0.235971074997;
    msg.min_alt = 0.200936227048;
    msg.time_limit = 0.0384515586958;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.591680823521;
    tmp_msg_0.lon = 0.0655851614032;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("HGEVOJSIBYXNYSDOZCAURLXPUZWWCHMDYFDCFCEBZFRTDEVSKWMRBNQBTEKWZRKQRKQSBSZVPHLYIADLUECVHEPLJQIGGEXYKAVRITHZNJJSNVUNLOARRJKXKMXHYGUYEDZJOFBYWCTNOJSALYUVACECGOOQUZXWKXS");
    msg.custom.assign("XVCQOSIJZKEKJDGYCKTAOPQVZWLFDUYAI");

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
    msg.setTimeStamp(0.981665798224);
    msg.setSource(39002U);
    msg.setSourceEntity(234U);
    msg.setDestination(41364U);
    msg.setDestinationEntity(222U);
    msg.target.assign("UBGMXUYESYASVRBQBMXYNFYCXXIOXWECWZTVDQEIVLKQWVDOMMRLYNEXZTOGGBTMIXJCFOLOVHZ");
    msg.max_speed = 0.903224996838;
    msg.speed_units = 194U;
    msg.lat = 0.324358905429;
    msg.lon = 0.655750399037;
    msg.z = 0.650117527552;
    msg.z_units = 185U;
    msg.custom.assign("YFJUTIWVAWPXBKVOCIVLBTLDTXZCRRFINBYNFKBFIBGSBW");

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
    msg.setTimeStamp(0.433986011256);
    msg.setSource(11782U);
    msg.setSourceEntity(115U);
    msg.setDestination(27230U);
    msg.setDestinationEntity(19U);
    msg.target.assign("UUHHWXVASHDWKYLEZM");
    msg.max_speed = 0.0795447929913;
    msg.speed_units = 199U;
    msg.lat = 0.11097572869;
    msg.lon = 0.0603806606154;
    msg.z = 0.0135875428771;
    msg.z_units = 25U;
    msg.custom.assign("KLYXMNVOGWXDWBSIPVIUHMKOAWFMGAUNEXSIGTEZSATGHTEDYOTFPZCUCVQMPYJVRVNBUFRBIJOGVNXIALXZKSDWSBCDTTKAJWWJZMNCULPESKJTFVLQHLUHLYYWNHLGEYTXRRHHZATZDYAQRRWQJGHOZBKOJKRBVJLMBYOFGUKKPVMECAPBUELIBNQHXITFNCQUWPDEHAOE");

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
    msg.setTimeStamp(0.0279523172725);
    msg.setSource(13796U);
    msg.setSourceEntity(66U);
    msg.setDestination(35152U);
    msg.setDestinationEntity(168U);
    msg.target.assign("YITYSREOBJTHUPZXTZKXNKVRSFDMTDRAUDHUSMFBLRXXSTNVEPEAJFEJKFVVGBQCMBKKOGMGYAMCJIDOQPRQIDLGHBLZVOTPDBZHEXZCWZACO");
    msg.max_speed = 0.330058674843;
    msg.speed_units = 65U;
    msg.lat = 0.44773042344;
    msg.lon = 0.157194061838;
    msg.z = 0.18917406713;
    msg.z_units = 221U;
    msg.custom.assign("WQEBCWVORYBMNFOAONXOUPHBLYMCCLTKSAKDUVCQDEWNIZQPHKUKWWZOIPHXJVYDQGLLFMSS");

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
    msg.setTimeStamp(0.961961152471);
    msg.setSource(2840U);
    msg.setSourceEntity(100U);
    msg.setDestination(62114U);
    msg.setDestinationEntity(158U);
    msg.timeout = 11666U;
    msg.lat = 0.101762553948;
    msg.lon = 0.737306690589;
    msg.speed = 0.785089892395;
    msg.speed_units = 92U;
    msg.custom.assign("ULLRCDMUHJCCEDRUQQGZBEULOLMTVPSEBXRYPMMQYJIRIASTJUMKKA");

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
    msg.setTimeStamp(0.438124709159);
    msg.setSource(7173U);
    msg.setSourceEntity(106U);
    msg.setDestination(47211U);
    msg.setDestinationEntity(50U);
    msg.timeout = 31468U;
    msg.lat = 0.584483824268;
    msg.lon = 0.314761570247;
    msg.speed = 0.840899815641;
    msg.speed_units = 198U;
    msg.custom.assign("MDILCVULRZTTTROHOGHSGYFQNOUWJWFWHYYOYGVKWYIZLFSRPJXXZAOJWSLKARJNXNCJCGDVMHABDKBQJWVFXTLGEXOFPADUYLFSEOPCAZZQZHISMSPRCNINNOAYHQXFKBGWMWUEVWTKTUPXUBPGYLEKTEAVZKDZUPIVEUIUMATYE");

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
    msg.setTimeStamp(0.145769212037);
    msg.setSource(28780U);
    msg.setSourceEntity(220U);
    msg.setDestination(37110U);
    msg.setDestinationEntity(238U);
    msg.timeout = 18476U;
    msg.lat = 0.59387895828;
    msg.lon = 0.0491135495953;
    msg.speed = 0.277205904071;
    msg.speed_units = 0U;
    msg.custom.assign("XUHLBKYWFHVELZAHTFOUHZZYQABCCCPVYDCRIMNHIUJNWSWVZUQJWGHSJFSSRRNILKBBEQPYSEVGWFMEQDMOVZDHDRNYCXUVFRIODKFXRTRELXMGYBLQJAOASCJNNVGT");

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
    msg.setTimeStamp(0.76751303164);
    msg.setSource(19138U);
    msg.setSourceEntity(78U);
    msg.setDestination(28400U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.150955289412;
    msg.lon = 0.0580801249748;
    msg.z = 0.63776739274;
    msg.z_units = 195U;
    msg.radius = 0.593958797591;
    msg.duration = 44667U;
    msg.speed = 0.521997383549;
    msg.speed_units = 168U;
    msg.popup_period = 44115U;
    msg.popup_duration = 64935U;
    msg.flags = 105U;
    msg.custom.assign("ZZDUFDNABLSBSUXXRMXFTQHAJZIQTLQVYYLKHYADPUIRFIUEVHSNMPZFWRVMFZMIMCOWNTVNFVQZDCFRQSYAUULYZQAKCGMJCJGGDWXDJHSEDYRCAQSSHDSRVQPKGSCYGALGWKJWBLACMHEEIVCQTYLKBJJORXPKEVOPONZHOXYWWWETXAVVOGGZUIJNGMRJXTCOPWUEKMDNMPPXRNKIBLHZUJBPITKTDLQBNFHEOBTNGU");

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
    msg.setTimeStamp(0.170175312865);
    msg.setSource(19556U);
    msg.setSourceEntity(181U);
    msg.setDestination(8622U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.077046708493;
    msg.lon = 0.5955913528;
    msg.z = 0.37336184256;
    msg.z_units = 2U;
    msg.radius = 0.29624811987;
    msg.duration = 23549U;
    msg.speed = 0.935719378905;
    msg.speed_units = 135U;
    msg.popup_period = 17773U;
    msg.popup_duration = 18433U;
    msg.flags = 79U;
    msg.custom.assign("WDDVPVBBZQC");

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
    msg.setTimeStamp(0.482200749421);
    msg.setSource(38800U);
    msg.setSourceEntity(178U);
    msg.setDestination(30748U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.66323129097;
    msg.lon = 0.522135697148;
    msg.z = 0.876350706356;
    msg.z_units = 187U;
    msg.radius = 0.630573928423;
    msg.duration = 53559U;
    msg.speed = 0.92909978702;
    msg.speed_units = 60U;
    msg.popup_period = 12406U;
    msg.popup_duration = 35593U;
    msg.flags = 35U;
    msg.custom.assign("TDNKJNCXHPELZJZWEUHZZHUQLSQTRRKPXGRJCWOAXAHMPBDFVIPLJEOQCTQSZMUSOGDNESVLHAIKKAWYRBEMEAKIISNLEBXZURNMUWEQGXMSUNUZRHPJFQLCNJCBVYVJABITAXPZIWGDSGKOGMLNFBFLQVWCYHKWBDSHDTXCCMLXFSXAWNGHIPJRVRDNYZQVPMYFJORJURVESDKFGOMVMLTBHXVKTBIOPCDZTPOOFGEBUGWDY");

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
    msg.setTimeStamp(0.27347014907);
    msg.setSource(18961U);
    msg.setSourceEntity(64U);
    msg.setDestination(63126U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.135944174759);
    msg.setSource(19815U);
    msg.setSourceEntity(131U);
    msg.setDestination(50094U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.747695543873);
    msg.setSource(28575U);
    msg.setSourceEntity(130U);
    msg.setDestination(33437U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.350198215307);
    msg.setSource(10367U);
    msg.setSourceEntity(165U);
    msg.setDestination(25869U);
    msg.setDestinationEntity(72U);
    msg.timeout = 38120U;
    msg.lat = 0.365104820861;
    msg.lon = 0.565301833374;
    msg.z = 0.328407318849;
    msg.z_units = 102U;
    msg.speed = 0.380157458106;
    msg.speed_units = 237U;
    msg.bearing = 0.747497021711;
    msg.width = 0.304394462532;
    msg.direction = 76U;
    msg.custom.assign("DVWFMQIDVOZOYDBSXQQJWZCEFNVBTCEBLCJLQENBNGDTXJHJGCQHS");

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
    msg.setTimeStamp(0.780868749232);
    msg.setSource(53504U);
    msg.setSourceEntity(249U);
    msg.setDestination(9873U);
    msg.setDestinationEntity(83U);
    msg.timeout = 31203U;
    msg.lat = 0.801447588663;
    msg.lon = 0.181342430725;
    msg.z = 0.815053467983;
    msg.z_units = 176U;
    msg.speed = 0.309535723854;
    msg.speed_units = 8U;
    msg.bearing = 0.231286550456;
    msg.width = 0.961255186037;
    msg.direction = 180U;
    msg.custom.assign("XNJADKROMHSICMZPEEOQDVNCGDCANFTVSTUT");

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
    msg.setTimeStamp(0.806504466931);
    msg.setSource(4596U);
    msg.setSourceEntity(130U);
    msg.setDestination(28451U);
    msg.setDestinationEntity(141U);
    msg.timeout = 29985U;
    msg.lat = 0.295270039199;
    msg.lon = 0.0282188956127;
    msg.z = 0.0685616663452;
    msg.z_units = 228U;
    msg.speed = 0.440628974798;
    msg.speed_units = 254U;
    msg.bearing = 0.0611565918751;
    msg.width = 0.522069829231;
    msg.direction = 94U;
    msg.custom.assign("OHXMUYOZQHRQLSHVQMNJWNXCVMWGGYKBECOSBVBYFXPRHHQQNVPPHXJBYNJNRWZQILUBKEJCTTPSQLEIHGZKXSWTTMX");

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
    msg.setTimeStamp(0.331576875487);
    msg.setSource(22391U);
    msg.setSourceEntity(235U);
    msg.setDestination(60922U);
    msg.setDestinationEntity(157U);
    msg.op_mode = 152U;
    msg.error_count = 138U;
    msg.error_ents.assign("IJIYDFGPUWHABYUXQGBCDJNNXDHHAIXGVOOIJYLTUJYRROCQAXSKEFRGMVFUCTKKSGPMISEWUVYVRWJZPONSEMVACEWQPGBTULFTKTCGWNMUHLBJLMVKXHXCHQVOTEKAJZVKSABBCFRHRKVGHKURFTPWSOQPDIGQMKZQOCBZMBRAXIZDFUNLQQXSPGDXADHZRCPNLMSZWIELJOSTDMNPYVFAEDEBLNBOTEYIHWWXFTPASJZYZEOYLZFWCRNNJL");
    msg.maneuver_type = 40702U;
    msg.maneuver_stime = 0.106258878105;
    msg.maneuver_eta = 22620U;
    msg.control_loops = 2244700959U;
    msg.flags = 40U;
    msg.last_error.assign("MGVJVKKPPEIVAYZAHPRFHSBRZBXXJHDSNCGOBKGDRRUOIWZXVNBCBIWASQFZUAWGTNOEKIMJCGVOCTY");
    msg.last_error_time = 0.640956733866;

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
    msg.setTimeStamp(0.740039680788);
    msg.setSource(7880U);
    msg.setSourceEntity(228U);
    msg.setDestination(51986U);
    msg.setDestinationEntity(213U);
    msg.op_mode = 20U;
    msg.error_count = 103U;
    msg.error_ents.assign("OKXVRJUMELPBBKIOQKTSQPWEBMOPYDCTDHIICOOCVRHIQUOXAQBINICRJIVFJKYXVCZAPVWSDCPUTDUGMHPOZHSOWTFEJXNUFKGHYZKJYWVVCNZWTHELMHJEYFVRLSBWKRCYMXALFZXAIQABXOPWDDRWJEQTNVESMXUGHWEYFDRYNZBKZNBFXTYQYLSUDMAGKUHWHJBXRNPSZAZJMLNMFQLTAGLENJQSNCGSV");
    msg.maneuver_type = 37068U;
    msg.maneuver_stime = 0.514266246519;
    msg.maneuver_eta = 13107U;
    msg.control_loops = 2593858370U;
    msg.flags = 54U;
    msg.last_error.assign("PQCUCHFYXFYVBBGEKLUJSJOBJRVTQORNFYCXQVMVRCIIETBKVOLZWMZWRADOGTMJPBSRBPGBXOHPHXHKPWXQYIGRNHVCJMOZLWXYPYQTTLCCDWGQXBWHMSIAVZJKULKUNADGFMTECVLIZCKOURSSSKTFDKTNNAXINYNPWIJRVTUFMNDKMGAPEWJRDYMOLKWLXRZUNGDVAEFTINPQLBFMQUEAGZHZDZAYDGSSEXEYWEHHOLAFBHSO");
    msg.last_error_time = 0.0560758261312;

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
    msg.setTimeStamp(0.440012265953);
    msg.setSource(10618U);
    msg.setSourceEntity(61U);
    msg.setDestination(48897U);
    msg.setDestinationEntity(218U);
    msg.op_mode = 49U;
    msg.error_count = 81U;
    msg.error_ents.assign("QYEOKJXUZMFZCMIJCXMEEHBYIKJSLFRGKMDGQVFDTFWHKMUSLGDVLYDXBXOBVFRHBVUFYLQFQLBHZAORZRUIPGDERUJMYHGEWTMAADBZVHVRPNHGO");
    msg.maneuver_type = 62668U;
    msg.maneuver_stime = 0.0463547253271;
    msg.maneuver_eta = 19247U;
    msg.control_loops = 1399515461U;
    msg.flags = 174U;
    msg.last_error.assign("FBYPWAZBCKMCJHEFCHMRTHKNZZYAVZLBGWWRLJJRADAWJSIWADIQDFGWHMUXIBVDSYPOGLVUOLX");
    msg.last_error_time = 0.175373683619;

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
    msg.setTimeStamp(0.0398395756543);
    msg.setSource(61911U);
    msg.setSourceEntity(10U);
    msg.setDestination(5518U);
    msg.setDestinationEntity(194U);
    msg.type = 31U;
    msg.request_id = 56876U;
    msg.command = 137U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.319852797656;
    tmp_msg_0.lon = 0.0557486928324;
    tmp_msg_0.z = 0.131672374528;
    tmp_msg_0.z_units = 125U;
    tmp_msg_0.speed = 0.668033968622;
    tmp_msg_0.speed_units = 247U;
    tmp_msg_0.takeoff_pitch = 0.962290430542;
    tmp_msg_0.custom.assign("NJSSTMRVNFQSMTEHSUOVVAQIHGJMEKPL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 27757U;
    msg.info.assign("BWUQUDTMDHZVCYTSYPVIOLZFGRAVYPXBAMHNMCZRYNQYHEMLCDPQOAJHDECS");

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
    msg.setTimeStamp(0.419164983826);
    msg.setSource(6314U);
    msg.setSourceEntity(211U);
    msg.setDestination(3633U);
    msg.setDestinationEntity(82U);
    msg.type = 230U;
    msg.request_id = 25523U;
    msg.command = 241U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 36162U;
    tmp_msg_0.rpm = 0.607448496874;
    tmp_msg_0.direction = 241U;
    tmp_msg_0.custom.assign("UWDNXNARWWDMHEROOYPGHXHBEOZVPYVXUORKTJRXXZRNSZMQBINYVOQMTSSKQOUXJYQWXXURPLROKFPQEZTLKCDALKCFBYLPQZKVCCIJVRVYJTWSTANMWQDCWHHTGBNUTFZBSSBHAFXMRIEIIINXSYCDGVSYTYKEILAAJNVJBUZKDKDDGCGPWUEVIJJOCJTASBFBYGQUUHFE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 45640U;
    msg.info.assign("ZMWXTIIXVXXZQTFDKPWPCVUBDGUDWFKCOJHJBAKUBHTCGGNRRHJYWIYPHYVKQJGDCQNCNWEXZPNAFZYMEMITUMSPKUJOWOLTBRABOYUSLMPIQEPIHJZHFGCZOKGJSDGXRXDATTSIJSVNFJNUOQFGXQAICZLSPTEVNOJKROMGAQOBLYCBZKRAVQSKYENCPVFRDZRQEIHYEFEVYWWUV");

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
    msg.setTimeStamp(0.299663553805);
    msg.setSource(56695U);
    msg.setSourceEntity(203U);
    msg.setDestination(19744U);
    msg.setDestinationEntity(69U);
    msg.type = 252U;
    msg.request_id = 51334U;
    msg.command = 252U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 20099U;
    tmp_msg_0.lat = 0.218462188792;
    tmp_msg_0.lon = 0.766228507566;
    tmp_msg_0.z = 0.175125397466;
    tmp_msg_0.z_units = 194U;
    tmp_msg_0.speed = 0.614605216243;
    tmp_msg_0.speed_units = 24U;
    tmp_msg_0.bearing = 0.320639550305;
    tmp_msg_0.cross_angle = 0.717507214198;
    tmp_msg_0.width = 0.284262249158;
    tmp_msg_0.length = 0.887368231872;
    tmp_msg_0.hstep = 0.605926117882;
    tmp_msg_0.coff = 235U;
    tmp_msg_0.alternation = 174U;
    tmp_msg_0.flags = 126U;
    tmp_msg_0.custom.assign("DWQIFJFEUWULOJZYVTRWARITFVFNRDCBCPZUHJBOLQMDSBVOAPAPYNQOPTLVLKHTHSSNYWHXDGQTNOPUONQYSKBRZBA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 24292U;
    msg.info.assign("ZMRPUZVXSFCIMZQFFWXQIHMSRLUARUQABAZTRGMSCLFOPLQBPEKEBKYWXPDTTSGZZZSNPVHDLELVK");

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
    msg.setTimeStamp(0.25395146038);
    msg.setSource(5848U);
    msg.setSourceEntity(148U);
    msg.setDestination(46837U);
    msg.setDestinationEntity(220U);
    msg.command = 113U;
    msg.entities.assign("PUSOIAYMIDGLBREHQQJSXEFDYFVYKMAHRJJMHPXOWYILFKLROGYEYPFNSMRTAMDAKBLIZJBHNCJVMOTXQFSRWPXTRFSCAEAPPKUJBQETVGCWXSHGRLFVKBWIWDNAQUGIUYBUNCHTNYPZITZLLZSIXDOCCHUCBRDDBVBRTQMWNOZQIPJYVOVHEEDDDZPWVMHUAPNNUFIOQNMRTXGUEKEVZMLWALKLNBQKFTXS");

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
    msg.setTimeStamp(0.344809975195);
    msg.setSource(37163U);
    msg.setSourceEntity(215U);
    msg.setDestination(28831U);
    msg.setDestinationEntity(241U);
    msg.command = 206U;
    msg.entities.assign("VJBRWWZLQLSHBFAP");

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
    msg.setTimeStamp(0.301248793504);
    msg.setSource(19234U);
    msg.setSourceEntity(160U);
    msg.setDestination(42195U);
    msg.setDestinationEntity(122U);
    msg.command = 88U;
    msg.entities.assign("LTVLTCVKBUNZVJRIMRVYOOKKXELJTMYNMPAFVJELVCSAQMPWUIFDCBUJLDEIFAFAHAEMKWZCZJYXIZMMBFFOWVFUMPESPZJMGIMBIHTGVFRIYWNGGLSVSNXCELHQZAWROSHAKJUGESCHRYWXNYJTKZLPBGDHHUFOEIAUPZNGQXXTQKOQDUULKSFATRWSXOYQH");

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
    msg.setTimeStamp(0.757706389446);
    msg.setSource(39570U);
    msg.setSourceEntity(221U);
    msg.setDestination(52131U);
    msg.setDestinationEntity(185U);
    msg.mcount = 73U;
    msg.mnames.assign("VJYAANAVJASNPFYTUJBBVTEYRIUQIUBHVHLHVUFTAGZDCKHWLXXLPYIBRUMTLGGMJDNSPCHACMFGEPCTRHOEUWICNR");
    msg.ecount = 216U;
    msg.enames.assign("EMNLRHGRFQBEAZVKGHFGYETFJPLSDJWTKLZGXCIGTIOBOVNLZAJKZIYCOYUIKYVVBPNJMKXKQFUXLGSUHCCINWONQLHAJKTEJCXRPIYHNQQBMFWVLPOQHRASEOZZDDJWDDYXTZAXFJBMNDVMQOJAFWCTKYNMJRMUAVDUQOHTGABHRNQFPTPEPRCKKVQGOWABZZYUWDESIHETXZ");
    msg.ccount = 240U;
    msg.cnames.assign("SXHNLVBAWLDVNEGSGJMRO");
    msg.last_error.assign("BYEUEYSNORRTMCZMIOPFCHYNUOCBYRKTTZLQZDDSOD");
    msg.last_error_time = 0.520552675182;

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
    msg.setTimeStamp(0.726187354573);
    msg.setSource(38345U);
    msg.setSourceEntity(77U);
    msg.setDestination(43358U);
    msg.setDestinationEntity(160U);
    msg.mcount = 164U;
    msg.mnames.assign("AMFSLXXLDEYGRRHAOPQJFKTPAPVRTFQKDYNHMEKZUVXOTIVCKLANBPTCVMSLKFBMZNBRPDKPCRT");
    msg.ecount = 110U;
    msg.enames.assign("PBKRGVYAIPQQXTGCOTRQWKLSFUUKDROQOFPHZJYKMLADCHXHWZBBUENXZEVQKMTFYPTWGLDDEFXUDEZJIPZ");
    msg.ccount = 136U;
    msg.cnames.assign("JXGBTYEPSUTDFGYKGLNEDTLZOSVZFETGCCUIPETZQFLFACNYLLA");
    msg.last_error.assign("XBVEVGSPPKABWJTKCHOJDWCUTQTXMHPNOSUVLIAZCPTTUZEUXSZERIODVKNZMDQLOFAHISJMQFXJZGHCDSQDW");
    msg.last_error_time = 0.0853211827255;

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
    msg.setTimeStamp(0.98357021696);
    msg.setSource(45222U);
    msg.setSourceEntity(116U);
    msg.setDestination(24876U);
    msg.setDestinationEntity(137U);
    msg.mcount = 34U;
    msg.mnames.assign("HEAHITBFGBDIXHJKEDRZYMOIXGXZZXDPAKUMOLEQHEBGCLFACPKRBGVSMARGFGCURCQDSJTEGJYCXIVVZGJITURBCWKNXPWCONAKKZIYIPVFBUBAMJSCYFRNDTHSGMVUNST");
    msg.ecount = 87U;
    msg.enames.assign("PLEMNHVBPEPXJODCNTAWBHNZTPBJGAIIFXAFRORWCCGYANRRQOUSTCUJJVLHLHOCANVFFWBYPNUCGAKGSGYWZDUGMIELXORHWIVFGEKHCSSIAVRGEJEQBADWQDWOJJCOJRQUNEVUWTSHEKAXZZXRBMHHZSLDJKYLNCXKISTIQODQRQAKKEXGLSYQPPTUBCOZIMPOVTWQMYDDTXBIMNFFZVELUIWFYSMFHUYVDXFPMBMMBRNJU");
    msg.ccount = 109U;
    msg.cnames.assign("CWLPEDLXVUYZMONTCDDIXFDTULNADTSRKTVEWDPFVNCPKVZNRSFYRNRK");
    msg.last_error.assign("AEABSEWHFFHBDJQCCBTUIDIKWHZIOREJLSRTZRQPQRFUDRFXAOOAHTIIHYLNOBUGOBVBIXNJBLGTLYJMPUWNMTQGOCEOPDTMZJLKFI");
    msg.last_error_time = 0.362329030684;

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
    msg.setTimeStamp(0.300791926479);
    msg.setSource(14364U);
    msg.setSourceEntity(42U);
    msg.setDestination(6704U);
    msg.setDestinationEntity(26U);
    msg.mask = 72U;
    msg.max_depth = 0.707125245939;
    msg.min_altitude = 0.693685613067;
    msg.max_altitude = 0.711004614047;
    msg.min_speed = 0.908207154571;
    msg.max_speed = 0.00803471105142;
    msg.max_vrate = 0.0846796697574;
    msg.lat = 0.297617239626;
    msg.lon = 0.396021493051;
    msg.orientation = 0.261771126826;
    msg.width = 0.349313470857;
    msg.length = 0.688288065499;

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
    msg.setTimeStamp(0.455396681684);
    msg.setSource(46824U);
    msg.setSourceEntity(200U);
    msg.setDestination(35372U);
    msg.setDestinationEntity(121U);
    msg.mask = 164U;
    msg.max_depth = 0.615109688465;
    msg.min_altitude = 0.561159370655;
    msg.max_altitude = 0.00572873446698;
    msg.min_speed = 0.103298134604;
    msg.max_speed = 0.068469651973;
    msg.max_vrate = 0.496776141518;
    msg.lat = 0.0201130346951;
    msg.lon = 0.0330755468902;
    msg.orientation = 0.408510654965;
    msg.width = 0.218724085205;
    msg.length = 0.918363637252;

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
    msg.setTimeStamp(0.53829251034);
    msg.setSource(56178U);
    msg.setSourceEntity(209U);
    msg.setDestination(17350U);
    msg.setDestinationEntity(10U);
    msg.mask = 195U;
    msg.max_depth = 0.660328098355;
    msg.min_altitude = 0.407854959215;
    msg.max_altitude = 0.519806548818;
    msg.min_speed = 0.846454780364;
    msg.max_speed = 0.413016325395;
    msg.max_vrate = 0.381199702421;
    msg.lat = 0.104554886178;
    msg.lon = 0.404117704151;
    msg.orientation = 0.0886786872481;
    msg.width = 0.797386129034;
    msg.length = 0.0264321345301;

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
    msg.setTimeStamp(0.245491553175);
    msg.setSource(43469U);
    msg.setSourceEntity(129U);
    msg.setDestination(39964U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.605766329128);
    msg.setSource(31628U);
    msg.setSourceEntity(217U);
    msg.setDestination(25316U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.720202233496);
    msg.setSource(32091U);
    msg.setSourceEntity(210U);
    msg.setDestination(36082U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.648730311014);
    msg.setSource(8016U);
    msg.setSourceEntity(150U);
    msg.setDestination(42454U);
    msg.setDestinationEntity(141U);
    msg.duration = 17611U;

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
    msg.setTimeStamp(0.699370426403);
    msg.setSource(50994U);
    msg.setSourceEntity(74U);
    msg.setDestination(38959U);
    msg.setDestinationEntity(4U);
    msg.duration = 18589U;

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
    msg.setTimeStamp(0.599877521717);
    msg.setSource(17750U);
    msg.setSourceEntity(171U);
    msg.setDestination(9642U);
    msg.setDestinationEntity(164U);
    msg.duration = 26353U;

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
    msg.setTimeStamp(0.236514683104);
    msg.setSource(27660U);
    msg.setSourceEntity(122U);
    msg.setDestination(19513U);
    msg.setDestinationEntity(77U);
    msg.enable = 104U;
    msg.mask = 1695712138U;
    msg.scope_ref = 594487350U;

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
    msg.setTimeStamp(0.31261188104);
    msg.setSource(1503U);
    msg.setSourceEntity(69U);
    msg.setDestination(17636U);
    msg.setDestinationEntity(233U);
    msg.enable = 18U;
    msg.mask = 1807200436U;
    msg.scope_ref = 4147326473U;

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
    msg.setTimeStamp(0.222633222329);
    msg.setSource(47973U);
    msg.setSourceEntity(165U);
    msg.setDestination(43244U);
    msg.setDestinationEntity(66U);
    msg.enable = 84U;
    msg.mask = 678392531U;
    msg.scope_ref = 3530751435U;

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
    msg.setTimeStamp(0.282136620413);
    msg.setSource(60037U);
    msg.setSourceEntity(17U);
    msg.setDestination(54370U);
    msg.setDestinationEntity(130U);
    msg.medium = 219U;

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
    msg.setTimeStamp(0.811130174831);
    msg.setSource(9462U);
    msg.setSourceEntity(252U);
    msg.setDestination(22782U);
    msg.setDestinationEntity(219U);
    msg.medium = 8U;

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
    msg.setTimeStamp(0.996414222026);
    msg.setSource(47074U);
    msg.setSourceEntity(29U);
    msg.setDestination(2156U);
    msg.setDestinationEntity(209U);
    msg.medium = 110U;

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
    msg.setTimeStamp(0.877466486383);
    msg.setSource(9738U);
    msg.setSourceEntity(59U);
    msg.setDestination(13833U);
    msg.setDestinationEntity(220U);
    msg.value = 0.0570764259673;
    msg.type = 178U;

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
    msg.setTimeStamp(0.277560688357);
    msg.setSource(15813U);
    msg.setSourceEntity(52U);
    msg.setDestination(64447U);
    msg.setDestinationEntity(33U);
    msg.value = 0.634377064528;
    msg.type = 145U;

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
    msg.setTimeStamp(0.3790030668);
    msg.setSource(6371U);
    msg.setSourceEntity(171U);
    msg.setDestination(15422U);
    msg.setDestinationEntity(22U);
    msg.value = 0.351560748998;
    msg.type = 6U;

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
    msg.setTimeStamp(0.251703822492);
    msg.setSource(7878U);
    msg.setSourceEntity(167U);
    msg.setDestination(31953U);
    msg.setDestinationEntity(202U);
    msg.possimerr = 0.901459141016;
    msg.converg = 0.538180047569;
    msg.turbulence = 0.674229435363;
    msg.possimmon = 109U;
    msg.commmon = 247U;
    msg.convergmon = 227U;

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
    msg.setTimeStamp(0.797368387763);
    msg.setSource(24871U);
    msg.setSourceEntity(218U);
    msg.setDestination(62086U);
    msg.setDestinationEntity(45U);
    msg.possimerr = 0.516386833338;
    msg.converg = 0.618942115552;
    msg.turbulence = 0.273030819399;
    msg.possimmon = 113U;
    msg.commmon = 111U;
    msg.convergmon = 12U;

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
    msg.setTimeStamp(0.339514219807);
    msg.setSource(36840U);
    msg.setSourceEntity(9U);
    msg.setDestination(37924U);
    msg.setDestinationEntity(143U);
    msg.possimerr = 0.818365196639;
    msg.converg = 0.872514234884;
    msg.turbulence = 0.150480941901;
    msg.possimmon = 64U;
    msg.commmon = 9U;
    msg.convergmon = 66U;

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
    msg.setTimeStamp(0.408784345585);
    msg.setSource(29820U);
    msg.setSourceEntity(193U);
    msg.setDestination(42344U);
    msg.setDestinationEntity(120U);
    msg.autonomy = 244U;
    msg.mode.assign("TWFEJDOFUXFBOWSYFCMPYPXUMEGLQZHCHDZQKGULKNJSVJIXLNGGKKPRIYAJWNIRBJXSNMAEHMWZ");

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
    msg.setTimeStamp(0.758549296052);
    msg.setSource(62981U);
    msg.setSourceEntity(18U);
    msg.setDestination(56255U);
    msg.setDestinationEntity(198U);
    msg.autonomy = 77U;
    msg.mode.assign("KLSOVFIPFRSSCWLPXYUWELVOZTM");

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
    msg.setTimeStamp(0.815291074927);
    msg.setSource(43708U);
    msg.setSourceEntity(247U);
    msg.setDestination(62788U);
    msg.setDestinationEntity(52U);
    msg.autonomy = 1U;
    msg.mode.assign("GTAVDNQZECYEWRTYESXZZNNOQFXCHQTXGRKWGWGKNPLWPYJJTJAV");

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
    msg.setTimeStamp(0.0492544010194);
    msg.setSource(50825U);
    msg.setSourceEntity(132U);
    msg.setDestination(3961U);
    msg.setDestinationEntity(84U);
    msg.type = 89U;
    msg.op = 222U;
    msg.possimerr = 0.486441891241;
    msg.converg = 0.159652717035;
    msg.turbulence = 0.960375043195;
    msg.possimmon = 71U;
    msg.commmon = 208U;
    msg.convergmon = 68U;

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
    msg.setTimeStamp(0.0441893647113);
    msg.setSource(46273U);
    msg.setSourceEntity(63U);
    msg.setDestination(23313U);
    msg.setDestinationEntity(158U);
    msg.type = 47U;
    msg.op = 131U;
    msg.possimerr = 0.985160976725;
    msg.converg = 0.230604853505;
    msg.turbulence = 0.358428194647;
    msg.possimmon = 87U;
    msg.commmon = 98U;
    msg.convergmon = 252U;

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
    msg.setTimeStamp(0.536277689398);
    msg.setSource(48385U);
    msg.setSourceEntity(231U);
    msg.setDestination(46378U);
    msg.setDestinationEntity(86U);
    msg.type = 93U;
    msg.op = 55U;
    msg.possimerr = 0.918618856298;
    msg.converg = 0.678847834513;
    msg.turbulence = 0.310391277123;
    msg.possimmon = 246U;
    msg.commmon = 154U;
    msg.convergmon = 192U;

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
    msg.setTimeStamp(0.42886077419);
    msg.setSource(60955U);
    msg.setSourceEntity(7U);
    msg.setDestination(19115U);
    msg.setDestinationEntity(30U);
    msg.op = 90U;
    msg.comm_interface = 211U;
    msg.period = 12076U;
    msg.sys_dst.assign("QANXLAOUCYBJTWLKNFEMGHCYPAJFNRZMYUZPGAEHKPPWFXIHYRBLOLTIENAWAYWUHDMPVVXEOEVSQXOTZAUTSQRMBTJNIVYEHZATYIOIBWXRELDONZKFIOWIXZOCCGKYWQIFJDNLTBTGUQWPEISDEVVNQKGMCUQBPFPLJPOHJFGSWMFGCTTZUA");

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
    msg.setTimeStamp(0.0778890765637);
    msg.setSource(7053U);
    msg.setSourceEntity(191U);
    msg.setDestination(56321U);
    msg.setDestinationEntity(239U);
    msg.op = 177U;
    msg.comm_interface = 91U;
    msg.period = 29979U;
    msg.sys_dst.assign("KCEPDYNWAFWESRFLLAJTFXTYBQUMQHXTEYN");

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
    msg.setTimeStamp(0.74324531954);
    msg.setSource(28504U);
    msg.setSourceEntity(13U);
    msg.setDestination(27337U);
    msg.setDestinationEntity(181U);
    msg.op = 210U;
    msg.comm_interface = 158U;
    msg.period = 47915U;
    msg.sys_dst.assign("IZTCMWROJDZBKWFJOAUTSGYNUJQZAISBXYLZJECJWJHDKJMXAIGVEHSRMFGKLUOBCINWEGBQWERKCCHWGGUFXNNRILIFYLQOHRWYAXFTTKEEBKMAIJLNSMXNHMUPSXMLECLEIDKUQMFLFBVQVCARTXUGYMVNJPFKMBUVSUHDVSWSPDIRHQCGHFTGTPYEWYHNOPZVGPA");

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
    msg.setTimeStamp(0.871686308962);
    msg.setSource(34407U);
    msg.setSourceEntity(137U);
    msg.setDestination(11736U);
    msg.setDestinationEntity(114U);
    msg.stime = 3739107532U;
    msg.latitude = 0.640136621238;
    msg.longitude = 0.397989155398;
    msg.altitude = 46275U;
    msg.depth = 52303U;
    msg.heading = 33777U;
    msg.speed = -12788;
    msg.fuel = 40;
    msg.exec_state = 8;
    msg.plan_checksum = 39314U;

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
    msg.setTimeStamp(0.455811715951);
    msg.setSource(56754U);
    msg.setSourceEntity(72U);
    msg.setDestination(20766U);
    msg.setDestinationEntity(254U);
    msg.stime = 3431579966U;
    msg.latitude = 0.0152400234252;
    msg.longitude = 0.709051535272;
    msg.altitude = 65482U;
    msg.depth = 20764U;
    msg.heading = 13471U;
    msg.speed = 4077;
    msg.fuel = -93;
    msg.exec_state = 98;
    msg.plan_checksum = 7807U;

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
    msg.setTimeStamp(0.190749584083);
    msg.setSource(24075U);
    msg.setSourceEntity(83U);
    msg.setDestination(41186U);
    msg.setDestinationEntity(84U);
    msg.stime = 2134086692U;
    msg.latitude = 0.313679449275;
    msg.longitude = 0.850744422025;
    msg.altitude = 8903U;
    msg.depth = 44955U;
    msg.heading = 17955U;
    msg.speed = 3594;
    msg.fuel = 96;
    msg.exec_state = -12;
    msg.plan_checksum = 3581U;

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
    msg.setTimeStamp(0.676542245838);
    msg.setSource(52361U);
    msg.setSourceEntity(85U);
    msg.setDestination(50491U);
    msg.setDestinationEntity(159U);
    msg.req_id = 54029U;
    msg.comm_mean = 233U;
    msg.destination.assign("TNIURJOOLRUGPWLPOFTNRXZMQJROMMSDVQCYSIZAMFVHKNRPLIURMYGKAEMEZDHEGAYDPZJYGVDPBSRUVZUVX");
    msg.deadline = 0.519494920556;
    msg.range = 0.865945258282;
    msg.data_mode = 42U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 13467U;
    tmp_msg_0.lat = 0.578941640095;
    tmp_msg_0.lon = 0.645379723146;
    tmp_msg_0.z = 0.825311282259;
    tmp_msg_0.z_units = 229U;
    tmp_msg_0.pitch = 0.812335350367;
    tmp_msg_0.amplitude = 0.130145505581;
    tmp_msg_0.duration = 56652U;
    tmp_msg_0.speed = 0.803709572371;
    tmp_msg_0.speed_units = 175U;
    tmp_msg_0.radius = 0.0415618204787;
    tmp_msg_0.direction = 200U;
    tmp_msg_0.custom.assign("TAJYVTWNJJMQVBLZBBJDHCOLHLWLQVQIBFXQTLTGSRCFMCAYMUEWACJUTSTBBJGYI");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XKXWORJJYHUXPPNMCJTZRTWBZFYNNLTAUACVKAEJTRDCJFBBKLRFFWKSVZDTHZZBZEOMINZIUYLKMCJJDCKBPLESUJIAERORWRQKHWVIJTTKASSXYPYBLCDTCXTWIAFDMM");
    const char tmp_msg_1[] = {-40, -37, 13, 69, -51, -106, 59, -66, 34, -128, 48, 53, -66, -14, -101, -85, 90, -12, -124, 29, -23, 46, -36, -104, -54, -86, -108, 82, -26, -121, -13, -106, 95, 41, 38, 108, -106, -39, 87, 14, 117, -120, -52, 89, 8, 47, 25, 104, 102, -47, 57, 75, 33, -21, 53, -106, 16, 125, 4, 113, -27, -98, 21, 119, 11, 100, 83, -20, -13, -32, -45, -92, 65, 94, -68, -57, -51, -36, -4, -17, -16, 62, -8, -67, 30, 69, 64, -74, 86, 64, 39, 79, 63, -14, 99, 54, -93, -6, 73, 43, -96, -27, 9, -68, -44, -58, -107, -107, -41, -49, -31, 109, -112, -53, 19, 90, -65, -52, -86, -125, -16, 80, 123, -123, 79, -11, -4, -99, 53, 72, -127, -48, -54, 88, -125, -34, -92, -15, 2, 27, 39, 49, 79, 90, -4, 56, 79, -38, 38, -63, -84, -81, -93, 16, -5, -80, 18, 10, 59, 102, -18, -74, -17, 36, 122, -23, 7, -24, 23, -41, -31, -54, 6, 60, 123, -66, -117, -11, 65, -30, -17, -55, 126, -21, 63, -12};
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
    msg.setTimeStamp(0.269605556673);
    msg.setSource(47801U);
    msg.setSourceEntity(50U);
    msg.setDestination(34251U);
    msg.setDestinationEntity(130U);
    msg.req_id = 51210U;
    msg.comm_mean = 129U;
    msg.destination.assign("TLWBBYEFKPLDVSYOWXLXBFJTUJCRIAVFNDFRGYORRBRJXZWVAEOPMTGQOYEZXFUPQZAOFCETGNECWGHJUIPDTNFRIFZJFZLMCPMAUPCYQHGHZ");
    msg.deadline = 0.574415397831;
    msg.range = 0.899440757779;
    msg.data_mode = 92U;
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("WKNCGLILZUMKTIRRCDBSRLVH");
    tmp_msg_0.text.assign("ZXYFIYTUFTHDMNPWGBXOJNFBRUATXZKDMFPRKAQMRBLVHIVGAHUKDSHBXI");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ODUWOBDUIYIEWWXFQBWKIAEUEMVPRUNJDMCGEYPAOXRQSQZKBDTSTWFGIZKGRDNINLDJJHDMEIDNCNPAAFRKCJKIZJLHSOCRVOQQCJILORTFMHXZBPNGKXHOGOQXMYYXUZY");
    const char tmp_msg_1[] = {-98, -16, -81, 112, -23, 59, -114, 80, 105, 15, 71, -42, 47, -2, 41, 92, 89, -66, 31, -46, -15, -49, 85, -76, 8, 49, -87, 88, -113, -57, -68, 88, 52, 22, -59, -50, -115, -107, 59, -6, -38, -1, -60, 14, -111, -100, 30, -40, -27, -77, -3, -29, 73, 74, 8, -128, 67, 115, 84, -102, 49, 94, 59, 45, -42, -65, 48, 55, 34, -15, -113, 0, 94, 41, -43, 64, 90, -125, -102, -49, -85, -40, 75, -1, -98, -66, 30, -52, 80, 88, -27, -74, -105, -127, -4, -119, 60, 63, 29, 123, 8, -35, 5, -15, 124, -2, 20, 97, 119, -15, 32, -51, 98, -84, 96, -17, 94};
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
    msg.setTimeStamp(0.283185737984);
    msg.setSource(20335U);
    msg.setSourceEntity(226U);
    msg.setDestination(62032U);
    msg.setDestinationEntity(7U);
    msg.req_id = 27720U;
    msg.comm_mean = 89U;
    msg.destination.assign("LTVGYVADWAOZRCJYADHHOUUGBKFDIWEKDOPQVRBIFNLUHJYTYGENPVPCCWHKSQPUZVITSHFVHEHDDKCOSBFBPZAJJPQLQKGDEAIQJOKFIRCTRANYLLSMEEUNMDBYNNGCAMINGJPAAOQSZBRNYWXXMIXJRJOG");
    msg.deadline = 0.723203748893;
    msg.range = 0.313006072933;
    msg.data_mode = 76U;
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("JODZPNRKIKVJIHSZQGXBVCISVCZZTKEY");
    tmp_msg_0.op = 144U;
    tmp_msg_0.sched_time = 0.727120784575;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("NBLLSTPBSQIOVFRNNQWZQJFCYRYOVNVOPFXOCMBZIWYSKIKWYSXZMBSUFOHHAXGVQUGLAGEQEHCZMRWYEGCXXDNFRROJCQOBAZPUKVGIPXJHLKYYLNQTNBDTDGTQUSOLGAVJSEZKESZEMEKXYVTAHWIMIDHMKXIZNMERJWNJVEHWPPFFTWACRGKDRJDPMUUPDIFQOBZLWDDHGHAXIDQLFWPMJGPCTTATIKUBTLUKS");
    const char tmp_msg_1[] = {-58, 126, 48, 31, 56, 67, -5, -4, -26, 98, -28, 125, 67, 60, 25, -90, -89, 93, 21, -64, -103, 88, -58, 69, 80, -46, -26, 1, -78, -68, 83, -123, 57, 88, 11, -2, -11, 29, -15, 88, -103, 107, 0, 28, -46, -24, 11, -125, 99, -78, -24, -42, -92, -56, -54, -26, -44, 62};
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
    msg.setTimeStamp(0.21204913334);
    msg.setSource(55072U);
    msg.setSourceEntity(63U);
    msg.setDestination(43995U);
    msg.setDestinationEntity(116U);
    msg.req_id = 25925U;
    msg.status = 222U;
    msg.range = 0.446016141417;
    msg.info.assign("MLGLUEGWFBRLHCWTLEMCOBSNZZHDLAVGUTQBJZYAWGEOCSXPZEAVTBVYDNLJPBTOGBKXTNGDKZVKSDEIWHXWOISFSXOWVSVRRCQYBUINDQMFISHKPCMXJTIJLKOAXPWORRQZMONNZKJHMIYVGPEVSDHCUOMFNJJGLVCYPXTMHENPINATUMQKYQIZERHWPUTHQFYTO");

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
    msg.setTimeStamp(0.753933171665);
    msg.setSource(294U);
    msg.setSourceEntity(27U);
    msg.setDestination(44212U);
    msg.setDestinationEntity(63U);
    msg.req_id = 55305U;
    msg.status = 149U;
    msg.range = 0.439197529453;
    msg.info.assign("FKBKPUWRDMKNVSDUXKULMVTPLZOFSGGGLLRYSEAHDGHYQCWMGHJVSAKAUWIYRZMTYMTTJFTJDPSIZXMPCYWOIUXVRVDCTICWSOUECMJFFVVOMU");

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
    msg.setTimeStamp(0.583762439737);
    msg.setSource(55639U);
    msg.setSourceEntity(139U);
    msg.setDestination(38448U);
    msg.setDestinationEntity(20U);
    msg.req_id = 23493U;
    msg.status = 41U;
    msg.range = 0.583489349335;
    msg.info.assign("HLYVTHGBTWAZSEDUSSNSTBWOXPRUPLXEXDCWFODQUKHAIKMXMNYIADVYRHVJDQQJLSMCOVAZZZWYYMVFARXGQKIFGYMKSQNJIBZYSNIHBXULDCGFBGUJRZPRCJUWIQTLCRVUBYWGKYEEXCRJGPPENTTSNNGWESQQIKWHFOMLJIFCBXGFKLJDGVUJUTZPPBBMNMHSKPWPAVYDL");

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
    msg.setTimeStamp(0.655649336111);
    msg.setSource(24657U);
    msg.setSourceEntity(242U);
    msg.setDestination(811U);
    msg.setDestinationEntity(114U);
    msg.req_id = 58963U;
    msg.destination.assign("YBNAIVLDIVBIGBJYXHNLUOQEOXCTOSQICQSNEXKVAKRNFZGARSK");
    msg.timeout = 0.337650513201;
    msg.sms_text.assign("GJZKQZSTOQYMSFQBWPCKBHXIBZKUUUQYBRFHOYIEACVRFMANPINUJYKPDCEGAYWLDWQFGMXGYLSUVNXDTBBAFHZRNDTIHQXZIVFLYRSEDNMPUEGWXXWEJFJHJMQGRQLLIPNATQTOWEONPAPMHAJKOZVLABSP");

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
    msg.setTimeStamp(0.936573235136);
    msg.setSource(60075U);
    msg.setSourceEntity(217U);
    msg.setDestination(50370U);
    msg.setDestinationEntity(74U);
    msg.req_id = 7010U;
    msg.destination.assign("FURZHRDIHNEQIIURFFSSNYUVUIYQMSFPJYHIGUOXNBBLECYIOBAXEZXETQKYBSFPVSWFZRPJMMJDEOEWXVWDQDCXVZKPUGNTYJKPTRPCWAEJGHXABDNLQDSMOBSEXHRHDCGSGQCTALAXAMOWGTWRHHYVGPNQKFELIQMCALOKSG");
    msg.timeout = 0.761246958134;
    msg.sms_text.assign("IRTEOKMWJBSKMABVQODAPBUDEQDKVRTFZLSCZNXQREAUFDKWDVBVPJPIOWJSOTEQEELZLMGXKEZFGYDTJHGWOOIWPZCLXLEYFHXCLYDQCZUGGZYAPAPFCIOEUKLFOJPWATRSHBVSJWCRYNLTWMYRSMHIRKDBRKXVUMHBMUSNNI");

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
    msg.setTimeStamp(0.0602469503498);
    msg.setSource(49637U);
    msg.setSourceEntity(49U);
    msg.setDestination(44195U);
    msg.setDestinationEntity(134U);
    msg.req_id = 945U;
    msg.destination.assign("ICZLQYZJOHJUKSCORVPTKOPNWFBXYIOBERZEWQMQZDQACIWMNGYIEJPZRBGPLBOCCFTMSMONHJHVNZYWNQGXNUPFBFIHOTRPLSDUPGXMKDTVRGOMVVULDWVQMKELFZPFNLMHUADIVISUXAZCYKHDJPUTQKIAFBTKSDHYSVXREMUIFHBEJYSKQGPSXGBCLKGDEJNYYTAVWUXDXUAHLTKJCMGXGALTCRHVBESEFSWNNWICLZYAFDW");
    msg.timeout = 0.37591210518;
    msg.sms_text.assign("AZXHISSGYECHPARDBBJZRSEGEVOUQHWHDAW");

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
    msg.setTimeStamp(0.141373536729);
    msg.setSource(21121U);
    msg.setSourceEntity(55U);
    msg.setDestination(42300U);
    msg.setDestinationEntity(186U);
    msg.req_id = 9232U;
    msg.status = 218U;
    msg.info.assign("UADNLJPOXWQSGLBGJVYATPXOZCAFPICJYBF");

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
    msg.setTimeStamp(0.480585997075);
    msg.setSource(6819U);
    msg.setSourceEntity(94U);
    msg.setDestination(50918U);
    msg.setDestinationEntity(106U);
    msg.req_id = 41259U;
    msg.status = 225U;
    msg.info.assign("FADKZLAENXERHOKXCMIYMFYCIQYJNLF");

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
    msg.setTimeStamp(0.354716520548);
    msg.setSource(33505U);
    msg.setSourceEntity(147U);
    msg.setDestination(22290U);
    msg.setDestinationEntity(243U);
    msg.req_id = 17158U;
    msg.status = 197U;
    msg.info.assign("GNMVZZOJMOKQQLVWMZRKRQBWXNCKQTFHSSIHYVXYFUQOIGUTVHJAOPCSAECXXUXOUMPVWGIL");

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
    msg.setTimeStamp(0.760465609182);
    msg.setSource(55963U);
    msg.setSourceEntity(115U);
    msg.setDestination(21972U);
    msg.setDestinationEntity(215U);
    msg.state = 90U;

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
    msg.setTimeStamp(0.254987447403);
    msg.setSource(63645U);
    msg.setSourceEntity(132U);
    msg.setDestination(40971U);
    msg.setDestinationEntity(168U);
    msg.state = 183U;

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
    msg.setTimeStamp(0.0469973092647);
    msg.setSource(55566U);
    msg.setSourceEntity(224U);
    msg.setDestination(31433U);
    msg.setDestinationEntity(126U);
    msg.state = 154U;

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
    msg.setTimeStamp(0.294959342054);
    msg.setSource(12043U);
    msg.setSourceEntity(171U);
    msg.setDestination(54861U);
    msg.setDestinationEntity(241U);
    msg.state = 174U;

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
    msg.setTimeStamp(0.969102449991);
    msg.setSource(13832U);
    msg.setSourceEntity(29U);
    msg.setDestination(6428U);
    msg.setDestinationEntity(64U);
    msg.state = 179U;

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
    msg.setTimeStamp(0.986922172908);
    msg.setSource(40209U);
    msg.setSourceEntity(88U);
    msg.setDestination(34686U);
    msg.setDestinationEntity(25U);
    msg.state = 191U;

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
    msg.setTimeStamp(0.717852016561);
    msg.setSource(42375U);
    msg.setSourceEntity(10U);
    msg.setDestination(36782U);
    msg.setDestinationEntity(107U);
    msg.req_id = 38591U;
    msg.destination.assign("EPDHUDBELQWV");
    msg.timeout = 0.387819042462;
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("FYGFBRYCRCAHFCPNMEGVHCNZEMIAEJPHUHXVIRHQQORQNUDZJTJTKYHNVJEVWDSXCQXMEAAYDXWRROYIVEPEVIBONGANCKSWTLZTBUCOQZCBAPWSTFAYICUWJZJDHJVDKPLQXEONVLXMGZOELDKGUGTBUNOAJTTIISRXWQFYFMBGLQXUBSDHAXYLXFEIRZSGKPNRSQKGSUFOKWIMOBDZBHMMLCTPYVLZJQSDIPVHUB");
    tmp_msg_0.value.assign("VJKBICIQOGJOZUKYSRXWGQUHSIOZCVQSHCVNXEEWYZUWTQZLFNBXUADDYXILOVFPJFLYHMFYQCLSKWZVOFNEBUSRWKNMFZDJBTFEFMDLUDLZSPRDDGIFZCHCGYAEAPSHNMWHIRMMETIDKYVXCBQM");
    tmp_msg_0.type = 185U;
    tmp_msg_0.access = 138U;
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
    msg.setTimeStamp(0.527013930546);
    msg.setSource(40042U);
    msg.setSourceEntity(217U);
    msg.setDestination(31291U);
    msg.setDestinationEntity(228U);
    msg.req_id = 30774U;
    msg.destination.assign("JXFIOAAFGJQUCIDYNXYGMHZMQGWQSXTCBRALOYFPJXJXMLWWSKDAASSBZCJQUYKWPCUSMONSNGXVJNPOFWVRYDREHMJKCKRWRZXSYFBGBAJVLTZSOVZEOXLKLIWQEMBLCNEZPLIFBEHTHFAUAUHPEHLRDMZRKDEPQITMWEWTFJIIFTZPTNMDBGVASUYKRBFHRCKYOAXHCGVMDZRKTGU");
    msg.timeout = 0.297954954775;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 50681U;
    tmp_msg_0.lat = 0.969810342247;
    tmp_msg_0.lon = 0.527270939919;
    tmp_msg_0.z = 0.876054574858;
    tmp_msg_0.z_units = 241U;
    tmp_msg_0.speed = 0.128791991655;
    tmp_msg_0.speed_units = 150U;
    tmp_msg_0.syringe0 = 62U;
    tmp_msg_0.syringe1 = 177U;
    tmp_msg_0.syringe2 = 21U;
    tmp_msg_0.custom.assign("YLGLAKNEHNHUPQLBHLXIGPKCAUBCIGQOFVLKODRCTBYODTVKFULPHVXOMMLEMMOQHWUIITGRRXCIDOFGWJXHNSAMBUZHBSISMLKJQJVXZOENPSQJIPTTFNDWRPIOJQKQEBLIHDNAGFZCWJXWWHPICCUULUXESYZTABAPZDESWAZRMGKNGFFTJDRMUYTECMSCYGAZXWKVZZYBREJSSDQHVXWNMQNSFYEZDUVPTBRKOY");
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
    msg.setTimeStamp(0.509561434267);
    msg.setSource(31988U);
    msg.setSourceEntity(155U);
    msg.setDestination(36056U);
    msg.setDestinationEntity(192U);
    msg.req_id = 51339U;
    msg.destination.assign("VQMIROHDGDJQSMQYSRFZSABANBVCCHZJOEHNDQLTFODILMMHKYZFKMBUMPWXYXFDNZUUUAXAKGUHXFH");
    msg.timeout = 0.431575219891;
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 28254U;
    tmp_msg_0.type = 79U;
    tmp_msg_0.max_size = 45870U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.373946735302;
    tmp_tmp_msg_0_0.base_lon = 0.723668664057;
    tmp_tmp_msg_0_0.base_time = 0.705461954964;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.741414651892);
    msg.setSource(34317U);
    msg.setSourceEntity(51U);
    msg.setDestination(14263U);
    msg.setDestinationEntity(38U);
    msg.req_id = 26120U;
    msg.status = 193U;
    msg.info.assign("WSKXQEOLVXJGMBUVKDKDVGJQJZGXSMOTNNYJTOFABTSEPZWSAMBUMOSTIVHIYEWSBFODAMMUQWBAFHRVNVKDPLLPLAYCQAZJDYKGNXJFRMJJFRZVHZLSFZRUNWEFBYETHGHCQCDNSMRFIEUIEXNOHZRFJDPQXYMPDXCLYUHLPVIB");

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
    msg.setTimeStamp(0.345834783236);
    msg.setSource(58728U);
    msg.setSourceEntity(153U);
    msg.setDestination(14933U);
    msg.setDestinationEntity(152U);
    msg.req_id = 16340U;
    msg.status = 67U;
    msg.info.assign("NJHXMYESQEASZXQTSUUGNHCQWCPTWBBDIUNVQVBQVKGUQNZAKUEGHSDRHPFOVTDLLGIKWMKVGDFDXJIRZRQCBUXBKOMODOZLBWEMJYYFFYEJNAFRTQGLBUALXRRLZSII");

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
    msg.setTimeStamp(0.718386771224);
    msg.setSource(47935U);
    msg.setSourceEntity(26U);
    msg.setDestination(58359U);
    msg.setDestinationEntity(192U);
    msg.req_id = 39170U;
    msg.status = 124U;
    msg.info.assign("OPKPNZJBJPYW");

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
    msg.setTimeStamp(0.34766284987);
    msg.setSource(3311U);
    msg.setSourceEntity(24U);
    msg.setDestination(41560U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.0244462279582);
    msg.setSource(36002U);
    msg.setSourceEntity(168U);
    msg.setDestination(30972U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.900833832087);
    msg.setSource(35857U);
    msg.setSourceEntity(165U);
    msg.setDestination(10718U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.797847988202);
    msg.setSource(16904U);
    msg.setSourceEntity(24U);
    msg.setDestination(61254U);
    msg.setDestinationEntity(198U);
    msg.plan_id.assign("OABAPHIWDLFWXNJZQBTXHQBYVWDIQPPBWQVRTGLDXZYLGPTMIOIUUSVLZCUDWOEYYEIKSSKPUZNOARAMWFNHJFFNSEWUSITEUSBCYNIYJHPLXDDAVUATLSVJODRXJROFBZSHMKGCIEHGCMPSWBTRQGXFEETJAIGVGLDDMGTMUJQZRMVKHOANEBFHEYKLBPUMEJOKQKLCHWRM");
    msg.description.assign("IKRLNVWIMZUWDYDGWADLHBXTFRMOKXPOJQASQHXHFWPJUOYBZPHPLAJEOUZJTABBXUAHDIXVBKYCJMSZVGMKEASJIGCTTYTOQPMUKDL");
    msg.vnamespace.assign("HDAJSCAHGPUUHERWMCENWUEPKLCJXPYXHRFNNQQ");
    msg.start_man_id.assign("RNOTZDPGQRVOSL");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("OIUOTNVXBJGIEJGDUEPIBFVMZBFZWQHWOYLEEKVRQZLQMPSBNXSBEIAXBQSEQPCQOZBCLCTARODHAAWNHYJEOSXVZKHULRKIDCZCFLHKCFGJWFMPAYRNYCUDZTTTNYMXYYGJFWDUJVFWRTUHDGDWMMFSBIRHYKGDOVRPTCNVVAKEJYXXW");
    tmp_msg_0.dest_man.assign("BZXCGVCQSORRPRSPMXCWMEWPHBMQMOCVOQKJZWEF");
    tmp_msg_0.conditions.assign("ZBWINPUHRLYTJYGJGRRWGPEBXKAKDBPADBCQUBIFSZOTQXDHLXGRJXKIKSIQCOBDACTWNYMDSNIVDRVGKPWRCTVLEGCNTSZEUKNSJHVMHOZFPVNYXMNELFRLLDIGWPUOQFJECVVSM");
    IMC::QueryEntityActivationState tmp_tmp_msg_0_0;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.631638393347);
    msg.setSource(45378U);
    msg.setSourceEntity(32U);
    msg.setDestination(36938U);
    msg.setDestinationEntity(131U);
    msg.plan_id.assign("WKOSGJCJRLSYOIKKPXTNXVGDOKWNYZNVOXPVIWRHOTMGFYUPPVN");
    msg.description.assign("NFMXNHRSFOGLDGILUXZKYZLAJDWNUSTHGRTNFHPPENEDALW");
    msg.vnamespace.assign("JRKTDUVILQWDJAHDZMHSJEPIQOPQHKFFMXOVFYGNGBNQOTWADABLUGVONWATZBPNAYYOXXYVVWUCZZZJKTPJCHULSKMRPNNCECFSDLIWGRPSHQBFIQTIHMMLLGRU");
    msg.start_man_id.assign("AANJQXTUSOLXARUHZZLGSVYMJCZZQHTFCXNBXNISNGQBEYQMHWMSVUPFLDJSOIEUCLAFSNQHPPYVQIRPBBDDHRYYFXVHSDAGSAIAFLUGOLCEHWRIMDVWWRPYQMKWYGARBKJONMCPZOLPWFXYKNFULSHIFFRADBPO");

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
    msg.setTimeStamp(0.85727585433);
    msg.setSource(35540U);
    msg.setSourceEntity(250U);
    msg.setDestination(12406U);
    msg.setDestinationEntity(192U);
    msg.plan_id.assign("QTCPXCGGDHTFTILIAQDOARWOISXZEFGBWJOBRWQHYKNYDKPXPFWBIGPOGGZXAQCWBPVKRDSOFMFNCZFSNINQPXUYZVHHADHVIKLYMDESTTLMUJUNEVUVNOSMRHTJZXRHYFKBRSMKGQWYQALMVNAVUEPADFBLGZEMVGECOZEJLCYIMHFISJUEKXTNDNETUKOXQXOUTAILWFCMGZBVNKJPHHRRVWCYLYJCRPWARBMEQKDZDBLOSJTCPUAXUQWYJJ");
    msg.description.assign("VEQDSAPYGSGMPAWFFCIOUUQRIJUIJYIKLSTWMGLQHINHOOBLBVLGVFXQ");
    msg.vnamespace.assign("EUQMISATLNYSWKGBSFSXXBWUI");
    msg.start_man_id.assign("IXRLXRZQIIMABEJKBNGHXHDMPXVKYEQGOWRIIAEWCFTBBZVPSZXMDCYHIEJNIMSWTQFYTVLCHHGKJBUIJFLHBVFEHGKYGKABRNDQVHTPVSPTMXUJLWPELZHSMKNNSODWWWMRRKGPDRZPTYNFLDFFCRJOLLVAOUNSNJCVRZJSJQTCKDYDAOENFIAQDMZISNCLBEKQCYGAO");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("GJQANNDKDCOZDJKKSAUAXLUYPUSJTQETQMRGVIRWBVYICZNYSZPIVLZWHKTKUKNJENFSQYFYUYLCJUAOJIMWBFAGOEIQZMGRFXNKDZPUBVGTVEDWCYSPJGGOXHRJULLOPBOCOLSPBXCIBRIZFRQWWMLZIFTWDIGEVGHMMPL");
    IMC::Sample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 45030U;
    tmp_tmp_msg_0_0.lat = 0.190915772301;
    tmp_tmp_msg_0_0.lon = 0.944587541265;
    tmp_tmp_msg_0_0.z = 0.354588694727;
    tmp_tmp_msg_0_0.z_units = 198U;
    tmp_tmp_msg_0_0.speed = 0.120819896543;
    tmp_tmp_msg_0_0.speed_units = 178U;
    tmp_tmp_msg_0_0.syringe0 = 243U;
    tmp_tmp_msg_0_0.syringe1 = 115U;
    tmp_tmp_msg_0_0.syringe2 = 2U;
    tmp_tmp_msg_0_0.custom.assign("BHBFCRWKUQYJOZRAOJAIWUQPTPCRXCXOSLWMDSVAIIESMZJZOEVFPQURFQMYJLFGRHENZIQYUQYABUGKBDTWPRLBMMSHPKWEWXSDWMQMBSXAYNTVZANIUJGGYOHWBMZKNVQRPTECXFHRLXOEGOECVLHFJAVIJTYAHKINACCOGLFDHTKZGGEYSUGVKPCGKAJVXTOTMCNYVOZWF");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DesiredControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.112411040164;
    tmp_tmp_msg_0_1.y = 0.737201714747;
    tmp_tmp_msg_0_1.z = 0.720181622797;
    tmp_tmp_msg_0_1.k = 0.750787405624;
    tmp_tmp_msg_0_1.m = 0.464003917026;
    tmp_tmp_msg_0_1.n = 0.122522998557;
    tmp_tmp_msg_0_1.flags = 29U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("RPARPNHJZQDOUXSFCOYBFTVMYJLCDCQLMLOSALBKBTVIWALYVQQTYDSHZUYBTCJUKFOAXWPTNKRPEKAWPEXSQAEMBLSCGUDGMHNPRNTHIHYPTTGSSUEJUEDVWUNGSJFCZSBMNNJEVJFITALDWZOHISAWFYQFGXRDKRJEFDYLRVXOQYVUXKHGMMXIJEVFIEGCCZWQBVKIBMZOOWPIGKBHZOKAMIFHCNLYNQGTOKBZPXUZRMWCJ");
    tmp_msg_1.dest_man.assign("NYTHPZKUQMTRHFOISEBHXFFSNWHAWWWXLVSIQTRLNNIFOLEIVNGMRVYZVYKMLFMUTBAXMYOQDNNIHSXUDPRVXCNBBDFJKVESWCDOPPGWBMGACGVTAWEGJNOBPQOLZGFKXQFRWUYESAQRCZELIHVIKBTUHJOAUXTVYUSJWJCSZGNIQGRKEPCSYXCIZQTDUVCKIOHJTLLTWMFZHZ");
    tmp_msg_1.conditions.assign("XUYTTZIELRAXWHMNFXXKWFAAKCWDYVQGESDDHNAVPBUJWEAPGOCVESSVHJWIENMKRZTZOZHXHIQLCURBRJLMSSUVVOVCKGGHYXZPQVADNOVODWHDZJOFWPQKCFJRZUDXOUNTKJBLIGYUYLLIORQTFAHCPNKYFLLUKFPLBRTYJOQWIG");
    IMC::WaterVelocity tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.validity = 28U;
    tmp_tmp_msg_1_0.x = 0.0652043040629;
    tmp_tmp_msg_1_0.y = 0.588760157708;
    tmp_tmp_msg_1_0.z = 0.712406621062;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::Goto tmp_msg_2;
    tmp_msg_2.timeout = 957U;
    tmp_msg_2.lat = 0.174813015413;
    tmp_msg_2.lon = 0.442179124335;
    tmp_msg_2.z = 0.00348149197451;
    tmp_msg_2.z_units = 68U;
    tmp_msg_2.speed = 0.140493361099;
    tmp_msg_2.speed_units = 247U;
    tmp_msg_2.roll = 0.763505527492;
    tmp_msg_2.pitch = 0.528667247491;
    tmp_msg_2.yaw = 0.748746004868;
    tmp_msg_2.custom.assign("ZDKAZNWWKEVXFHOHZQWHDVFTQBPCYIOAUMFRQCDEZMUPEFEPVDPVMRSTPQNIHDLPXNERITOSSYMOAKCBUNQTWUAYAQCHBYOLWEXNGYPDAXBSJLSWBAQSFOCOTGWAG");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::SadcReadings tmp_msg_3;
    tmp_msg_3.channel = -3;
    tmp_msg_3.value = 908440234;
    tmp_msg_3.gain = 225U;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.674356235713);
    msg.setSource(61111U);
    msg.setSourceEntity(228U);
    msg.setDestination(42365U);
    msg.setDestinationEntity(2U);
    msg.maneuver_id.assign("OFDKSJMDAWVCONUNTRMHPAKJJSWEIHXHCMKUWCUPDLONQEVNAPKFYZCGFXGRDIIYIPZUXTEUBSWYDEXBBYGWJFRHYYDUHMZFSXKRLSENRLOMDZPTVVFANIJTTCRYVIQAROZAGELBHWWCONJTNZWYVXOSZKUBMGBBCEYLQIQVVQGIPBGPSXVPQWGQYTOXUJPAFDHRNFQUHCXPEKKDSRJATMDMQLAEZSCEXKQSJ");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.511338775449;
    tmp_msg_0.lon = 0.824659482371;
    tmp_msg_0.z = 0.607740491807;
    tmp_msg_0.z_units = 151U;
    tmp_msg_0.radius = 0.998828587522;
    tmp_msg_0.duration = 33917U;
    tmp_msg_0.speed = 0.00869832545478;
    tmp_msg_0.speed_units = 93U;
    tmp_msg_0.custom.assign("TSDRSBOJPOBXEUWMAELKXHZFSEDKEPSSPLXENLDSKQGJCMJVLJWMBTNFGFZQOVAUYTDNGVKIFKNUOOTUYAIDCEXLIEYPDXGPVZKACQYAGYJHFLAVXMTXQCOAUOQJGFQXNYBPPOQRKHIUCPSCVVTFNVBTZCVQTIURFLAMHPZBCWDRBWUNOUJRTEFCPKZWQSRWVMNYGFJNWOMBGHDW");
    msg.data.set(tmp_msg_0);
    IMC::ManeuverDone tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Rows tmp_msg_2;
    tmp_msg_2.timeout = 38552U;
    tmp_msg_2.lat = 0.770118683085;
    tmp_msg_2.lon = 0.299124297092;
    tmp_msg_2.z = 0.100458420744;
    tmp_msg_2.z_units = 207U;
    tmp_msg_2.speed = 0.000616871655529;
    tmp_msg_2.speed_units = 162U;
    tmp_msg_2.bearing = 0.791133049952;
    tmp_msg_2.cross_angle = 0.0270266906022;
    tmp_msg_2.width = 0.588649724529;
    tmp_msg_2.length = 0.353871542988;
    tmp_msg_2.hstep = 0.671504100491;
    tmp_msg_2.coff = 173U;
    tmp_msg_2.alternation = 86U;
    tmp_msg_2.flags = 202U;
    tmp_msg_2.custom.assign("LJLNXKQMNDWQYZBITEKZELTQECCRIMLOJBGPNUYYPPKSAXDYRHXJWHZVVPCRHNMMVCNYWBIHHQEADHVLADSMZRTDZKPGEBIBYJDMUEAJCMPENWUFNXOUGUTALGGGTQRDRVKDRFPCQFQOWVNOFSHRWKMJSHBSPKXLHHWXQLSFOUKLZWEYTBDTGJVSJPMJZBL");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.609208293017);
    msg.setSource(45442U);
    msg.setSourceEntity(192U);
    msg.setDestination(25680U);
    msg.setDestinationEntity(98U);
    msg.maneuver_id.assign("YKBYDHVQAZPNHBBUAQYRGFPBOEDFGLHRBTOLRXAOD");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.427657744799;
    tmp_msg_0.lon = 0.100561313131;
    tmp_msg_0.z = 0.507964028517;
    tmp_msg_0.z_units = 125U;
    tmp_msg_0.speed = 0.833411196076;
    tmp_msg_0.speed_units = 254U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.194456541723;
    tmp_tmp_msg_0_0.y = 0.444736901737;
    tmp_tmp_msg_0_0.z = 0.796974397275;
    tmp_tmp_msg_0_0.t = 0.177106537475;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 43489U;
    tmp_tmp_msg_0_1.off_x = 0.774013834456;
    tmp_tmp_msg_0_1.off_y = 0.429984908705;
    tmp_tmp_msg_0_1.off_z = 0.678084138371;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.301424821124;
    tmp_msg_0.custom.assign("QEPABWWIRYFJRFVCXNR");
    msg.data.set(tmp_msg_0);
    IMC::Collision tmp_msg_1;
    tmp_msg_1.value = 0.395281670845;
    tmp_msg_1.type = 12U;
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
    msg.setTimeStamp(0.0705503377273);
    msg.setSource(8585U);
    msg.setSourceEntity(88U);
    msg.setDestination(24242U);
    msg.setDestinationEntity(11U);
    msg.maneuver_id.assign("LCELWGCBESFPAOFHORTZRNILXWWKXAAYZMKYSGSWCJJWSJGMHZRPVANCLBIQQPLSKIMZDBOETVTVFANXLEIBDDUWBIPIZAEPEBJHDPVYSKLNMGQKUZXEVZSWRKHOUFBUIEGOQQTEJZFPRNVKRDTYRURUA");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 26867U;
    tmp_msg_0.lat = 0.151947528306;
    tmp_msg_0.lon = 0.167420968864;
    tmp_msg_0.z = 0.71763990811;
    tmp_msg_0.z_units = 210U;
    tmp_msg_0.duration = 46449U;
    tmp_msg_0.speed = 0.961477871788;
    tmp_msg_0.speed_units = 241U;
    tmp_msg_0.type = 149U;
    tmp_msg_0.radius = 0.737854597558;
    tmp_msg_0.length = 0.995621313589;
    tmp_msg_0.bearing = 0.934428804808;
    tmp_msg_0.direction = 164U;
    tmp_msg_0.custom.assign("RIVMISCGPYAVPARCAJQQ");
    msg.data.set(tmp_msg_0);
    IMC::TrueSpeed tmp_msg_1;
    tmp_msg_1.value = 0.386679658816;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::VehicleMedium tmp_msg_2;
    tmp_msg_2.medium = 81U;
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
    msg.setTimeStamp(0.381554521236);
    msg.setSource(48360U);
    msg.setSourceEntity(164U);
    msg.setDestination(28941U);
    msg.setDestinationEntity(118U);
    msg.source_man.assign("DTOHWVSNQVCGDDTBAXUSTRVEHMDYUQLLARYJIGNXWFEMFKCHEMOCMELEMPDBVKRAQCRWXKOLVVTGGEBTEFOMNMYLKZDZYUABQHJKSFAWNMKOQYKPISYRAPVWOYNEONNHLHJNTYZBLTBRFJIJTPGYOCZKN");
    msg.dest_man.assign("CHIWCZJKTCKLPRVPJQGMHOBNDZYOUEFOKIKPAYCRQNGQAMCDADISNLISRPWUTFHRYDIXXVTWOUQLWKLFXQEQUZNXMJLYJVWAALHWTANEBSGVDBVGZGOSDXUUIKSXJYQFOZTMTUHWSJQWCSVYYNJNFMDMLTXSAETPEXEIKJBZWMGBLMOVKPRFICNVQKFVYPT");
    msg.conditions.assign("ZXUNHHPDTFRQOTVSHELKETABHSJRUJYQRUMSHSIDFPEBCBMMQSVVFEWOWZUXALQTLJFRJPRXCPTWKTDFLWYNOZHOADKCGGBDRQLGGOQHGOVJHCMEDSOIVYNLYXJXZISXTXVAZUN");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 32457U;
    tmp_msg_0.lat = 0.611371232296;
    tmp_msg_0.lon = 0.741271506041;
    tmp_msg_0.z = 0.190241052857;
    tmp_msg_0.z_units = 234U;
    tmp_msg_0.pitch = 0.753638963625;
    tmp_msg_0.amplitude = 0.974647506129;
    tmp_msg_0.duration = 58913U;
    tmp_msg_0.speed = 0.261182427022;
    tmp_msg_0.speed_units = 224U;
    tmp_msg_0.radius = 0.138162501668;
    tmp_msg_0.direction = 80U;
    tmp_msg_0.custom.assign("MVFYDEHGYIEWZCNRHBWBHVBDFRQTUVQVKTSSYAPVLLZSRQDLKJFNNFOTSOYJLFCZJWZUMLEDLGLCPUEAXONVTSBSPSAZLBFITNZTSBGNGCJWQXKRGKMYTDMBGAMZAXZXRCOAJYQPKNOXURRQXKU");
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
    msg.setTimeStamp(0.0606205567295);
    msg.setSource(6271U);
    msg.setSourceEntity(46U);
    msg.setDestination(60733U);
    msg.setDestinationEntity(15U);
    msg.source_man.assign("VKZFQWQGXSINLCESLVZQKGKJOBAQNKAPZUELUWVKVSODEDOGYBPYWFFWCLDFVMJMYKDGIOH");
    msg.dest_man.assign("NSZOXYWEMEDMSSSXNKCWSPTTDLYYUFGLESFRYAHNGPRPTGZBNNQAIAHKBUWHHIHHTRBLTOQOFLQGDPAGRMLNLQVMSJPRRQFITQZVGCRFHENAVGFDCZWYWQIBRPDZYATRWQIVJXSEIDXUFZXWOEKHTFDHGKYAAJIUUVKAMWECPKBWBKSJIPUCOBVNCBJCSPTBOGGQBJQVMFJUEDIVMDPWHCDEXFNVUULJX");
    msg.conditions.assign("MARKSAZIZFDEHSKYXHRBGTGJWDPEOCENCWBHSBTFRCECLNFRTFYHOXPNEULLFWSJXOXSEIOTNZICNBVYGQBQEDNKNGFCKKHNWYOJBPGJRAICOMXVLYKQFXGDHUZWAUCCXMBMAXARORAQRJMMWQIQYZENBFTTDKWGF");
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.284519280763;
    tmp_msg_0.lon = 0.880121984375;
    tmp_msg_0.alt = 0.417778925866;
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
    msg.setTimeStamp(0.916340231149);
    msg.setSource(59260U);
    msg.setSourceEntity(94U);
    msg.setDestination(34216U);
    msg.setDestinationEntity(162U);
    msg.source_man.assign("EHBOXWBDSLLRVFRNBXELDYEJVTPEZOHVCGGSKDZVZTKYZCWVNMZCUMTBJQMKDQQURMKBSLBWPICZTWFXUPRQOIRXNBIFILWNRDPFAACOAOHUMFWUQNGVCIRAFMHRNGAPEKFSHXDVQAFPWT");
    msg.dest_man.assign("EAPUNVEDXIIZFDXJOSHTITQPUPYCCELISVVJXCWWZDHGPYULOHBWYYDCSLMALQRCXQRQMDHWZJTBSBCXZSWPFMQTBSNWKJFCGUZMENAVYFKQSDLIBMFANKWEEHPIGLQOLPKMMOOGQOLFBRIXARKLWSZTJCYJEM");
    msg.conditions.assign("FTIEUWCQLYIVMWKOHGNTAEJWBMFPBXBZDNCGQHFAEMCBYBLNQPJIMUVMORVGRWVXKQLYWCEHASUBQJTYSAGTXGASDPPBKPBJDWMMLFRZLTIWUPCDWXUVJAIVXKXAGFPNFZRWWPELDGASOZSZFYCQBTHUOUERJBDURVJMYTCUKJDMXEHEKNKVSKRQOCFVQRHNINZOFNODKOZGHPXDSLHHGIIFDAOZSZQYYJ");

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
    msg.setTimeStamp(0.555447853705);
    msg.setSource(32393U);
    msg.setSourceEntity(150U);
    msg.setDestination(58882U);
    msg.setDestinationEntity(15U);
    msg.command = 72U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VNEIYDUTAOWISEEDEEPGOSAQWEAKVNGZKDINRNMTGBIHHXVUQAHHYYGOZKLBPUVXEURHBXLPQITGMPOGJJBSBWERXZXOLU");
    tmp_msg_0.description.assign("FABOUOVZDHEEUIXYLGJYYXMEOPCIORMZFKZEHWGXURHMAKCZDIVNPWTCGNGSHAHBNIAKPKHXGGFDKDANVOEHWVOSLOXFNGQCUWPNEZMGULCPVBZIJJNT");
    tmp_msg_0.vnamespace.assign("YRLYEWKLVOASOTLMQWZAWHXFIMYKGLAEQUNLUMCHEFQQV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HAAGSBWNVBNQMUXMRQXWQCLTYEXNYNPCLTBZRISNYGIABTNBFDJLTMXWQLLYVMNPZGAFPKDLUUPVDPVIAYXFIKGSEGWDLWTOZSVVTUSGRDGTDDGHJIQJAMEZQCDHPKJYKICSOEJDXMUFOPXBFFVHPDKAZEYAWRNXHGIEMHCAYCOZTZUUIAPWKFFMRNTJOGQJLOTBCPRSUQSIIFEKRR");
    tmp_tmp_msg_0_0.value.assign("DZBYVOSNTIWSEDMGJAOHPBTBVYUZJTCOVBVNNEMIKBIHKVXRBDQLATJUBYJXELXGQMMEZMACRGXYUWYWFHWSRSGEPENGXCRLPJSQOTSIPUQCKUDAYDFDFHCOFWPNYIDWAGHLRKRTXLZANU");
    tmp_tmp_msg_0_0.type = 84U;
    tmp_tmp_msg_0_0.access = 85U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HUIZLCYXOBBGNHJYUKAQZSTFQWNPFSOXRMAGTKWISDSGPCAQWOHROLVARUZBOZZNQPZKMFXPOBGZYXUYLNXLPDWOFMHIEXDQJVPBEJDPVRWCWHOJUIGGCEJXBFTCANKHVUATPAYCCGJSUCYTKCYMEFJMJKFHECRLIGQFPVNZVRTTSDVTEDNVRWLEMNDO");
    IMC::TeleoperationDone tmp_tmp_msg_0_1;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::CacheControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 110U;
    tmp_tmp_msg_0_2.snapshot.assign("CJQPYRJEJNLDTXVFYUMMWOUGQZDJTPTAKWPKTZMLIQCWIQPXUVBXAFCETSLJBOOWCCRRTUUAYYIRYHOXRBKFZMUZXOLYYJTAPDEUWIQBWYXBGSQZIHSUOTAKVWUEFEVMMJKDPVBRNSHSCLQGIVIZLPSTJAQABMKLGMEWYDJMEQNXHPXEGYRFSKGJXVEEGPXNFVDFBDVARDNOIDFGLBUGCSCZQLICZZONHFHFLKZHKRCSONWMNVHNISHTHBPNAO");
    IMC::DataSanity tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.sane = 59U;
    tmp_tmp_msg_0_2.message.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.123150733535);
    msg.setSource(18961U);
    msg.setSourceEntity(96U);
    msg.setDestination(53007U);
    msg.setDestinationEntity(18U);
    msg.command = 194U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NXANCAVUVXKTVWNONGFFDXQZBAJCLSDSCQBJYPWIHUETICTLSOYEPIYTXHRIRJGVRENZOGFTFVLSVRC");
    tmp_msg_0.description.assign("KAXLADUUWNVPPNXJHZLSZYBQFKEZSEBSVQKLDMSVEBPCBNTWJQJCDIGQFNOATIRDBYYEOXQGJGRKMTHMEHHQPOOWLDRIVXGWGEPRNOCYQCHFRVGCMMGYWBSKHLUNAHLTZFRVLMHYYEAWUGUXBJVIUFLQICWALKXTIPREIKZBSDBDGDUAPOQYKCNMKEXHSZWPZULJHYSFFWPAKVOXROJTDFNXOJPMXBZZCVINNQSTFGWCCFJSI");
    tmp_msg_0.vnamespace.assign("OYDTSFAFDZGRHRYLRQJLKEMAVSMZHGIALIZTNHQVPYCVUVFLHWSKYRBJGQUGYPQUCGLBDHHWKECNHZKPWKCBMWOGDXSPWMBRTFZVFLRTMXSGSU");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DMKDOWSBGHSVCCMUEFHHGBHATD");
    tmp_tmp_msg_0_0.value.assign("BKPLIVFCSLULIXRHOWGEYYKKMZYAQJKGAKQIMTPRRKPTXKSCFRCQBHETRIZFFNGSCIDOWYQCGTNDPZNOYFNSFJDVMMYWFXHTJUSSQVHGMSEUCAAORDEHBBONEBNKYVXUXVZWU");
    tmp_tmp_msg_0_0.type = 1U;
    tmp_tmp_msg_0_0.access = 66U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("FJAMJZYDCWGEYVPMYSSEHATITYNMMNIGLHXAJEHLDRNFCDQSWOGIODUDDYATFSYYJDGCUTIROANZCARNWUVLNHCVUJZQRUVBPMXAWZLGQJFZQMYMHFPKZOCFVQEPXLODBTWHTAEPVLPSUKRTSCHNYJKNBIMTVKXHBIWTOOSWUBJQINAJCDHLSWRSBPUEFIIYZXXBUVACQKWXKLVG");
    IMC::SetThrusterActuation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 9U;
    tmp_tmp_msg_0_1.value = 0.348767803413;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.824469186942);
    msg.setSource(49423U);
    msg.setSourceEntity(117U);
    msg.setDestination(52829U);
    msg.setDestinationEntity(69U);
    msg.command = 125U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MPJIOLVODYAFYXQHKSCZYDUJOQLBGQOPOUNGOYJCUSWDPBMNXDKXJXNLQCCZJAIFBGYIWWYZVIGREWMKEEDEZYYFJNWSSUBLBDYAZAVKICPHUERBOSXFMQTERTRXRSCHVPAWJTBFZKDADTKHVZKXLLOQWODVLBERGLCMGTXUTMQJRIIKECGGWGXBCNMQYSNSPTTVOHZWHMJKGAPFUTNFZACFEFQMKLIUIPEP");
    tmp_msg_0.description.assign("FXSUZWCLHGTCYCOCEJGYHKYYUO");
    tmp_msg_0.vnamespace.assign("QXCSEWJBJPNRSMDRQQAPPESSKYBRBDWYAHCHXNXFLWSBDRUEFKINJEHXXXTNDQZXGNOCVUOAJDVABMIUVBVWOVOLGUEDZLHASIDVKA");
    tmp_msg_0.start_man_id.assign("KBTFLLOOGWBTHNZEUDWXIUXDICQEGFQAHIJNFYSJLKBCTPVMDOWPYY");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("IWVNXIQAKRCIAOPZSGOBMAHKYTFHSLEMPLUFRXCCRRCFMUDBBIIHVZEEKSIDBXHIVSXFFCJBYXWYROHVQSGYSDYJNGNJZONQGQQJTZUVDBQCUGUIOZROSFCKCRIJWJOPMDKBAYYNWHYTQJFRXNKZTOTVTWTDPNAGK");
    IMC::YoYo tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 8173U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.658953726835;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.448619734575;
    tmp_tmp_tmp_msg_0_0_0.z = 0.332458382138;
    tmp_tmp_tmp_msg_0_0_0.z_units = 130U;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.147570947862;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.301715934908;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.490304042181;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 68U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DPQQTAIZCTKWFISTIOVRSCESZGNORQRMKSBCHATDKYLJUDHBJRPLZXMPNZBFXWKLXPOLRJOPYTFYQVOKCFXABEGBHFGYNYMMLAGSIWGUTBMWIFHTSLNPJVOCREKJFGHMYGCDNAJNKEMXNTEQJCVUOWEDMSXZSOZCIUPQQY");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::EntityMonitoringState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.mcount = 2U;
    tmp_tmp_tmp_msg_0_0_1.mnames.assign("HXWEXYBUTIEKXHVEPJHRWCOOPSKMSBNBHAHUNSTAISOBOAAZUWKSLGJVKFCZMCRDYFDCGTZVLXVWDHGRARJFTKXQXJCBPYLKMGQKQQOUXYIYNIVOICUNSVJWFQMSKDGQRDARHRUQWPXF");
    tmp_tmp_tmp_msg_0_0_1.ecount = 16U;
    tmp_tmp_tmp_msg_0_0_1.enames.assign("FVHZAEXCMGMSUNDRUEHQKRCHSTFFVTJJPBVUKIQBTILHRUYODOEZZUWKYKVWGLXYFUCFDJQNKRPCC");
    tmp_tmp_tmp_msg_0_0_1.ccount = 37U;
    tmp_tmp_tmp_msg_0_0_1.cnames.assign("NKVVUSAHWZMLZWBBUEULXFMOERSGZHHNFHTGKAZCSHNIDIAQKZTMJLFKDOBFDQGPWISAGLLCRRRIPJFVOOWIJXEXMBDJCAGLDOTKTXVESHFMFNEJIXHBAMVIUAEZFQRGPCQYMXTSOHPOPJBRTBYBQRUEPIVGKQUEXNRJFINQTWZXVUCWGPZAWEZYUQTPTYCURXKDGBDKBCKNJN");
    tmp_tmp_tmp_msg_0_0_1.last_error.assign("TQYKNJWBJWOTUCCNWGUZIHXSVYZREILQPZAHLLMJGPIFIZBQTDAGGVJQKUZFDQRAXTBHPEBEHPMALYQOXTDYAIZESTNFNQVGHMARRAICCANMONCVJSWFBBLFKKFRTXLSTXMEDQCGSMPBUMVSDJGCSMOEZNVKVGLPXMSRWPVDKAHICPFDYBKGUFBNJQGHWFULFPUJJERVUEWWKSYTHHBWSZXKKINNZREJAODRCW");
    tmp_tmp_tmp_msg_0_0_1.last_error_time = 0.307694133149;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("HETESQXPAXKZNPHWBUCUYPEAFKYDDPHFNVSESOVXMPJXKIALJRDGPVNMADSZGOQWETWFYIORIRZGXIHRZFBACDKGJANWDLRXCTVZUXMZTWDUEQWVLMP");
    tmp_tmp_msg_0_1.dest_man.assign("KTXXWENDRRLIDPBJIOCCLKXQXXUTOCUICBSQTGDUVYUZAVLAHFTYGADZOLOLZRWDENRLZFZIRPJQGECMZPUZQJJJWMPTFWBRUZYMPYIEJK");
    tmp_tmp_msg_0_1.conditions.assign("RLXCMJUGPAOOVTUBQDEIVWIZFGKPKNYSITWQJIQUGXOMABKEDXTISMCGAXKWZFLEMKELEHVHKZPTDBDMLMWOOSOILCBKWJRKFLJGPCKHSBTGDIUYHMDTFNMBXZIOXQBNWCYSHWZSNROJAWFJJQZ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::DevCalibrationState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.total_steps = 168U;
    tmp_tmp_msg_0_2.step_number = 129U;
    tmp_tmp_msg_0_2.step.assign("YBKFGMVJNCVUHCIQRVQQCEHQILARFFZPUMGNGMAYYHSSIEOGTDBKTKOLXHSJUFKBEXTWIKLGJOUITTPPECIYNLMKYIBOELVAMRFDUCHDASSTOBEXDRMVIWAZXPLQTFXGRXBTMCKVUXNJJFZZFRQWQZERJVYOFWDHAZDBNAWRPHEPSIOYSUDDKZQRINJSLWOCFLZDROXNGEABMXLTJVJMLWO");
    tmp_tmp_msg_0_2.flags = 176U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::DataSanity tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.sane = 237U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.180153149183);
    msg.setSource(30100U);
    msg.setSourceEntity(97U);
    msg.setDestination(54867U);
    msg.setDestinationEntity(100U);
    msg.state = 81U;
    msg.plan_id.assign("FYADYIPZCAZLVBTHEINSWDVDUFLGLVYIGDVIDQEDECSRXBZROMPFRHTAXKBVPWQLOKEJJJBPMKNTCLZZRECKYBIOXBGLZTMRLWLJEIIWAUGHHXLRHWFATCFRNEVYPTYWNUDRVQZSUKUQJMCEJFIJQWUBXNODKBV");
    msg.comm_level = 88U;

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
    msg.setTimeStamp(0.676746271432);
    msg.setSource(10126U);
    msg.setSourceEntity(226U);
    msg.setDestination(58808U);
    msg.setDestinationEntity(222U);
    msg.state = 179U;
    msg.plan_id.assign("WCTNPSECPPFJIWHZRJDGBSTGUDJYZCGLLBGUKVRFMGMVFNWFQKLPFLCUOWQHPKJOAPNPMIWCWUSGXODTUKIQBZJXVERQNUHFNDSJHSOMRLOJHEBOYI");
    msg.comm_level = 51U;

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
    msg.setTimeStamp(0.364192652013);
    msg.setSource(41005U);
    msg.setSourceEntity(80U);
    msg.setDestination(2522U);
    msg.setDestinationEntity(200U);
    msg.state = 5U;
    msg.plan_id.assign("LGHTPCYBRLD");
    msg.comm_level = 177U;

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
    msg.setTimeStamp(0.00205361372458);
    msg.setSource(21516U);
    msg.setSourceEntity(107U);
    msg.setDestination(7875U);
    msg.setDestinationEntity(42U);
    msg.type = 141U;
    msg.op = 21U;
    msg.request_id = 41619U;
    msg.plan_id.assign("LHGKWMHRICBWVZZTWTTAZDOFYYVUGLJSAKGQLSZCRDMAXNVLXQUTETPRCKXRKABONTAOCPRPXCZXLTGUXUCQBHMQKSACKPJGXHWHYOVESIMODSYP");
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 199U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AUSGSWXYVYAZJJPHGINOUMEDHMXGZEBPQHYTJFYNJJNWWFCUYLHAGDOPZTFCICKHRWCMDRPPQJYPDABRWHFMBZEUKNXUYMTEUOKZBRUHDXEKBQIZTUJMZEGIINNOYXHFBLQVCMWMNASKCMLQDVLRFONSPVJQOVISZKKWRNDMDPGQXKAXTYUQHRRBFVTACQVOOWRAITBVAJDGUBWJOLZKICSEIOWPBTKYQTGESSLVNHPFSXVIF");

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
    msg.setTimeStamp(0.750861928623);
    msg.setSource(56519U);
    msg.setSourceEntity(247U);
    msg.setDestination(47647U);
    msg.setDestinationEntity(141U);
    msg.type = 138U;
    msg.op = 33U;
    msg.request_id = 45846U;
    msg.plan_id.assign("FOMBXMMSQRJWTEYVXEFEMBUIQIROCNFFBNTYGSLSMJTPFVXCUBUYNAAUDVAXUQHQNTGINDNUJBKIDMZGWTXTRJJEGGMEOZLJORVODXFJWRALPSHHNUUSDWGSZVKRZEEYCZVYIADLKRGMLTSSRYFZKTXBRVVMAACPIPBKATFYPVOHOKNBLQLCZECPIOYWPWDSL");
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 14360U;
    tmp_msg_0.sys_dst.assign("IGLZWDCWSPJCQFCVMBECLKOWURZXSTBPMQGVPFENIOHKMWJIGBAAMYENUIYVNNUPILCTGEOXXQQCVWRKEHOKZRFRVPGYXGDLATCRVMTJZLPBSTAKRMCLEMRUEXWSIVVDERSAXQASGOSNSQGYYUDKHKZTIWLFOZEOYXCLHHSDKFTB");
    tmp_msg_0.flags = 1U;
    const char tmp_tmp_msg_0_0[] = {73, 16, 66, 33, 68, -37, -18, -14, 22, 83, -96, 84, 15, -50, -37, 75, -64, -52, -4, 114, 72, 14, -78, -38, 67, 60, 107, 53, 2, 106, 25, -19, 85, 29, 5, -17, -3, -41, -77, -96, -30, 64, 13, 42, 119, -47, -64, 41, 111, 23, -35, 39, -30, 101, 50, 124, 113, 33, 63, -25, 48, -97, 24, 102, -49, -98, 30, -97, 125, 73, 28, -8, -12, 75, -43, -29, 119, -26, 52, 47, 51, -87, -61, 60, 15, 20, 64, 103, 12, -90, -62, -76, -47, -46, -39, 104, 108, -95, -108, -89, -68, 96, -21, 109, -2, 78, 52, -118, 117, 114, -20, 60, 90, -11, 104, -40, 85, 84, -41, -95, -12, 123, 113, -54, -124, 112, -112, -7, 2, 28, 37, -41, -85, -53, 95, 34, -8, -37, -61, 20, -1, 25, 79, 70, 117, -89, -31, 96, -86, 107, -4, 100, -22, 74, -5, -122, 26, -65, -63, -17, 24, 107, -9, 92, -117, -21, 94, -32, 69, 51, -86, -5, 53, 76, 77, -110, 93, 100, 10, -102, 126, -85, -54, 18, 4, 86, -25, -112, 67, 59, 76, -30, 70, 63, -123, 69, -108, 97, 46, 6, -75, 30, -51, 55, 57, -114, -70, 108, -6, -42, 31, 125, -106, -65, 34, 65, 116, -76, -7, -93, -66, 15, -29, 81, 76, 4, 122, -67, 47, -22, 112, -32, -109, 98, -81, 86, 12, 46, -1, 124, 12, -121, -125, 82, 81, 99, -74};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XKPWXANSOBUZOOXLAGRJRJSVFCXDVBXSMHDAYEOSCEPRRQCDQTNLCXUZHAHXWWYIMQDUZNFXZZXSTCSFKIBKBFXTSRZCIPBTLYFMQIVHYYWIEUQNNKAVSHTPYHGJBKMLCQPCDEDWUMPNJHEOGPCBQZHGAELMKJQFWKFBP");

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
    msg.setTimeStamp(0.148001418397);
    msg.setSource(14052U);
    msg.setSourceEntity(111U);
    msg.setDestination(38774U);
    msg.setDestinationEntity(166U);
    msg.type = 149U;
    msg.op = 183U;
    msg.request_id = 7741U;
    msg.plan_id.assign("FXBTUYMZDHEVHKHMBATLTCOLRCCZSVBEFAZXWMKWQEKWTVLZKMIBQPCKUUWJBAURDKYRLRKIXEXWDOJPNLTEOQQIAPTFJPSXHVVFXZRPICJNYSJROWCASVOQALYUYDQGUHYZULSPOVYPMQVWIHOVZOM");
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("GDVDQFGIVMOXUKXEJGCPFOOMTYDNMCQJKQUPKHQSBOHWDLXZGSXYWBFROGTDSNFJTHGZETJRWKLWMXXORYBGJXHRAKIVHIWRNHXAVRIUOAYYAZCCFBYVAEPWXRFANLDMTUEGQQEKCPBLTPSLAMDCZJGNZIHPNOVDYMPMAAZXLK");
    tmp_msg_0.value = 60U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WPYJHERBBKNIELVTZSMQYRHWEDUYYQNQGVWPOSXJAYJIPYEFVSMSDBVCAUMUMZGRSIORQIWYFIJUTECKMPTJDBNTAZNGVVTDYNAJZXCZMUKXXFLWYBGJLWCRFANLJISEUNBRHAFECTCQMWEFXZZPNMJOXIRXOCZDLFTDKZVNGKXUPAQWOVSHTZWVLHESLKGRE");

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
    msg.setTimeStamp(0.688664763481);
    msg.setSource(16448U);
    msg.setSourceEntity(33U);
    msg.setDestination(9565U);
    msg.setDestinationEntity(79U);
    msg.plan_count = 29540U;
    msg.plan_size = 2148994778U;
    msg.change_time = 0.584763310572;
    msg.change_sid = 5374U;
    msg.change_sname.assign("JDEXVSTDWYFZIDYAUGFSEORMTUEEMTEBYQZJFBBZBOQDARYSVZHIOFAXIHDIARHAXQPJGMCORTYJGSTCNSMACFZSBLNNVTWKRWJU");
    const char tmp_msg_0[] = {-4, -123, 74, -4, 7, -54, -98, 69, -72, 21, 52, 111, 51, 108, 64, 87, 83, 96, 32, 52, -112, -38, 82, 46, 67, 55, -77, 103, -45, 66, 53, 81, 3, -48, -120, -124, 3, -126, -112, 122, 115, -110, 110, -38, -78, 74, 58, 18, 5, 20, -33, -48, -26, -55, -42, 89, -39, 49, 19, 80, -99, -13, 26, -28, 89, 91, -58, 8, -120, -17, 111, -46, 71, -113, -42, -21, -32, 19, 76, 41, -65, -103, 14, -45, -20, 119, 98, 108, 65, -96, 72, -14, 85, -53, -113, -92, 56, 79, 66, -75, 85, -90, -11, -105, -76, 102, -44, 77, 69, 125, 45, 112, 106, -55, -58, -15, -50, 64, -4, 33, 12, -40, -81, -8, 59, -114, 89, -84, -14, -33, -85, 51, -8, -89, -120, 37, 108, -96, 97, -101, 48, -101, 6, -125, -126, 38, 74, -118, -114, 29, 53, -105, -118, -97, -17, -116, -74, -5, 50, 86, 30, -73, 92, 59, 29, 116, -49, -7, 112, -95, -72, 33, 111, 83, -118, -23, 55, -89, 41, -53, -51, -21, -94, -102, -94, -32, 105, 122, 70, -19, 121, 15, 13, 89, -71};
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
    msg.setTimeStamp(0.0544224253136);
    msg.setSource(64838U);
    msg.setSourceEntity(83U);
    msg.setDestination(12638U);
    msg.setDestinationEntity(5U);
    msg.plan_count = 19585U;
    msg.plan_size = 1404763575U;
    msg.change_time = 0.000968265413301;
    msg.change_sid = 15175U;
    msg.change_sname.assign("DWQZSTZWUBURSARYNKKDOTAIOZKQJJIJYAKOYCOEZQGNIKPARVQNGYLGPCPLIWWOBSTD");
    const char tmp_msg_0[] = {40, -26, 85, 116, -83, 94, -46, 97, -89, -68, 101, -113, 20, 27, 87, 58, -4, 94, -120, 68, -108, -102, -101, -82, 80, 87, -50, -117, -34, -94, 3, 113, -108, -126, 90, 2, -99, -115, 93, -128, -5, 14, -72, -24, 20, -90, 88, -14, -64, -50, 93, -86, 24, 25, 104, -87, -55, 27, 72, 122, 50, 84, 1, -84, 102, -24, -63, 95, -58, 70, -21, -32, -36, -116, -60, -107, -116, 58, 107, -110, 116, 120, 72, -14, -73, -24, -127, -5, -17, 101, 69, -100, 40, 54, -125, -93, 126, -63, -37, 44, 49, 98, 117, -111, 111, -40, -94, 86, -17, -111, 61, 54, 4, 114, -14, 102, 53, -89, -95, -126, 92, -111, -99, -12, -5, -50, 83, -102, -47, -78, 117, 105, 77, 29, -74, 12};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DORUEZDFHJWYIQFAHLBMCQRJTCOCRQSTIOKZYKPKZGNOHIEJMHXXDWKSHITFCYWUBBYTEIXJRACFUVMEPRNSUQNWVVKBJMVWLOXWLRXYANRJTPMBAVLMHLECYSENJTYLKCZQSBZDKGBPQFWAUWVFUVSDHCVBUMLXODDGGBNGWTFJPKVWOVGXHQZMERGLYNXFE");
    tmp_msg_1.plan_size = 49323U;
    tmp_msg_1.change_time = 0.151330274093;
    tmp_msg_1.change_sid = 8752U;
    tmp_msg_1.change_sname.assign("ACHTBYCMQFVXOGLOAJMETNVIXVDDXQLZYOJUUMWAIBOQPHUNIQBKCAJVPHSPGJYK");
    const char tmp_tmp_msg_1_0[] = {-69, -88, 8, 25, -9, -87, -96, -113, 81, 102, 51, 98, -24, -76, 9, 42, -61, -33, 108, 0, 76, -5, 2, 19, 44, -94, 95, 126, -40, -60, -66, 42, 70, -42, 121, 96, 70, -50, 59, 73, -58, -122, -116, 99, -105, 52, -65, 106, -10, -119, 45, 122, 73, 54, -68, -86, -115, 120, -111, 32, -118, 110, 98, -128, 40, -70, 60, 51, -89, 4, -72, -91, 48, -120, 85, -123, 11, -64, 26, 92, 102, 37, 48, -69, 12, 2, 40, -74, -113, 88, -105, -90, -4, -49, -54, -109, -94, 4, 47, -15, -24, -119, 126, -31, 91, -51, -124, 67, 87, 120, 16, 61, -95, 81, -47, -89, 44, -104, -126, 120, 47, 114, -68, 52, 45, -90, -112, 18, -25, 14, -66, -113, -119, -60, -19, 70, 19, -4, -61, -112, 109, 13, 27, -123, -94, 84, 77, 56, 40, 73, 94, -113, -34, -101, 119, -63, -68, -14, -66, 57, -29, -83, 48, 31, 25, -77, 29, 80, -56, -104, -35, -43, -13, -43, 103, 97, -96, -29, -8, -101, -45, -65, 36, 68, -44, 70, -84, -11, 63, 81, 126, -96, -82, -82, -57, -128, 108, 108, -83, 61, -49, -82, 37, -56, -70, 13, -101, 123, -53, 89, 110, -50, 39};
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
    msg.setTimeStamp(0.0902301627428);
    msg.setSource(12914U);
    msg.setSourceEntity(17U);
    msg.setDestination(33962U);
    msg.setDestinationEntity(252U);
    msg.plan_count = 35798U;
    msg.plan_size = 3230980623U;
    msg.change_time = 0.923897717592;
    msg.change_sid = 44392U;
    msg.change_sname.assign("IJBVEHIYMUQTRUYJVKFVHBHUCRPWKFITLYMOSFAZLEJGGFTDRYEDDRMGSGDNHHGPUZBNYVPNPOBYVQDARTIAPKFBKKMBCOLYVDAWUWWBXJZXFVGYQC");
    const char tmp_msg_0[] = {72, -65, 0, -31, -127, 123, -17, -48, 90, 94, 64, -74, 107, -43, 54, 48, 16, -100, -84, -60, 101, 36, -8, 73, -118, -38, 39, 58, 12, 47, 40, 59, -54, 108, -80, 0, 85, -79, 63, -12, 109, -90, 91, 118, 78, -40, 25, 19, -43, -74, 34, 26, -94, 29, 61, -81, 74, 30, 110, 80, 11, 16, 45, -31, -81, -126, -120, -107, -82, 30, -12, 7, -26, -39, -86, 59, 114, 26, -52, 54, -93, -43, -99, -93, 76, 56, -98, -17, 97, -81, -26, 92, 66, -48, 47, 55, -94, -108, 120, 93, 76, 109, 53, 34, 30, -123, 76, 108, 11, -62, 104, 13, 41, -80, 100, -34, -56, 65, -5, 44, -20, 8, -70, -51, 47, 84, -99, 113, 117, -36, -72, -79, -68, 103, -22, 115, 126, -114, -12, 65, -9, -56, 78, 119, 5, 55, -83, -50, -31, -1, 74, -112, 74, 96, 71, -94, 121, -119, 54, 80, 109, -88, 126, 41, 103, 96, -87, -110, -117, 96, -115, 27, 89, 51, 92, 110, -53, 115, 16, -102, 19, -45, -54, -85, 14, -90, -114, 41, -88, 21, 60, -102, 10, -17, -54};
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
    msg.setTimeStamp(0.600145505877);
    msg.setSource(49169U);
    msg.setSourceEntity(160U);
    msg.setDestination(46849U);
    msg.setDestinationEntity(201U);
    msg.plan_id.assign("LANSCMZMURSWGHBIEPTZSYMMOBOXKHYKOIDCXJGMGFTDTHWWQTYOVOXVBWVOUGSPIEHYB");
    msg.plan_size = 32491U;
    msg.change_time = 0.832446766177;
    msg.change_sid = 54532U;
    msg.change_sname.assign("TZZKFZPHGKPRVVCXEMNZNDSPHWEJUZUPKUYZSNOYCGFGMDLWNYTANNTWPBOTBOLQBSMPSEOTVFIIQZGVEMAKUXRIJTTBHBHPMKVBUZOCBBSXRUCIUGROHDQJSALNIHCMDCLQAGMECXWOFYUJPXTW");
    const char tmp_msg_0[] = {-123, 1, -42, -36, -76, -59, -126, -77, -16, -1, -66, -14, 54, 126, 83, -3, 79, 104, -73, -74, -123, 23, -45, -18, -106, 0, 109, -105, -12, 63, -122, -118, 101, -53, 60, 94, 120, 42, -75, -99, -91, -4, 122, 75, -38, 76, 45, -39, 91, 9, -45, -19, -26, 61, 41};
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
    msg.setTimeStamp(0.800090056583);
    msg.setSource(19635U);
    msg.setSourceEntity(0U);
    msg.setDestination(40809U);
    msg.setDestinationEntity(46U);
    msg.plan_id.assign("PFLWEZXKELQLZWDLOFOQLSGGE");
    msg.plan_size = 36879U;
    msg.change_time = 0.787971002693;
    msg.change_sid = 33102U;
    msg.change_sname.assign("VOQNRKIEAUPOJCGHFUDMGINSSHXGLUUOYSYNLSDCWREBZYWOSAICMBNWXPKSSPJGITDQIYBDPVKCJBRDQTXGVAFLHLEI");
    const char tmp_msg_0[] = {-52, -124, 9, 11, 86, 77, 93, 3, 59, -69, -71, -51, 31, 18, 70, -43, 3, -24, 32, -90, -87, 37, 26, -124, 54, 103, -17, 43, -126, 15, -50, 43, -115, -105, -103, 32, -17, -51, -116, 73, 50, 17, -115, 119, -3, -30, -31, 64, 123, -18, 46, 30, -18, 81, -35, -79, -94, 90, -4, -34, -10, -104, 38, 106, 57, -38, 26, -71, -53, -24, 93, -50, -38, -20, 70, 109, 29, 26, 42, 3, -62, -56, 48, 115, -79, -109, 4, 42, -19, -45, 116, 77, -13, -30, 2, 77, -6, 14, -99, 61, -52, -123, -20, -59, 63, 62, 102, 104, -44, 90, -22, 105, 31, -30, 84, -111, -17, 16, -79, -111, 71, 85, 100, 60, -114, 101, -123, 118, 10, -53, 91, -128, 15, -123, -45, -30, 102, -59, -28, -50, 95, 0, -64, 112, 40, 44, 2, 72, -65, -58, -14, -122, -113, -117, 84, -36, 77, -37, -5, 51, -80, 88, -50, 77, -13, 63, 105, -64, 97, 124, 115, 107, -81, -61, -2, 82, -123, 119, -72, -78, 44, -13, -39, 81, 92, -56, 2, -76, -4, 94, 47, -37, -124, 72, 18, -103, -104, -37, -61, -44, -37, -96, -38, 58, -92, -45, -30, -17, 27, 104, 126, -81, 95, 61, -16, 6, -123, 43, -27, 87, -50, -88, -61, 101, 69, -123, -52, -45, -99, 81, 107, -119, 97, -26, 7, -110, 81, 40, -55, -6, 43, 41, -28, -114, -114, 84, 97};
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
    msg.setTimeStamp(0.38153420737);
    msg.setSource(55720U);
    msg.setSourceEntity(71U);
    msg.setDestination(57023U);
    msg.setDestinationEntity(71U);
    msg.plan_id.assign("CJMNIWIXYCIDIOHLRKJXEIHLTKNMFKVBETQJOBLXOBVAWURBGXVXNQWKUMPWIITVGJNOJMSCKJOZHASUPISZVDLA");
    msg.plan_size = 62522U;
    msg.change_time = 0.856697403878;
    msg.change_sid = 2219U;
    msg.change_sname.assign("DEAVOZCKUGQZFEYYJOJZRNZZEDYLXUZKNROKVHDRSYLZTRCVKXEZEWPSDMHPBGFXRVPOGUUATQSWJSHQXQDXPBBWJOHBJMIATUHTVIVJCGGSCPANXYFMRQMSLYRYGWUWTNXAZAIDVTCXVXMNESBIQLBULOBHAJHUKACELDLPANJNOOFIKSYCABGFEQFITIETOW");
    const char tmp_msg_0[] = {-100, 29, 70, -106, 112, -59, 4, 89, 77, 22, -33, 63, -68, 106, -74, -126, 13, 33, 43, 91, -30, -106, -79, 23, -33, 112, -63, 83, 2, 59, -77, 124, 85, -22, -21, -109, -33, -3, -97, -52, -62, 105, 8, 19, -125, -76, -102, -90, 64, -106, 21, 39, 61, 51, 70, 9, 76, -36, 1, 96, 52, 85, 106, 79, -14, -95, -77, 114, -72, -42, 13, 84, 2, 103, -24, -70, -49, 54, 79, 47, 67, -125, -61, -89, -85, 78, -60, -72, -20, 83, 59, -87, 6, 99, -19, 11, -32, -57, -51, -109, -118, -113, 37, -60, -5, 18, 33, -110, 24, -79, 106, 70, 125, 12, 4, 38, -87, 125, 74, -52, -98, -101, -112, 29, 21, 2, 83, 60, -50, 71, 65, 16, 109, -3, 14, -58, -50, -92, -52, 3, -40, -48, -74, 83, -49, 73, -119, -95, 97, 38, 23, -29, -111, 61, 5, 46, 107, 73, -69, -12, -109, -43, -64, -123, -16, 5, -21, -74, -98, 46, 125, 43, 46, -13, 82, -8, 104, 96, -53, -66, -33, -61, 28, -87, -46, 77, 117, 22, -30, 119, -51, -86, 77, 16, -26, -22, 119, 7, 44, -5, -95, 18, 92, -103, -14, -70, -57, -63, -109, 1, 116, 74, -95, -61, -119, 9, -28, 75, 73, -18, 90, 69, 79, 96, 87, 52, -115, -43, -110, -12, 22, -72, -123, 110, -41, -34, 116, 36, 32, 25, -60, 72, -24, -81, 79, -14, 8, 16, -118, 48, -23, 65, 105};
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
    msg.setTimeStamp(0.559698082639);
    msg.setSource(29279U);
    msg.setSourceEntity(246U);
    msg.setDestination(64152U);
    msg.setDestinationEntity(60U);
    msg.type = 122U;
    msg.op = 99U;
    msg.request_id = 16451U;
    msg.plan_id.assign("UKTHYSFQHWAQQCZSSQVLAKJRATPYXTCBSCGIGBHCRAZEZSNROWMDSELNKMMAHGTYBMFBWMLGVUZOFPJJVCFJFOOBKKYAIJEGYPXPURPSIGTHVVVRCXXHDPIZRBZI");
    msg.flags = 39786U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 5313U;
    tmp_msg_0.lat = 0.492204757377;
    tmp_msg_0.lon = 0.610962099498;
    tmp_msg_0.z = 0.894089634542;
    tmp_msg_0.z_units = 224U;
    tmp_msg_0.speed = 0.229776635274;
    tmp_msg_0.speed_units = 125U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.708274389928;
    tmp_tmp_msg_0_0.y = 0.0889487152255;
    tmp_tmp_msg_0_0.z = 0.611409132031;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("VQLTZHLZPGZ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CDGCDUSTKNZOHODFFOABOVWTABXUMNHQSQRVFIMDFAWETIIWISRCTPMFIPHKBKVLAXJUJNDOWPROJHEUUQZCTUFXBZNMPYGBKLQANLAROTVPBNDPXFSIMGKSJOGRQVVZHDGDXZNBZEAHTPYXIYCLUQYZCDBEJEZPPEXWGKKXHKZMDEWWQVNHOSLYVASHIYGXYJUMCTSRSRSKMCPJVYHWYJTRAERW");

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
    msg.setTimeStamp(0.340122133908);
    msg.setSource(18779U);
    msg.setSourceEntity(121U);
    msg.setDestination(7849U);
    msg.setDestinationEntity(179U);
    msg.type = 67U;
    msg.op = 215U;
    msg.request_id = 32236U;
    msg.plan_id.assign("GURKMQZFOXRRZFYQTHOWVVPFQZKSHUSMBXFBQDERISRONQGIJODGEPECHGMGLXLAWSIZLLPWTABNLZVCOGKMYQMJZNPHKAZYDCHTTRUJXFTJOFYAKFASBALKFBALQNBOPDUMWKDNIGJCMTHVUBMTBJFYGCSCDHYMXKPBYGNHDPESLKVSXZXDMWE");
    msg.flags = 57270U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.937632818145;
    tmp_msg_0.lon = 0.0474264605023;
    tmp_msg_0.z = 0.400387963131;
    tmp_msg_0.z_units = 51U;
    tmp_msg_0.speed = 0.0835002314434;
    tmp_msg_0.speed_units = 245U;
    tmp_msg_0.custom.assign("GETQQJKEPNBPNPQFMPMNKAZRYVYFKUXTUDGAKOZBWGPLVYCIJMRAHKMWTLJHGNOINAFLIOUTQPZHWQSTOFGIORQWUWGQZFSAVXYKIEWOCCRZSLOPISA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RJNPEQKGNONAMWKXQIJKUJVBTPPLBZYHEPSUVSKXFSVCIDZSJZOLAWTMZDXKDARDGYGAJORHCPVXANOWIIHEXRIEBCCZHFXLZOZQTMJPMYDZTMNFXEFRAPKDBFFNOHGTVLDYFCDWHUMULBQYQRWWIRTREJDPSNVMFVKSGVKSTIJKBQASLCKNMMRCAQNLOGITVDEOBAXFIWHHUHYOUYYPUHYWZTCLOI");

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
    msg.setTimeStamp(0.151525245206);
    msg.setSource(5458U);
    msg.setSourceEntity(43U);
    msg.setDestination(23196U);
    msg.setDestinationEntity(174U);
    msg.type = 170U;
    msg.op = 232U;
    msg.request_id = 50622U;
    msg.plan_id.assign("XILGWPIUADLGEYVNDBYFXPCIQSYXO");
    msg.flags = 64937U;
    IMC::TransmissionStatus tmp_msg_0;
    tmp_msg_0.req_id = 55161U;
    tmp_msg_0.status = 20U;
    tmp_msg_0.range = 0.927825850859;
    tmp_msg_0.info.assign("TPTVEQKJAAYTREZQFJEZDUIKWGNQDQNGULWJYOOPOCGDOKSULIMIAAYHDWFNZBEDZ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MIQNNDIUUDOTHVWRIZWZSQHFMWWXOSPGBAYOXBYGUJFMPWXCWKWDOGGUFGYCZPEYJJQKVVBRKOTPRLHQICUTYOLRZDKMEYVEOFWKZZINIPMXSQAVJAINDKUSAATORQYEHBKZBBRQFRULFVAHCSSQYSNNEIZGSRXPTLBAVLOFLFSLJRCVNEFDYMBOZCZPNVPUJHXFXUGTHMMDMCGHEILPTXXLTHLVJDAXPQNKKBJDS");

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
    msg.setTimeStamp(0.808312458153);
    msg.setSource(18156U);
    msg.setSourceEntity(99U);
    msg.setDestination(30243U);
    msg.setDestinationEntity(73U);
    msg.state = 24U;
    msg.plan_id.assign("PHOQBJSEJHPGWUTRKSNDKKXTQLTKSSYABWQGMPYYETGXZKNAWAMRWZLOCCLULNJRDZQNILSELPNXOZOHFVWAIWPTHQZADJRDECAUWSJHUQYZUGYQJXBEXAZGFVXVOSVNFDHIQCVCSQDLSWIDNHWNRFGIZGVCECMOECFTPMJBTMRNHFYUYMPPKLGFAOFR");
    msg.plan_eta = -1498832591;
    msg.plan_progress = 0.653584950567;
    msg.man_id.assign("RBUSPSGVRINQEHWNSVGXREYBID");
    msg.man_type = 9113U;
    msg.man_eta = -1992363084;
    msg.last_outcome = 97U;

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
    msg.setTimeStamp(0.31086155185);
    msg.setSource(37759U);
    msg.setSourceEntity(138U);
    msg.setDestination(54332U);
    msg.setDestinationEntity(63U);
    msg.state = 191U;
    msg.plan_id.assign("OQVQZLRZMPOCJIEXKAEKXXSFXZAXDCDRPRIGNJVGAGLDOQYJQPCTTJNJKWPBOVIVEMIECSHMPQGGKZJLTXZFPUNTIKWHLWFBSUYAUEPHBPCWWVKDYWWVWOTELBJYRTRXARUFQVPZNXLONJIEH");
    msg.plan_eta = -100293642;
    msg.plan_progress = 0.294909996401;
    msg.man_id.assign("REWGYVQCHBNUIJUATMICHJEPADXHFEDYXNBJCDCSAGOZOHNBITTGOSPZJSNLTOKLGZHFVUWKWAZSFMTKWATAFQZRZOXFCHRPOKDUAUICJBFVE");
    msg.man_type = 50508U;
    msg.man_eta = 830991021;
    msg.last_outcome = 135U;

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
    msg.setTimeStamp(0.369523029389);
    msg.setSource(14275U);
    msg.setSourceEntity(210U);
    msg.setDestination(16323U);
    msg.setDestinationEntity(221U);
    msg.state = 244U;
    msg.plan_id.assign("MRFVBGAZLNWDPAAHRCISXQZAHCZJYRMIUEQUIQMDOWDJAIGGGCEUBXDOJJVQHUYHFMXWRRLWTQMDDCKBSFHVLTNKFKQOKZKABVXIXLPFYOTOUSJCNAHJTPUFERHPWBYJVNHUQFVPTCNKVVXAOCLISJOOWTGSZKBSRLCLBZESVMJRENEZJRDGPNPDNBTGRCVHFWKDETSSPIEEENDQPOLUKS");
    msg.plan_eta = 1233156242;
    msg.plan_progress = 0.451146107929;
    msg.man_id.assign("LQBCZUTTHCFJTGMFBWEDPEVAMSNBYGMAGIBXAQKFRUOSQLPNYEIYTAKDHFFRUZTKYVJTHEQMLRCHWOVXSJPMJYZYCKGDSJMFXJMHEYJQBVCRXMFOUFEXVZBPOSZHUZZGDIUBZPIGOWSAJESANKAHVITVWPJENDIIKOKFWODCBWQRWDRSAAKGCLMP");
    msg.man_type = 33622U;
    msg.man_eta = -113275323;
    msg.last_outcome = 151U;

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
    msg.setTimeStamp(0.790568736558);
    msg.setSource(60912U);
    msg.setSourceEntity(121U);
    msg.setDestination(9612U);
    msg.setDestinationEntity(237U);
    msg.name.assign("VIYNDMWLAUZVGBXUPAQFMYMQHTAHRGULYWLZXPMDHNFSNO");
    msg.value.assign("RCKKZRIKUTAFLEVJEHPMFJMOPTLSAVMCYMFJVIPWZGRSQTBMWHYHOAOGWXLUWYKNSBFXULVOKBYSEVVGLEUWFCRITDGOHRFKIRASXLVCKWSOFZCHZFXJJYMAUOXHYDQWJNLTDNUPWGNZNXIJKFVSNHOSCTUDQTZGXPZYAEDNRTRMYSKEDHYWIGCIQPQCSQQZBXEKMLPHUPCQUQNGNRAWEAJGDFOIBMIXZPY");
    msg.type = 26U;
    msg.access = 46U;

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
    msg.setTimeStamp(0.976663530714);
    msg.setSource(45808U);
    msg.setSourceEntity(9U);
    msg.setDestination(32174U);
    msg.setDestinationEntity(115U);
    msg.name.assign("UWATZEDDWFLLMBAXTEMBMNFFDBVUDZAPIOHOPVQZKKQEMVICXHMFWFCHOYGPGACQHWLIRUTRMKXLAIGSCNDCOUARVYREWXPGHTUZZWVWPJZOEVPNCYXBXRRDGJDHJTLTOHOSITVKTHNUEKDYBAJIBDEWYKTDGQSTIQUJQFYGKKCFJNMW");
    msg.value.assign("CHDCVYEMQVAEBHHDTLUYDVRSUIXQRSZTVPXJFVNJYIKMKOKXGATFNIRORUOOKJCWEJLJBFCLNPCFNWKBFFMSTMTMGNZPWOCPPGDPKEZJREOPIYBJBQHNLAMIDGWYUGJWTUNNOTQQPZPHSBZRANBKKXQAIUILCSLEBYSYZIVTQCHMRBSSKLRWAXLAJGERQWITQVRAHHWZDVEHAOXDMDGGSHXZFNZOXTXUCMYYEVBIGFUUFWUXDWYFMEJZQLG");
    msg.type = 23U;
    msg.access = 186U;

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
    msg.setTimeStamp(0.331267634435);
    msg.setSource(30935U);
    msg.setSourceEntity(179U);
    msg.setDestination(5527U);
    msg.setDestinationEntity(146U);
    msg.name.assign("QBXYUMKWGHLEROEIMNBHEFXUMEQPHWWUDTGONTCKSLEAIXALJVEONEPRQUQOPVPJRFRBBYKQJOYGGZUOLSOMNFYVWUIPSJXUCOWZZGMHDHRLAYHRPTGLEVVZKBIKTSCXR");
    msg.value.assign("DOODSGBYIZCKWQMNGAURZAMEZLOYMAOLKHXFYLUDJFTRBWERSTVHPMZEWCQWQXIYIYDNBATPNGGDMNNRVHYCJKPWCRGYVKXOVXMLJBFBXQMJFEUIJNDWUTRUATSBWSSVEKZILJOJQPEIXVPRVCRAFEFTAUXTHQCJQRXDSOPDGFSUUFNBKUZNLKGMGCLZIAAQJCTEKAGHIKOFOSHTTXWEXSCDKIBPNZVECSHVWDLIYPHPZLOBQUM");
    msg.type = 160U;
    msg.access = 145U;

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
    msg.setTimeStamp(0.110638511113);
    msg.setSource(6557U);
    msg.setSourceEntity(144U);
    msg.setDestination(46751U);
    msg.setDestinationEntity(59U);
    msg.cmd = 231U;
    msg.op = 151U;
    msg.plan_id.assign("ZGLCNKXWNYJMUEAMMCQDVPXONRQSGSJGTLRYHGVWCDPSBHQGWUZBOQYRZBPIGXCQAREWCJEWDALYLMRZIDWOVYRFZQMECOHBFJFAEJFGKUJAXNUJUTIVAJLHFOKYGXAYFYBAPDTBYKHGHCVWFSSXCITIOMIPZRMEXLNUNPMWCRBMKVETUVBRBWFNSTPZTEWKRBDYPXHQPXLLZKSKKDNDLQOSCUFUVVANHZH");
    msg.params.assign("QHAUUEAWGRQANGODRPSYJPMATQJJSYFKGHNRFXELDMRJOZXOUNLYMIOXPECITLXBRXAUVGCQQLSNVZQYGBUJVQCTTENCPOBCLEPSSIYBMIWAE");

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
    msg.setTimeStamp(0.389002866905);
    msg.setSource(23405U);
    msg.setSourceEntity(54U);
    msg.setDestination(28634U);
    msg.setDestinationEntity(224U);
    msg.cmd = 81U;
    msg.op = 221U;
    msg.plan_id.assign("TVXHULEMULPYVUIWHIMBIHNHGNVGBWSVWNEOIVZYGVUXQZYUOHXBWDKNXCBGMAHYDJWXURVZPZJVOEOKDDSGSODEENTGJKAKMWDEJATNATFTLXAPKMDFGPDQLDZHLKFTHQBSORFJXQTFACMSWSQWBKRNMWBAKYXJKFIPRUCFEAJZ");
    msg.params.assign("FFILAEMCLUYDSZNHWALSCYMZVRKGKOUTVRDQZZHANPRFVUZSOHMKKYJRKJYIZGOYQCOBJSOVESWZLPDQTECYCCCFUYEXSUPDUDKQBBMSBYNJGZGFRWKTNAYNBRQGPJHXRMHWXQUOGQXPBMMUTCEZGPRRTIFIIAAFTXNJLNXDHNPDEAHXFONJESMGBEAAPGVTDQULPHDTVHDBYSNWIRXXIKGFHA");

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
    msg.setTimeStamp(0.362132024994);
    msg.setSource(18013U);
    msg.setSourceEntity(160U);
    msg.setDestination(8726U);
    msg.setDestinationEntity(237U);
    msg.cmd = 96U;
    msg.op = 196U;
    msg.plan_id.assign("JMBXVQEDJMURCZJITYVUUPLNFSBJJVECNYHWQOAFWRUYWLTYSKEBJAGKTMAQBVFBLQZTLRQFGIGEOZAVQVIKQGKPPVOLKZXYOXVAQOUTYZCPZASXBQUEZWAFYLJHCWLCKETYDCGDNCNDDYLDNGXTBEPSIKKPXMTSDGWTDTRAZWSDRZKIVFSCEWYMVOHMWXBHJJWZNOELSUPHPPBIMGIDFSKNXHM");
    msg.params.assign("VACHEUBPZWTGLNOLMAIVCIBYVYSFVXEBAHRZESCQLOVWNQKDIRZTZLCAJGTBNNOOHQSABUKSRMTFPIDRIMSTXUHAVDPKGNYZCIZDQDETUFRKLIKPPFGKKQHMLEDPRYBAKDWINUAXRGUJ");

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
    msg.setTimeStamp(0.594911512471);
    msg.setSource(62054U);
    msg.setSourceEntity(91U);
    msg.setDestination(9653U);
    msg.setDestinationEntity(114U);
    msg.group_name.assign("YODIRYEOVTDRQYXTTRC");
    msg.op = 124U;
    msg.lat = 0.573007503015;
    msg.lon = 0.247176509422;
    msg.height = 0.406457323085;
    msg.x = 0.0484001467885;
    msg.y = 0.0297924836057;
    msg.z = 0.0772891726089;
    msg.phi = 0.0205745513754;
    msg.theta = 0.492701747569;
    msg.psi = 0.0548143550372;
    msg.vx = 0.317667145114;
    msg.vy = 0.452134325308;
    msg.vz = 0.0495059086683;
    msg.p = 0.830466394699;
    msg.q = 0.632784388089;
    msg.r = 0.103099156002;
    msg.svx = 0.323319863653;
    msg.svy = 0.467414674146;
    msg.svz = 0.616389521024;

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
    msg.setTimeStamp(0.350877009057);
    msg.setSource(63250U);
    msg.setSourceEntity(252U);
    msg.setDestination(54970U);
    msg.setDestinationEntity(172U);
    msg.group_name.assign("BCNMJXGRRZQIDZYLWVHFXMCCSIPEFUDHIZBAZJNHCEJBDHULYYNEQWOCBTUAVKSLSYLUEOXIKRYWTFSDPLZPKMRAWFOCDSNVRGVXT");
    msg.op = 137U;
    msg.lat = 0.605319121057;
    msg.lon = 0.723266156579;
    msg.height = 0.606387979846;
    msg.x = 0.0647222585087;
    msg.y = 0.793739736731;
    msg.z = 0.174494838369;
    msg.phi = 0.0604543210712;
    msg.theta = 0.931567967272;
    msg.psi = 0.74275305607;
    msg.vx = 0.0141383624401;
    msg.vy = 0.537607284674;
    msg.vz = 0.18388332408;
    msg.p = 0.328536522555;
    msg.q = 0.567977512179;
    msg.r = 0.722147666949;
    msg.svx = 0.648267755868;
    msg.svy = 0.430854227356;
    msg.svz = 0.850438650718;

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
    msg.setTimeStamp(0.949990620899);
    msg.setSource(60935U);
    msg.setSourceEntity(113U);
    msg.setDestination(40553U);
    msg.setDestinationEntity(205U);
    msg.group_name.assign("BQWRYKZDLBQBNYKXAUCNBSJJVIXYQLHGTVQJTPQXTXHGJOZIWNZTHFJHEZENLGXES");
    msg.op = 66U;
    msg.lat = 0.880887201441;
    msg.lon = 0.697138194549;
    msg.height = 0.00747286428025;
    msg.x = 0.164698048235;
    msg.y = 0.804861455882;
    msg.z = 0.546772067165;
    msg.phi = 0.42956661463;
    msg.theta = 0.995066807791;
    msg.psi = 0.979015850077;
    msg.vx = 0.0548210773633;
    msg.vy = 0.649744837269;
    msg.vz = 0.845368694901;
    msg.p = 0.723841356417;
    msg.q = 0.848199139587;
    msg.r = 0.79272045706;
    msg.svx = 0.490312172321;
    msg.svy = 0.28780483484;
    msg.svz = 0.994848977694;

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
    msg.setTimeStamp(0.594126737904);
    msg.setSource(17237U);
    msg.setSourceEntity(93U);
    msg.setDestination(33736U);
    msg.setDestinationEntity(157U);
    msg.plan_id.assign("DJMWSLRAAVWDAGANIURWKSYPMPPUUPFUOSVZGHEJLVTZDGDLCQIBOPMCRBIFWCOLSHEFYBTHLTUDCQHKZKYANHOXPXJEZVUWJGIJKQNYWBTSQSSXSYAOSXPZHVDLDTVORDBRXAWZMNEVXIYETHZPXQGLBJQTMKHXCXMMZDYGCPTNOMNLOQIBINQIEKSWOQWUVKJGRCEFAUQANTKRACGVIBKNZVLRYICFTMGJCB");
    msg.type = 96U;
    msg.properties = 79U;
    msg.durations.assign("WUXBPHXVSRSCAEFPJBUMZGTVUEFYWMYTXMCEHDLUNHMLOCSSKQZTNCUEATNSECFXDMFLGTTYGGWVWQQSEJQHLFIDBBMDILIQVIRKSBKOFYZPIORRLDDUVSRAADOVALHQWWPJFAECRJWAVXIMFDXBTZYUGQQEERZBTYPGFABIOOIKWJQGWYZHVKENINPFCXYLPPONCPSNJNKTKKWNAGSUJGRUVZUKCZABBMDHHZNYMHRTMQCJDJVJOKXOZYOXRL");
    msg.distances.assign("WHKVVAMLPWRQETSARONPOEYNZJCJXQVOUPKRXTLBQRLOMVTYFOOPLABNXUZGGSIJHZNMWWZDNEPJOIYMUKNSCDDZUTXDKPPABWFLVDBDBPRLFLVFQUBJHDJYJRWWUHTQZZMTNKOGZIGFHJEIGUSQSGHGYEZMWMXWDYGHUBCJTCOEFGXVLGYMYUCIBYLQFQAHAACCVSLAEAZRHICNBXKUXRKAQWENJRXQMSVYSTPCCS");
    msg.actions.assign("TPAVCKJQQSSAJSEDFPUDFBCTKFYBXQZDIXTN");
    msg.fuel.assign("XVKEDPMBYMIEZLUSUZOWSTVJHPQWRRPLDHIDDANIZKQPTELUFBNSAJZHFGEHFUMJKVGWJVAANBGUKYAHJQVFARCWBLZODSXEOEGRWTLPQMWOPSTYISGXTWXDHIQBCPSTUGLYMDIQYCRGMFDSRHYYMSOZNCFAJCFNVYOVRKWILGWQVEACMNEVFKOFNEUDSXUTZKOFHLATAOYBGCUXWX");

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
    msg.setTimeStamp(0.926584403226);
    msg.setSource(48997U);
    msg.setSourceEntity(123U);
    msg.setDestination(21062U);
    msg.setDestinationEntity(28U);
    msg.plan_id.assign("VJKNIHYQXGMUFLRWSQGNOMIPBUSTPP");
    msg.type = 77U;
    msg.properties = 237U;
    msg.durations.assign("MVTYTSFPUHDBLWCFNVXZTZDCRRFLBGIOUXSZPJDVIBDCXBLMHRQTAWEIXEBOGEVDKONTFUFHKAWSUWZZNOGKDAXNWJHOZRYPZIEURLKNUQCHDPYUQSQGMEVXHFPFYAPZY");
    msg.distances.assign("LLNDCQRQJESTFXJHZJLWANTBJSHKHACMHDQEVYAUZMSMUXXSLRWIHCQMYIDBAODZIXDIMWJPGVBKQZHVNFBNGEDBJBCZBPCRUENGJGYKTAWPKELAGGTVPZPRTFOKVHPMOOILSMLTQRDHRPNBXEIVCFCUSFWZYOTAEFYDDVFXPXEKVWZJSGJLAKIZDKOOXWYBYUVGWFFSUTRUYLNEIACQUUKQMOVSNMUTNMQGOCPXQPYIS");
    msg.actions.assign("UMFYVCWKFQUCEDSOFTCFKTYQECGZPFTBBXJIXMYROPZZUGWATBTCIURMPP");
    msg.fuel.assign("ARGHWENKCKHXOWDTPTGUWATXNTGDUAOEEVSWFNJUTCAMOFEOUANDJURYMWCKLOPHESOCGITHHZJXZBLFIPONAPRPTKJWPVIZHVQYSKQJIJMZBLHXYLVDWTLCGWQTCHQGQLXINPYIVYNERXBUBEJFZVFBCS");

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
    msg.setTimeStamp(0.635578311939);
    msg.setSource(51774U);
    msg.setSourceEntity(121U);
    msg.setDestination(64399U);
    msg.setDestinationEntity(235U);
    msg.plan_id.assign("IRIJAINNYKERKKCQDVPWSPXQYFJHBPABREWZQRTKQJOVUXZGSGNYFYMYNTXCUFMQFUZMOMRYUGGNPLHNEASIEADJALBB");
    msg.type = 169U;
    msg.properties = 37U;
    msg.durations.assign("MVLIMQCGJYNMRKMNBOBVXCSGXAVGVZDSKLBZHUSTJFBYPATQXYAWRIMSZLFZELPWIPVJSDFTRNZXONUXNMAIHSVRHYKHKPJUEQEOXBEKYWLHKCEUXLQJXSOLUQRWMQAYPAEUCKTZVZCEFLGHRQYWROYFJOH");
    msg.distances.assign("OALEGOTFEPUWMINKHQCIAUXQ");
    msg.actions.assign("YSYRIGRDHCGTTRDQIUEZZHBCTZAAXAXFBEOKZIAHXIAFMJVTXKTWDAELPFDKTHEJLTITLWPULMKPK");
    msg.fuel.assign("MIONJTFQHOHWDKOYQBEKSCDYASXATZFOJZDOOAKLXHBEBMMIYEFMSRNSENAJ");

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
    msg.setTimeStamp(0.137217023764);
    msg.setSource(22404U);
    msg.setSourceEntity(175U);
    msg.setDestination(2747U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.0581367523203;
    msg.lon = 0.426896938357;
    msg.depth = 0.654232341775;
    msg.roll = 0.838850670624;
    msg.pitch = 0.790978837249;
    msg.yaw = 0.219238501004;
    msg.rcp_time = 0.360538479499;
    msg.sid.assign("AGUFBYSZXXQXVWBYYLSTOIIENEUUQWBRAQCCIRNCSKZJMOXKLDWCOXULKOUQYBETDVYWPPDQRLRDFZPASYIFGFZMAYSWCSRIZGMPVOQIFPMNZISHWHKPAJTYNNOEPQZVVT");
    msg.s_type = 121U;

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
    msg.setTimeStamp(0.229793946261);
    msg.setSource(54295U);
    msg.setSourceEntity(43U);
    msg.setDestination(39274U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.199851815074;
    msg.lon = 0.914529035991;
    msg.depth = 0.062983570874;
    msg.roll = 0.638617172263;
    msg.pitch = 0.0785326817748;
    msg.yaw = 0.89621426129;
    msg.rcp_time = 0.636817053063;
    msg.sid.assign("TROCRFMZNEMJURDFNTOARIPOAFIOVBUAMJUIHXWYQWESNFIWKIYBBBYXHFUPZHOXBCLKN");
    msg.s_type = 12U;

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
    msg.setTimeStamp(0.318161768998);
    msg.setSource(30924U);
    msg.setSourceEntity(233U);
    msg.setDestination(48275U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.325867685095;
    msg.lon = 0.336635575223;
    msg.depth = 0.371985666057;
    msg.roll = 0.336703128807;
    msg.pitch = 0.0828369116723;
    msg.yaw = 0.860382635585;
    msg.rcp_time = 0.801625970495;
    msg.sid.assign("ZOJOYNFKOWPINZAWXYROJNA");
    msg.s_type = 11U;

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
    msg.setTimeStamp(0.899588995233);
    msg.setSource(4344U);
    msg.setSourceEntity(165U);
    msg.setDestination(6949U);
    msg.setDestinationEntity(238U);
    msg.id.assign("OMXZWTTJMZTWHKQKELLIRSAKPUSRZFVNAGBXIDXJSBJAXIGCWMDVWFCUBFMHCCKIHVWBTDOHYBTOEIRDLEXNGSVFYMKXSOHJCIIZYUL");
    msg.sensor_class.assign("NZLZNLFQKDNVDGNTBPSBTAGHARUYOMKQZTAXMSNYHTJRRHICUGQLXWGBXYZIUVYYFAPOSBFHFYECMRJTDFLAMHPRAIQZKBNITUCEVWGFQB");
    msg.lat = 0.351835855363;
    msg.lon = 0.417335443781;
    msg.alt = 0.76923805243;
    msg.heading = 0.0639548339502;
    msg.data.assign("DWYLHFSISSPBXYQUGYRBXROLDRJCNHZYWYBLVAFCMEZCYLYVWIQWDMVOINHMNPBBWUTQRFFLXPMEDJALJNKUSPSKOTHYTTFOOORCNZMVIASJQQBGHAVFXFEENSHPQXZJFUEUDTUWWVLUM");

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
    msg.setTimeStamp(0.687840891544);
    msg.setSource(22306U);
    msg.setSourceEntity(169U);
    msg.setDestination(52360U);
    msg.setDestinationEntity(162U);
    msg.id.assign("HYFHCOBNNFNRKTLLGESOLOETAKAPRXEIUFIXDPRKXQMGBDFPHNQVVALOWWORIDDKPPHFSOVIWSTYTSGCDPBRLKMRTZBFJKQW");
    msg.sensor_class.assign("DNPOCAXJGVKUSEFQUYNFSMIWCHUKXVPOJTYOZWTERXODDBEBCTVQUZLHWFAZWXPQWXCSTSMXICHGTRVROAJFAUHOBNYNTLTNILZPLDFMSZKSCSNBDDMWVPMIQKTQIAVOTDRAHRVUJHJSPVDHQOXEPUEKXZLRQUMGEZHKZEH");
    msg.lat = 0.420060617558;
    msg.lon = 0.690955272918;
    msg.alt = 0.707913706585;
    msg.heading = 0.935270859255;
    msg.data.assign("LTNIDICXFDKMVKUYSJCZAHWIDCSMNQXEKPHYKPSDASOPMYIJBVGSEFMGLBQBLHHMYQODNGJHTNWNFOGWCLSTFBAVFYGCPNVIYWUVGVTNWTVXEPRUKEJFXMQOUZEAAVZRUCYKMSPOMBDK");

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
    msg.setTimeStamp(0.714464423768);
    msg.setSource(38748U);
    msg.setSourceEntity(186U);
    msg.setDestination(4810U);
    msg.setDestinationEntity(5U);
    msg.id.assign("QLJRAFCBFRYMMZSYGNQZVPSWQKNVPNXXYUJWRYJHLPBVTHLLYQAIJZKGNLGNPCZTNXRKCOOXHXKSFVIYWODDE");
    msg.sensor_class.assign("CDMUFLURMRDQXHWVYEYXUFXRQHVIMEKZBJDLCAKKMSHVFWCXNQDXQLDCYPHONONOJGEPNRHPTFINFMLJTIAJWYEZPSJVPLZGROSCURTPDDOKMWVGGBIZQSNMHBTGOHCEHXBIUWTQATXCOCUNPBXIAXANMUIBTWODLHKLQEBMAHFBALSSSZYRAYEKYZNFLRNYGVYQEBCFSBDVGFYUUSTVGJWR");
    msg.lat = 0.06642122943;
    msg.lon = 0.462648722898;
    msg.alt = 0.735666677842;
    msg.heading = 0.108417065905;
    msg.data.assign("HVJZEGEQJRTEQQBFGZAJDFZXDBFXGHWMSIYMENQTKUNIHYMIOAPMPKDOAYAZSJECJCCDHWKKZVMZLIWGIREOWHR");

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
    msg.setTimeStamp(0.550753497973);
    msg.setSource(6839U);
    msg.setSourceEntity(224U);
    msg.setDestination(34833U);
    msg.setDestinationEntity(32U);
    msg.id.assign("VQGMWZPOFNSOZQJSRGXUJHABIKXXQQQFBDMCGYEAUHKAPYDJWYCAFSEDWCGWWGALOKLEOZDVLBSHNCFLICHAUMHLBZIVDLEXKXUYEXBTMBFGWFXCEYZHYSKMTDCOBXZTTIRUOTKPSHTVVIILJASTNVDRZQPFGMRJJVIBOPPLKFGFEPRJPKAYNOHRJINUONDQMOASDWESAULDNIYMRUENT");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("UYRQBHEWKSNARBCFKUOTEJQTZQHXRCQPMBMFLNBUI");
    tmp_msg_0.feature_type = 134U;
    tmp_msg_0.rgb_red = 222U;
    tmp_msg_0.rgb_green = 122U;
    tmp_msg_0.rgb_blue = 13U;
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
    msg.setTimeStamp(0.787850561153);
    msg.setSource(46350U);
    msg.setSourceEntity(220U);
    msg.setDestination(56343U);
    msg.setDestinationEntity(65U);
    msg.id.assign("MQOYNHHAKICZ");

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
    msg.setTimeStamp(0.33268250624);
    msg.setSource(42210U);
    msg.setSourceEntity(99U);
    msg.setDestination(32610U);
    msg.setDestinationEntity(161U);
    msg.id.assign("XJHRPTRISPXOYDZFFKOHGGPGZBCBBUCYN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QJFVOBKKXLZHNWIHVCYBVMGRMCBHTSFYRMHLTUQYYILZDBSVZKTJASELPCIXNDZNBPQHYITSBUUHXCNWSRAOCUDGZHHBAFCVAXFEDGQEEQOWJEFKTJMUASYIKLEGTFUPYJKNUZCQPICLMOVFUGIQAVJNVGBPDDFYUBNGDWHXAWGCIAPILKJTWEZWQMWGTMRXSJZVPEURISO");
    tmp_msg_0.feature_type = 251U;
    tmp_msg_0.rgb_red = 215U;
    tmp_msg_0.rgb_green = 15U;
    tmp_msg_0.rgb_blue = 29U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.134175957449;
    tmp_tmp_msg_0_0.lon = 0.348911306069;
    tmp_tmp_msg_0_0.alt = 0.415042108698;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.879824825231);
    msg.setSource(5005U);
    msg.setSourceEntity(191U);
    msg.setDestination(56266U);
    msg.setDestinationEntity(14U);
    msg.id.assign("LHQYQENUBZOPPJEZMYVRWPSNQEFIVRYCCTADZQKDVUIAPJYZULTLWPRCOHGHLOMROIOCHXLKX");
    msg.feature_type = 173U;
    msg.rgb_red = 109U;
    msg.rgb_green = 216U;
    msg.rgb_blue = 226U;

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
    msg.setTimeStamp(0.999245318777);
    msg.setSource(10251U);
    msg.setSourceEntity(116U);
    msg.setDestination(52337U);
    msg.setDestinationEntity(225U);
    msg.id.assign("RIBJXAWCWUAHCQMHBNRBPEGHTZYCSZRJIZEUQNIPDUSDETLAMOBNIOCMOCWCUCYHNGRPLVZDKYRNOFGRTUJXTUVCBXFGXWEGCIPSJEMWJYKLSMBDLNIDCBHZSLARAIFXJEPGQQJMUWLPZRBZNALWAGFWHPLKNQDMGVUYMQVQLGULVFVSTTTJXIOYKPZFFFVBOOEEHVORWFAXPWD");
    msg.feature_type = 240U;
    msg.rgb_red = 236U;
    msg.rgb_green = 254U;
    msg.rgb_blue = 157U;

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
    msg.setTimeStamp(0.289530982853);
    msg.setSource(26642U);
    msg.setSourceEntity(6U);
    msg.setDestination(40968U);
    msg.setDestinationEntity(95U);
    msg.id.assign("SSRYQXZGCMGHJUZAJANVZJIYLARHGWWLXBKEBIIDLCKCOFOEZGGSAPYYEULMFAAARDOYKPMLIPVLKHBLCMWOXTRQCSIHNVEUVCEBYUIWOREPIZUQTZLMJBGNWWEDETDMPPIZXYJERHNPGNJZXQ");
    msg.feature_type = 138U;
    msg.rgb_red = 60U;
    msg.rgb_green = 2U;
    msg.rgb_blue = 242U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.103777449757;
    tmp_msg_0.lon = 0.806217518539;
    tmp_msg_0.alt = 0.355131376512;
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
    msg.setTimeStamp(0.326923186207);
    msg.setSource(151U);
    msg.setSourceEntity(108U);
    msg.setDestination(9648U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.344841028038;
    msg.lon = 0.490764033591;
    msg.alt = 0.605810111498;

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
    msg.setTimeStamp(0.839441302142);
    msg.setSource(19928U);
    msg.setSourceEntity(149U);
    msg.setDestination(43556U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.69739467926;
    msg.lon = 0.553694190929;
    msg.alt = 0.311983086334;

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
    msg.setTimeStamp(0.394526070461);
    msg.setSource(65485U);
    msg.setSourceEntity(197U);
    msg.setDestination(48020U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.712728735444;
    msg.lon = 0.0490015931799;
    msg.alt = 0.203578151564;

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
    msg.setTimeStamp(0.356045563252);
    msg.setSource(18689U);
    msg.setSourceEntity(242U);
    msg.setDestination(49454U);
    msg.setDestinationEntity(235U);
    msg.type = 5U;
    msg.id.assign("BXDVHFUIMNMMLRKNANFHTTWVVDGCJOKXGIPYGIPMBKFZLXXTOXKAZHCPPNTYWNQMYOZTBZMSGQODSJQXLYWSESWWDIRTIFBUULPEXYHOJWAJHOQGULHPTJIOHDBGSKRGNEESRUXT");
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.903993451971;
    tmp_msg_0.y = 0.805824476017;
    tmp_msg_0.z = 0.786709509563;
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
    msg.setTimeStamp(0.55914696692);
    msg.setSource(17148U);
    msg.setSourceEntity(121U);
    msg.setDestination(54662U);
    msg.setDestinationEntity(251U);
    msg.type = 235U;
    msg.id.assign("ENYVXZQAARNFTDVWTIMPYMSAHYFQJJPJKGRQODKSITJRBFAPDRQMZEXCLSYUCJYXZIOSFZNGHDBCCYMILFGTNXJPUGNGALQKGTCMWVITLIOXWCNRGOWLNDFVFDFNIFWJKSRMXZHEMKUXOBMOOUOYWPVSTUSLUHGQUBCKZZMKPBZBPTUBKDEHMQRODLSPYSVIEHCLHGCKUDNKJVEBUIDOALXY");
    IMC::AcousticMessage tmp_msg_0;
    IMC::MonitorEntityState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.command = 82U;
    tmp_tmp_msg_0_0.entities.assign("IGOWXDWTLNICHQFWNCFSOUMVMZTKLWSZHCFPLBZYQHSHJDDVKOKXPELRURMOJPMYGYWWTZLCDZNRDIRXNKTBDZCTJOUVHGYGMMPQSKCPIIODSFSKBFPPJNRBRTYYQNHAAIBEXLEZVBIJLOWBXKEPIOQECTVXDGIEDYCAYSJZXJAAZWQEROMRTKRGDTFWGTHAAPMBVJJBUFURUGUWOMNKAFFMYUHVLQQXI");
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.312183075642);
    msg.setSource(10832U);
    msg.setSourceEntity(135U);
    msg.setDestination(39671U);
    msg.setDestinationEntity(202U);
    msg.type = 247U;
    msg.id.assign("XHOBKNAUFJBTRPBIYPAAXAPQKGGDIXRLNLUTCZLORKHNJWNKDWGMKJRIACLFEUZNUZIRYSYGGJVXDWLEDNWTNDFEODAHIVUPPAVAVYBCCNUILVIXEYCDEZIQJYOXGMOGYSCWULPYFGRQODOESMUQJGSQJHVTSCFBMEYWZMARKHXJTLFUSHAQUETRTJHHBZXPEBCDKFSQVKLKSDZHEFSTHZCNJMQRIXILWWMZMOBPPMGVPFTOSYFVQQKOTM");
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("LPZFCGNIRSZVKIEPYYHEPAZWHUGXJGEDESIJVBHAFRPWKSGZLQDINRULVFCMWEGGVDENCKJQCOUNJBGOWNICZPQDYKETDNBLZFMOMXFKFHTYJEAIUQPRWBIPWQDSMXJGHTSURLOOSQZFXQUBERYWOTZVVAYAOZCBESULYNFDVHQBAMKBFOHNTRUDWMBRYAJXVTMOIRKMGCCMXAORVQC");
    tmp_msg_0.plan_size = 2011U;
    tmp_msg_0.change_time = 0.803471883247;
    tmp_msg_0.change_sid = 47641U;
    tmp_msg_0.change_sname.assign("MGWMOLHFVNVCZTNEBXUIBPOPLKNFGXDJADMFGQJNPNBVUYLIQJMJGEBTKGOXHMXZGOCZKKFCWSJGNIEUHQTRAUMDWPDCQQOTGNJTZASDABAWFEXMLSXUSPWRLTXQILUR");
    const char tmp_tmp_msg_0_0[] = {-58, -21, 3, 13, -22, 102, 120, -92, 36, 108, -16, 43, -47, 64, 40, 69, -37, -3, 7};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.71621741637);
    msg.setSource(26063U);
    msg.setSourceEntity(22U);
    msg.setDestination(37207U);
    msg.setDestinationEntity(217U);
    msg.localname.assign("GDKNLAXFNQFQKRWKETTVGKXIXRSCSTSNELYCMCAAIZAYGDCADKWOFQSFCUQUOFHBPLLJBYVQLHYKFJHDTKIMBUHKWAJORGTLZVHQNZOXEPBEYGEQNFNIPUOOYRNAXBYSDGYTFU");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("OVZULEIWQOYHLZYFJLVXMQWVFTAPOHGRUQJBILLDZMNTBNMZNTTIDXLOIXKVJOUSKPLCFGDWGYGACFSXXGZMLNNVIBGRJPEXYAZPSXSMOMNSYFCMXJBGJYLHKCZETHOIPRXUEMPMOQTHKADWWNCYGUWDIADFXHWCCSRKBKBIDHVUFRBPYITVBESKMUATOFWIUCEUSWDR");
    tmp_msg_0.sys_type = 111U;
    tmp_msg_0.owner = 55682U;
    tmp_msg_0.lat = 0.68799032119;
    tmp_msg_0.lon = 0.267672391785;
    tmp_msg_0.height = 0.45451173681;
    tmp_msg_0.services.assign("GQZGVOTOFKAZMMXUAJYOXEDCYZCGGBEXLTLQBGDSWLOAICPEYSWSPMIFMQWFLLJHLSIPCUCTQIOYBJJEDNSXNNMETTQZIEQHKRLHYMPTYYVHZJORHFWZUPWQCYPOFLXDNPYEPBSIJKHKAANWLIUOCKZXHVUBDFMGZDVZTGEFXBIBRGU");
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
    msg.setTimeStamp(0.894551961613);
    msg.setSource(36135U);
    msg.setSourceEntity(139U);
    msg.setDestination(5990U);
    msg.setDestinationEntity(178U);
    msg.localname.assign("BRPNZSVRJLOYUITDQMWVOOXPQRIGCNZZQFLHXSRBOAECBJQSJXRZNYMFPROTVSLTIMJIYMKHYPEHHGESDCKABQVNRBOGZDKISMKDPDJWALBDUGFO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DPCQVSAJTSWBBCTSNELDILZYDKGQFFFJDWBQRJAFUMFJVCHQKUNOAZSRUZBWRJQYHAIUHXLNOMMAYDGGMMGYZVSSMZGJGBTIFFCJKLORLDWAZZXNBRHKIBIENQYSYRCONNHFWLW");
    tmp_msg_0.sys_type = 112U;
    tmp_msg_0.owner = 22294U;
    tmp_msg_0.lat = 0.884077603435;
    tmp_msg_0.lon = 0.508720190305;
    tmp_msg_0.height = 0.0238882805631;
    tmp_msg_0.services.assign("CKBOOREATJPEJFXTUIJFVZQRLHRNYWUVCDPRHDZGUCHWHXFGIMNUHRKCTIEKSIFAOTOOMQDGXQQAPQKIZBZZD");
    msg.links.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.35032030717);
    msg.setSource(40370U);
    msg.setSourceEntity(11U);
    msg.setDestination(46974U);
    msg.setDestinationEntity(175U);
    msg.localname.assign("FCWYAHDSEMQALTXDCJVMGESZWEHVLUBTHTKBEJVSRKVMDWAFIJGJXBTONGRPCZKWMNVMWWWYIRDUDLEMKKCNSMQSPBYIZFQFHHRDXAQUKRZCXXHSOLUGPHIUDJTLGABQENXCKYBGBJTIOUNHPFQPWVPQMNTBXTCKBGZZNIYPJNOPDSGFRCQAUAZLOTZAIYVXUSWJYQVUPOAYHYJEZHXKNFZNLJDIXM");

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
    msg.setTimeStamp(0.973161127544);
    msg.setSource(54511U);
    msg.setSourceEntity(85U);
    msg.setDestination(60148U);
    msg.setDestinationEntity(98U);
    msg.timeline.assign("FACVZVSSJOXTDUYIF");
    msg.predicate.assign("FZTCWSSOFTHWQQWQQBLBQXQADVRPQPEFWQOJNCVFJHSJRZPTZPLUYJCYMGGABUEOIHZHKSAIDGUWCJWHFEPFGBHZSOMNTGEBMVOFRGNNNN");
    msg.attributes.assign("JOOSVULBCAYFMSRPKYCLIYVHXZUTIBABGVNCHZIWVLGKLNAQAFQFFYHGCNFNEKLFLXRQOBZWPEMKJSPTKIKHHVMQIPVUREEFEUJDVIQYTNNXXYTATDRIQQAEULGJIZBRXBTBAYANCCMHJKOEJSQPYPAMQXUJGDGCMNSXGKGSXXUPIVWZDVDZYNDOPFZCBDUZKZENHVPTOMDHOXRRDUSWGOSBPWTRWJCW");

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
    msg.setTimeStamp(0.32791039984);
    msg.setSource(30685U);
    msg.setSourceEntity(12U);
    msg.setDestination(18048U);
    msg.setDestinationEntity(134U);
    msg.timeline.assign("LOWFZYCFTW");
    msg.predicate.assign("AUHWPRVDDGDROXAKQODNLSOBXZILVNULXJKCHSZGLQLTSWUUSMWOPWZZPTOUFWHBTIKXLKVZUGICIQRMUXTFTYVTLFWSPAQZMEVZCARCCJFIDBYQIBQMFELKEJZPDIGTVVACNQRYNAETMJFENIFJXRNLVOPAIJGLBQRGBKRXHJCPCBCOKHGZGMQHYFPYYENBJXEYDUAKE");
    msg.attributes.assign("ABIINRJZZXPHBQHOYMGKOEGZSLIUDGDZKNDTLCDGSOREMWCXECAHAJDRMZMGPARNQUQDIANVRYHUXMBKCTKCHJVHJSIRFJWSCDVLBQHYAUHORXYVYWNEJPSCBFQVWPSRMVBZIEQMGTRVSCHAQXGFWNFGEXSMTKUTOXKFQPDYWLOOCLPLZKXFYJOWSLEMTTKUZUFATYTSFUDGAVWBCPONPNUYWIDAXJJUIJVXN");

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
    msg.setTimeStamp(0.929856451452);
    msg.setSource(35721U);
    msg.setSourceEntity(117U);
    msg.setDestination(49508U);
    msg.setDestinationEntity(123U);
    msg.timeline.assign("HBVUZNEMZPENMAIQTQRASFFJQGYFNJOCP");
    msg.predicate.assign("IVHRTPHAEYUGFZAKPLBMAJODVNTGEUWPWTKIAVBYWMJCSVXKVBZSVOFOUNSZJJRZHASPCEBRCAPWW");
    msg.attributes.assign("IVXYFWJTVGDDALMLJZUNVLBHUCYDSIJDVULWCRUUIAMBASRMPSLZADCOYQWAKFGOQFZBWIKIVCUDEPHJONSFFJFKRGEGHNNPHBUFXTGTSTMNCLXGQXVOOXBRZNNXNTCDZRBMGAMTIEWEEKOZJBSJXAQ");

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
    msg.setTimeStamp(0.984855117905);
    msg.setSource(47940U);
    msg.setSourceEntity(25U);
    msg.setDestination(61255U);
    msg.setDestinationEntity(105U);
    msg.command = 144U;
    msg.goal_id.assign("IHIZYHEJQMMPSPIOCUKZEYONLPLYMROCPJFROUATPWBMMNUUXTZKCSABVXVZQVIEXCBGDWSGBBHPEMZRESTKVZSGSZJTVFCKWWABQGREMSJBNWEYXOSKFFQXRESDIDRIRK");
    msg.goal_xml.assign("ZDPXJNQSXQZNSDESHZQTXLFCGTHZMMWQDNWPRUCPWEEMBSODHENQHWJ");

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
    msg.setTimeStamp(0.417377582586);
    msg.setSource(37661U);
    msg.setSourceEntity(90U);
    msg.setDestination(46071U);
    msg.setDestinationEntity(203U);
    msg.command = 25U;
    msg.goal_id.assign("EBQUYXWLYUOMLRSCYVUTGJCZBYTTASZAPKAPDRMBYPSEWEWVIAVMGNSIXXLBUHAUAVGSSNJFNCRTVV");
    msg.goal_xml.assign("SJLTBZCFENEDYIXZYPLKPLSMVCQWFZSXIYRSXEAFUFBNGVYUJLOVVGQINNIKDSRAQMNIRBYRMYVXOKWKIXTUZESLPGCFRWYPXTAJXMOTXVDURKAN");

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
    msg.setTimeStamp(0.553052485187);
    msg.setSource(17376U);
    msg.setSourceEntity(207U);
    msg.setDestination(39719U);
    msg.setDestinationEntity(208U);
    msg.command = 80U;
    msg.goal_id.assign("UUOCSDJEZPKVQLJKBVGTABMSBXIVCPKYLNCAMAWUNHLUNGUSXIPTELZTXCPGDYCUEAHKPDVORHHUVOJREPYQTXNGXKPGJZHIANOIJIVXZWFDFZRDLSJDRVZFTFBXODDHMMEQZSPRJFMXMONWKJYZXDFCHCAXTQEMOPGSI");
    msg.goal_xml.assign("TZFUAGJCMHUIEPZEOWAQKVLVMJYYXNKEIMUKQZJYEDBMVELJWDQBIOJAXTSKJHRQQRCCNVQOPRTXWDFXGOWYVTBPWUZMEQOZBWGGINPJPUPLGKBHMASBTJRTLJIHSFAFYHJADEONXITMECXZOPDZDGBACIKBVBHUWTGGPROOXXXWNSLLUCSNXEFZMNCSGMRUCVHNQWREIPYVBKUKSLKRFFAZQALARITPDWYSLYKCVHSDI");

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
    msg.setTimeStamp(0.600623522065);
    msg.setSource(1352U);
    msg.setSourceEntity(97U);
    msg.setDestination(14413U);
    msg.setDestinationEntity(99U);
    msg.op = 241U;
    msg.goal_id.assign("ZXXMPFQLDHNKIGEEWARMJULKGWDXFWNLECILEQGQVBDREECUDRNASADVCKUVMYXNOOYOTKYBNYVFUVNSVPHOQMXBTCAQQBWSAAFCTACXEDSLMHKPGOHDGWTAQVYRUYUXVUCTHZMBBVPMURBBVXWZFTFJBWCSJRQNJPTCWKQMJARQOEGZSYOLCWZNHTLFJPNNZGBFILOJOXZITPHYUGTDIFMPYIR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NLYKDKNBGORTHMPDLDMKYGRIPTJOMYUWCXHEZJAZMCVPUOOVJLJBFBNLASDX");
    tmp_msg_0.predicate.assign("SDELNAOJMEYUUMKYSLMQOSOQIIYEZAPVHGMVLCWJBIODWQZPHWCFADHKHSXALCKAFTOTVPHPSLEWUAPAAOZQFOFXGZBHQUWGVZHFE");
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
    msg.setTimeStamp(0.792007692434);
    msg.setSource(13723U);
    msg.setSourceEntity(187U);
    msg.setDestination(46767U);
    msg.setDestinationEntity(200U);
    msg.op = 29U;
    msg.goal_id.assign("MDHYKRNMHFDATWLZTQBQCSZNWGZFJWZFRTRONMSIGQXRKYVANPKJLHVUNPOABAGPOXXVJYENYIXKOWIPKQMNEYABBGLYRXBVBAEKDGYQSHDAWWHZIZYUHCJEBGFXWCFPIJXMZTESDBUQIJHQMOPCNVOIQLUOIHRCLMPRCCBOMXEVTZFLKUKMUHKRSLEKCWIRPTWJUE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VDAPVRBLWICCMTUNGNPSTGPYNWXNUCZSTRTMFJDUWDLTYPHKEDSQRPSQWLQAITQLKHSPYDXINLGOOKGYEEVHBLWVMDUPAKBBSITOYMOZQZSGZNJZWGUJHFFENWRZBFOKQVWXPAYOJXXIZMIMCTXYHHSJAGVIBHONWWRRVDROCBXCVKNVODMJERYLJEGCNLEAASJYEOKMSHFMXUCIDRFAZJFPUKBAZQXKGETDEVLFUBQI");
    tmp_msg_0.predicate.assign("BFGTIKAUXZECLBXVYYSSASYWDOTDZMIKCVXQGCLGGIFYWKFVGOPQWEJODXUPCBQCNGDCVBDEBRJHMBTTFWES");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NLGOTYUKJRJYN");
    tmp_tmp_msg_0_0.attr_type = 59U;
    tmp_tmp_msg_0_0.min.assign("KFNGOCEZYPHYILDYCHAPHBIZNYDACGWDMBTIAFXPAPWUCOXQFOGOEREGNRYLJWMHJYVLDFVSJBDCTFXQGTBZGCYAYMEZNRPWLUIVERSSWNIMARTIZLSENIXZXQBHEOTKZRHHSBGRLLKPWWFODVPOVNQVIFZBLMKPWMSNTCUEUQHTOMCPHJQBSJKJQKIFWZGGVQKFZAKVCDDSSKOXRRAJEAWGLXVNUDDITMNVFYXSOUAJLQXBXUMUTHBQYJURUK");
    tmp_tmp_msg_0_0.max.assign("SFCFLHENKCGFOITTGEBQJZBPCWMSXGCDHLYPFAXBTQUOJILKNXUIDKOIHSWUEZBESIINYPHMKVRUBFTMSPGNHFRZ");
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
    msg.setTimeStamp(0.137793801816);
    msg.setSource(27307U);
    msg.setSourceEntity(87U);
    msg.setDestination(26378U);
    msg.setDestinationEntity(237U);
    msg.op = 248U;
    msg.goal_id.assign("UYFMACVKDQAPQOUUKPESKXIZNALZQNFIUQEVGPOLPVRRSJZC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YKEUYSPJKPBANUKLSDARXAYRGTBVAKEJGJFWQBWFLFXKVEPNPRERTMMFOWQULHFSXPZTFAGRQVDDMIKE");
    tmp_msg_0.predicate.assign("YHEJWUODNVUHASPVNJTIGRYBWMSOKVZDUIMWXKBKUSMZTIAYJIUEPNGFQAWFSXFVXQUKZICDHKQURIZWNUFJDPFEIDATPODFSPLZHNJTLGYJZQKPEXPVTDXYAYSLGGBLGHBLLLHNEETXOKNDWKVJZCSANCSBCCBJOQSLLPENMCJAZKQRFVRECOWGZMSODHHCQXQPFXWOVAJVTRCBMGIHLOMRUI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CLYZVYAQTOGKKTCAHRRMNQVBUOQQRPMYTZMELJEOHSFXBDIQFZIMPSSUFUZFEPRYWECRBACRVML");
    tmp_tmp_msg_0_0.attr_type = 160U;
    tmp_tmp_msg_0_0.min.assign("VNZFASMDIYTKBPZFIXUZCRJGHYATMLHCPUNWQEMYTGKAYOVMSGSKPBRRFDLLEDHQLLCIWNCOCPJEGHOPVXQBETYVPWKLZVORAQMITGZITLOBGCLUZKKXAQNYBUEDPFDVRGKNVFSISYAFDORSLZNFXVPSYZWRXE");
    tmp_tmp_msg_0_0.max.assign("BWNTLZZYUGITKWLRPYADGIIQLEHOGFNSGEQXQVKQEBYELNAJIBKXXVMMQDFQJUVKXJUMPCXAFTYTJVMYXZQGONBGPHDICKUCQHIJXTKTRWSMCAZLTBDMKFJPRKQAEJYINMRBFLDJWULGVCWVRLOJPWWKXHOISFZVOSERHTGEPSPBCHMILCGEAHONIUYVTPOSHJHSZNODYPNSZYEFAFCYFCCBNFVOSRXAB");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5825373785);
    msg.setSource(39120U);
    msg.setSourceEntity(78U);
    msg.setDestination(63701U);
    msg.setDestinationEntity(73U);
    msg.name.assign("DCGHWPWSBYGAPFLEFUAAJQHVOSXXPZCJCNERKLSTHCTZTLZPRAMCFTTKHKMKQXFDHEYZOQHANVMPSHKREIIDMY");
    msg.attr_type = 253U;
    msg.min.assign("BKRJGDUCWIYRVMXBHPATLGMQXYBTIIXSIYRZJKDIFKGSADMUWGPNWBTAQNGVQPKYWAAKJUCPLSOMPVERLERDLHIZXNSIFWCWDNO");
    msg.max.assign("MGICIXFEWXDLMQHNKLSSVSDVSAJVBJEWLXYEMYUUXF");

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
    msg.setTimeStamp(0.487106756514);
    msg.setSource(41536U);
    msg.setSourceEntity(186U);
    msg.setDestination(63000U);
    msg.setDestinationEntity(207U);
    msg.name.assign("EFZSKZGBOGMKQYVPQVUAMNENGPSIGREZDFHXDYCIRZXFTRJTOHTLFFJOIGLTIXKDWJKOMRJPTWQWAZIPNNZHBEVBODDNXQVCEVENXBKCVVYKFDWECUZHYJNAEBJJCUTSHWAVPODT");
    msg.attr_type = 65U;
    msg.min.assign("HZFGCYZZKWTOGQAXUFEVZRKTMFGOJWDOSHIMUHDQNTUKOUIUEYUPGCWESXPGTDEWBISRAIMIRSJFSBZQRNEPIGTKLVVQPOFBWTCULXBDYDNBDPSHNLALKEQBTDSVANLHHIZCUXFAGCRRCXNYVFWDAGLMAENPLUCCVCONSEPUIMRVPYKJMNMAKXODRDFCTGJSKHFXBRYXAJQQJKWLGWEZKJAJBVWMMYPYZZRT");
    msg.max.assign("NVWCNKQUQPJQWNIFTXCXAFVQDFVKWYOCTQPLWGVJRIXXJJTYMVUPOAISNFJIHEKRRNRWCOTQXGSBWEHUOLAUIUZYUHEQULXFAGQXSDGMDBPXDDWOPPRLHBNZIYVGEKMLBDTGOEPKVHPYBKFNNYRCTMKKHOOHAICEZJSBLYFVAHGYODYDUMUZCRWJKFGQATIBZFR");

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
    msg.setTimeStamp(0.562494610106);
    msg.setSource(20375U);
    msg.setSourceEntity(242U);
    msg.setDestination(54052U);
    msg.setDestinationEntity(112U);
    msg.name.assign("YUQOHOAQIUDYOBNRSUIMJTGLWQKLUBFFDQXJIZECRPHREAHTVVHJYVUVOIYNWDOILNIPQZJEFDHAREVJEVBUXZPZBINKJCJAYMSSBXOKNCGYFOVQFQQRPJHEQJTYCWKXBWGTWWEIBPZSLKBHRCNPZMRZGETQLDHDZCPSNRLKVLWSMOYW");
    msg.attr_type = 226U;
    msg.min.assign("GKSVFAFZXJXFNKQLTJIQJOHNNMHEXRZGOUHSYZYMAQEJCYODNBFMXUDJRYVKWQBRVLSIEXVKPTQMCTNTJETHWCZLBAZXJVMWBHCVWDWIYJCVPPMMXDFDPBTFAVRHTKODSNKZRRFJLEOCCEDPLBIKODCVNPPKEFTLIDRZGXGASJPRCZGUBOCGWOSFGLHTWSQASUGBEVDIYSUYLMBZHUSNKQ");
    msg.max.assign("OKFMJLLDSONZCBFKAPZQJHGDFLNOKUMGNUKWWWQRQGLIHPVGILUMBXWAAJCDHRCQPNTUCEHXHJDVOKIYEBFWUGEGLTXCEIAWVDATAPYRDLNDMSPKYGRZWMQVTWPXJBOOWZXYAQOXBMOEUIPTYMYDFXHUAQJAIYGFREVLVJUVBMQRVEJTJITQOHMRZNBPNTCEEISYSXIBXVZTSDOLFY");

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
    msg.setTimeStamp(0.363267619172);
    msg.setSource(22731U);
    msg.setSourceEntity(116U);
    msg.setDestination(5236U);
    msg.setDestinationEntity(72U);
    msg.timeline.assign("ZSJQZLYQWYOVAFUXSSRXSYTKSWAQYUYEBMSNADU");
    msg.predicate.assign("WHNTEQCHYMRUULHYITSMBAUMRCPPEOQXNSIOBTQLIMVDJWMO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UPVYJOFIFKFEXIKXOTKLRWDRNWXIBOQLZGYKNUEYBNZMDXDMDPURWOCLGMATCNZASMHEXRFNKBMWHDAKSATQBVUH");
    tmp_msg_0.attr_type = 23U;
    tmp_msg_0.min.assign("EIEMJNMTQITVGKCBSVNFKBVYADQVLOELUYMVXWRDEMFGOWWBUYZQUYTYWNKUZCSEMZOGIAJNPKHSSUQZCPQBNZQGMESDJPBTGRAXNIXQXLJVYUAFPJGUOSKTFQWELHDVTLCDRHLZCTTZJKAKICBHHZYDGUWGIRXFOZAOAIBYIFHTLEKFSRJDMXTVPZDKCXKIGQHMBSPJNBCPQOANNPRHVMRXPERRSLJW");
    tmp_msg_0.max.assign("GZUFTYXBZEAYGKPMBULDEGZKAEYJMYQZXAFJVRMCELXHDCUYHWXQJMBDWGWOOGE");
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
    msg.setTimeStamp(0.693353727576);
    msg.setSource(1712U);
    msg.setSourceEntity(202U);
    msg.setDestination(11807U);
    msg.setDestinationEntity(166U);
    msg.timeline.assign("AKSQMOOBCXXHSSFYRZKJPAIGSMLSOOXMLKYQWKSNWPEPJOKNMFFGZVNCILLYTDGZEJMPNAXWYPHAWVIUIRBDTQJZYEGFIJRUUKFXDGWEQRBQETGIIMQOAFDRCPLAUJWQRUVBWZPPCPZUCNDNSLFQXD");
    msg.predicate.assign("TWOUTHVNERASHYMBGGODBRIIJYDDFBJUZKXPFALQEWQLSLCOCJIYCOKZPIROUSXBCSIIYNGGITRBSHKHTXTNOBEZEKLDJVRKVNO");

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
    msg.setTimeStamp(0.350831019509);
    msg.setSource(23826U);
    msg.setSourceEntity(132U);
    msg.setDestination(46940U);
    msg.setDestinationEntity(25U);
    msg.timeline.assign("SJRAQTAUWZGCBCWYULOKWNCNDLGLLZQGKFSAKUMYMBXLSFHJQXAETVOVQPENOFJBSZAZJAJWTBMFYMYMZCZWQXCYRSPUXLIBWTXPIQQGUMVORBHHNEPCEXDVHWJRPUWMCTFRNHMSIDLODTZYJDGIKPDVQPYNNISCSFEQAFTEMPDWGEJOFHDXUKRUELNOLRKFKYRDWEAZCBUZGVOLYGPABPRHCTFTGQIDVSOIVGHIJXEKNOHBMXTJUYV");
    msg.predicate.assign("USMNEEUKTIRIGRFQFLZUIFCMCPULQPUXSELFKDMTQVQAJJDVAXNAGOPWWWYUNLKRMMLMDCCPEYFSGPGUQKFQMWOZAZCRPJAOQHKGNLJRNNDLDYBBRKMHYDGWQLOHGYIBUHYYPKJTATTADSCNQVZJUSEYIBDTEZEHHXXJILJZFIBVCKGTVXOBDBOXSRPXFSOXKVSTZVWVBWADNAEOWRXZRXBMBYHOHGNICCZPTJHSESWHVCG");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("IETOXYVRHBEHPVJHUAKQZBWTTUSDBHMCKCJBOGCCKUBGGOQDIPTUKAFMOKJHQIJGGLTGKGWLXAPRBGASIAZIKMOXDPPZHJDJMQIESOCEMYRYFXCDEJ");
    tmp_msg_0.attr_type = 90U;
    tmp_msg_0.min.assign("TZOTFIPEDHWOHUPZWXJSDFNIKTZMJAAORSNNYCTIJXUXQSYPKVELFKGVMQTSIOPBJDQLCUBJYJMUYWNCXBDYKXOYAXCQUHSGTYSSUNGJMWPGNOUDPNR");
    tmp_msg_0.max.assign("KPPBJYRGYFMUTRMIEVNWUOTNHGJWIAJUDZEJOWHHTCYGNUXSBJN");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.694522218441);
    msg.setSource(9597U);
    msg.setSourceEntity(151U);
    msg.setDestination(56826U);
    msg.setDestinationEntity(42U);
    msg.reactor.assign("GZMDCRNVZPAFQPYDPHYKUOWPMSLTKEONQEVNTDDMFEEONAHDSAUPTMJFNCAULHVGXONDRRRDFFQSTAAVIWUPQNTKSMJXLJEWFZVUYKLJXVBFCGJEHKKIDZOQMYQNDSXGRILFPEUWYLZKOJCUPAOEOEBIBGQBIFBSMYTSBQHQXALOHWOVCTWLFB");

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
    msg.setTimeStamp(0.549931147378);
    msg.setSource(19296U);
    msg.setSourceEntity(175U);
    msg.setDestination(49919U);
    msg.setDestinationEntity(80U);
    msg.reactor.assign("DMCFBCCZGKLABWBJPOHPIONUKYMWPFTLNLCKIZSWWPSIYBQEDGLUAFVBSWQXBXJOULXAEIPRTXGZEBYGQVCDOWRDOGMPEHPDKVRQJPJXKJZYYXJUMRQNUVZYFSDPYIHABMRSHAHMTTQNCXXLUQSRKNLGIJDOSLFRKGOHZZWGSFPITJZXSISRGHDCRUJTZDALAYLTVVDVEOBEQIUVWMFBTZKCKCC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JNQPYOZTWAHAFORTFXTBTNQYWMBXLDHIIYPVDOOABRJUADTMDEEVJUEPNMOUQUPBZYKE");
    tmp_msg_0.predicate.assign("KZSTSMRHQCSDCDEEPTDYLDZJGSABLHDUVOFAMBSOPOMPYFZWXEMUZVKRNYNBLAYVVDHECZTIMYVRWZPZTLILKHYXMWGQPIIHIKXNGRQBSOYUQFRY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZTAWXWXDOIWBQYRQTJZCNYIBSEMXOAKDEXLREBSGZSARTJBZHQQUNHYGMIAPWLQBCGHUFFPKKJNYNVPIOORSTTHTNZRLYSYCBSOOFAMKYDMKVVORQUXBOVNMIMSHLDJHXZWGAADFEZQUSJFYGULEFDDJNEKURELVGEVHANAGWVQZPPICHKRLJZMCWXXMCJCVQERVUIBIVSKMJPGHFCFLWFTYAGBEXRSPLJTULDGNZPXTFKHUYWQKPWO");
    tmp_tmp_msg_0_0.attr_type = 80U;
    tmp_tmp_msg_0_0.min.assign("BWEAQDNBYJOMUUWAAGPCFDEHXFKYIWSMFKCPZTPBMUBVRLHVBQMJQULRJFYIDNKVXZJCZJRKZMFO");
    tmp_tmp_msg_0_0.max.assign("JPIQONCNLIHHSZWQDLCBOFJTEMRIQNLDRYKAATRBWLRVDLGSCYGSPJTEQZZSCZFHRVMBUPPFXSTDEBBIXFWJWPZKHDIKSNXTBVMHIDOOFYENJKCWFDREGVXXHTPOYTBEQBMUOOFPCHLTVOLAHBULXKCEWVUUGQUPMRADFOAUOHUHDNAGZAGGRJGMIAYIULEQYKWWYKYGRWQXLITPZENJFFVZZYG");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.596062277092);
    msg.setSource(2297U);
    msg.setSourceEntity(135U);
    msg.setDestination(50893U);
    msg.setDestinationEntity(74U);
    msg.reactor.assign("PQYPASJAAHZKPREFRORKZMECKVBHFCVDHAQSWJKONZGNDIZGQINEVTXIHXVJKTJVBZMXKUQKIWEUFYOYQFZQVOXLWDSEG");

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
    msg.setTimeStamp(0.00595739680228);
    msg.setSource(54402U);
    msg.setSourceEntity(198U);
    msg.setDestination(64586U);
    msg.setDestinationEntity(132U);
    msg.topic.assign("XHZGXWXAGOTURUEVBATXQGJUPLPUZDFFKNEMJVLGNBDCNHCLGTILKFCJSOOJKEBOFDISJ");
    msg.data.assign("CFWZMIRTVZTQELFANCA");

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
    msg.setTimeStamp(0.538359824322);
    msg.setSource(55519U);
    msg.setSourceEntity(248U);
    msg.setDestination(4232U);
    msg.setDestinationEntity(17U);
    msg.topic.assign("IWHCZWKEAASROVFOICKSRLGZPKGPDNPDKYQGAJTBDSDZCHYITUYVXGSAHQSQKQMPOAQVSZONJRDZHBXRHXMGFZXCIZAOXMXHCEWMSEGLWRVLBYBYFKWWLQPDOKPXJTRJAFYMIV");
    msg.data.assign("JRSVQEFXVYXHHYDGZCZMCPJMSRRIPBJCFMLIBUFWHCTZ");

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
    msg.setTimeStamp(0.472191722302);
    msg.setSource(51478U);
    msg.setSourceEntity(224U);
    msg.setDestination(13455U);
    msg.setDestinationEntity(226U);
    msg.topic.assign("OYDREAYKETHMISHZMGBXIQHEZISRKIWARQZEFLWFDLWNIRPNOYKFGCVOULGUQEGZKWYXQVSNOVTAMDPVRSBEIFUZTBPRDPPBAOGIFYOKXUPCUSVDNLSJHMWLSJJTJXLTMYULFHRODYGWIASASJTTEUMWYN");
    msg.data.assign("QAMZIGLBEYKYHWVYHGKVAVHHHXCCNMFFJNWGSCIYKEBKHHCJVJKPXNDOTMXVWMXEZZLMANRUNDKCLRVPJDOIUVKOUEBAUACDBVIUPFQVERLODXEVBTDGZUWNXCJSOKPZIATIIZTAQHUGDORRLQAZJZNQSXALJSNOGFBDYJNRJFSCGFYWWYIOZJWYPAIPSKRMDIMXTULEPSEHGUEBLTFFYXCMYGNORPLSMEPRFLQO");

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
    msg.setTimeStamp(0.491481657017);
    msg.setSource(1438U);
    msg.setSourceEntity(96U);
    msg.setDestination(17168U);
    msg.setDestinationEntity(8U);
    msg.frameid = 244U;
    const char tmp_msg_0[] = {-49, -13, 3, 64, -48, 104, 42, -118, 95, 105, -95, 27, 69, 5, -93, -119, 32, 119, -122, -96, 109, 91, 5, -47, 38, -125, 55, -122, -122, 27, -57, 5, 1, -112, 19, 73, -31, -19, 9, 24, -30, 41, -120, -110, -78, 112, -93, 116, -104, -94, 97, -47, -93, 35, -69, 125, 45, -38, -107, -31, -16, -58, 50, -79, 64, -56, -102, -69, 47, 80, 93, 120, 110, -43, 42, 33, 97, -33, -97, 75, 64, 78, -59, -11, 37, 71, -124, 8, -88, -5, 116, -96, 71, -15, 53, 95, 80, -7, 71, -119, -101, -115, -30, 108, 105, 88, -103, 82, -126, -48, -96, 116, -120, 15, -8, 41, -103, -58, 102, 15, 66, 59, -50, 0, -83, 74, 31, -32, -64, 29, 108, 24, 65, -80, 49, 15, -69, 44, -77, 126, -27, -17, 10, 111, -59, -122, 11, 19};
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
    msg.setTimeStamp(0.473861293867);
    msg.setSource(61556U);
    msg.setSourceEntity(157U);
    msg.setDestination(7307U);
    msg.setDestinationEntity(250U);
    msg.frameid = 155U;
    const char tmp_msg_0[] = {-101, -60, -125, -58, 30, 66, 15, 102, -41, 13, -94, 89, -79, -116, -18, -26, -60, -22, -56, 69, -105, 124, -98, 18, 13, -82, 10, 24, -46, 39, 65, 82, 46, -79, -124, 79, -24, -16, 73, -126, -38, 103, -20, -121, -1, 88, 73, -19, 17, 101, -44, 118, -86, 40, 103, 28, -34, -98, -35, -121, 101, -84, -78, 44, -112, -116, -113, 16, 56, -27, -123, 58, -74, 64, 7, -88, -128, 68, -63, 11, -125, 41, -64, -81, 105, 109, 6, 62, 72, 62, 77, 67, -58, 36, -89, -110, -31, -103, 109, 39, 30, -9, 4, -25, 34, -112, -44, -94, 91, -116, -86, -47, -125, -81, -120, 113, -65, 9, 77, 86, 13, 51, 45, -10, -84, -5, -66, -16, 14, 47, 111, -78, 91, -12, -64, -21, 102, -68, -84, -73, 73, 81, 60, -11, 117, -95, -38, 41, 35, 16, 73, -57};
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
    msg.setTimeStamp(0.292456172304);
    msg.setSource(25329U);
    msg.setSourceEntity(127U);
    msg.setDestination(24907U);
    msg.setDestinationEntity(208U);
    msg.frameid = 207U;
    const char tmp_msg_0[] = {30, 82, 87, 44, 20, 76, -17, -31, -68, -126, 45, -90, -27, -97, 100, 117, 98, -44, 88, -128, 49, -126, 73, -82, 121, -82, -93, -7, -124, -97, -43, -87, 74, 86, 10, 85, 32, -27, 103, 12, -115, 54, -3, -96, 31, 37, -87, -82, 28, -37, 64, -90, 62, -12, -48, 57, 32, 14, -62, 102, -34, -32, -42, -14, 61, -52, 72, -96, -50, 113, -47, -26, -48, 19, -8, -5, 115, -51, -5, -4, 55, 93, -123, 100, 78, 126, 62, 41, 20, -84, -12, 4, -110, -106, -117, -111, -5, -82, 2, 120, 33, 27, -100, 96, 32, -83, -78, 69, 19, -85, 63, 17, 121, 18, 92, 123, -92, 40, -4, 114, -83, 24, -52, -125, -3, 96, -38, -50, 116, 111, -25, 47, -93, -95, -13, 27, -123, 112, -101, -117, 4, -114, -36, 44, 95, -102, -112, -33, 6, 69, -80, -112, -12, 29, -94, -70, -128, -116, 2, 60, 125, -103, -101, -63, -110, -4, -126, -13, 120, 75, -60, -108, -32, 77, 49, -117, -126, -46, -20, -28, 79, 40, -20, 113, 30, 65, 114, 28, -85, -111, 123, 9, -44, 35, -94, -50, 32, -110, 50, -111, 52, 63, 103, -22, 107, -54, -26, -13, -117, 33, -49, 97, -113, 102, 99, -41, 44, 33, 26, -110, -89, 36, 14, 55, 24, -43, 71, -126, -14, -70, -68, 43, -60, -128, 47, 66, 89, -86, 54, -124, 64, -21, -110, 78};
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
    msg.setTimeStamp(0.321830058419);
    msg.setSource(38652U);
    msg.setSourceEntity(229U);
    msg.setDestination(40603U);
    msg.setDestinationEntity(59U);
    msg.fps = 193U;
    msg.quality = 4U;
    msg.reps = 50U;
    msg.tsize = 240U;

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
    msg.setTimeStamp(0.858874195762);
    msg.setSource(33203U);
    msg.setSourceEntity(136U);
    msg.setDestination(17923U);
    msg.setDestinationEntity(182U);
    msg.fps = 153U;
    msg.quality = 159U;
    msg.reps = 124U;
    msg.tsize = 87U;

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
    msg.setTimeStamp(0.222951174179);
    msg.setSource(7097U);
    msg.setSourceEntity(82U);
    msg.setDestination(10763U);
    msg.setDestinationEntity(137U);
    msg.fps = 216U;
    msg.quality = 146U;
    msg.reps = 9U;
    msg.tsize = 209U;

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
    msg.setTimeStamp(0.594716997819);
    msg.setSource(18451U);
    msg.setSourceEntity(208U);
    msg.setDestination(15285U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.365249549162;
    msg.lon = 0.239709467067;
    msg.depth = 211U;
    msg.speed = 0.764595662297;
    msg.psi = 0.734992239442;

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
    msg.setTimeStamp(0.713793921394);
    msg.setSource(29686U);
    msg.setSourceEntity(158U);
    msg.setDestination(17082U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.720806821313;
    msg.lon = 0.835966746239;
    msg.depth = 248U;
    msg.speed = 0.21973464044;
    msg.psi = 0.576055054774;

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
    msg.setTimeStamp(0.411369010616);
    msg.setSource(12336U);
    msg.setSourceEntity(95U);
    msg.setDestination(34853U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.210691767011;
    msg.lon = 0.113759355171;
    msg.depth = 179U;
    msg.speed = 0.641825836773;
    msg.psi = 0.489087664034;

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
    msg.setTimeStamp(0.725763076685);
    msg.setSource(575U);
    msg.setSourceEntity(232U);
    msg.setDestination(56326U);
    msg.setDestinationEntity(77U);
    msg.label.assign("GPJFQJLGHYBUKYOCMUNTUESLSQXLQZRMAPBMIGXXRACDBXPUBARVFIZWSORJISIZNNTVPXTPMSOVAFNAVKHSMZOALPMDWFXEICZJKWLVZOADFRCBVIOZYGSMOCVLXDMANVFHRWLQIJKQJWXDKKZOJTTWRLTECGYPOEUQYGATDCTNRHMCNDFIEGQGQUCHZIBFYZJLBEKTBHJGQGQIHKKDBRPPUH");
    msg.lat = 0.382677810331;
    msg.lon = 0.690817883638;
    msg.z = 0.911330776956;
    msg.z_units = 207U;
    msg.cog = 0.0917812959234;
    msg.sog = 0.870652103489;

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
    msg.setTimeStamp(0.42791583871);
    msg.setSource(16261U);
    msg.setSourceEntity(242U);
    msg.setDestination(38575U);
    msg.setDestinationEntity(99U);
    msg.label.assign("ASNGVNXDZEBCPNDSCINAOXXJYGOGYDSJIJIYQNPBUTONKKDQCTLYUKPLURKFCLEIGLFMBPYWXRDIHZURGLEAYASBDFCXMJXAMLJLIXCLUFJCMWTBIONSFBBNVIFMZQY");
    msg.lat = 0.149531254573;
    msg.lon = 0.851489101185;
    msg.z = 0.895170896544;
    msg.z_units = 110U;
    msg.cog = 0.0898336646732;
    msg.sog = 0.501947884001;

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
    msg.setTimeStamp(0.323068227567);
    msg.setSource(12450U);
    msg.setSourceEntity(50U);
    msg.setDestination(47032U);
    msg.setDestinationEntity(26U);
    msg.label.assign("CNJLQNIGWAZAYNZZXIYNIKEKPKDMHSFCIMVVXKRTVCPBZJMMGTXEYJRXKCVSPJOYYRJEZKTYGVJBWHOUDSLEWIQNLDLXZUAYRDXSTZZXMHVCRGUNLFDVASDTREQRAMPQFNIFGFVPNIWVGQHTKEQSQOBPOBUJERHDXACLMYSYKCIWTBEDFNDFSLFWBPYGPHUCQROC");
    msg.lat = 0.173086277967;
    msg.lon = 0.739771875201;
    msg.z = 0.00635413069404;
    msg.z_units = 134U;
    msg.cog = 0.659020431496;
    msg.sog = 0.96682759767;

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
    msg.setTimeStamp(0.880780125275);
    msg.setSource(47511U);
    msg.setSourceEntity(162U);
    msg.setDestination(56906U);
    msg.setDestinationEntity(48U);
    msg.name.assign("HCPDXBQSPZSKKOHUMUXXTTXPOFKPDKYHFCQLOMOQXCMCPGPIQOHMJTWNAWHVFEBUZEICUAAYRFMFDWINQSRNJQJJNJRAHWBYEPSEDABLLUWHLLFZERYPTIUVTACZDZVNGMZIBHDJNFSARUQWGGNRVKEQGWYMOISQNVLVKEBUCAELNJKMSYLFQIXPNRVPMVOBJEAMUS");
    msg.value.assign("TVOBLLMFGLKVPXUHWQQJZDNYHMKEXYUPULBANBPWWOWEINUEOHFENPDSDJIWSNGWCWJHSMHAKCRDVDGQTLBFLKYBYHHFKFVRTAUUEGBMANHQAQEXPQPZGFARVSDJZVWSAOLFCKKFMTZBTNBCVJVTMSIXLXQCXDRZVXMDTOYYRTSJXEIQUKNRHKURUUGPIPSFTRCFGIWQOLENCDBYYIJAZCIYYHEIZVGOOJIQEOOSCZKNZWRXMRTPZJAB");

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
    msg.setTimeStamp(0.909558119834);
    msg.setSource(7553U);
    msg.setSourceEntity(123U);
    msg.setDestination(40351U);
    msg.setDestinationEntity(126U);
    msg.name.assign("IXPCGNVLROPDJGLRFXBPQFEEMYOMQLIVFHOCLUEVYREKRJWMATQNLGUMQYXFQYKNNBRUVEWWXSPNTXKVDAUHJMSBFKSTAUZYIKLVQAZSRSWZKAB");
    msg.value.assign("TBJFPQQCMEKJICSAISTNZGGROKVFQRMZOGZXVHNLDIYHFFNQXXTWHKGSJMPORHQFWYAGFPXFGOPMEDDXSLYNTTAGWEQWZPBHKUVIFWZYPVA");

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
    msg.setTimeStamp(0.441917073304);
    msg.setSource(20173U);
    msg.setSourceEntity(214U);
    msg.setDestination(46308U);
    msg.setDestinationEntity(73U);
    msg.name.assign("YWDLDDIVQDYLJLKYSFZZPKBIRAAHNGRLIPAXTYKCOGUPKUJZYGJHYRMGMWSXEAJFMZTWIZVFC");
    msg.value.assign("VVGDQPFJYFLUHEETAYBNXFXTONOEVOPFVGTWSIVNVXJMA");

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
    msg.setTimeStamp(0.541516525207);
    msg.setSource(27862U);
    msg.setSourceEntity(110U);
    msg.setDestination(54025U);
    msg.setDestinationEntity(13U);
    msg.name.assign("JJFKKJYTYXZGUDZFXSHBKQWLZMZULMVBOOLJNZCATQBRFCLOVIR");

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
    msg.setTimeStamp(0.351159550034);
    msg.setSource(20266U);
    msg.setSourceEntity(116U);
    msg.setDestination(29788U);
    msg.setDestinationEntity(155U);
    msg.name.assign("HZMXYFIMUCOLDNRBYBFPJKCHWATJJTTDSTGITIQZLNWJDQYGKJUIAYVJECSXNHSNKCRMYCHRXEKILJPQGFPHOXBEWRGSECFBZDGLXVVSASVGBQBFOFUOKCCIKENNGZGYAJRTURIWNNMRMZORKUMPCQPSZHDHLFETZVFEXSAGSCMJAZXLNAYUUJQYLDQR");

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
    msg.setTimeStamp(0.9307121996);
    msg.setSource(51600U);
    msg.setSourceEntity(190U);
    msg.setDestination(42105U);
    msg.setDestinationEntity(158U);
    msg.name.assign("BLKQUBDLXCE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LOYVRNOGMBQTYPOFYQALOIELBOOLJYKIFFFHICZWPDXKV");
    tmp_msg_0.value.assign("QSMNGBJFBKXOYAVWPVOEORBCNMGJETDZCLJQATUQMZLAUHXBTHLUQMZUBOWRFIXHJHFJUELK");
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
    msg.setTimeStamp(0.167839657146);
    msg.setSource(43656U);
    msg.setSourceEntity(249U);
    msg.setDestination(8004U);
    msg.setDestinationEntity(116U);
    msg.name.assign("EJMAJLPSEVIVOUCCWGSKBUNQZZVAHFPSRTDMSOBFFXSVNDUMOTUCFHALELPEQMBCBLIXBYWCZQCOIGDRQHYDEHVFWEKHQOITPWUHWATCIMNCPSKWMEFLGZMADMIFDTPXUDUQJGAYJKXZHVYCYKNCPUPWNHGNTLXKJYOJGBYWLAUZRRYVLGQBAARHLZJIYMPQGXSZBXQRKRKSVRIQJRINBFOOTNS");
    msg.visibility.assign("ELARVRKAOCVFERBUSTNBORPABHVPYNXHSYSBJDOAHZMGIMHAFTJVCHYASQFUCOEEPWZMGFKWIBCLCZSWWLUCONYMXQGYTVAKWXTPUYCBRKQMFXICDQEUAPDXIGDVKFSJLMLZKFYIDYWHARDNEWLJYNQVGFJCPPPBUVFXOZMNRJXZROETRXILXOQFUEZBNMKIO");
    msg.scope.assign("ZBHQPCCVXSCVYKYNJEDFAMWWVEQTQW");

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
    msg.setTimeStamp(0.613228676629);
    msg.setSource(58544U);
    msg.setSourceEntity(128U);
    msg.setDestination(63338U);
    msg.setDestinationEntity(81U);
    msg.name.assign("PIBCQIBSUATDCHAYPLHOUGADLIEPTGAOYTUXZWFNSZYUUELRWHGAUGSCBYSQKJJNZKBUXWTLEXVHIRZZFHKOYIFGZGVYVWMPFVZKJORCMICWHNLFNREKORFKPARIJQQKNMVYEACMRXWECTPKQTDWBYOFURIAVLTZNEMSYXDRDXXDAOILUTSMVQMZZMQMCPPMDXKJCEGNP");
    msg.visibility.assign("BEADSBTFPXNPGXSHHWZNLTSMZCPIFRARMHUWUPWEUBXRKXYSJIMFXWDKKLLSKOZXILVZOAZHKKXRNLGKSPQQTWCZJUAPIOAVVMITVETRIHTGWVJZQLYYNZCOCCIJEJDHDQNDQLTWGBVBWMOVNUGGFYJHUMUDTODNHACQFF");
    msg.scope.assign("AFOPOSCRRCGJXXKPIDKSEETQWUHFAVOTLWITHQOZYJTYDIWORAIFAGNWFHUGGXINSVMSYMDVNYXYBGUZIUAJXTQCRGKEWEDBGFRCXKKFTEJLTOVTDJSVPPCTHPIFDBBUCRQWNWQNBLKKC");

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
    msg.setTimeStamp(0.00915910969715);
    msg.setSource(56422U);
    msg.setSourceEntity(43U);
    msg.setDestination(13637U);
    msg.setDestinationEntity(222U);
    msg.name.assign("PZRYGEEPANEQUCINZKSXWSROXWMVPGRYHXDOFVLACOZYPTNENMEGSZJHOOKBMOWENKAJ");
    msg.visibility.assign("WOLYKSGTNUWUBGTKBJCWIQMJIYILUKJXDYCZNUFZKBHECYFUXJLQGFDGJZHNEAXEPVNPXVHKOPLLRKRYYPSGVFYVIMCSRJWZZQDZSDHHICMSGRQCVXDEGJKNEDMSUJBFXAQSUWLGBAOTBOOYTWPXYRNRKGFOCHBMOOEXDONRWECVBJHAWAVRXQDAMZINSVXRI");
    msg.scope.assign("PALTXEGAFPTVGBISLFBIJRDCXFQHEJPWJMOYIGRWXXKTTMDQCXATVEEEJVKWIWEYDOCPKHRWLZQUIZUDUZJTGRNLCJULNIVOMFKWGREMYJAKXRSZXNMABGCBJLKBNAAHUGQSIMFZGLDKNRQPBHXCUOYHHNDWAFOQVDNOHENYJQVHPASZRWYQNYXNOTJPVCUFLBULSMFW");

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
    msg.setTimeStamp(0.934011902092);
    msg.setSource(37615U);
    msg.setSourceEntity(215U);
    msg.setDestination(43122U);
    msg.setDestinationEntity(158U);
    msg.name.assign("HFUAOWHMPBEKPBZAVTJMXMKZUJERZOONSEVFFXVPCQIXTXZCKWUWDSXUSOVELONKJIQRNHYJQFTOTEWRMZEHWBCOVQAHBXFVDZGQMFIVGMBCYSKZXAQEBSGLCBJZVNDRPIRTKXCQPWDOZGDUREJK");

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
    msg.setTimeStamp(0.539270501371);
    msg.setSource(57737U);
    msg.setSourceEntity(3U);
    msg.setDestination(42621U);
    msg.setDestinationEntity(228U);
    msg.name.assign("GTWASQYCBKGBAZBWHUCSGNQEDKEOKLDRRTXDXNKJEIVXSMBWSYMOCBINKCRUBATYGRHDGHLYBONNLRITWQDSABVEPRUWFHPQKKNUKQICXQE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YPADNFVZCRQVOAMYULSDMBVMJHBWHCOECKRFLILFTKSACQNKXWHPPSNDWOEVAHBYIECKUJTAKHTMNGUNPFCKQTQRRTIXLWMSEVIDZDVRXBXFPQKHJRYYJSZTBIGMPTFYATYSULXYDAZCGWPKOUXDMWSMZDVMEBYENBCZUUIOILQGROCZJHNANJJLLIQPJLRHZAGUWJN");
    tmp_msg_0.value.assign("XJSOZLCSJEXAYGNFORXPJWHVPLGPCNZOUXICGJCYOJMPVBFILZIPNXLVDMVNOUPDJKYYILEGGABDUFZQYBDQEFWSMPRKBNQWKFSANLCELAFUNMWDZDBAWHDAUVHCEBUKVYXDSPZYQBVZENRGTWXWJXTSEMHMCKHKEYRZFBTIMEGSBACIRWISUQTQGBWVHJOLRGTKOGJXIEAZQN");
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
    msg.setTimeStamp(0.320810628957);
    msg.setSource(19241U);
    msg.setSourceEntity(91U);
    msg.setDestination(57667U);
    msg.setDestinationEntity(77U);
    msg.name.assign("KPSBRWYEOYBBUGLRKNEURYISXYUHNODLCGJSDWQAFBGXTENMYIBZCUMIPDFIYKIUWFZSHVLPYQDAAQSHIDJOFRHCQDNKOWQZHAOW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IQWUPIAZCHQLVYWEADCOUJBHICADROPNGRCPAKBIMJLLRJBMPDRIKVUXTJZCDXPSPFMYUYAMCLRUGQGTLYWMAOLEOXCBDGHVXNIFDVMEMXLTVQMSYCVQONGBGBIPPNEGNFAOKOOEEPXRZJZJSTCKTHAZRQUYJHOLUJNUC");
    tmp_msg_0.value.assign("FMYWTQFGUJOBZPMLLMKIJKDZTPXTFPPLHRBZNWJLNGOWINUTEH");
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
    msg.setTimeStamp(0.229545789411);
    msg.setSource(37872U);
    msg.setSourceEntity(239U);
    msg.setDestination(21977U);
    msg.setDestinationEntity(104U);
    msg.name.assign("NDSKMMPWDWTRKIKHHEBGTAAJCVMJZGARLKRANXYAHSXQUOQQJQUQPTFVODVZUZZFOFEGCFHPYMWDBS");

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
    msg.setTimeStamp(0.100478003738);
    msg.setSource(5375U);
    msg.setSourceEntity(213U);
    msg.setDestination(35063U);
    msg.setDestinationEntity(82U);
    msg.name.assign("SAXIAIUQKRNVASYROCYOGWIUALMMOTEJJWCFFYQNOYITGDLSDNNFWIOYYZMOXFDKZQHQAOHXRXWQNFWUJCMEDZIOVIPISRPYEJSUFCUPDCDLZVRVTXPCITBHBLNCKSQWQIHCLNRPXBGMEFMHZPROHYGUJNUMJAHQLRNKKADTXRGBHKQSWTZUJDEPUMSGMTGZZDCDGHFGXEPWQEVAEKCVFBBEZZUYGNPWSJHPOXTBJBFRJBETBW");

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
    msg.setTimeStamp(0.612197424079);
    msg.setSource(62786U);
    msg.setSourceEntity(1U);
    msg.setDestination(33505U);
    msg.setDestinationEntity(30U);
    msg.name.assign("ZRXOYERBAFLZPYENSLFHCHIFGIHMMUAHWLOBIXJTLNGGSAZCIHTPDNUTTA");

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
    msg.setTimeStamp(0.102538378186);
    msg.setSource(44964U);
    msg.setSourceEntity(110U);
    msg.setDestination(58594U);
    msg.setDestinationEntity(220U);
    msg.timeout = 2549418859U;

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
    msg.setTimeStamp(0.91371335072);
    msg.setSource(9123U);
    msg.setSourceEntity(182U);
    msg.setDestination(27782U);
    msg.setDestinationEntity(192U);
    msg.timeout = 2017948328U;

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
    msg.setTimeStamp(0.601420651435);
    msg.setSource(28339U);
    msg.setSourceEntity(80U);
    msg.setDestination(61448U);
    msg.setDestinationEntity(9U);
    msg.timeout = 3389645809U;

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
    msg.setTimeStamp(0.30830394261);
    msg.setSource(13881U);
    msg.setSourceEntity(212U);
    msg.setDestination(20235U);
    msg.setDestinationEntity(91U);
    msg.sessid = 1025336520U;

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
    msg.setTimeStamp(0.505160015619);
    msg.setSource(7456U);
    msg.setSourceEntity(102U);
    msg.setDestination(43208U);
    msg.setDestinationEntity(44U);
    msg.sessid = 3733351028U;

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
    msg.setTimeStamp(0.948391543558);
    msg.setSource(57006U);
    msg.setSourceEntity(58U);
    msg.setDestination(33787U);
    msg.setDestinationEntity(154U);
    msg.sessid = 2432272531U;

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
    msg.setTimeStamp(0.876026666284);
    msg.setSource(24252U);
    msg.setSourceEntity(83U);
    msg.setDestination(3732U);
    msg.setDestinationEntity(148U);
    msg.sessid = 1994032757U;
    msg.messages.assign("NWEXJCQAKFPJRKDZIZXMEEYA");

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
    msg.setTimeStamp(0.368819185839);
    msg.setSource(5612U);
    msg.setSourceEntity(61U);
    msg.setDestination(50684U);
    msg.setDestinationEntity(146U);
    msg.sessid = 3107450612U;
    msg.messages.assign("PTBZORWFPWEXKOWPIYAWWOTSBVMPCKUTSICOQLGVXQONDHNVJGRCTBLVUENTAMYQGCMRWXBGEPDTGXRYDLCJRMSM");

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
    msg.setTimeStamp(0.73524235772);
    msg.setSource(40915U);
    msg.setSourceEntity(72U);
    msg.setDestination(48375U);
    msg.setDestinationEntity(184U);
    msg.sessid = 2363525502U;
    msg.messages.assign("UKZPIPRBCQJEKSDFYHIUJDENGLJTVUTQDXXGZBAULQSQTJZFIUAVEADAKGALPXPEWJUKWHGQUFZWWIQSVF");

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
    msg.setTimeStamp(0.497987443825);
    msg.setSource(55709U);
    msg.setSourceEntity(27U);
    msg.setDestination(6575U);
    msg.setDestinationEntity(163U);
    msg.sessid = 3799658159U;

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
    msg.setTimeStamp(0.793927614397);
    msg.setSource(35853U);
    msg.setSourceEntity(47U);
    msg.setDestination(26398U);
    msg.setDestinationEntity(67U);
    msg.sessid = 991148709U;

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
    msg.setTimeStamp(0.75367740602);
    msg.setSource(51560U);
    msg.setSourceEntity(56U);
    msg.setDestination(7416U);
    msg.setDestinationEntity(83U);
    msg.sessid = 3861978756U;

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
    msg.setTimeStamp(0.212674748943);
    msg.setSource(60365U);
    msg.setSourceEntity(189U);
    msg.setDestination(53183U);
    msg.setDestinationEntity(100U);
    msg.sessid = 2831032180U;
    msg.status = 2U;

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
    msg.setTimeStamp(0.521059363227);
    msg.setSource(8218U);
    msg.setSourceEntity(7U);
    msg.setDestination(15516U);
    msg.setDestinationEntity(48U);
    msg.sessid = 133381877U;
    msg.status = 19U;

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
    msg.setTimeStamp(0.532079203038);
    msg.setSource(13191U);
    msg.setSourceEntity(82U);
    msg.setDestination(54788U);
    msg.setDestinationEntity(179U);
    msg.sessid = 2856470527U;
    msg.status = 61U;

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
    msg.setTimeStamp(0.997773068996);
    msg.setSource(18708U);
    msg.setSourceEntity(190U);
    msg.setDestination(19508U);
    msg.setDestinationEntity(144U);
    msg.name.assign("JENLSGLIPAQCMRLCGQQWJAVNHDKOVSCTMGBXAPKCIBHNDQXPMULIEXJNETSNEZQBMIJUWKFUKXXVNKYITRWQCRRFKPGXFBOUQAO");

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
    msg.setTimeStamp(0.338164497808);
    msg.setSource(45903U);
    msg.setSourceEntity(174U);
    msg.setDestination(56175U);
    msg.setDestinationEntity(86U);
    msg.name.assign("OSARIWGWREGRRGAHBNOZGWUTQDADNGDAMOYXGSLNZMEXWJXQATOMJESBXBITQQJWKECWUSWBYFFNEBBBUKSLRZOUOLWTFIJIBLDYEHITPKHYUVY");

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
    msg.setTimeStamp(0.808098658861);
    msg.setSource(27405U);
    msg.setSourceEntity(25U);
    msg.setDestination(63940U);
    msg.setDestinationEntity(104U);
    msg.name.assign("MSHBZPAVILQAVZFCQUKFDECONCDRJZRRMR");

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
    msg.setTimeStamp(0.942748549634);
    msg.setSource(15541U);
    msg.setSourceEntity(130U);
    msg.setDestination(1983U);
    msg.setDestinationEntity(190U);
    msg.name.assign("OCUWHJXMRIDCIKQYNQMCDLVWOEAWBIEHKQBJLYJPENWTUCNRABTEM");

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
    msg.setTimeStamp(0.477864170526);
    msg.setSource(45904U);
    msg.setSourceEntity(169U);
    msg.setDestination(24053U);
    msg.setDestinationEntity(80U);
    msg.name.assign("RCEBBXKOBZPHYKHPWOGXEWEDZIZMTMRDICTIJPXKZTVUKMVLLFOCFPXDCGYBSMKYYANNRITGOTZNHDQAGTVNWMBYWJHXOMUDBOQDZPY");

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
    msg.setTimeStamp(0.407385457715);
    msg.setSource(21658U);
    msg.setSourceEntity(101U);
    msg.setDestination(33923U);
    msg.setDestinationEntity(141U);
    msg.name.assign("QLSKUQALOOGFVDEUODVVPSVHLRSGNBFYYSGWKVSLMQSGJBYRN");

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
    msg.setTimeStamp(0.950075788924);
    msg.setSource(33433U);
    msg.setSourceEntity(19U);
    msg.setDestination(53835U);
    msg.setDestinationEntity(133U);
    msg.type = 205U;
    msg.error.assign("ZRRFSYVTWBLISHOFUBZQSKYONVQLGNAEKSNXGKGAT");

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
    msg.setTimeStamp(0.701772838114);
    msg.setSource(28043U);
    msg.setSourceEntity(9U);
    msg.setDestination(55626U);
    msg.setDestinationEntity(71U);
    msg.type = 242U;
    msg.error.assign("JGXLOPRGQGBTWZXAQHSJKDEHOKTSSQWUOUWNICTNEKJBKNPAMJCLYKUVBYIJLODCSZKHCMHRWKPATGVLHDQXFHDPTUVZXOSYCQEZEGYUWSBTOVMXLGWYYAFOMEERAEIRIWPXETNWSLAFYYDINNDG");

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
    msg.setTimeStamp(0.726505220384);
    msg.setSource(15960U);
    msg.setSourceEntity(28U);
    msg.setDestination(44472U);
    msg.setDestinationEntity(219U);
    msg.type = 225U;
    msg.error.assign("NMTHVXJKDURQRBAVMVNMMDRXHTO");

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
    msg.setTimeStamp(0.120061342934);
    msg.setSource(43989U);
    msg.setSourceEntity(166U);
    msg.setDestination(4942U);
    msg.setDestinationEntity(71U);
    msg.seq = 5918U;
    msg.sys_dst.assign("KLUWNCFDQOVBNVSWKAPKZIAAAHBCOJOQEVACVNPHGFYXMXYLFJKTTXREHZSPRDTUBNZWVTBJGOIWDEMETVRHEUYWOLVDPBMK");
    msg.flags = 88U;
    const char tmp_msg_0[] = {-74, -33, 13, 93, 42, -80, -74, 18, -74, 40, 7, 11, -29, -11, -79, 47, -124, -102, -101, 22, -33, -85, -91, -31, 30, 84, -40, -109, 44, -95, 86, 1, -4, 114, -62, 93, -24, -65, -28, 27, -106, 109, -105, -13, 107, 80, 0, 55, 6, -43, -65, 57, -75, 114, 17, 26, 96, -81, -71, 29, -98, 106, -98, -7, 80, -89, 48, -117, -15, -28, -119, -63, 48, 99, -94, 12, 20, -77, -60, -7, -97, -105, -49, -116, 92, -95, -50, -45, 41, 37, 65, 104, -48, 76, 36, 37, -18, -15, -85, -3, 78, 112, -18, 59, 52, 18, -117, -26, -11, -74, 94, 87, 1, -4, -32, -89, -28, 109, 74, 62, 97, -28, -91, 90, 30, 89, 112, 7, 86, -58, 120, 3, -94, 65, 55, 38, 62, -75, 109, -107, -85, 96, -61, -29, -105, 33, -120, -2, -21, 48, -3, -128, 45, -101, 55, 87, -116, 65, -8, -123, 42, -107, 91, -1, 114, 31};
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
    msg.setTimeStamp(0.14209625399);
    msg.setSource(1612U);
    msg.setSourceEntity(108U);
    msg.setDestination(36072U);
    msg.setDestinationEntity(186U);
    msg.seq = 18635U;
    msg.sys_dst.assign("WJKFFOJYOITKSOUKLKAYJBQFLHZLEVCBSDZDEEUQFLPZBUHIAFWOIYNMVRHJCZDGJXARZGMVGLHQRZSJIDXJAWYYTCXAECBHTVNBRNVPTMJQIJLZXXUCARKOPIPBJTVQBLE");
    msg.flags = 89U;
    const char tmp_msg_0[] = {30, -120, 75, -23, -3, -15, -44, 104, 25, 81, 24, 24, 34, 17, -2, -52, 118, -86, -82, -82, 65, 115, 48, -63, -81, 51, -20, -96, -27, -43, 65, 40, -36, 81, -81, 76, -59, -127, -106, -99, -47, 77, 60, 116, -4, -82, 22, -56, -9, -89, -123, 13, 45, -27, 23, 69, -16};
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
    msg.setTimeStamp(0.675902518823);
    msg.setSource(26573U);
    msg.setSourceEntity(179U);
    msg.setDestination(65170U);
    msg.setDestinationEntity(114U);
    msg.seq = 682U;
    msg.sys_dst.assign("LYEMKLHHFFAIATJGHZNBKYBOBDEIUQFFRCBUZBBTEUYYHTYMDQVVOSESIQOACJTCOMIWQWJASUPVFLJZOEPBEOOQXXKCQMPMKOTWNJNPGEPRJLLRGXQUQBIGZJSECAMHLTXBFWNFODNCRLSWYVYUIXMTPHWPNCDTIZLZXPDCRGNXZXMAFYNKYGXKUZVUISMAKGARQWFHCKGDEJRGMTVGNHHZUVLAUSJLVSZIANTPOSEDFCJRVRXDRKHQVDW");
    msg.flags = 222U;
    const char tmp_msg_0[] = {-78, 6, -103, -25, -111, 66, -85, -118, 105, -2, -17, 9, 106, -109, -31, 81, -54, -52, -50, 9, -58, -111, -28, 108, 45, 82, -109, -86, -11, 125, 11, 57, -108, -59, 115, -5, -33, 109, -93, 49, 22, -115, -25, 27, 23, -75, -46, -13, -39, -80, -65, -125, -18, 106, 63, 2, -95, -1, -15, 79, 34, -90, -66, 8, -90, 49, 38, -82, 41, 100, -77, 115, 3, -115, 3, 79, 47, -100, 120, -1, 27, -49, -100, -83, 19, 61, 65, -55, -3, -58, -40, 68, -59, -54, -7, 10, -126, -119, 6, -5, 69, 90, 121, 103, -1, -21, -118, -18, -110, -43, 34, -109, -96, 61, -42, -7, -11, 4, 44, -4};
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
    msg.setTimeStamp(0.300987260795);
    msg.setSource(58873U);
    msg.setSourceEntity(96U);
    msg.setDestination(39309U);
    msg.setDestinationEntity(157U);
    msg.sys_src.assign("LSVEBKQXCZWEYGRTBDORJGDFUJSJOGMIVLGIKHWAJ");
    msg.sys_dst.assign("RXFZDSKBKVTEWIXRRWGFAZDXEDMAMCNUDSIIVQQCAOJBAWIQCZLOTROTMRMRBJCLUTQBOBAYBFLHLPJUZRGXEVSZDKAILYKUHOGUCXDUBMHVJVYQWXUBJEMWMOVJITEWPGPMEACKONPYBTFUQFQCIZHJPPRSLCROKXVFINZYKHNWPYWJZHDZOET");
    msg.flags = 114U;
    const char tmp_msg_0[] = {76, 58, 123, -29, -122, 108, 32, 93, -10, 11, 112, -38, 11, -114, -2, 93, -82, 33, 44, -64, -1, -21, -97, 93, 102, -50, 59, -51, -87, -64, 121, 92, -27, 116, 35, 67, 126, -58, -103, -32, -12, -103, -28, 70, 123};
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
    msg.setTimeStamp(0.588950053785);
    msg.setSource(31952U);
    msg.setSourceEntity(26U);
    msg.setDestination(25091U);
    msg.setDestinationEntity(117U);
    msg.sys_src.assign("WDLXTLTAPZRVGJDUQJABBICIZNJYOEQVZVALUYADIJUUASIUOQPBYNPWEJGNTMHVIQARDCQZXSZ");
    msg.sys_dst.assign("VIDOMBAXRLXHZNABGMRGZVRBBLCKKTUNRDMGXUKHBLPSREFCSMAIOHDYYWLQBMJJLQHWOFUNLCNYCXUFYSBVBVOFTPHIQQMPPZDSZAVJGEKWKJMGNTFKMUTD");
    msg.flags = 230U;
    const char tmp_msg_0[] = {31, 79, 13, 103, -55, -74, 33, 60, 43, 82, 99, -105, -87};
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
    msg.setTimeStamp(0.941544963359);
    msg.setSource(47804U);
    msg.setSourceEntity(254U);
    msg.setDestination(46044U);
    msg.setDestinationEntity(172U);
    msg.sys_src.assign("PDSMVGJVUZWNIRSQQIFDRWYLNIXMBIYHZQUQUWPMFCCRFVUSMZUHOKNBFRFZVVWVKWGGSLAVSGYMPYHTEMYJAKRREOWDYSIGHRZTGHENAGBOECWGCAB");
    msg.sys_dst.assign("YLOGPXVIWZRSIUJUNQNBBHFIQUBFZVAHROLVYGJLHZSACNKDWVUDOTTXSBOJBHVMLVBXYPPQADSLBFJNCOMJCEUAGMHEYXTOQTWMYUAFQSAAAIMWMFRNZNXGSGHTEAYHHEPTDZGKWKWVJDILXUNECFZMRKBKIDBKPWDIZQJUZEXNYJRKCLWWTFOGQYSYTZQFTEUERDDFMCQXCJIMLSXNCZCPVRWOXVQKSTVOJHYCRPSMNPPG");
    msg.flags = 46U;
    const char tmp_msg_0[] = {-3, -102, -11, 38, 85, -60, -16, 8, 104, 79, -123, -36, -37, -32, -128, 11, 85, 77, 33, 36, 53, 118, 99, 126, -14, 49, 103, 76, -11, -16, 96, 4, -29, 45, -23, 85, 4, -60, -36, 10, -6, -46, -1, 83, 51, -26, 113, -62, 91, -79, -38, -16, 2, 85, 122, -72, 22, 47, 2, -86, 86, -42, 59, -68, -11, -39, 93, -103, 50, -44, 28, -123, 29, -123, 103, 104, 84, 114, -126, 81, -50, 83, 76, 115, 14, -17, 74, 126, -75, 34, -33, -16, 38, 24, -70, 89, -110, -48, -120, 101, 124, -106, 62, -84, 50, 31, 47, -15, 58, -1, 86, -47, -117, 67, -51, -103, 42, 6, -57, 88, 22, -37, 88, 81, 82, 6, -120, -21, -94, -60, -114, 35, 33, -120, -69, -51, -75, 46, 59, -93, -95, 79, -126, -21, 107, -119, 65, 51, 94, 90, -44, 113, -25, -63, 63, -72, 83, -86, -122, 43, -13, -70, 63, 54, 126, 83, 115, 0, 105, -101, 71, 56, 107, 34, -109, -121, 79, 114, -115, -32, 121, -128, 44, -101, 95, -127, 76, -61, -109, 48, -47, 109, -67, -105, -82, 114, 61, -36, -114, 111, -25, -18, 28, 79, -105, 99, -80, 25, -81, -52};
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
    msg.setTimeStamp(0.760101453143);
    msg.setSource(8095U);
    msg.setSourceEntity(123U);
    msg.setDestination(50241U);
    msg.setDestinationEntity(236U);
    msg.seq = 9281U;
    msg.value = 205U;
    msg.error.assign("CJEQQNFSOMPUHMJFQRIWYTUGTZDRGWICXKDJVFHQFOSLSGUCPKPYHXLXIDRZAPOHCSXPEPEIOUMFASIGGKHVXEVBLBRCYLYTSMWLBPAUNGPULGDZAUJNTKNJRWSTGOXLTXXJVQGZKYQACARYXDOMFHKRABHVODVFNBWCZIRNRQINYDADCEDPQI");

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
    msg.setTimeStamp(0.13859562075);
    msg.setSource(4064U);
    msg.setSourceEntity(85U);
    msg.setDestination(65406U);
    msg.setDestinationEntity(67U);
    msg.seq = 6752U;
    msg.value = 198U;
    msg.error.assign("WCIUYJIPATVTOOUNDVXKVQGJPCVDQDEMWMSTZRJAUBENQUGQONNSTTVFQOEXXEZKBIFSAFHOGMWOGCMJKAZRPZSXKBMHWLIGGMNVEILZSLSJCWUZPBLYRAILDKJWQXLPJEMDDRZYCIVHYPKOKCIIUBEBAREQ");

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
    msg.setTimeStamp(0.994275801817);
    msg.setSource(2992U);
    msg.setSourceEntity(230U);
    msg.setDestination(53364U);
    msg.setDestinationEntity(188U);
    msg.seq = 37381U;
    msg.value = 169U;
    msg.error.assign("XXYRAVTONOXDFMDJYCFFPUZXHSNBCLLJMXQYEMTKFRKSERHOIPWHUOITHUKZUGQZDECRIGXGUPJAJWZHBCPEIEMKBGNADMMGPYOJKSGAFDWPGCNCUAQVMLSVZHQSQBPKIXZELJHPVYUOIAWCXKETPALYORBHZEIBNAUMLJHMCVTFUPWLOIBZXSDWQBWKBVARVLTSR");

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
    msg.setTimeStamp(0.372671459122);
    msg.setSource(58939U);
    msg.setSourceEntity(73U);
    msg.setDestination(47212U);
    msg.setDestinationEntity(116U);
    msg.seq = 12300U;
    msg.sys.assign("OFBJZHABFRDRAHJYKHPZNYMXNRQGYZRORVEVXKKNAPTYPWUPLWTERUQCWBNLOAIROGQZGMWEBFQIFM");
    msg.value = 0.958364006619;

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
    msg.setTimeStamp(0.397581586677);
    msg.setSource(32266U);
    msg.setSourceEntity(140U);
    msg.setDestination(61213U);
    msg.setDestinationEntity(203U);
    msg.seq = 58671U;
    msg.sys.assign("GPHNSIZVLXLROZSKUJLIBKLFTRMMUEYWHHZQEBNIZKJEGMMVXOFLXVWHNKGHCNURGIWFJCDULPCNPUAZJTYZDNMFJASORPTIXKTYCPARLTMXNCIPERZBWYYHVTWVKOGYBOABFAASDFTZFDJQQSPJSYIEOIEKJ");
    msg.value = 0.145822252546;

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
    msg.setTimeStamp(0.192698144016);
    msg.setSource(25482U);
    msg.setSourceEntity(112U);
    msg.setDestination(9349U);
    msg.setDestinationEntity(164U);
    msg.seq = 60128U;
    msg.sys.assign("JEIEZCSFTNAPSRUXDOVYPDWXHMTDBKUSDFPVPRJYAVJGREALWRGWJXMAJKGDGCVMZJEUAXQLJDLTLRFVHDVLRZMJNTBCHOOZPEDLCVMQCKSFCICBMUYXGFBWLWISZOZVCUONMKAQNOEHKKIPZILSPQPNQGTHLTQCRKHUZWRECRFXHXNEGQUNQIAABTFPHKYIOHFAYZWQHEBKIJSYNNUGI");
    msg.value = 0.291992553015;

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
    msg.setTimeStamp(0.632841957125);
    msg.setSource(26542U);
    msg.setSourceEntity(134U);
    msg.setDestination(41813U);
    msg.setDestinationEntity(125U);
    msg.seq = 37272U;
    msg.sys_dst.assign("YPBZJUZOTYWCDKFTJPYAYOFRSVUHQZBRMZIBXDBMLNLCYZLCFMOWADUCEDFIMILKJSPNWHZOGBKWTPPGMXRKIWLFGYQHDVMESGSAGTFFXRPHCGCYSIHGUAIBPSELTGWOBTFPIUVSQIOETEJQGXHSLEPAKRJQEOJMQIKDDWRUGVJZCVNCINWDMUXYQBCQFW");
    msg.timeout = 0.680465511415;

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
    msg.setTimeStamp(0.0805944149267);
    msg.setSource(60394U);
    msg.setSourceEntity(200U);
    msg.setDestination(37142U);
    msg.setDestinationEntity(182U);
    msg.seq = 42814U;
    msg.sys_dst.assign("CUYOFUMSXCGVQEJECGTOYNBQBFBEXIHHDJGWKIAYYSNPZPLYIWMFRLUKIMTIWGRKNHXJQWZQMZBOLIVCKMNHLWNNVAARXLSYVJAEVKGEPUGHZLQCFNHZ");
    msg.timeout = 0.381918170592;

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
    msg.setTimeStamp(0.354990140317);
    msg.setSource(62561U);
    msg.setSourceEntity(41U);
    msg.setDestination(3544U);
    msg.setDestinationEntity(99U);
    msg.seq = 12393U;
    msg.sys_dst.assign("BVNHFAKMPEIQWLBDHBRPJQKSHYLLHRZUMDBFCOMOZBXYOEVRKGVNTQHLZSTMETXYWKNQFQLAKGQKTMJUFVIQFEJPDECOEUJTGVPARRGPYOXBWWZJFDQCLVRAFAXSKCIIVGHSBMZEIMRKNSJWEAAUGGVWKFLOXGPUNZAYSOMGDIXZCZYDBBBPOCTELSSKXOEPZCWDMLTNXNUJYSSLFHIHDAGQMUXTUOFWTNHWDIZYNPNCUDPYAVJVIRCHW");
    msg.timeout = 0.872164985001;

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
    msg.setTimeStamp(0.527878321932);
    msg.setSource(29890U);
    msg.setSourceEntity(47U);
    msg.setDestination(49105U);
    msg.setDestinationEntity(238U);
    msg.action = 128U;
    msg.longain = 0.820654986784;
    msg.latgain = 0.0851889584812;
    msg.bondthick = 2990615398U;
    msg.leadgain = 0.137492744529;
    msg.deconflgain = 0.630145308004;

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
    msg.setTimeStamp(0.317789412467);
    msg.setSource(18751U);
    msg.setSourceEntity(159U);
    msg.setDestination(30106U);
    msg.setDestinationEntity(141U);
    msg.action = 147U;
    msg.longain = 0.368137396187;
    msg.latgain = 0.0879717467648;
    msg.bondthick = 3303180140U;
    msg.leadgain = 0.706902910042;
    msg.deconflgain = 0.505947829678;

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
    msg.setTimeStamp(0.581041525467);
    msg.setSource(48185U);
    msg.setSourceEntity(246U);
    msg.setDestination(63175U);
    msg.setDestinationEntity(32U);
    msg.action = 6U;
    msg.longain = 0.243143476956;
    msg.latgain = 0.331096696115;
    msg.bondthick = 3795179867U;
    msg.leadgain = 0.712920860499;
    msg.deconflgain = 0.39637989278;

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
    msg.setTimeStamp(0.211198173868);
    msg.setSource(11133U);
    msg.setSourceEntity(22U);
    msg.setDestination(54685U);
    msg.setDestinationEntity(172U);
    msg.err_mean = 0.1814954479;
    msg.dist_min_abs = 0.445944657515;
    msg.dist_min_mean = 0.187678198387;

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
    msg.setTimeStamp(0.0947427015255);
    msg.setSource(27508U);
    msg.setSourceEntity(11U);
    msg.setDestination(36801U);
    msg.setDestinationEntity(164U);
    msg.err_mean = 0.533107931351;
    msg.dist_min_abs = 0.0133186394411;
    msg.dist_min_mean = 0.560593815256;

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
    msg.setTimeStamp(0.539047292674);
    msg.setSource(47107U);
    msg.setSourceEntity(198U);
    msg.setDestination(19593U);
    msg.setDestinationEntity(1U);
    msg.err_mean = 0.674088458663;
    msg.dist_min_abs = 0.681487995138;
    msg.dist_min_mean = 0.472236228337;

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
    msg.setTimeStamp(0.122995366821);
    msg.setSource(61884U);
    msg.setSourceEntity(79U);
    msg.setDestination(8528U);
    msg.setDestinationEntity(206U);
    msg.action = 222U;
    msg.lon_gain = 0.35007432783;
    msg.lat_gain = 0.72547519288;
    msg.bond_thick = 0.670742645609;
    msg.lead_gain = 0.00289482945832;
    msg.deconfl_gain = 0.86531196813;
    msg.accel_switch_gain = 0.0852667255222;
    msg.safe_dist = 0.806048359162;
    msg.deconflict_offset = 0.504121110774;
    msg.accel_safe_margin = 0.238271415297;
    msg.accel_lim_x = 0.92529078117;

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
    msg.setTimeStamp(0.579850642563);
    msg.setSource(10419U);
    msg.setSourceEntity(6U);
    msg.setDestination(6734U);
    msg.setDestinationEntity(50U);
    msg.action = 227U;
    msg.lon_gain = 0.997178717821;
    msg.lat_gain = 0.506203992666;
    msg.bond_thick = 0.664721908335;
    msg.lead_gain = 0.628138519215;
    msg.deconfl_gain = 0.0529239022527;
    msg.accel_switch_gain = 0.559586998018;
    msg.safe_dist = 0.0951948609047;
    msg.deconflict_offset = 0.966188802709;
    msg.accel_safe_margin = 0.457489371195;
    msg.accel_lim_x = 0.323447271702;

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
    msg.setTimeStamp(0.803463710677);
    msg.setSource(53352U);
    msg.setSourceEntity(202U);
    msg.setDestination(39672U);
    msg.setDestinationEntity(124U);
    msg.action = 184U;
    msg.lon_gain = 0.695368767095;
    msg.lat_gain = 0.843868207862;
    msg.bond_thick = 0.883691361557;
    msg.lead_gain = 0.218354358475;
    msg.deconfl_gain = 0.42347819259;
    msg.accel_switch_gain = 0.505752435797;
    msg.safe_dist = 0.145121184745;
    msg.deconflict_offset = 0.194467231151;
    msg.accel_safe_margin = 0.497373379258;
    msg.accel_lim_x = 0.909812786803;

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
    msg.setTimeStamp(0.257473781957);
    msg.setSource(39789U);
    msg.setSourceEntity(228U);
    msg.setDestination(48821U);
    msg.setDestinationEntity(238U);
    msg.type = 244U;
    msg.op = 193U;
    msg.err_mean = 0.646946852796;
    msg.dist_min_abs = 0.775353499262;
    msg.dist_min_mean = 0.953180388533;
    msg.roll_rate_mean = 0.308094518533;
    msg.time = 0.924575893123;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 39U;
    tmp_msg_0.lon_gain = 0.344463329967;
    tmp_msg_0.lat_gain = 0.666551206672;
    tmp_msg_0.bond_thick = 0.857429465624;
    tmp_msg_0.lead_gain = 0.674867185057;
    tmp_msg_0.deconfl_gain = 0.404895995641;
    tmp_msg_0.accel_switch_gain = 0.621554485543;
    tmp_msg_0.safe_dist = 0.712410406299;
    tmp_msg_0.deconflict_offset = 0.314783521468;
    tmp_msg_0.accel_safe_margin = 0.873812440485;
    tmp_msg_0.accel_lim_x = 0.926119490572;
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
    msg.setTimeStamp(0.0579428805043);
    msg.setSource(4271U);
    msg.setSourceEntity(188U);
    msg.setDestination(64306U);
    msg.setDestinationEntity(160U);
    msg.type = 38U;
    msg.op = 59U;
    msg.err_mean = 0.19426822362;
    msg.dist_min_abs = 0.579621339915;
    msg.dist_min_mean = 0.348671290792;
    msg.roll_rate_mean = 0.943057573502;
    msg.time = 0.415254307686;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 79U;
    tmp_msg_0.lon_gain = 0.398257751901;
    tmp_msg_0.lat_gain = 0.993115204785;
    tmp_msg_0.bond_thick = 0.313405764876;
    tmp_msg_0.lead_gain = 0.289359533576;
    tmp_msg_0.deconfl_gain = 0.319199740355;
    tmp_msg_0.accel_switch_gain = 0.549740925607;
    tmp_msg_0.safe_dist = 0.752766271264;
    tmp_msg_0.deconflict_offset = 0.90114921564;
    tmp_msg_0.accel_safe_margin = 0.430763567189;
    tmp_msg_0.accel_lim_x = 0.983142139102;
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
    msg.setTimeStamp(0.709475302344);
    msg.setSource(21968U);
    msg.setSourceEntity(132U);
    msg.setDestination(48862U);
    msg.setDestinationEntity(91U);
    msg.type = 45U;
    msg.op = 241U;
    msg.err_mean = 0.462719412605;
    msg.dist_min_abs = 0.398027425295;
    msg.dist_min_mean = 0.0496798707416;
    msg.roll_rate_mean = 0.370675466668;
    msg.time = 0.289229902082;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 20U;
    tmp_msg_0.lon_gain = 0.502074499762;
    tmp_msg_0.lat_gain = 0.0998248475928;
    tmp_msg_0.bond_thick = 0.247049896234;
    tmp_msg_0.lead_gain = 0.715696096889;
    tmp_msg_0.deconfl_gain = 0.182812288408;
    tmp_msg_0.accel_switch_gain = 0.739081958774;
    tmp_msg_0.safe_dist = 0.412212589125;
    tmp_msg_0.deconflict_offset = 0.139815461235;
    tmp_msg_0.accel_safe_margin = 0.775885497377;
    tmp_msg_0.accel_lim_x = 0.32226784446;
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
    msg.setTimeStamp(0.105303802321);
    msg.setSource(15533U);
    msg.setSourceEntity(246U);
    msg.setDestination(55080U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.639088232478;
    msg.lon = 0.256672519885;
    msg.eta = 917058012U;
    msg.duration = 59455U;

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
    msg.setTimeStamp(0.893221376413);
    msg.setSource(40512U);
    msg.setSourceEntity(202U);
    msg.setDestination(36190U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.870444850489;
    msg.lon = 0.399395366336;
    msg.eta = 751671233U;
    msg.duration = 40938U;

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
    msg.setTimeStamp(0.815645542187);
    msg.setSource(32845U);
    msg.setSourceEntity(46U);
    msg.setDestination(22259U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.216628024434;
    msg.lon = 0.328014771434;
    msg.eta = 409665843U;
    msg.duration = 32977U;

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
    msg.setTimeStamp(0.914619287309);
    msg.setSource(514U);
    msg.setSourceEntity(238U);
    msg.setDestination(9519U);
    msg.setDestinationEntity(167U);
    msg.plan_id = 52666U;

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
    msg.setTimeStamp(0.469194635104);
    msg.setSource(9131U);
    msg.setSourceEntity(74U);
    msg.setDestination(4693U);
    msg.setDestinationEntity(246U);
    msg.plan_id = 63700U;

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
    msg.setTimeStamp(0.514606337227);
    msg.setSource(4743U);
    msg.setSourceEntity(144U);
    msg.setDestination(52534U);
    msg.setDestinationEntity(161U);
    msg.plan_id = 46086U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.817794869242;
    tmp_msg_0.lon = 0.131780540753;
    tmp_msg_0.eta = 3772117320U;
    tmp_msg_0.duration = 10669U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.0325001281033);
    msg.setSource(57343U);
    msg.setSourceEntity(79U);
    msg.setDestination(64701U);
    msg.setDestinationEntity(163U);
    msg.type = 206U;
    msg.command = 237U;
    msg.settings.assign("UYJVHFGZUGIJKCLVBQBMXAVSKPQZGFZFCPCUSHRNXWIANUQQARENIPNZBWTOSELULKQFUIKXNCQXJWOTLGYMSMHQASGYLSDDOQKLYKKYOZXFACW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 54439U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.972459137484;
    tmp_tmp_msg_0_0.lon = 0.401635320427;
    tmp_tmp_msg_0_0.eta = 1701369565U;
    tmp_tmp_msg_0_0.duration = 32715U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CKEGCBNOJBEYVOMIGYWBFAOQCGYGZVAXFSEYYHD");

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
    msg.setTimeStamp(0.680003765216);
    msg.setSource(5499U);
    msg.setSourceEntity(220U);
    msg.setDestination(48773U);
    msg.setDestinationEntity(38U);
    msg.type = 44U;
    msg.command = 235U;
    msg.settings.assign("OEFJLIYLTKJEWDHEFJQUMBPVQOJLYZWSIYEFECNJOOVGQLIVGUBMGZQWTPHMCEVFYVDULMCREDNFDXZKXCHWNGJYQZVMHWFUATTYTRNZHYRSHFDBBGSMORISCXKCMAPAGSNWSQFZRXHCOAWMVWXLTKCJLPGTXTAPAZBCEIODEWPQRSICPBNUSLDVYHUN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 5979U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.252999933226;
    tmp_tmp_msg_0_0.lon = 0.697005186181;
    tmp_tmp_msg_0_0.eta = 755570301U;
    tmp_tmp_msg_0_0.duration = 41270U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LFCRSKGOMSRYIQKVCRHKDPOTKWETKMKWUCIQNHWMDUXHTPYHOPUJIBFDWDPKYVDQGAPQRRRNFEBYZEQVVAVTESJZNRGWEX");

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
    msg.setTimeStamp(0.149374765464);
    msg.setSource(59894U);
    msg.setSourceEntity(129U);
    msg.setDestination(19409U);
    msg.setDestinationEntity(158U);
    msg.type = 127U;
    msg.command = 201U;
    msg.settings.assign("LGJBJXNYCTGWDCEQCJFIMPHZXTLNGYNTHYUDLUSFXYBSNJFVLBWWFXRUHFCJCPOKLKQWTMGPOBOJZYKHETDVDXLWQAMKHERHARFYUYNOSMMOFAQOHRPAPZNKEXULQVIPVBZEZKHVPTCPQVWKK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 39572U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("VUFDOMRDGGLIOYYEFKLTPVHULRJEWCBRMRILAEDFBTRGVLHQTMCDGTONOADCLAUOQSQNOSJKZZTJBKCYISGSHBBXIJHYKAUCWJPHFXYJCXZUQEWZLBAONFGWFYGXREMBLJRFZIUMINNRNSV");

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
    msg.setTimeStamp(0.567605034528);
    msg.setSource(52351U);
    msg.setSourceEntity(52U);
    msg.setDestination(21295U);
    msg.setDestinationEntity(70U);
    msg.state = 77U;
    msg.plan_id = 17832U;
    msg.wpt_id = 194U;
    msg.settings_chk = 8512U;

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
    msg.setTimeStamp(0.748721988991);
    msg.setSource(95U);
    msg.setSourceEntity(236U);
    msg.setDestination(41370U);
    msg.setDestinationEntity(34U);
    msg.state = 55U;
    msg.plan_id = 9079U;
    msg.wpt_id = 89U;
    msg.settings_chk = 13290U;

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
    msg.setTimeStamp(0.50807937684);
    msg.setSource(33192U);
    msg.setSourceEntity(40U);
    msg.setDestination(33078U);
    msg.setDestinationEntity(82U);
    msg.state = 162U;
    msg.plan_id = 20622U;
    msg.wpt_id = 246U;
    msg.settings_chk = 38454U;

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
    msg.setTimeStamp(0.107409928018);
    msg.setSource(30492U);
    msg.setSourceEntity(195U);
    msg.setDestination(61906U);
    msg.setDestinationEntity(74U);
    msg.uid = 168U;
    msg.frag_number = 19U;
    msg.num_frags = 210U;
    const char tmp_msg_0[] = {4, -11, -68, -42, -14, 78, 30, 20, 105, -102, 51, -5};
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
    msg.setTimeStamp(0.659106674445);
    msg.setSource(46531U);
    msg.setSourceEntity(163U);
    msg.setDestination(62155U);
    msg.setDestinationEntity(142U);
    msg.uid = 97U;
    msg.frag_number = 102U;
    msg.num_frags = 56U;
    const char tmp_msg_0[] = {67, -126, 40, -69, -57, -119, 40, 83, -51, -30};
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
    msg.setTimeStamp(0.0913793726072);
    msg.setSource(18089U);
    msg.setSourceEntity(244U);
    msg.setDestination(59468U);
    msg.setDestinationEntity(12U);
    msg.uid = 69U;
    msg.frag_number = 175U;
    msg.num_frags = 183U;
    const char tmp_msg_0[] = {53, 80, 51, 5, 53, -110, 59, -73, -116, -17, -77, -47, 34, -63, -19, -25, -124, 15, -104, 105, -109, -66, -35, -105, 119, -95, -118, 9, 70, 37, -78, -77, -16, -56, -86, -107, -27, -106, -123, -59, -123, 15, 54, -109, 17, -62, 48, -74, -122, -27, -74, -63, 53, 6, -26, 98, 78, -81, 103, 32, 95, 63, 16, -14, 80, 62, 76, 69, -119, -54, 34, -112, 21, 68, -33, -41, -115, 76, 93, 52, -82, 50, -16, -17, 95, 10, 126, -108, 119, 80, -110, 44, 10};
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
    msg.setTimeStamp(0.325234735282);
    msg.setSource(44220U);
    msg.setSourceEntity(168U);
    msg.setDestination(8063U);
    msg.setDestinationEntity(131U);
    msg.content_type.assign("DXCZECTKGAOICYUJSBRUVJYLXUTXAHZUBHQPNIDTGEEJMMPWLHTUEWVWOHQKSVMHAEXZSFNLBVRHTEWZDXZRCXIPVTQQNAJGLQIMFYICBBYGDWEWFZQMOGHGSEMCIBEAXNJVHLJHFQOGMMRFJLFDDEMKPNKQYWUSCKGNBVFASLCRCKVJDOMRXDYI");
    const char tmp_msg_0[] = {-80, -40, 46, 114, -25, 54, 68, -30, -94, 34, 109, -15, -100, -75, -100, -82, -78, -16, 110, -113, -6, -126, 59, 0, -14, -50, 114, -19, -51, -83, 25, -50, 94, 78, 105, -124, -87, 20, 39, -47, 114, 103, 117, 19, -120, -107, -120, -60, 23, 118, 4, 125, -94, 39, -126, -8, -98, -68, -26, -9, -17, -67, -19, -70, -21, -54, 70, 46, 72, -109, -86, -56, -81, -31, -10, 123, -108, -24, -9, 126, 44, -2, -13, 93, -125, -128, -70, -6, -60, -87, -124, 12, 25, 27, -122, 6, 39, 92, 46, -73, -97, 54, -69, 30, -102, -53, 89, 38, 72, 52, 57, 50, 120, -36, -68, -117, 37, 125, -45, 36, -60, -69, 83, -32, 79, -99, -53, 33, -92, 54, -36, 69, -11, 81, -17, -50, 15, -43, -87, 30, -67, -118, -89, 23, -31, 36, -67, -13, 79, 50, -73, -92, 46, 32, 104, 0, -89, -22};
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
    msg.setTimeStamp(0.811033003741);
    msg.setSource(5896U);
    msg.setSourceEntity(196U);
    msg.setDestination(4867U);
    msg.setDestinationEntity(40U);
    msg.content_type.assign("XIYPBPUMMBAVKXEZDTOKXYIUQQRJVAJFUSBIISWQOJPXPAWIQZTADILTRVEVPNRUJZYUDRMOBRKTLIFQCWJTW");
    const char tmp_msg_0[] = {-110, -54, -35, -107, 118, -82, 113, 84, 46, -85, -89, 4, -44, -18, -53, -65, 12, 65, -57, 60, 40, 77, 125, 54, -83, 79, 107, 3, 104, 40, -99, -26, 73, 117, -125, 9, 0, -48, -126, -51, -7, 91, -103, -42, -95, -11, -22, -5, -43, -54, -29, 120, -9, 114, 53, 83, -69, 50, -41, 2, 16, 47, -43, -98, -78, -27, -72, 8, 19, -77, 52, -93, -77, 6, -1, 33, 4, 5, 45, -91, -54, -111, 20, -27, -17, 81, 73, -46, -49, 79, -66, 106, -68, 40, 77, 76, 56};
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
    msg.setTimeStamp(0.604201181579);
    msg.setSource(37357U);
    msg.setSourceEntity(138U);
    msg.setDestination(6982U);
    msg.setDestinationEntity(131U);
    msg.content_type.assign("ADNVZATOWXRVIKUGQQIULCOXYRBCHBJUKTTBMZBFMYYNWNMCTMCTANBSHDVYAJRVJLXSXGZNIDRUEPKOBNXAKELIALKLSDGFPTYHOEEZDDTFVLEJYCSPUQWSGZCAAQWGSDFMJWHIBJCVWKLFBGXAEHZQITPQKWOQXEQTVLGFGRKAXYKRVPYUSZFFEPRESSXMFHDOPUPMVMCWCDNNGBKPOYW");
    const char tmp_msg_0[] = {104, -30, 1, 4, -113, -78, 65, -8, 20, -62, -2, -1, 17, 111, 108, 68, -128, 97, -87, -107, -18, -39, -103, -116, 93, -113, -23, 33, -101, 56, 85, 101, 118, 33, 75, -100, -126, -61, 111, -112, 27, -18, -97, 57, -52, 20, 111, 12, 28, 96, 1, 9, -24, -105, 17, 67, 105, -63, 15, -66, -51, 63, 38, -77, 30, -10, 124, -48, -106, 71, 123, 88, -120, -67, -78, 74, -104, 55, 74, 33, 55, -45, -88, 36, 80, -128, 117, 110, 78, -64, -16, -43, -73, 51, 44, 115, 30, -109, 36, -106, -26, 45, -77, 121, -45, -7, 54, 98, -4, -67, 80, 91, 85, -26, -127, -62, -32, -95, -75, -54, -20, -23, -105, -116, -80, -72, -110, 9, 38, 88, 16, -71, -27, 25, -62, 29, 114, -10, 25, -76, 111, -114, -38, 111, -19, 116, 113, 87, 99, -28, -111, -80, -77, 62, -56, -76, -52, 104, -16, -18, -101, -94, 121, -109, 111, -81, 102, 65, -100, 8, -100, 58, 34, 102, -86, 5, -6, -29, -49, 117, 44, 35, 0, -53, 121, -70, 62, -50, -11, -17, -101, 14, 33, 17, 97, -86, 73, 86, 20, -16, -84, -80, -102, 44, -63, 51, 62, -81, 125, -24, 61, -55, -4, -14, -96, 57, 62, 74, -123, 83, 111, 109, -115, -102, -20, -73, 15, -6, 31, -128, -48, -42};
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
    msg.setTimeStamp(0.497959210111);
    msg.setSource(33584U);
    msg.setSourceEntity(0U);
    msg.setDestination(51239U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.306971641959);
    msg.setSource(10286U);
    msg.setSourceEntity(22U);
    msg.setDestination(27627U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.86852975538);
    msg.setSource(61861U);
    msg.setSourceEntity(0U);
    msg.setDestination(58025U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.0116794725493);
    msg.setSource(15917U);
    msg.setSourceEntity(45U);
    msg.setDestination(36821U);
    msg.setDestinationEntity(252U);
    msg.target = 49231U;
    msg.bearing = 0.0971067060129;
    msg.elevation = 0.718617259681;

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
    msg.setTimeStamp(0.0204327953856);
    msg.setSource(22677U);
    msg.setSourceEntity(42U);
    msg.setDestination(22864U);
    msg.setDestinationEntity(180U);
    msg.target = 40466U;
    msg.bearing = 0.405123741569;
    msg.elevation = 0.3895553674;

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
    msg.setTimeStamp(0.0240729351905);
    msg.setSource(7732U);
    msg.setSourceEntity(85U);
    msg.setDestination(1973U);
    msg.setDestinationEntity(251U);
    msg.target = 15144U;
    msg.bearing = 0.632383375618;
    msg.elevation = 0.134468735022;

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
    msg.setTimeStamp(0.585409504463);
    msg.setSource(24692U);
    msg.setSourceEntity(75U);
    msg.setDestination(62830U);
    msg.setDestinationEntity(40U);
    msg.target = 44850U;
    msg.x = 0.57086909699;
    msg.y = 0.554715616801;
    msg.z = 0.0909737650391;

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
    msg.setTimeStamp(0.583401313449);
    msg.setSource(47069U);
    msg.setSourceEntity(24U);
    msg.setDestination(7860U);
    msg.setDestinationEntity(87U);
    msg.target = 5039U;
    msg.x = 0.322814334166;
    msg.y = 0.812555376576;
    msg.z = 0.164792727065;

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
    msg.setTimeStamp(0.353864350726);
    msg.setSource(56646U);
    msg.setSourceEntity(209U);
    msg.setDestination(3348U);
    msg.setDestinationEntity(122U);
    msg.target = 41859U;
    msg.x = 0.269296212683;
    msg.y = 0.673593272753;
    msg.z = 0.112588095002;

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
    msg.setTimeStamp(0.514579202984);
    msg.setSource(5051U);
    msg.setSourceEntity(43U);
    msg.setDestination(13572U);
    msg.setDestinationEntity(41U);
    msg.target = 42609U;
    msg.lat = 0.113146209235;
    msg.lon = 0.417041393558;
    msg.z_units = 160U;
    msg.z = 0.622710693417;

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
    msg.setTimeStamp(0.420109144927);
    msg.setSource(12263U);
    msg.setSourceEntity(49U);
    msg.setDestination(3089U);
    msg.setDestinationEntity(140U);
    msg.target = 57578U;
    msg.lat = 0.276553666914;
    msg.lon = 0.457976513161;
    msg.z_units = 169U;
    msg.z = 0.088607302809;

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
    msg.setTimeStamp(0.816166967855);
    msg.setSource(42184U);
    msg.setSourceEntity(150U);
    msg.setDestination(16019U);
    msg.setDestinationEntity(23U);
    msg.target = 34925U;
    msg.lat = 0.830548582952;
    msg.lon = 0.414016159173;
    msg.z_units = 123U;
    msg.z = 0.0592268165547;

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
    msg.setTimeStamp(0.418130993544);
    msg.setSource(12385U);
    msg.setSourceEntity(217U);
    msg.setDestination(5698U);
    msg.setDestinationEntity(73U);
    msg.locale.assign("CEONVAVTSQGRDRXEHUISB");
    const char tmp_msg_0[] = {82, -4, -72, -40, -103, -53, -77, 70, -60, 105, 120, -54, -19, -63, 5, 32, -117, -91, -116, 61, -37, 90, 110, 67, 85, 6, -104, -70, -16, 2, 68, 96, 16, 116, 6, -4, 96, -17, 72, 28, -106, -94, 64, -108, 33, 62, -68, 116, -102, 46, 1, -40, -29, -38, -120, -121, 14, -32, -57, 26, -10, -41, -61, -90, 31, 113, 66, 108, -58, 29, -77, -99, 4, -61, -123, 92, 15, 62, 44, -116, 62, 38, 52, 107, -118, -91, -94, 14};
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
    msg.setTimeStamp(0.0269188387396);
    msg.setSource(17461U);
    msg.setSourceEntity(66U);
    msg.setDestination(50734U);
    msg.setDestinationEntity(244U);
    msg.locale.assign("QAMJCZKSKHRDWYDWSAMEVXDHFCCSDSLLKYGNEF");
    const char tmp_msg_0[] = {-101, 78, 51, 83, -82, 35, -67, -17, -75, -10, 105, -40, 92, -128, -51, -116, -44, -20, 68, 75, 85, -5, 39, 126, 77, -111, -111, 117, 93, -106, -55, -2, -64, 49, 29, -30, 95, -62, -71, -49, 100, -39, 126, 96, 33, 122, 15, 1, 59, -43};
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
    msg.setTimeStamp(0.21506452093);
    msg.setSource(56052U);
    msg.setSourceEntity(202U);
    msg.setDestination(4243U);
    msg.setDestinationEntity(201U);
    msg.locale.assign("CHFCFDRRUHIXQGYFVBKDV");
    const char tmp_msg_0[] = {98, -12, 62, 100, 41, 25, -25, 122, 117, 97, 125, 52, -104, -83, -36, -120, 53, -74, 72, 94, -103, -73, -50, 5, 13, 126, -110, 90, 36, 77, -96, -13, -38, 50, -22, 50, -16, -66, 18, -83, 35, 89, 62, -116, 4, 50, 69, 89, 27, 3, 74, 38, 16, -121, 11, 95, 81, 118, -100, 68, 82, 64, 110, 40, -89, -96, -30, 18, -75, -128, 103, 113, -51, -32, 30, -27, -97, 52, 64, -2, -55, -85, 37, 84, 69, -47, 33, -25, -33, 121, -9, 40, 98, 117, -20, -25, 110, -110, -95};
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
    msg.setTimeStamp(0.738043559281);
    msg.setSource(45371U);
    msg.setSourceEntity(108U);
    msg.setDestination(25221U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.729679836497);
    msg.setSource(44038U);
    msg.setSourceEntity(54U);
    msg.setDestination(30724U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.612160419371);
    msg.setSource(40526U);
    msg.setSourceEntity(19U);
    msg.setDestination(7436U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.853949430688);
    msg.setSource(14874U);
    msg.setSourceEntity(250U);
    msg.setDestination(17282U);
    msg.setDestinationEntity(11U);
    msg.camid = 163U;
    msg.x = 40491U;
    msg.y = 41930U;

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
    msg.setTimeStamp(0.670049695483);
    msg.setSource(5094U);
    msg.setSourceEntity(238U);
    msg.setDestination(1261U);
    msg.setDestinationEntity(52U);
    msg.camid = 120U;
    msg.x = 28349U;
    msg.y = 19337U;

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
    msg.setTimeStamp(0.768834044021);
    msg.setSource(51401U);
    msg.setSourceEntity(164U);
    msg.setDestination(58036U);
    msg.setDestinationEntity(213U);
    msg.camid = 102U;
    msg.x = 50790U;
    msg.y = 16210U;

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
    msg.setTimeStamp(0.703559363327);
    msg.setSource(59350U);
    msg.setSourceEntity(197U);
    msg.setDestination(30172U);
    msg.setDestinationEntity(141U);
    msg.camid = 72U;
    msg.x = 42894U;
    msg.y = 7596U;

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
    msg.setTimeStamp(0.838763671846);
    msg.setSource(17748U);
    msg.setSourceEntity(165U);
    msg.setDestination(4562U);
    msg.setDestinationEntity(242U);
    msg.camid = 4U;
    msg.x = 330U;
    msg.y = 29019U;

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
    msg.setTimeStamp(0.754482439413);
    msg.setSource(27865U);
    msg.setSourceEntity(100U);
    msg.setDestination(40475U);
    msg.setDestinationEntity(16U);
    msg.camid = 248U;
    msg.x = 43966U;
    msg.y = 28243U;

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
    msg.setTimeStamp(0.274327010403);
    msg.setSource(39309U);
    msg.setSourceEntity(163U);
    msg.setDestination(13984U);
    msg.setDestinationEntity(13U);
    msg.tracking = 4U;
    msg.lat = 0.584585117037;
    msg.lon = 0.566701583408;
    msg.x = 0.356466023606;
    msg.y = 0.850911326504;
    msg.z = 0.271407699103;

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
    msg.setTimeStamp(0.22862786372);
    msg.setSource(24260U);
    msg.setSourceEntity(67U);
    msg.setDestination(55512U);
    msg.setDestinationEntity(91U);
    msg.tracking = 107U;
    msg.lat = 0.767024533639;
    msg.lon = 0.887695817788;
    msg.x = 0.458923792188;
    msg.y = 0.387428308132;
    msg.z = 0.0456329121991;

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
    msg.setTimeStamp(0.242262020304);
    msg.setSource(63647U);
    msg.setSourceEntity(99U);
    msg.setDestination(33911U);
    msg.setDestinationEntity(74U);
    msg.tracking = 143U;
    msg.lat = 0.552285141991;
    msg.lon = 0.845586678946;
    msg.x = 0.487246846324;
    msg.y = 0.488070458716;
    msg.z = 0.69508161108;

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
    msg.setTimeStamp(0.504080639389);
    msg.setSource(64979U);
    msg.setSourceEntity(32U);
    msg.setDestination(13697U);
    msg.setDestinationEntity(2U);
    msg.target.assign("QAPLDYYIIXUNZZSKTBCAWGKEGPQRYBOPDGOEMAOZARHUXDKTHTWICXOJTOBFGKXMNRDEFJVVBNCWZTJCCSCEJYVFINLBHCUOTSJEKS");
    msg.lbearing = 0.990816683111;
    msg.lelevation = 0.594809550945;
    msg.bearing = 0.114187955606;
    msg.elevation = 0.248000827693;
    msg.phi = 0.544376027652;
    msg.theta = 0.512866053637;
    msg.psi = 0.90364957472;
    msg.accuracy = 0.662825610291;

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
    msg.setTimeStamp(0.721579135568);
    msg.setSource(31816U);
    msg.setSourceEntity(168U);
    msg.setDestination(18954U);
    msg.setDestinationEntity(194U);
    msg.target.assign("PLKULCZINLGEWNALENNOCDOSZRGJRMQNQUXWRNLS");
    msg.lbearing = 0.599542063708;
    msg.lelevation = 0.0225061895011;
    msg.bearing = 0.929592236381;
    msg.elevation = 0.0665980802;
    msg.phi = 0.484840537776;
    msg.theta = 0.345365434018;
    msg.psi = 0.474286946085;
    msg.accuracy = 0.54300824031;

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
    msg.setTimeStamp(0.575787570916);
    msg.setSource(59754U);
    msg.setSourceEntity(118U);
    msg.setDestination(15614U);
    msg.setDestinationEntity(199U);
    msg.target.assign("BSZLPRFBRDXQKRIKOCQEWAFVVHBOWELPOYEHLHUABIWOCVUMAPMNZCFGSUBAMZAYJSOQKPNXIHOFXVVKDMSZFYTXUJYZGINYXNWMXSHSORESRFIZMNKYCLQUWPRAGWWXQTYCPJDGEQIKRBJBQJNLOQOYTVGECLNDVY");
    msg.lbearing = 0.791688392212;
    msg.lelevation = 0.267452042405;
    msg.bearing = 0.0425821468646;
    msg.elevation = 0.956253314124;
    msg.phi = 0.126939388632;
    msg.theta = 0.324946568367;
    msg.psi = 0.788224870198;
    msg.accuracy = 0.185426492238;

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
    msg.setTimeStamp(0.129456283688);
    msg.setSource(13388U);
    msg.setSourceEntity(242U);
    msg.setDestination(18860U);
    msg.setDestinationEntity(64U);
    msg.target.assign("ERBXTXMQHHRANWCJGEYWSQFQLOWJQDPPCLGXVFRAAKUVZESZNERJHHUUZAZODGTNPWSIQSLLCRKUVXRLQGWHSCJQENYVCFEWCIDJLIPJ");
    msg.x = 0.99854855483;
    msg.y = 0.396634756284;
    msg.z = 0.0442838955615;
    msg.n = 0.0852715568064;
    msg.e = 0.0600095704741;
    msg.d = 0.722341671465;
    msg.phi = 0.420494898322;
    msg.theta = 0.743445746997;
    msg.psi = 0.424976707316;
    msg.accuracy = 0.609996112754;

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
    msg.setTimeStamp(0.157948645063);
    msg.setSource(10832U);
    msg.setSourceEntity(246U);
    msg.setDestination(47126U);
    msg.setDestinationEntity(166U);
    msg.target.assign("HCUGINOJYTTEHMEYWAHBZCCFHCFAOXJYQYBPVEEJIZZBODWLSTQSDOPJYFPXEAKDUANJ");
    msg.x = 0.723816607474;
    msg.y = 0.150677281432;
    msg.z = 0.102962586339;
    msg.n = 0.358815611241;
    msg.e = 0.933225964659;
    msg.d = 0.560884948692;
    msg.phi = 0.264556056573;
    msg.theta = 0.915558824601;
    msg.psi = 0.676798869631;
    msg.accuracy = 0.303687798316;

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
    msg.setTimeStamp(0.121760299872);
    msg.setSource(26355U);
    msg.setSourceEntity(157U);
    msg.setDestination(28374U);
    msg.setDestinationEntity(120U);
    msg.target.assign("BHYJHZIPSAQOQAJGBYDCZMTDKDDVQJEEZZVYEGAAVRAOZPNRKYEHPIRSIGKPSEOFUNYSLFGAWDICKNWLIDRUNRVVUBGMCNMNFWLOWHEQSTBJBCQFXLWFYXRMYM");
    msg.x = 0.139010773415;
    msg.y = 0.761206343937;
    msg.z = 0.760040352667;
    msg.n = 0.152526576247;
    msg.e = 0.515137177756;
    msg.d = 0.290369073991;
    msg.phi = 0.669530755142;
    msg.theta = 0.165376937781;
    msg.psi = 0.830775285787;
    msg.accuracy = 0.40129488581;

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
    msg.setTimeStamp(0.801091922851);
    msg.setSource(55677U);
    msg.setSourceEntity(92U);
    msg.setDestination(41785U);
    msg.setDestinationEntity(195U);
    msg.target.assign("DSTAZZYGECYJSKSFEUIHGFOPGHEKJIYUFQHYRMUBDDOPPVMAMNJWZHTBZUGAPHWRUESLRCNIVSHQMKMFBULSDNJCWIMXFDGVVQKXGOWLWYAUVSBLTRAYDXZWQKJXEVCJRZLUYJEYOODXZATWAO");
    msg.lat = 0.657167495574;
    msg.lon = 0.00744758094978;
    msg.z_units = 22U;
    msg.z = 0.377653415543;
    msg.accuracy = 0.175602537962;

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
    msg.setTimeStamp(0.145490293747);
    msg.setSource(4954U);
    msg.setSourceEntity(135U);
    msg.setDestination(59297U);
    msg.setDestinationEntity(112U);
    msg.target.assign("KOQRHVAVBVRBJZUNUAMNSHZFIJHWYLVQCZKOHZQAYNUAXQBTDPAKSAJCVRUUXKEZSTWYUKXICVTWKGQQMTBEGX");
    msg.lat = 0.960106529402;
    msg.lon = 0.888744694611;
    msg.z_units = 116U;
    msg.z = 0.835300651596;
    msg.accuracy = 0.990455919394;

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
    msg.setTimeStamp(0.509399062233);
    msg.setSource(58220U);
    msg.setSourceEntity(156U);
    msg.setDestination(47195U);
    msg.setDestinationEntity(254U);
    msg.target.assign("KXOJBMMDUVBDCAOKBLQMDHGHTWSDOSSMYRAHTSRCNVGNQEUYAKUOAQHGSMAWLYNVVWBRGEPQHOXYXZZPYCZJYCUGTSNKPEWFVTDNCXWKFKRLSGCLVUXKTIHREPTRJFAEWOABZIZHVGPKNQNUHVDCEXMCIAUZRFRBLYTMQDAFJXZNSAJGNDFVGIDJIQ");
    msg.lat = 0.894471655246;
    msg.lon = 0.4973977111;
    msg.z_units = 165U;
    msg.z = 0.676442719937;
    msg.accuracy = 0.688610939341;

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
    msg.setTimeStamp(0.0981140232785);
    msg.setSource(50925U);
    msg.setSourceEntity(158U);
    msg.setDestination(8252U);
    msg.setDestinationEntity(248U);
    msg.name.assign("VNQRDSRXUCHAIAAWAQQPNSKCFUHQJPIPSNTBEJZPVEMRLINVELOLFFUBHMBBZIWXYVNJWMICWJPSPHVUKTPDLNCLMMVFGMVSLYFGCKGOXFIJXQJTDQNEEATZOQLXXGUGOZDXCWKZKFQBNGNRFUWAEGSJAFOLCAHXWTZ");
    msg.lat = 0.533230097272;
    msg.lon = 0.60588324372;
    msg.z = 0.290190762589;
    msg.z_units = 182U;

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
    msg.setTimeStamp(0.431575634057);
    msg.setSource(53785U);
    msg.setSourceEntity(158U);
    msg.setDestination(47312U);
    msg.setDestinationEntity(213U);
    msg.name.assign("TSXNAJCAGVXYURYGQAHBCIOJAATCGGVNVEYTSPCEOLOHRNWXKGXDCUPRPJISHLFJEELTCVRQZLIVJLVQDIKZWMBKFZDNZOIJSOOWXRQSFBBHSBEUZHQLPSOWDQDONFZAWQJCIDTFFWNORPWHQAPUBIHMBVIYEV");
    msg.lat = 0.96691609732;
    msg.lon = 0.949656104449;
    msg.z = 0.0293703484664;
    msg.z_units = 209U;

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
    msg.setTimeStamp(0.154516422676);
    msg.setSource(16824U);
    msg.setSourceEntity(154U);
    msg.setDestination(18549U);
    msg.setDestinationEntity(101U);
    msg.name.assign("WPWZMFMUDJSTYPNZLOVRPLWZOXHYVFEJAEITASBFWLCUHDDJBNFARDYIAFHHUTGJQYGCIRRACXXBLCEOGZNVTWXLOEPTMIHREEHOGRKPHWXICCZRNUGUENTDQFNM");
    msg.lat = 0.22932072563;
    msg.lon = 0.475876850554;
    msg.z = 0.343932865059;
    msg.z_units = 67U;

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
    msg.setTimeStamp(0.80720187518);
    msg.setSource(10787U);
    msg.setSourceEntity(74U);
    msg.setDestination(52539U);
    msg.setDestinationEntity(62U);
    msg.op = 65U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("JDKWRUWXCMULITXQZTIAIATZYPJCLENSNRPGTZOCKZNVKQFLDRXQPDLMNBNOMHHENUPLMFL");
    tmp_msg_0.lat = 0.516968748877;
    tmp_msg_0.lon = 0.930850767471;
    tmp_msg_0.z = 0.148678916284;
    tmp_msg_0.z_units = 55U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.869062066087);
    msg.setSource(45400U);
    msg.setSourceEntity(117U);
    msg.setDestination(56904U);
    msg.setDestinationEntity(51U);
    msg.op = 179U;

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
    msg.setTimeStamp(0.178131247463);
    msg.setSource(52727U);
    msg.setSourceEntity(236U);
    msg.setDestination(25924U);
    msg.setDestinationEntity(161U);
    msg.op = 69U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("XTGICURCHWHBUKFTCSNMZTHTZBONVONCEQJNFUWLFVPPCFZPLUFKHTXJFVTDCZBIAELGNAPORJBNBJJPDYMYYRLZWODTSJWIZEYSOQGREAMTZAIKWKCACZAPXHLFSKEQEKEXXRQIAUKCMFWMZNGOOENLVOIDLQPVGUWBBMKRVEQVQVR");
    tmp_msg_0.lat = 0.995994173964;
    tmp_msg_0.lon = 0.252604925847;
    tmp_msg_0.z = 0.324741646822;
    tmp_msg_0.z_units = 106U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.300118133552);
    msg.setSource(10232U);
    msg.setSourceEntity(141U);
    msg.setDestination(55767U);
    msg.setDestinationEntity(113U);
    msg.value = 0.66077970649;
    msg.type = 228U;

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
    msg.setTimeStamp(0.669356998352);
    msg.setSource(53170U);
    msg.setSourceEntity(106U);
    msg.setDestination(58259U);
    msg.setDestinationEntity(72U);
    msg.value = 0.929159361968;
    msg.type = 131U;

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
    msg.setTimeStamp(0.175741186238);
    msg.setSource(9639U);
    msg.setSourceEntity(235U);
    msg.setDestination(109U);
    msg.setDestinationEntity(195U);
    msg.value = 0.468151940521;
    msg.type = 193U;

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
    msg.setTimeStamp(0.086162711427);
    msg.setSource(45112U);
    msg.setSourceEntity(29U);
    msg.setDestination(51455U);
    msg.setDestinationEntity(182U);
    msg.value = 0.772013707374;

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
    msg.setTimeStamp(0.361593176572);
    msg.setSource(53911U);
    msg.setSourceEntity(167U);
    msg.setDestination(60861U);
    msg.setDestinationEntity(139U);
    msg.value = 0.00173179384004;

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
    msg.setTimeStamp(0.698204886298);
    msg.setSource(22383U);
    msg.setSourceEntity(162U);
    msg.setDestination(2090U);
    msg.setDestinationEntity(182U);
    msg.value = 0.548318986262;

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
    msg.setTimeStamp(0.272526002396);
    msg.setSource(57792U);
    msg.setSourceEntity(29U);
    msg.setDestination(65197U);
    msg.setDestinationEntity(213U);
    msg.timestamp_last_service = 0.677640415391;
    msg.time_next_service = 0.300884273725;
    msg.time_motor_next_service = 0.427226988647;
    msg.time_idle_ground = 0.566007409982;
    msg.time_idle_air = 0.119009284289;
    msg.time_idle_water = 0.507653091253;
    msg.time_idle_underwater = 0.961099629397;
    msg.time_idle_unknown = 0.548329530081;
    msg.time_motor_ground = 0.160431719245;
    msg.time_motor_air = 0.0783531448067;
    msg.time_motor_water = 0.0898859664745;
    msg.time_motor_underwater = 0.0563878012712;
    msg.time_motor_unknown = 0.692352728059;
    msg.rpm_min = 17627;
    msg.rpm_max = 1685;
    msg.depth_max = 0.0141979392712;

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
    msg.setTimeStamp(0.0245790516719);
    msg.setSource(44337U);
    msg.setSourceEntity(61U);
    msg.setDestination(23504U);
    msg.setDestinationEntity(209U);
    msg.timestamp_last_service = 0.660602978999;
    msg.time_next_service = 0.654205107815;
    msg.time_motor_next_service = 0.0632850154147;
    msg.time_idle_ground = 0.23980216333;
    msg.time_idle_air = 0.715000951252;
    msg.time_idle_water = 0.507816964258;
    msg.time_idle_underwater = 0.457537327603;
    msg.time_idle_unknown = 0.173526642182;
    msg.time_motor_ground = 0.555874701018;
    msg.time_motor_air = 0.240509186637;
    msg.time_motor_water = 0.608062805301;
    msg.time_motor_underwater = 0.121670613799;
    msg.time_motor_unknown = 0.993124339411;
    msg.rpm_min = 23948;
    msg.rpm_max = -28283;
    msg.depth_max = 0.303109787728;

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
    msg.setTimeStamp(0.491129243357);
    msg.setSource(54804U);
    msg.setSourceEntity(241U);
    msg.setDestination(40723U);
    msg.setDestinationEntity(254U);
    msg.timestamp_last_service = 0.837303508711;
    msg.time_next_service = 0.422870804269;
    msg.time_motor_next_service = 0.542055521099;
    msg.time_idle_ground = 0.820291225424;
    msg.time_idle_air = 0.670738646014;
    msg.time_idle_water = 0.919282278241;
    msg.time_idle_underwater = 0.900528513362;
    msg.time_idle_unknown = 0.0840279772898;
    msg.time_motor_ground = 0.55060042472;
    msg.time_motor_air = 0.152879699508;
    msg.time_motor_water = 0.934753174602;
    msg.time_motor_underwater = 0.958755093837;
    msg.time_motor_unknown = 0.191510604474;
    msg.rpm_min = 1374;
    msg.rpm_max = 4165;
    msg.depth_max = 0.52719610889;

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
    msg.setTimeStamp(0.662197720242);
    msg.setSource(10617U);
    msg.setSourceEntity(144U);
    msg.setDestination(35024U);
    msg.setDestinationEntity(236U);
    msg.severity = 166U;
    msg.text.assign("KZFXVOWZURLOSRHUICWJBQTLKCXXBVPFNKVSLZPMBNSSABKLRGMYCXWEVGSDTYZXEFFTGYOOMHHEYIU");

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
    msg.setTimeStamp(0.305112510053);
    msg.setSource(38535U);
    msg.setSourceEntity(11U);
    msg.setDestination(54818U);
    msg.setDestinationEntity(27U);
    msg.severity = 212U;
    msg.text.assign("OAWCNKADKTJDJPXQUSGSHXLVAYFWNWZMLFNNOSROEFGMBUYNAXBVEWXHKHISCOFJBYQVQIPRZIBRVGGZGWDDPEJJSUXHVFOAMTHDVBXETPTEFNZBQ");

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
    msg.setTimeStamp(0.327848371577);
    msg.setSource(19107U);
    msg.setSourceEntity(170U);
    msg.setDestination(27048U);
    msg.setDestinationEntity(218U);
    msg.severity = 175U;
    msg.text.assign("QHSYZRJTGPPQPYKHYDVBFEZTDPMRDFULGLPZAXWJVNGSQNGHBZCLBXPUCUVCAAGDFRJWREOWWSNWOHNYXXSOJSBTKRKYOACWO");

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
    msg.setTimeStamp(0.336754586594);
    msg.setSource(10146U);
    msg.setSourceEntity(227U);
    msg.setDestination(42523U);
    msg.setDestinationEntity(215U);
    msg.channel = 93;
    msg.value = 1260866114;
    msg.gain = 151U;

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
    msg.setTimeStamp(0.311963361676);
    msg.setSource(14364U);
    msg.setSourceEntity(112U);
    msg.setDestination(14158U);
    msg.setDestinationEntity(95U);
    msg.channel = 39;
    msg.value = 2027185932;
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
    msg.setTimeStamp(0.0272987141263);
    msg.setSource(27579U);
    msg.setSourceEntity(80U);
    msg.setDestination(38901U);
    msg.setDestinationEntity(45U);
    msg.channel = 28;
    msg.value = 922398284;
    msg.gain = 111U;

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
    msg.setTimeStamp(0.465980982871);
    msg.setSource(32939U);
    msg.setSourceEntity(141U);
    msg.setDestination(15136U);
    msg.setDestinationEntity(75U);
    msg.ch01 = 0.721820820695;
    msg.ch02 = 0.998829506033;
    msg.ch03 = 0.761605500898;
    msg.ch04 = 0.53148445758;
    msg.ch05 = 0.83058655005;
    msg.ch06 = 0.549047445348;
    msg.ch07 = 0.359384822937;
    msg.ch08 = 0.304454445883;
    msg.ch09 = 0.682165406517;
    msg.ch10 = 0.069107400807;
    msg.ch11 = 0.00745390588668;
    msg.ch12 = 0.901455937263;
    msg.ch13 = 0.503192409235;
    msg.ch14 = 0.40582919635;
    msg.ch15 = 0.275842401456;
    msg.ch16 = 0.348275507323;

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
    msg.setTimeStamp(0.0604311178795);
    msg.setSource(57443U);
    msg.setSourceEntity(172U);
    msg.setDestination(64079U);
    msg.setDestinationEntity(149U);
    msg.ch01 = 0.635144286335;
    msg.ch02 = 0.500144958612;
    msg.ch03 = 0.907332867573;
    msg.ch04 = 0.53541226467;
    msg.ch05 = 0.00709999164152;
    msg.ch06 = 0.694675124682;
    msg.ch07 = 0.846472978282;
    msg.ch08 = 0.186040828571;
    msg.ch09 = 0.0711760501716;
    msg.ch10 = 0.731272656063;
    msg.ch11 = 0.662948622332;
    msg.ch12 = 0.152694927026;
    msg.ch13 = 0.52463524668;
    msg.ch14 = 0.719337652542;
    msg.ch15 = 0.698236690364;
    msg.ch16 = 0.702084392142;

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
    msg.setTimeStamp(0.702355928165);
    msg.setSource(42859U);
    msg.setSourceEntity(186U);
    msg.setDestination(25440U);
    msg.setDestinationEntity(153U);
    msg.ch01 = 0.0506135110924;
    msg.ch02 = 0.459817056218;
    msg.ch03 = 0.851628799289;
    msg.ch04 = 0.686833566682;
    msg.ch05 = 0.23700090988;
    msg.ch06 = 0.560543687205;
    msg.ch07 = 0.989749145656;
    msg.ch08 = 0.860137112928;
    msg.ch09 = 0.0784427617139;
    msg.ch10 = 0.445562185238;
    msg.ch11 = 0.411717843762;
    msg.ch12 = 0.359063905064;
    msg.ch13 = 0.137517849553;
    msg.ch14 = 0.174593001256;
    msg.ch15 = 0.361389618605;
    msg.ch16 = 0.193746279485;

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
    msg.setTimeStamp(0.748326633269);
    msg.setSource(15654U);
    msg.setSourceEntity(129U);
    msg.setDestination(32432U);
    msg.setDestinationEntity(213U);
    msg.value = 0.133498684478;

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
    msg.setTimeStamp(0.952693457412);
    msg.setSource(4130U);
    msg.setSourceEntity(230U);
    msg.setDestination(1542U);
    msg.setDestinationEntity(44U);
    msg.value = 0.735458729023;

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
    msg.setTimeStamp(0.139294379713);
    msg.setSource(27571U);
    msg.setSourceEntity(181U);
    msg.setDestination(45051U);
    msg.setDestinationEntity(11U);
    msg.value = 0.588022157278;

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
    msg.setTimeStamp(0.629229269065);
    msg.setSource(10651U);
    msg.setSourceEntity(93U);
    msg.setDestination(28274U);
    msg.setDestinationEntity(212U);
    msg.op = 129U;
    msg.lat = 0.143814886951;
    msg.lon = 0.627931320591;
    msg.height = 0.630808259376;
    msg.depth = 0.326460748098;
    msg.alt = 0.741905894622;

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
    msg.setTimeStamp(0.944760422733);
    msg.setSource(40015U);
    msg.setSourceEntity(75U);
    msg.setDestination(18727U);
    msg.setDestinationEntity(26U);
    msg.op = 125U;
    msg.lat = 0.300636838302;
    msg.lon = 0.396562881318;
    msg.height = 0.745423072554;
    msg.depth = 0.88577809814;
    msg.alt = 0.173141758687;

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
    msg.setTimeStamp(0.38810419713);
    msg.setSource(61272U);
    msg.setSourceEntity(209U);
    msg.setDestination(46380U);
    msg.setDestinationEntity(102U);
    msg.op = 149U;
    msg.lat = 0.100415123303;
    msg.lon = 0.939506397472;
    msg.height = 0.504212824578;
    msg.depth = 0.714010127921;
    msg.alt = 0.0459665960199;

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
    msg.setTimeStamp(0.0318627987208);
    msg.setSource(56883U);
    msg.setSourceEntity(73U);
    msg.setDestination(38826U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.402454984534;
    msg.lon = 0.716272462509;
    msg.z = 0.137101949206;
    msg.z_units = 33U;
    msg.width = 0.718908635395;
    msg.hstep = 0.449646300486;
    msg.speed = 0.666004675268;
    msg.speed_units = 102U;
    msg.bearing = 0.916552298131;
    msg.cross_angle = 0.118510061849;
    msg.length = 0.869652030113;
    msg.coff = 230U;
    msg.angaperture = 0.654259474891;
    msg.range = 59067U;
    msg.overlap = 119U;
    msg.flags = 156U;
    msg.custom.assign("GGBYDDANNOARHXUNXWWUUHULSEXVZJXZYCDXIUEOPBPIBKYRQKCQRRHSJLTWMEZSXMVFUNQPEGVROJFGPEQTDAXONUVDMITIJVVSVNIBOBYQLOYGROYSRQIPZPYEQLFZWHKASFHIUTBLKMNHFZVKWKNFUCYMZKGLSYJCNOFATFQWMOEXWLRHDFYTSMCSXDJJKTBXCLPCLJGVDQBMDTFWMAGUWSTLABZ");

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
    msg.setTimeStamp(0.0142127605962);
    msg.setSource(27522U);
    msg.setSourceEntity(21U);
    msg.setDestination(28015U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.978519373821;
    msg.lon = 0.243619792512;
    msg.z = 0.104611685091;
    msg.z_units = 117U;
    msg.width = 0.971699558336;
    msg.hstep = 0.569716745033;
    msg.speed = 0.0882777017708;
    msg.speed_units = 57U;
    msg.bearing = 0.308977337944;
    msg.cross_angle = 0.650092146731;
    msg.length = 0.0505356370703;
    msg.coff = 187U;
    msg.angaperture = 0.735786272529;
    msg.range = 40205U;
    msg.overlap = 39U;
    msg.flags = 214U;
    msg.custom.assign("IQBHWQUZCNBVXPKPRRSAVDUWIRJEYQTGOVOSCPYYEDLSMXGKMURGJFMPTIOZVUPVNLPVEXQMEFRMWNADEDWNAETOSIEQHUMIQBIFGLXLXCRGAUVVDCMBFRZNSFNNVJWFYSCQHDDLSQABJCVZOHOLTAHFTNXBJGLRZJESBNMZSXEAGKPJRFLNJYCDWEKLWIBKUJAPPPMFTKDFTOZRQWUTKHXLXYGAAXUWGK");

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
    msg.setTimeStamp(0.158107414048);
    msg.setSource(64896U);
    msg.setSourceEntity(102U);
    msg.setDestination(15216U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.865848576182;
    msg.lon = 0.233434319514;
    msg.z = 0.420445167563;
    msg.z_units = 200U;
    msg.width = 0.113548092094;
    msg.hstep = 0.641110356175;
    msg.speed = 0.351181721125;
    msg.speed_units = 19U;
    msg.bearing = 0.639225020471;
    msg.cross_angle = 0.648458217125;
    msg.length = 0.560281289857;
    msg.coff = 19U;
    msg.angaperture = 0.427898198172;
    msg.range = 54438U;
    msg.overlap = 186U;
    msg.flags = 235U;
    msg.custom.assign("INPRPKANAQLGQWKELTWFLILMCRVPAOSFIFISXPNTAZSBNMYBYCJJMHUHMKERVBLQDRGHSCFZIXGXDUONOYQAKKTJQYRSKTGZCEEKBWXPUIHTYFXVJAFIRMUBDQGZTSMMOWGVQPQWXKNELNTZHPWVUUBRGHREXFOBDVAHCZHBJDWEDMAPCUVFYHYWTWUBYMQJBYCOOUJODGXNQJFPKZC");

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
