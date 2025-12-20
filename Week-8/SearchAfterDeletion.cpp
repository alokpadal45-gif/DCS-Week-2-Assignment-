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

Node* findMin(Node* root) {
    while (root && root->left) root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (!root) return root;
    if (key < root->data) root->left = deleteNode(root->left, key);
    else if (key > root->data) root->right = deleteNode(root->right, key);
    else {
        if (!root->left) { Node* temp = root->right; delete root; return temp; }
        else if (!root->right) { Node* temp = root->left; delete root; return temp; }
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

Node* searchRecursive(Node* root, int key) {
    if (!root || root->data == key) return root;
    if (key < root->data) return searchRecursive(root->left, key);
    else return searchRecursive(root->right, key);
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

    int deleteKey, searchKey;
    cout << "Enter key to delete: ";
    cin >> deleteKey;
    root = deleteNode(root, deleteKey);

    cout << "Inorder after deletion: ";
    inorder(root);
    cout << endl;

    cout << "Enter key to search: ";
    cin >> searchKey;
    Node* found = searchRecursive(root, searchKey);
    if (found) cout << "Key found in BST";
    else cout << "Key not found in BST";

    return 0;
}
