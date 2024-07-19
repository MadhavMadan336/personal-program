#include <iostream>
#include <memory>
int main() {
    std::shared_ptr<int> ptr1 = std::make_shared<int>(5);
    std::shared_ptr<int> ptr2 = ptr1;
    std::cout << "Value: " << *ptr1 << std::endl;
    std::cout << "Shared count: " << ptr1.use_count() << std::endl;
    return 0;
}
