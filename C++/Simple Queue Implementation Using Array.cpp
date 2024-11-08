#include <iostream>
using namespace std;

class Queue {
    int front, rear, size;
    int* queue;
public:
    Queue(int s) {
        front = rear = -1;
        size = s;
        queue = new int[s];
    }

    void enqueue(int val) {
        if (rear == size - 1) {
            cout << "Queue Overflow\n";
            return;
        }
        queue[++rear] = val;
        if (front == -1) front = 0;
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue Underflow\n";
            return;
        }
        front++;
        if (front > rear) front = rear = -1;
    }

    void display() {
        if (front == -1) {
            cout << "Queue is Empty\n";
            return;
        }
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}
