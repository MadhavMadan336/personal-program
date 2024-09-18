#include <iostream>
int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    int num = 12345;
    std::cout << "Sum of digits of " << num << " is " << sumOfDigits(num);
    return 0;
}
