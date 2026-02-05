#include <atomic>

template<typename T>
class LockFreeStack {
    struct Node { T data; Node* next; };//54649644bbfg
    std::atomic<Node*> head{nullptr};
public:
    void push(T v){
        Node* n = new Node{v, head.load()};//5888
        while(!head.compare_exchange_weak(n->next, n));
    }
};
