#include <iostream>
class Base {
public:
    virtual void show() {
        std::cout << "Base class show" << std::endl;
    }
};
class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived class show" << std::endl;
    }
};
int main() {
    Base* b;
    Derived d;
    b = &d;
    b->show();
    return 0;
}
