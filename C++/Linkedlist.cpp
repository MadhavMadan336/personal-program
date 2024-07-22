#include <iostream>
class Node {
public:
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};
void printList(Node* n) {
    while (n != nullptr) {
        std::cout << n->data << " ";
        n = n->next;
    }
}
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    printList(head);
    return 0;
}
