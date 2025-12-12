// Write a function to delete an element from the front of the linear queue. Display the updated queue.
#include <iostream>
using namespace std;

#define SIZE 5

class LinearQueue {
    int arr[SIZE];
    int front, rear;
public:
    LinearQueue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int val) {
        if (rear == SIZE - 1) {
            cout << "Queue is full. Cannot insert " << val << endl;
            return;
        }
        if (front == -1) front = 0;
        rear++;
        arr[rear] = val;
        display();
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty. Cannot remove element." << endl;
            return;
        }
        cout << "Removed element: " << arr[front] << endl;
        front++;
        display();
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i];
            if (i != rear) cout << " <- ";
        }
        cout << endl;
    }
};

int main() {
    LinearQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    return 0;
}