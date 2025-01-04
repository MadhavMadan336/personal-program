#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int sum = 0, temp = num;
    int n = to_string(num).length();
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int num = 153;
    cout << (isArmstrong(num) ? "Armstrong Number" : "Not Armstrong") << endl;
    return 0;
}
