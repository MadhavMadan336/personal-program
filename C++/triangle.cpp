#include <iostream>
#include <cmath>
using namespace std;

// Function to check if three sides form a valid triangle
bool isValidTriangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

// Function to determine the type of triangle
string triangleType(double a, double b, double c) {
    if (a == b && b == c) {
        return "Equilateral";
    } else if (a == b || b == c || a == c) {
        return "Isosceles";
    } else {
        return "Scalene";
    }
}

// Function to calculate the area of the triangle using Heron's formula
double triangleArea(double a, double b, double c) {
    double s = (a + b + c) / 2; // Semi-perimeter
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double a, b, c;

    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;

    if (isValidTriangle(a, b, c)) {
        cout << "The sides form a valid triangle." << endl;
        cout << "Type of triangle: " << triangleType(a, b, c) << endl;
        cout << "Area of the triangle: " << triangleArea(a, b, c) << " square units" << endl;
    } else {
        cout << "The sides do not form a valid triangle." << endl;
    }

    return 0;
}
