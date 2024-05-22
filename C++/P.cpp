#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// Function to count the number of digits in a number
int countDigits(int number) {
    return (number == 0) ? 1 : static_cast<int>(log10(number) + 1);
}

// Function to compute power efficiently
int power(int base, int exp) {
    int result = 1;
    while (exp) {
        if (exp % 2 == 1) {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}

// Function to check if a number is an Armstrong number
bool isArmstrong(int number) {
    if (number < 0) return false; // Handle negative input

    int n = countDigits(number);
    int originalNumber = number;
    int sum = 0;

    while (originalNumber != 0) {
        int digit = originalNumber % 10;
        sum += power(digit, n);
        originalNumber /= 10;
    }

    return sum == number;
}

int main() {
    int number;

    cout << "Enter a positive integer: ";
    while (!(cin >> number) || number < 0) {
        cout << "Invalid input. Please enter a positive integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    if (isArmstrong(number))
        cout << number << " is an Armstrong number." << endl;
    else
        cout << number << " is not an Armstrong number." << endl;

    return 0;
}
