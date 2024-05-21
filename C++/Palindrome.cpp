#include <iostream>

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = (reversedNum * 10) + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isPalindrome(num)) {
        std::cout << num << " is a palindrome number." << std::endl;
    } else {
        std::cout << num << " is not a palindrome number." << std::endl;
    }

    return 0;
}
