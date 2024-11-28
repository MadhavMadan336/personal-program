#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            if (i == num / i) sum += i;
            else sum += i + (num / i);
        }
    }
    return sum == num && num != 1;
}

int main() {
    int num = 28;
    cout << (isPerfect(num) ? "Perfect Number" : "Not Perfect Number") << endl;
    return 0;
}
