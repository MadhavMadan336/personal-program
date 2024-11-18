#include <iostream>
using namespace std;

int countVowels(string str) {
    int count = 0;
    for (char ch : str) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    string str = "Hello World";
    cout << "Vowels: " << countVowels(str) << endl;
    return 0;
}
