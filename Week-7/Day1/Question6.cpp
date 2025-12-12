// Write a function to delete the node at a given position (1-based index) from the singly linked list. Print the updated list after deletion.
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

void deleteAtPosition(Node*& head, int pos) {
    if (!head || pos <= 0) return;
    if (pos == 1) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
        return;
    }
    Node* cur = head;
    for (int i = 1; i < pos - 1 && cur->next; i++) {
        cur = cur->next;
    }
    if (!cur->next) return;
    Node* toDelete = cur->next;
    cur->next = toDelete->next;
    delete toDelete;
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
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* head = createLinkedList(arr, n);

    cout << "Original list: ";
    printList(head);

    deleteAtPosition(head, 3);
    cout << "After deleting position 3: ";
    printList(head);

    deleteAtPosition(head, 1);
    cout << "After deleting position 1: ";
    printList(head);

    deleteAtPosition(head, 10);
    cout << "After trying to delete position 10: ";
    printList(head);

    return 0;
}
