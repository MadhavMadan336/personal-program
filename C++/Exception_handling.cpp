#include <iostream>
int main() {
    try {
        int age = 15;
        if (age < 18) {
            throw std::runtime_error("Age is less than 18");
        }
        std::cout << "Access granted";
    } catch (std::runtime_error &e) {
        std::cout << "Caught exception: " << e.what();
    }
    return 0;
}
