#include <iostream>
using namespace std;

float simpleInterest(float p, float r, float t) {
    return (p * r * t) / 100;
}

int main() {
    float p = 1000, r = 5, t = 2;
    cout << "Simple Interest: " << simpleInterest(p, r, t) << endl;
    return 0;
}
