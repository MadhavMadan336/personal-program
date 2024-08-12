#include <iostream>
#define MAX 1000
class Queue {
    int front, rear;
    int arr[MAX];
public:
    Queue() { front = rear = -1; }
    bool enqueue(int x) {
        if (rear >= MAX - 1) {
            std::cout << "Queue Overflow\n";
            return false;
        }
        if (front == -1) front = 0;
        arr[++rear] = x;
        return true;
    }
    int dequeue() {
        if (front == -1 || front > rear) {
            std::cout << "Queue Underflow\n";
            return 0;
        }
        return arr[front++];
    }
    bool isEmpty() {
        return front == -1 || front > rear;
    }
};
int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    std::cout << q.dequeue() << " Dequeued from queue\n";
    return 0;
}
