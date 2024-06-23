#include <iostream>
template <typename T>
class Test {
public:
    T data;
    Test(T data) : data(data) {}
    void show() {
        std::cout << "Data: " << data << std::endl;
    }
};
int main() {
    Test<int> t(5);
    t.show();
    return 0;
}
