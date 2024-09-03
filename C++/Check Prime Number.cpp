#include <iostream>
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int num = 29;
    isPrime(num) ? std::cout << num << " is a prime number." : std::cout << num << " is not a prime number.";
    return 0;
}
