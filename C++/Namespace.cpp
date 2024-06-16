#include <iostream>
namespace first {
    int value = 1;
}
namespace second {
    int value = 2;
}
int main() {
    std::cout << "First namespace value: " << first::value << std::endl;
    std::cout << "Second namespace value: " << second::value << std::endl;
    return 0;
}
