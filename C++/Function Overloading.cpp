#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math math;
    cout << "Sum of integers: " << math.add(5, 10) << endl;
    cout << "Sum of doubles: " << math.add(5.5, 10.3) << endl;

    return 0;
}
