#include <iostream>
class IShape {
public:
    virtual void draw() = 0;
};
class Rectangle : public IShape {
public:
    void draw() override {
        std::cout << "Drawing Rectangle" << std::endl;
    }
};
int main() {
    Rectangle r;
    r.draw();
    return 0;
}
