#include <iostream>
using namespace std;

class Queue {
    int front, rear, size;
    int* arr;
public:
    Queue(int s) : front(-1), rear(-1), size(s) {
        arr = new int[s];
    }

    bool isFull() { return rear == size - 1; }
    bool isEmpty() { return front == -1; }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow\n";
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = value;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return;
        }
        front++;
        if (front > rear) front = rear = -1;
    }

    void display() {
        if (isEmpty()) cout << "Queue is empty\n";
        else for (int i = front; i <= rear; i++) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}
