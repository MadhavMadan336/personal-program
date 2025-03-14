#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num = 1234;
    cout << "Sum of digits: " << sumOfDigits(num) << endl;
    return 0;
}
