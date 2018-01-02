/*
       Challenge Name: Sum of Integers from File
     Challenge Rating: Easy
Challenge Description: https://www.codeeval.com/open_challenges/24/
                Score: 34.989 / 35
          Solution By: Christopher Robitaille
         Submitted On: Oct 27, 2017
*/
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char *argv[]) {
    stringstream ss;
    int total = 0;
    int num;
    
    ifstream stream(argv[1]);
    string line;
    while (getline(stream, line)) {
        ss << line;
        ss >> num;
        total += num;
        ss.clear();
    }
    cout << total;
    return 0;
}