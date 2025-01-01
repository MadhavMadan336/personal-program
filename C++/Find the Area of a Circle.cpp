#include <iostream>
#include <cmath>
using namespace std;

double areaOfCircle(double radius) {
    return M_PI * radius * radius;
}

int main() {
    double radius = 5.0;
    cout << "Area: " << areaOfCircle(radius) << endl;
    return 0;
}
