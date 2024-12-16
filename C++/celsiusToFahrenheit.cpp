#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double celsius = 25;
    cout << celsius << " Celsius = " << celsiusToFahrenheit(celsius) << " Fahrenheit" << endl;
    return 0;
}
