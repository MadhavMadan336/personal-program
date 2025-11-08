#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");
    file << "Hello from C++ file handling!";
    file.close();
    cout << "File written successfully.";
}
