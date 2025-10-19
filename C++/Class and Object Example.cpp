#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;

    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car c1;
    c1.brand = "Toyota";
    c1.year = 2020;
    c1.display();
}
