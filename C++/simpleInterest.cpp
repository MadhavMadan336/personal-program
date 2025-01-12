#include <iostream>
using namespace std;

double simpleInterest(double principal, double rate, double time) {
    return (principal * rate * time) / 100;
}

int main() {
    double principal = 1000, rate = 5, time = 2;
    cout << "Simple Interest: " << simpleInterest(principal, rate, time) << endl;
    return 0;
}
