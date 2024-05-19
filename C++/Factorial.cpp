#include <iostream>  // Include the iostream header for input/output operations
using namespace std;  // Use the standard namespace

int main() {
    int num;  // Variable to store the number
    unsigned long long factorial = 1;  // Variable to store the factorial (unsigned long long to handle large values)

    // Prompt the user to enter a non-negative integer
    cout << "Enter a non-negative integer: ";
    cin >> num;  // Read the number from the user

    // Handle the case where the user enters a negative number
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Calculate the factorial iteratively
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        // Output the result
        cout << "Factorial of " << num << " = " << factorial << endl;
    }

    return 0;  // Return 0 to indicate successful completion
}
