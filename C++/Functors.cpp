#include <iostream>
class Add {
public:
    int operator()(int a, int b) {
        return a + b;
    }
};
int main() {
    Add add;
    std::cout << "Sum: " << add(3, 4) << std::endl;
    return 0;
}
