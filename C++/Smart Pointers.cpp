#include <iostream>
#include <memory>
class Test {
public:
    Test() {
        std::cout << "Constructor" << std::endl;
    }
    ~Test() {
        std::cout << "Destructor" << std::endl;
    }
};
int main() {
    std::shared_ptr<Test> ptr1 = std::make_shared<Test>();
    std::shared_ptr<Test> ptr2 = ptr1;
    return 0;
}
