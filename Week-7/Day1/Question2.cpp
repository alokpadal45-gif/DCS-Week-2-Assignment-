// Given a singly linked list and a value X, write a function to search for X in the list. If found, print its position (1-based index), otherwise print that the element is not present.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

int searchElement(Node* head, int X) {
    Node* current = head;
    int position = 1;
    while (current != nullptr) {
        if (current->data == X) return position;
        current = current->next;
        position++;
    }
    return -1;
}

void printSearch(Node* head, int X) {
    int pos = searchElement(head, X);
    if (pos != -1)
        cout << X << " found at position " << pos << endl;
    else
        cout << X << " is not present in the list" << endl;
}

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

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* head = createLinkedList(arr, n);

    int X = 30;
    printSearch(head, X);

    X = 100;
    printSearch(head, X);

    return 0;
}
