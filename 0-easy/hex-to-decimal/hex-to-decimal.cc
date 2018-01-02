/*
       Challenge Name: Hex-to-Decimal
     Challenge Rating: Easy
Challenge Description: https://www.codeeval.com/open_challenges/67/
                Score: 34.982 / 35
          Solution By: Christopher Robitaille
         Submitted On: Dec 20, 2017
*/
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    while (getline(stream, line)) {
        int decimal;
        stringstream ss;
        ss << "0x" << line;
        ss >> std::hex >> decimal;
        cout << decimal << endl;
    }
    return 0;
}