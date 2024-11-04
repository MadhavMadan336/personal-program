#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int a = 56, b = 98;
    cout << "GCD: " << gcd(a, b) << endl;
    return 0;
}
