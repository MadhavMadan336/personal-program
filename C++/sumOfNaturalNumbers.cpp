#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int n = 10;
    cout << "Sum: " << sumOfNaturalNumbers(n) << endl;
    return 0;
}
