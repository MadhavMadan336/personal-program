#include <iostream>
#include <vector>
int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    for (int n : vec) {
        std::cout << n << " ";
    }
    return 0;
}
