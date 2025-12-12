// Write a function to print the elements of the singly linked list in reverse order using recursion (do not reverse the actual list).
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

void printReverse(Node* head) {
    if (!head) return;
    printReverse(head->next);
    cout << head->data;
    if (head->next) cout << " -> ";
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* head = createLinkedList(arr, n);

    cout << "Original list in reverse order: ";
    printReverse(head);
    cout << endl;

    return 0;
}
