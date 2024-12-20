#include <iostream>
using namespace std;

bool isOdd(int num) {
    return num % 2 != 0;
}

int main() {
    int num = 5;
    cout << (isOdd(num) ? "Odd" : "Even") << endl;
    return 0;
}
