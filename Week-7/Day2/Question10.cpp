//Write a function to return and print the front element of the circular queue.
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

    void peekFront() {
        if (isEmpty()) {
            cout << "Queue is empty. No front element." << endl;
            return;
        }
        cout << "Front element: " << arr[front] << endl;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % SIZE == front;
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
};

int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.peekFront();

    return 0;
}

