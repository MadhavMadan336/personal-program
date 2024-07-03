#include <iostream>
int add(int a, int b) {
    return a + b;
}
int main() {
    int (*funcPtr)(int, int) = &add;
    std::cout << "Sum: " << funcPtr(2, 3) << std::endl;
    return 0;
}
