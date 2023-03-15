#include "services/ApplicationServices.h"
#include "services/UtilsApplicationServices.h"
#include "catch.hpp"
#include "Apolo.h"
#include "AresMeter.h"
#include "Zeus.h"
#include "Cronos.h"

TEST_CASE("convert_meter_line_proto_to_meter_line 1")
{
    auto meter = UtilsApplicationServices::convert_meter_line_proto_to_meter_line(rsf::MeterLineProto::APOLO);
    REQUIRE(MeterLine::APOLO == meter);
}

TEST_CASE("convert_meter_line_proto_to_meter_line 2")
{
    auto meter = UtilsApplicationServices::convert_meter_line_proto_to_meter_line(rsf::MeterLineProto::ARES);
    REQUIRE(MeterLine::ARES == meter);
}

TEST_CASE("convert_meter_line_proto_to_meter_line 3")
{
    auto meter = UtilsApplicationServices::convert_meter_line_proto_to_meter_line(rsf::MeterLineProto::CRONOS);
    REQUIRE(MeterLine::CRONOS == meter);
}

TEST_CASE("convert_meter_line_proto_to_meter_line 4")
{
    auto meter = UtilsApplicationServices::convert_meter_line_proto_to_meter_line(rsf::MeterLineProto::ZEUS);
    REQUIRE(MeterLine::ZEUS == meter);
}

TEST_CASE("convert_meter_line_proto_to_meter_line 5")
{
    auto meter = UtilsApplicationServices::convert_meter_line_proto_to_meter_line(rsf::MeterLineProto::UNKNOWN_METER_LINE);
    REQUIRE(MeterLine::UNKNOWN == meter);
}

TEST_CASE("convert_meter_line 1")
{
    auto meter = UtilsApplicationServices::convert_meter_line(MeterLine::APOLO);
    REQUIRE(rsf::MeterLineProto::APOLO == meter);
}

TEST_CASE("convert_meter_line 2")
{
    auto meter = UtilsApplicationServices::convert_meter_line(MeterLine::ARES);
    REQUIRE(rsf::MeterLineProto::ARES == meter); 
}

TEST_CASE("convert_meter_line 3")
{
    auto meter = UtilsApplicationServices::convert_meter_line(MeterLine::CRONOS);
    REQUIRE(rsf::MeterLineProto::CRONOS == meter);
}

TEST_CASE("convert_meter_line 4")
{   
    auto meter = UtilsApplicationServices::convert_meter_line(MeterLine::ZEUS);
    REQUIRE(rsf::MeterLineProto::ZEUS == meter);
}

TEST_CASE("convert_meter_line 5")
{
    auto meter = UtilsApplicationServices::convert_meter_line(MeterLine::UNKNOWN);
    REQUIRE(rsf::MeterLineProto::UNKNOWN_METER_LINE == meter);
}

TEST_CASE("Display_list 1")
{
    std::vector<MedidorDeEnergia> list_test = {Apolo ("8030",35)};
    
    rsf::GetMetersReply reply;
    
    UtilsApplicationServices::display_list(list_test, &reply);

    REQUIRE(reply.meters_list_size() == 1);
    REQUIRE(reply.meters_list().begin()->id() == 35);
    REQUIRE(reply.meters_list().begin()->model() == "8030");
    REQUIRE(reply.meters_list().begin()->meter_line() == rsf::MeterLineProto::APOLO);
}

TEST_CASE("Display_list 2")
{
    std::vector<MedidorDeEnergia> list_test = {Ares ("8080",36), Cronos("7070",37), Zeus("2525",38)};
    
    rsf::GetMetersReply reply;
    
    UtilsApplicationServices::display_list(list_test, &reply);

    REQUIRE(reply.meters_list_size() == 3);
    REQUIRE(reply.meters_list().at(0).id() == 36);
    REQUIRE(reply.meters_list().at(0).model() == "8080");
    REQUIRE(reply.meters_list().at(0).meter_line() == rsf::MeterLineProto::ARES);
    
    REQUIRE(reply.meters_list().at(1).id() == 37);
    REQUIRE(reply.meters_list().at(1).model() == "7070");
    REQUIRE(reply.meters_list().at(1).meter_line() == rsf::MeterLineProto::CRONOS);

    REQUIRE(reply.meters_list().at(2).id() == 38);
    REQUIRE(reply.meters_list().at(2).model() == "2525");
    REQUIRE(reply.meters_list().at(2).meter_line() == rsf::MeterLineProto::ZEUS);

    //reply.meters_list().begin(); //MedidorDeEnergiaProto - MedidorDeEnergiaProto*
}

TEST_CASE("Display_list o brenno pediu")
{
    std::vector<MedidorDeEnergia> list_test;

    for (int i = 0; i < 100; i++)
    {
        list_test.push_back(Zeus("1000",i));
    }
    
    rsf::GetMetersReply reply;
    
    UtilsApplicationServices::display_list(list_test, &reply);

    REQUIRE(reply.meters_list_size() == 100);

    int i = 0;
    for (auto it = reply.meters_list().begin(); it != reply.meters_list().end(); it++)
    {
        REQUIRE(it->id() == i++);
    }
}
    // for (const auto &a : ab)
    // {
    //     a;
    // }

    // for (auto it = ab.begin(); it != ab.end(); it++)
    // {
    //     *it;
    // }

