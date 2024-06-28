#include <iostream>
#include <utility>
class Test {
public:
    Test() {
        std::cout << "Constructor" << std::endl;
    }
    Test(const Test&) {
        std::cout << "Copy Constructor" << std::endl;
    }
    Test(Test&&) noexcept {
        std::cout << "Move Constructor" << std::endl;
    }
};
int main() {
    Test t1;
    Test t2 = std::move(t1);
    return 0;
}
