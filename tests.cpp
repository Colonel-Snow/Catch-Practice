//
#include <iostream>
// Created by kerne on 2/13/2019.
//
#include "catch.hpp"
#include <string>
#include <sstream>
using std::cin;
using std::string;
using std::stoi;

int stringCalc(string c) {
    int result;

    if (c == "") return 0;

    else if (c.length() < 3) return std::stoi(c);

    else {
        string o(1,c[0]);
        string t(1,c[2]);

        int x = stoi(o);
        int y = stoi(t);
        result = x + y;
    }
    return result;
}

TEST_CASE( "Strings are computed", "[stringCalc]" ) {
    REQUIRE( stringCalc("") == 0 );
    REQUIRE( stringCalc("1") == 1);
    REQUIRE( stringCalc("16") == 16);
    REQUIRE( stringCalc("23") == 23);
    REQUIRE( stringCalc("1,2") == 3);
    REQUIRE( stringCalc("1\n5") == 6);
}