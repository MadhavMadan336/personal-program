#include <iostream>
void print(const int* ptr) {
    std::cout << "Value: " << *ptr << std::endl;
}
int main() {
    int x = 10;
    print(&x);
    return 0;
}
