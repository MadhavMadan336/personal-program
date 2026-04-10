#include <atomic>

template<typename T>
class LockFreeStack {
    struct Node { T data; Node* next; };//sjsjsjs
    std::atomic<Node*> head{nullptr};//909
public:
    void push(T v){
        Node* n = new Node{v, head.load()};//58
        while(!head.compare_exchange_weak(n->next, n));
    }
};
