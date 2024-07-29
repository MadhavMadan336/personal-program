#include <iostream>
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int d) : data(d), left(nullptr), right(nullptr) {}
};
void inorder(Node* node) {
    if (node == nullptr) return;
    inorder(node->left);
    std::cout << node->data << " ";
    inorder(node->right);
}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    inorder(root);
    return 0;
}
