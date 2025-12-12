//Write functions to check if the circular queue is full or empty.
#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue {
    int arr[SIZE];
    int front, rear;
public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int val) {
        if (isFull()) {
            cout << "Queue is full. Cannot insert " << val << endl;
            return;
        }
        if (isEmpty()) front = 0;
        rear = (rear + 1) % SIZE;
        arr[rear] = val;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot remove element." << endl;
            return;
        }
        cout << "Removed element: " << arr[front] << endl;
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << arr[i];
            if (i == rear) break;
            cout << " <- ";
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % SIZE == front;
    }
};

int main() {
    CircularQueue q;

    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    cout << "Is queue full? " << (q.isFull() ? "Yes" : "No") << endl;

    q.display();

    return 0;
}

