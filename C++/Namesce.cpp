#include <iostream>
namespace first {
    int x = 5;
}
namespace second {
    int x = 10;
}
namespace f = first;
int main() {
    std::cout << "first::x: " << f::x << std::endl;
    std::cout << "second::x: " << second::x << std::endl;
    return 0;
}
