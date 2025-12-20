#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) { data = value; left = right = nullptr; }
};

Node* insertRecursive(Node* root, int key) {
    if (!root) return new Node(key);
    if (key < root->data) root->left = insertRecursive(root->left, key);
    else if (key > root->data) root->right = insertRecursive(root->right, key);
    return root;
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;
    int n, value;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter node values: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insertRecursive(root, value);
    }

    cout << "Inorder traversal: ";
    inorder(root);
    return 0;
}
