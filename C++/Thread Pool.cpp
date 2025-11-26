#include <queue>
#include <thread>
#include <functional>
#include <condition_variable>

class ThreadPool {
public:
    ThreadPool(size_t threads);
    void enqueue(std::function<void()> job);

private:
    std::vector<std::thread> workers;
    std::queue<std::function<void()>> tasks;
    std::mutex m;
    std::condition_variable cv;
    bool stop = false;
};
