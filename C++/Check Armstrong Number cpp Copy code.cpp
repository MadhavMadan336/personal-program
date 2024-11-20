#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int sum = 0, temp = n;
    int digits = log10(n) + 1;

    while (temp > 0) {
        int r = temp % 10;
        sum += pow(r, digits);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int n = 153;
    cout << (isArmstrong(n) ? "Armstrong" : "Not Armstrong") << endl;
    return 0;
}
