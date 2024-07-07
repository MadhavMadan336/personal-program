#include <iostream>
class Complex {
public:
    int real, imag;
    Complex(int r, int i) : real(r), imag(i) {}
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
};
std::ostream& operator<<(std::ostream& os, const Complex& c) {
    os << c.real << " + " << c.imag << "i";
    return os;
}
int main() {
    Complex c(3, 4);
    std::cout << c << std::endl;
    return 0;
}
