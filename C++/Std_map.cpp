#include <iostream>
#include <map>
int main() {
    std::map<int, std::string> map;
    map[1] = "One";
    map[2] = "Two";
    map[3] = "Three";
    for (const auto& pair : map) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    return 0;
}
