#include <iostream>
bool isPalindrome(const std::string &str) {
    int l = 0;
    int h = str.length() - 1;
    while (h > l) {
        if (str[l++] != str[h--]) {
            return false;
        }
    }
    return true;
}
int main() {
    std::string str = "radar";
    if (isPalindrome(str)) std::cout << str << " is a palindrome";
    else std::cout << str << " is not a palindrome";
    return 0;
}
