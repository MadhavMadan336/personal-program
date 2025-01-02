#include <iostream>
#include <sstream>
using namespace std;

int wordCount(string str) {
    stringstream ss(str);
    string word;
    int count = 0;
    while (ss >> word) count++;
    return count;
}

int main() {
    string str = "Hello world this is C++";
    cout << "Word Count: " << wordCount(str) << endl;
    return 0;
}
