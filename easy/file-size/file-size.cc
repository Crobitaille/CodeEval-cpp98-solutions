// Print the size of a file in bytes.
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    
    ifstream file(argv[1], ifstream::ate | ifstream::binary);
    cout << file.tellg(); 
    return 0;
}