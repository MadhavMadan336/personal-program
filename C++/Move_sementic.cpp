#include <iostream>
#include <vector>
int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = std::move(vec1);
    for (int n : vec2) {
        std::cout << n << " ";
    }
    std::cout << "\nvec1 size: " << vec1.size();
    return 0;
}
