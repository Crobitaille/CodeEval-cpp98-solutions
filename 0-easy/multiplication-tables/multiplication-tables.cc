/*
       Challenge Name: Multiplication Tables
     Challenge Rating: Easy
Challenge Description: https://www.codeeval.com/open_challenges/23/
                Score: 34.997 / 35
          Solution By: Christopher Robitaille
         Submitted On: Oct 27, 2017
*/

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    for (int i = 1; i < 13; i++) {
        vector<int> nums;
        for (int j = 1; j < 13; j++) {
            nums.push_back(i * j);
        }
        for (int k = 0; k < nums.size(); k++) {
            cout << setw(4) << nums.at(k);
        }
        cout << endl;
    }

    return 0;
}
