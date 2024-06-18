#include <iostream>
class Test {
private:
    int x;
public:
    Test(int x) : x(x) {}
    friend void show(Test t);
};
void show(Test t) {
    std::cout << "Value of x: " << t.x << std::endl;
}
int main() {
    Test t(5);
    show(t);
    return 0;
}
