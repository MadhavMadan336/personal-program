#include <iostream>
using namespace std;

bool isPalindrome(string str, int start, int end) {
    if (start >= end) return true;
    return (str[start] == str[end]) && isPalindrome(str, start + 1, end - 1);
}

int main() {
    string str = "madam";
    cout << (isPalindrome(str, 0, str.size() - 1) ? "Palindrome" : "Not Palindrome") << endl;
    return 0;
}
