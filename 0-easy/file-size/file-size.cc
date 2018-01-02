/*
       Challenge Name: File Size
     Challenge Rating: Easy
Challenge Description: https://www.codeeval.com/open_challenges/26/
                Score: 34.991 / 35
          Solution By: Christopher Robitaille
         Submitted On: Oct 27, 2017
*/
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    
    ifstream file(argv[1], ifstream::ate | ifstream::binary);
    cout << file.tellg(); 
    return 0;
}