#include <iostream>
using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0;
    cout << "Enter a string: ";
    cin >> str;

    for (char c : str) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            vowels++;
        } else if (isalpha(c)) {
            consonants++;
        }
    }

    cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;
    return 0;
}
