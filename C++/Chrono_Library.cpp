#include <iostream>
#include <chrono>
int main() {
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; ++i); // some operation
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Duration: " << duration.count() << " seconds" << std::endl;
    return 0;
}
