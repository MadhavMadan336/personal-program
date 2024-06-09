#include <iostream>
class Complex {
public:
    int real, imag;
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex operator + (const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }
};
int main() {
    Complex c1(1, 2), c2(3, 4);
    Complex c3 = c1 + c2;
    std::cout << "Result: " << c3.real << " + " << c3.imag << "i" << std::endl;
    return 0;
}
