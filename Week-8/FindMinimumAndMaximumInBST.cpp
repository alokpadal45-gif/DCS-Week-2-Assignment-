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

Node* findMinRecursive(Node* root) {
    if (!root || !root->left) return root;
    return findMinRecursive(root->left);
}

Node* findMaxRecursive(Node* root) {
    if (!root || !root->right) return root;
    return findMaxRecursive(root->right);
}

Node* findMinIterative(Node* root) {
    while (root && root->left) root = root->left;
    return root;
}

Node* findMaxIterative(Node* root) {
    while (root && root->right) root = root->right;
    return root;
}

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
    int values[] = {50, 30, 70, 20, 40, 60, 80};
    for (int v : values)
        root = insertRecursive(root, v);

    cout << "Inorder traversal of BST: ";
    inorder(root);
    cout << endl;

    Node* minRec = findMinRecursive(root);
    Node* maxRec = findMaxRecursive(root);
    if (minRec) cout << "Minimum (Recursive): " << minRec->data << endl;
    if (maxRec) cout << "Maximum (Recursive): " << maxRec->data << endl;

    Node* minItr = findMinIterative(root);
    Node* maxItr = findMaxIterative(root);
    if (minItr) cout << "Minimum (Iterative): " << minItr->data << endl;
    if (maxItr) cout << "Maximum (Iterative): " << maxItr->data << endl;

    return 0;
}
