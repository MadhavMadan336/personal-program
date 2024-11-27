#include <iostream>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int num = 12345;
    cout << "Number of digits: " << countDigits(num) << endl;
    return 0;
}
