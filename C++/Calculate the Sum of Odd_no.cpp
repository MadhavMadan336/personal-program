#include <iostream>
using namespace std;

int sumOddNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i += 2) sum += i;
    return sum;
}

int main() {
    int n = 10;
    cout << "Sum: " << sumOddNumbers(n) << endl;
    return 0;
}
