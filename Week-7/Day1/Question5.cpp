// Given a value X, write a function to delete the first occurrence of X from the singly linked list. Print the updated list after deletion.
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

void deleteByValue(Node*& head, int X) {
    if (!head) return;
    if (head->data == X) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
        return;
    }
    Node* prev = head;
    Node* cur = head->next;
    while (cur && cur->data != X) {
        prev = cur;
        cur = cur->next;
    }
    if (!cur) return;
    prev->next = cur->next;
    delete cur;
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

    deleteByValue(head, 30);
    cout << "After deleting 30: ";
    printList(head);

    deleteByValue(head, 10);
    cout << "After deleting 10: ";
    printList(head);

    deleteByValue(head, 100);
    cout << "After trying to delete 100: ";
    printList(head);

    return 0;
}
