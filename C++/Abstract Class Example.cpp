#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle..." << endl;
    }
};

int main() {
    Circle circle;
    circle.draw();
    return 0;
}
