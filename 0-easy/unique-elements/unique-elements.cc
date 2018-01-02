/*
       Challenge Name: Unique Elements
     Challenge Rating: Easy
Challenge Description: https://www.codeeval.com/open_challenges/29/
                Score: 34.977 / 35
          Solution By: Christopher Robitaille
         Submitted On: Nov 07, 2017
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdio.h>
#include <sstream>

using namespace std;

vector<string> Split(const string& s, const char& delimiter);

int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    while (getline(stream, line)) {
        vector<string> numbers = Split(line, ',');
        vector<string> result;
        result.push_back(numbers.at(0));
        cout << numbers.at(0);
        for (int i = 1; i < numbers.size(); i++) {
            bool fail = false;
            for (int j = 0; j < result.size(); j++) {
                if (numbers.at(i) == result.at(j)) {
                    fail = true;
                    break;
                }
            }
            if (!fail) {
                result.push_back(numbers.at(i));
                cout << "," << numbers.at(i);
            }
        }
    cout << endl;
    }
    return 0;
}

vector<string> Split(const string& s, const char& delimiter) {
    std::stringstream ss(s);
    std::string item;
    vector<string> elements;
    while (std::getline(ss, item, delimiter)) {
        elements.push_back(item);
    }
    return elements;
}
