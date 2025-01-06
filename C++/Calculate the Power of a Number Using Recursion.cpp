#include <iostream>
using namespace std;

int power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main() {
    int base = 2, exp = 3;
    cout << "Result: " << power(base, exp) << endl;
    return 0;
}
