#include <iostream>
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
void findMiddle(Node* head) {
    Node* slow_ptr = head;
    Node* fast_ptr = head;
    if (head != nullptr) {
        while (fast_ptr != nullptr && fast_ptr->next != nullptr) {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        std::cout << "The middle element is [" << slow_ptr->data << "]\n";
    }
}
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    findMiddle(head);
    return 0;
}
