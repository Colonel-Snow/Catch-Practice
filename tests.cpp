//
// Created by kerne on 2/13/2019.
//
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <string>
using std::string;

unsigned int stringCalc( string c ) {
    if(c == "") return 0;
}

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( stringCalc("") == 0 );
}