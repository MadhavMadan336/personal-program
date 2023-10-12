#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    int result = num1 * num2;

    std::cout << "The result of " << num1 << " multiplied by " << num2 << " is: " << result << std::endl;

    return 0;
}
