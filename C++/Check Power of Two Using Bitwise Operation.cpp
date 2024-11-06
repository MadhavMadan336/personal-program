#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return (n > 0) && (n & (n - 1)) == 0;
}

int main() {
    int n = 16;
    cout << (isPowerOfTwo(n) ? "Yes" : "No") << endl;
    return 0;
}
