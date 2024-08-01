#include <iostream>
class Base {
public:
    void display() {
        std::cout << "Base class display" << std::endl;
    }
};
class Derived : public Base {
public:
    void display() {
        std::cout << "Derived class display" << std::endl;
    }
};
int main() {
    Derived obj;
    obj.display();
    obj.Base::display();
    return 0;
}
