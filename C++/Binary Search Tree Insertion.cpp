#include <iostream>
struct Node {
    int data;
    Node* left, * right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
Node* insert(Node* node, int data) {
    if (node == nullptr)
        return new Node(data);
    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);
    return node;
}
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        std::cout << root->data << " ";
        inorder(root->right);
    }
}
int main() {
    Node* root = nullptr;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    inorder(root);
    return 0;
}
