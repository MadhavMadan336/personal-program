#include <iostream>
using namespace std;

// Function to swap two numbers using a temporary variable
void swapNumbers(int &a, int &b) {
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    
    // Swapping using a temporary variable
    int temp = a;
    a = b;
    b = temp;
    
    cout << "After swap: a = " << a << ", b = " << b << endl;
}

int main() {
    int x = 10;
    int y = 20;
    
    swapNumbers(x, y);
    
    return 0;
}
