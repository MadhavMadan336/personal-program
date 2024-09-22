#include <iostream>
using namespace std;

bool isPalindrome(string str) {
    int len = str.length();
    for (int i = 0; i < len / 2; ++i) {
        if (str[i] != str[len - i - 1]) return false;
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << (isPalindrome(str) ? "Palindrome" : "Not Palindrome") << endl;
    return 0;
}
