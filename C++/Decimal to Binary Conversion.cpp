#include <iostream>
#include <string>
std::string decimalToBinary(int n) {
    std::string binary;
    while (n > 0) {
        binary = std::to_string(n % 2) + binary;
        n /= 2;
    }
    return binary;
}
int main() {
    int num = 10;
    std::cout << "Binary representation of " << num << " is: " << decimalToBinary(num);
    return 0;
}
