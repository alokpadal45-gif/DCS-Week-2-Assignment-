// Write a function to insert a new node with a given value at the beginning of a singly linked list. Print the updated list after insertion.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* createLinkedList(int arr[], int n) {
    if (n == 0) return nullptr;
    Node* head = new Node(arr[0]);
    Node* tail = head;
    for (int i = 1; i < n; i++) {
        tail->next = new Node(arr[i]);
        tail = tail->next;
    }
    return head;
}

void insertAtBeginning(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data;
        if (current->next) cout << " -> ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    int arr[] = {20, 30, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* head = createLinkedList(arr, n);

    cout << "Original list: ";
    printList(head);

    insertAtBeginning(head, 10);
    cout << "After inserting 10 at the beginning: ";
    printList(head);

    insertAtBeginning(head, 5);
    cout << "After inserting 5 at the beginning: ";
    printList(head);

    return 0;
}
