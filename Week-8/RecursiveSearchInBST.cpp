#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

Node* searchRecursive(Node* root, int key) {
    if (!root || root->data == key)
        return root;
    if (key < root->data)
        return searchRecursive(root->left, key);
    else
        return searchRecursive(root->right, key);
}

int main() {
    Node* root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);
    int key = 30;
    Node* found = searchRecursive(root, key);
    if (found)
        cout << "Key found: " << found->data;
    else
        cout << "Key not found";
    return 0;
}