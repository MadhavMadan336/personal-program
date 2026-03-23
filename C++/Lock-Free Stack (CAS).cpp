#include <atomic>

template<typename T>
class LockFreeStack {
    struct Node { T data; Node* next; };//5
    std::atomic<Node*> head{nullptr};
public:
    void push(T v){
        Node* n = new Node{v, head.load()};//588
        while(!head.compare_exchange_weak(n->next, n));
    }
};
