#include <iostream>
using namespace std;

bool isPalindrome(string str) {
    int len = str.size();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) return false;
    }
    return true;
}

int main() {
    string str = "madam";
    if (isPalindrome(str)) cout << "Palindrome";
    else cout << "Not a palindrome";
    return 0;
}
