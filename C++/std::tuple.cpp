#include <iostream>
#include <tuple>
int main() {
    std::tuple<int, std::string, double> t = {1, "Tuple", 3.14};
    std::cout << "Tuple: " << std::get<0>(t) << ", " << std::get<1>(t) << ", " << std::get<2>(t) << std::endl;
    return 0;
}
