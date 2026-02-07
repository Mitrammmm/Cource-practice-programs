#include <iostream>

using namespace std;

// The building block of our Stack
struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;

public:
    Stack() { top = nullptr; }

    // 1. Push: Add element to the top - O(1)
    void push(int val) {
        Node* newNode = new (nothrow) Node(); // 'nothrow' handles memory exhaustion
        if (!newNode) {
            cout << "Stack Overflow: Out of memory!" << endl;
            return;
        }
        newNode->data = val;
        newNode->next = top;
        top = newNode;
    }

    // 2. Pop: Remove the top element - O(1)
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow: Nothing to pop!" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    // 3. Peek: See the top element - O(1)
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1; 
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void display() {
        Node* temp = top;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};