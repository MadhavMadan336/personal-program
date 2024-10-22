#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt");
    if (file.is_open()) {
        file << "This is a line of text." << endl;
        file.close();
    } else {
        cout << "Unable to open file.";
    }
    return 0;
}
