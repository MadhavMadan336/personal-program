#include <iostream>
bool isPalindrome(std::string str) {
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
    std::string str = "madam";
    isPalindrome(str) ? std::cout << "Palindrome" : std::cout << "Not Palindrome";
    return 0;
}
