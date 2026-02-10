#include <iostream>
using namespace std;

class CircularQueue {
private:
    int *arr;
    int front, rear, size;

public:
    CircularQueue(int s) {
        size = s;
        arr = new int[size];
        front = rear = -1;
    }

    // Check if queue is full
    bool isFull() {
        return (rear + 1) % size == front;
    }

    // Check if queue is empty
    bool isEmpty() {
        return front == -1;
    }

    // 1. Enqueue: Add element to the back/rear
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot add " << value << endl;
            return;
        }
        if (isEmpty()) front = 0; // First element being added

        rear = (rear + 1) % size; // Wrap around logic
        arr[rear] = value;
        cout << "Enqueued: " << value << endl;
    }

    // 2. Dequeue: Remove element from the front
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow!" << endl;
            return -1;
        }

        int data = arr[front];
        if (front == rear) { 
            // Only one element was present, reset queue
            front = rear = -1;
        } else {
            front = (front + 1) % size; // Wrap around logic
        }
        return data;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};