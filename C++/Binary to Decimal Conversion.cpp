#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0, base = 1;
    while (binary) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}

int main() {
    int binary = 1010;
    cout << "Decimal: " << binaryToDecimal(binary) << endl;
    return 0;
}
