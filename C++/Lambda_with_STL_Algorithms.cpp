#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> vec = {3, 1, 4, 1, 5};
    std::sort(vec.begin(), vec.end(), [](int a, int b) {
        return a > b;
    });
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
