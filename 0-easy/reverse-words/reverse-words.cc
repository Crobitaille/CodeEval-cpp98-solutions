/*
       Challenge Name: Reverse Words
     Challenge Rating: Easy
Challenge Description: https://www.codeeval.com/open_challenges/8/
                Score: 34.974 / 35
          Solution By: Christopher Robitaille
         Submitted On: Oct 27, 2017
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> Split(const string& s, const char& delimiter);

int main(int argc, char *argv[])
{
    ifstream stream(argv[1]);
    string line;

    while (getline(stream, line)) {
        vector<string> strings;

        if (!line.empty()) {
            strings = Split(line, ' ');

            if (strings.size() >= 1) {
                string result = "";

                for (int i = strings.size() - 1; i >= 0; i--) {
                    result += strings.at(i) + " ";
                }

                result = result.substr(0, result.size() - 1);
                cout << result << '\n';
            }
        }
    }

    return 0;
}

vector<string> Split(const string& s, const char& delimiter)
{
    std::stringstream ss(s);
    std::string item;
    vector<string> elements;

    while (std::getline(ss, item, delimiter)) {
        elements.push_back(item);
    }

    return elements;
}