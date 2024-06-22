#include <iostream>
template <typename T>
T add(T a, T b) {
    return a + b;
}
int main() {
    std::cout << "Int addition: " << add<int>(2, 3) << std::endl;
    std::cout << "Double addition: " << add<double>(2.5, 3.5) << std::endl;
    return 0;
}
