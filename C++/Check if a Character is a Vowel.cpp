#include <iostream>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << (isVowel(c) ? "Vowel" : "Not a Vowel") << endl;
    return 0;
}
