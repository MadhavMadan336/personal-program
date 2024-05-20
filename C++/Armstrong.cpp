#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int number) {
    int originalNumber, remainder, n = 0;
    double result = 0.0;

    originalNumber = number;

    // Find the number of digits in the number
    for (originalNumber = number; originalNumber != 0; ++n) {
        originalNumber /= 10;
    }

    originalNumber = number;

    // Calculate the sum of the nth power of each digit
    for (originalNumber = number; originalNumber != 0; originalNumber /= 10) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
    }

    // Check if the result is equal to the original number
    return static_cast<int>(result) == number;
}

int main() {
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (isArmstrong(number))
        cout << number << " is an Armstrong number." << endl;
    else
        cout << number << " is not an Armstrong number." << endl;

    return 0;
}
