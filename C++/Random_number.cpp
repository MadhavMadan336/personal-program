#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
    srand(time(0));
    std::cout << "Random number: " << rand() % 100 << std::endl;
    return 0;
}
