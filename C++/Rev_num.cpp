#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int reverse = 0;
    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    return reverse;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Reversed number: " << reverseNumber(n) << endl;
    return 0;
}