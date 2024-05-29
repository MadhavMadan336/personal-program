#include <iostream>
class Animal {
public:
    void sound() {
        std::cout << "Animal sound" << std::endl;
    }
};
class Dog : public Animal {
public:
    void sound() {
        std::cout << "Woof" << std::endl;
    }
};
int main() {
    Dog dog;
    dog.sound();
    return 0;
}
