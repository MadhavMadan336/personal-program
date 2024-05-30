#include <iostream>
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}
int main() {
    std::cout << "Maximum of 5 and 10: " << max(5, 10) << std::endl;
    return 0;
}
