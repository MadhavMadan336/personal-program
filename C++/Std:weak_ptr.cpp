#include <iostream>
#include <memory>
int main() {
    std::shared_ptr<int> sp = std::make_shared<int>(10);
    std::weak_ptr<int> wp = sp;
    if (std::shared_ptr<int> sp2 = wp.lock()) {
        std::cout << "Value: " << *sp2 << std::endl;
    } else {
        std::cout << "Pointer is expired" << std::endl;
    }
    return 0;
}
