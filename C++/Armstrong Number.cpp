#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, sum = 0, digits = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    int m = n;
    while (m != 0) { digits++; m /= 10; }
    while (temp != 0) {
        int r = temp % 10;
        sum += pow(r, digits);
        temp /= 10;
    }
    if (sum == n) cout << "Armstrong number";
    else cout << "Not an Armstrong number";
}
