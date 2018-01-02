/*
       Challenge Name: Real Fake
     Challenge Rating: Easy
Challenge Description: https://www.codeeval.com/open_challenges/227/
                Score: 34.704 / 35
          Solution By: Christopher Robitaille
         Submitted On: Jan 02, 2018
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
        int sum = 0;
        for (int i = 0; i < line.length(); i++) {
            if (line[i] == ' ') {
                line.erase(i, 1);
                i--;
            } else {
                stringstream ss;
                ss << line[i];
                int num;
                ss >> num;
                if (i % 2 == 0) {
                    sum += (num * 2);
                } else {
                    sum += num;
                }
            }
        }
            cout << (sum % 10 == 0 ? "Real" : "Fake") << endl;
    }
    return 0;
}