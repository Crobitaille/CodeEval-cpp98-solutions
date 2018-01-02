//The first argument to the program will be a path to a filename containing a positive integer, one per line.
//Print out the sum of all the integers read from the file.

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