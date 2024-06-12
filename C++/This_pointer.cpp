#include <iostream>
class Test {
public:
    int x;
    Test(int x) {
        this->x = x;
    }
    void print() {
        std::cout << "x = " << x << std::endl;
    }
};
int main() {
    Test obj(5);
    obj.print();
    return 0;
}
