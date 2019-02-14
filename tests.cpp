//
// Created by kerne on 2/13/2019.
//
#include "catch.hpp"
#include <string>
using std::string;

int stringCalc(const string &c );

int stringCalc(const string &c) {
    if(c == "") return 0;
    else
        return std::stoi(c);
    return 1;
}

TEST_CASE( "Strings are computed", "[stringCalc]" ) {
    REQUIRE( stringCalc("") == 0 );
    REQUIRE( stringCalc("1") == 1);
    REQUIRE( stringCalc("16") == 16);
    REQUIRE( stringCalc("23") == 23);
}
