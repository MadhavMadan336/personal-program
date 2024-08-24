#include <iostream>
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
void inorderTraversal(Node* node) {
    if (node == nullptr)
        return;
    inorderTraversal(node->left);
    std::cout << node->data << " ";
    inorderTraversal(node->right);
}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    std::cout << "Inorder traversal: ";
    inorderTraversal(root);
    return 0;
}
