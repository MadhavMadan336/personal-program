#include <iostream>
int main() {
    auto add = [](int a, int b) { return a + b; };
    std::cout << "Sum: " << add(3, 4) << std::endl;
    return 0;
}
