// Write a function to insert an element at the rear end of the linear queue. Display the updated queue.
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
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    return 0;
}