#include <iostream>
#include <set>
int main() {
    std::set<int> s = {3, 1, 4, 1, 5, 9};
    for (int i : s) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
