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