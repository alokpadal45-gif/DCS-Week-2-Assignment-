#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) { data = value; left = right = nullptr; }
};

Node* searchIterative(Node* root, int key) {
    while (root) {
        if (root->data == key) return root;
        else if (key < root->data) root = root->left;
        else root = root->right;
    }
    return nullptr;
}

int main() {
    Node* root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);
    int key = 70;
    Node* found = searchIterative(root, key);
    if (found) cout << "Key found: " << found->data;
    else cout << "Key not found";
    return 0;
}
