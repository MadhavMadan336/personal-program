#include <iostream>
#include <thread>
void printHello() {
    std::cout << "Hello from thread" << std::endl;
}
int main() {
    std::thread t(printHello);
    t.join();
    return 0;
}
