#include <iostream>
class Shape {
public:
    virtual void draw() = 0;
};
class Circle : public Shape {
public:
    void draw() {
        std::cout << "Drawing Circle" << std::endl;
    }
};
int main() {
    Circle c;
    c.draw();
    return 0;
}
