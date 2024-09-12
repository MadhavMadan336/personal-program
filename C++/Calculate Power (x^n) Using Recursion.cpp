#include <iostream>
int power(int x, int n) {
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return power(x, n / 2) * power(x, n / 2);
    return x * power(x, n / 2) * power(x, n / 2);
}
int main() {
    int x = 2, n = 3;
    std::cout << x << "^" << n << " = " << power(x, n);
    return 0;
}
