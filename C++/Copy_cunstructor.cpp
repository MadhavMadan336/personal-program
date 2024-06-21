#include <iostream>
class Test {
public:
    int x;
    Test(int x) : x(x) {}
    Test(const Test &t) {
        x = t.x;
    }
};
int main() {
    Test t1(5);
    Test t2 = t1;
    std::cout << "t2.x = " << t2.x << std::endl;
    return 0;
}
