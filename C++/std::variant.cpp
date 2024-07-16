#include <iostream>
#include <variant>
int main() {
    std::variant<int, float, std::string> var;
    var = 10;
    std::cout << "Variant as int: " << std::get<int>(var) << std::endl;
    var = "Hello";
    std::cout << "Variant as string: " << std::get<std::string>(var) << std::endl;
    return 0;
}
