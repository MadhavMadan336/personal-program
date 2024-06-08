#include <iostream>
int add(int a, int b) {
    return a + b;
}
double add(double a, double b) {
    return a + b;
}
int main() {
    std::cout << "Int addition: " << add(2, 3) << std::endl;
    std::cout << "Double addition: " << add(2.5, 3.5) << std::endl;
    return 0;
}
