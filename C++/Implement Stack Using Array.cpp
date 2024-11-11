#include <iostream>
using namespace std;

class Stack {
    int top;
    int* stack;
    int size;
public:
    Stack(int s) {
        top = -1;
        size = s;
        stack = new int[s];
    }

    void push(int val) {
        if (top == size - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        stack[++top] = val;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return;
        }
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    return 0;
}
