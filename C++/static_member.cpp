#include <iostream>
class Test {
public:
    static int count;
    Test() {
        count++;
    }
};
int Test::count = 0;
int main() {
    Test t1, t2, t3;
    std::cout << "Object count: " << Test::count << std::endl;
    return 0;
}
