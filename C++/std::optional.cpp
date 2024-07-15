#include <iostream>
#include <optional>
int main() {
    std::optional<int> opt = 5;
    if (opt) {
        std::cout << "Optional has value: " << *opt << std::endl;
    }
    return 0;
}
