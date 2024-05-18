#include <iostream>  // Include the iostream header for input/output operations
using namespace std;  // Use the standard namespace

int main() {
    int num;  // Variable to store the number
    bool isPrime = true;  // Flag to indicate if the number is prime

    // Prompt the user to enter a number
    cout << "Enter a positive integer: ";
    cin >> num;  // Read the number from the user

    // Handle numbers less than or equal to 1
    if (num <= 1) {
        isPrime = false;
    } else {
        // Check for factors other than 1 and the number itself
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = false;  // Set flag to false if a factor is found
                break;  // Exit the loop early since we found a factor
            }
        }
    }

    // Output the result
    if (isPrime) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;  // Return 0 to indicate successful completion
}
