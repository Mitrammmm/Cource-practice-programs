#include <iostream>
using namespace std;

#define MAX 1000 // Defining the maximum size of the stack

class Stack {
    int top;
    int arr[MAX]; // Fixed-size array

public:
    Stack() { top = -1; } // Initialize top to -1 (empty)

    // 1. Push: Add element to the top
    bool push(int x) {
        if (top >= (MAX - 1)) {
            cout << "Stack Overflow! Cannot push " << x << endl;
            return false;
        }
        arr[++top] = x;
        return true;
    }

    // 2. Pop: Remove the top element
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow!" << endl;
            return 0;
        }
        return arr[top--];
    }

    // 3. Peek: See the top element without removing it
    int peek() {
        if (top < 0) {
            cout << "Stack is Empty" << endl;
            return 0;
        }
        return arr[top];
    }

    bool isEmpty() {
        return (top < 0);
    }
    
    void display() {
        for(int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};