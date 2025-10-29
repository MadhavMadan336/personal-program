#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int count = 0;
    for (char c : s)
        if (tolower(c)=='a'||tolower(c)=='e'||tolower(c)=='i'||tolower(c)=='o'||tolower(c)=='u')
            count++;
    cout << "Vowels = " << count;
}
