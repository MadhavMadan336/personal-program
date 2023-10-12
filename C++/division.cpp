#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int num1, num2;
    
    // Get user input
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    // Check if the second number is not zero (division by zero is undefined)
    if (num2 != 0) {
        // Perform division and print the result
        float result = static_cast<float>(num1) / num2; // Convert one of the operands to float for a floating point result
        cout << "Result of division: " << result << endl;
    } else {
        cout << "Error: Division by zero is undefined!" << endl;
    }
    
    return 0;
}
