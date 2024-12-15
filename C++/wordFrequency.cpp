#include <iostream>
#include <sstream>
#include <unordered_map>
using namespace std;

void wordFrequency(string str) {
    unordered_map<string, int> freq;
    stringstream ss(str);
    string word;
    while (ss >> word) {
        freq[word]++;
    }

    for (auto &pair : freq) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

int main() {
    string str = "hello world hello";
    wordFrequency(str);
    return 0;
}
