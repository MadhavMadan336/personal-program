#include <iostream>
#include <any>
int main() {
    std::any a = 10;
    std::cout << "Any as int: " << std::any_cast<int>(a) << std::endl;
    a = "Hello";
    std::cout << "Any as string: " << std::any_cast<const char*>(a) << std::endl;
    return 0;
}
