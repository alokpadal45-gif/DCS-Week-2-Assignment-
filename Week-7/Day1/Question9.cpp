// Given a value X and a value Y, insert a new node with value Y immediately after the first node with value X in the list. Print the updated list.
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

void insertAfterValue(Node* head, int X, int Y) {
    Node* current = head;
    while (current && current->data != X) {
        current = current->next;
    }
    if (!current) return; 
    Node* newNode = new Node(Y);
    newNode->next = current->next;
    current->next = newNode;
}

void printList(Node* head) {
    Node* current = head;
    while (current) {
        cout << current->data;
        if (current->next) cout << " -> ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* head = createLinkedList(arr, n);

    cout << "Original list: ";
    printList(head);

    insertAfterValue(head, 20, 25);
    cout << "After inserting 25 after 20: ";
    printList(head);

    insertAfterValue(head, 40, 45);
    cout << "After inserting 45 after 40: ";
    printList(head);

    return 0;
}
