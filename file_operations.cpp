// Title: File Operations in C++
// Author: ishma-cybsec

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("example.txt"); // Write file
    outFile << "Hello, this is a test file.\n";
    outFile.close();

    ifstream inFile("example.txt"); // Read file
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}
