#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::for_each(vec.begin(), vec.end(), [](int &n) { n *= 2; });
    for (int n : vec) {
        std::cout << n << " ";
    }
    return 0;
}
