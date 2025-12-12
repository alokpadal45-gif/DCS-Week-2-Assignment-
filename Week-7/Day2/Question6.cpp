// Write functions to check if the queue is full or empty.
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
        if (isFull()) {
            cout << "Queue is full. Cannot insert " << val << endl;
            return;
        }
        if (isEmpty()) front = 0;
        rear++;
        arr[rear] = val;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot remove element." << endl;
            return;
        }
        cout << "Removed element: " << arr[front] << endl;
        front++;
    }

    void display() {
        if (isEmpty()) {
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

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    bool isFull() {
        return rear == SIZE - 1;
    }
};

int main() {
    LinearQueue q;

    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    cout << "Is queue full? " << (q.isFull() ? "Yes" : "No") << endl;
    q.display();

    q.dequeue();
    q.dequeue();
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}

