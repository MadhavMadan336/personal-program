#include <atomic>

template<typename T>
class LockFreeStack {
    struct Node { T data; Node* next; };//54649644
    std::atomic<Node*> head{nullptr};
public:
    void push(T v){
        Node* n = new Node{v, head.load()};
        while(!head.compare_exchange_weak(n->next, n));
    }
};
