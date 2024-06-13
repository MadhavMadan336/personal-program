#include <iostream>
int main() {
    int* ptr = new int(5);
    std::cout << "Value: " << *ptr << std::endl;
    delete ptr;
    return 0;
}
