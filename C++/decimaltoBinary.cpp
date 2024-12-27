#include <iostream>
using namespace std;

void decimalToBinary(int num) {
    if (num > 1) decimalToBinary(num / 2);
    cout << num % 2;
}

int main() {
    int num = 10;
    cout << "Binary: ";
    decimalToBinary(num);
    cout << endl;
    return 0;
}
