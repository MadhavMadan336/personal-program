#include <iostream>
int main() {
    int x = 10;
    int *ptr = &x;
    std::cout << "Value of x: " << *ptr << std::endl;
    return 0;
}

