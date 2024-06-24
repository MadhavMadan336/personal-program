#include <iostream>
#include <thread>
void threadFunction() {
    std::cout << "Thread function" << std::endl;
}
int main() {
    std::thread t(threadFunction);
    t.join();
    return 0;
}
