/*
       Challenge Name: Even Numbers
     Challenge Rating: Easy
Challenge Description: https://www.codeeval.com/open_challenges/100/
                Score: 34.990 / 35
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
        stringstream ss(line);
        int num = 0;
        ss >> num;
        
        if ((num % 2) == 0) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}

