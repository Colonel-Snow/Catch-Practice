//
#include <iostream>
// Created by kerne on 2/13/2019.
//
#include "catch.hpp"
#include <string>
#include <sstream>
using std::cin;
using std::string;

int stringCalc(string c) {
    if (c == "") return 0;

    for (auto f: c) {

    if (f == ',') {
        break;
    }
        return std::stoi(c);
    }

        int x, y;
        string str, str1;
        std::stringstream ss;
        ss << c;
        ss >> x >> str >> str1 >> y;
        int answer = x + y;
        return answer;

}

TEST_CASE( "Strings are computed", "[stringCalc]" ) {
    REQUIRE( stringCalc("") == 0 );
    REQUIRE( stringCalc("1") == 1);
    REQUIRE( stringCalc("16") == 16);
    REQUIRE( stringCalc("23") == 23);
    REQUIRE( stringCalc("1, 2") == 3);
}
