#include <iostream>
#include <thread>
#include <mutex>
std::mutex mtx;
void printThreadId(int id) {
    mtx.lock();
    std::cout << "Thread ID: " << id << std::endl;
    mtx.unlock();
}
int main() {
    std::thread t1(printThreadId, 1);
    std::thread t2(printThreadId, 2);
    t1.join();
    t2.join();
    return 0;
}
