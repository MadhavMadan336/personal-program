#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Sum (int): " << add(5, 3) << endl;
    cout << "Sum (double): " << add(2.5, 4.7);
}
