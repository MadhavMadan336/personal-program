#include <iostream>
using namespace std;

class Number {
public:
    int value;

    // Constructor
    Number(int v) {
        value = v;
    }

    // Copy constructor
    Number(const Number &num) {
        value = num.value;
    }
};

int main() {
    Number num1(5);
    Number num2 = num1;  // Invokes copy constructor

    cout << "Num1: " << num1.value << ", Num2: " << num2.value << endl;
    return 0;
}
