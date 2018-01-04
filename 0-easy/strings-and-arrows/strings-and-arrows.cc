/*
       Challenge Name: Strings and Arrows
     Challenge Rating: Easy
Challenge Description: https://www.codeeval.com/open_challenges/29/
                Score:  / 35
          Solution By: Christopher Robitaille
         Submitted On: Jan 04, 2018
*/
#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
    std::ifstream stream(argv[1]);
    std::string line;
    while (getline(stream, line)) {
        int matches = 0;
        for (int i = 0; i < line.size() - 4; i++) {
            std::string sub = line.substr(i,5);
            if (sub == "<--<<" || sub == ">>-->")
                matches++;
        }
        std::cout << matches << std::endl;
    }
    stream.close();
    return 0;
}