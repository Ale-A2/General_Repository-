#include <iostream>

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to print tree in-order (for testing)
void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    std::cout << root->data << " ";
    inorder(root->right);
}

bool symmetric(Node* root){

}

bool checker(Node* left, Node* right){
    if(left == right)
}

int main() {
    // Create nodes for a symmetric tree
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->left = new Node(7);
    root->right->right = new Node(3);

    // Print tree in-order
    std::cout << "In-order traversal: ";
    inorder(root);
    std::cout << std::endl;

    std::cout << symmetric(root);

    // Clean up memory (not strictly necessary for this short program)
    // ...add delete code if needed...

    return 0;
}