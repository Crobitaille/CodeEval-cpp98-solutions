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

