#include<iostream>
#include<vector>
using namespace std;

class Node{    //user def. data type
public:    
    int val;
    Node* next;

    Node(int v){
        // this->val = val;
        val = v;
        next = NULL;
    }
};

class Stack{    //user def. data structure
public:

    Node* head;
    int size;
    Stack(){
        head = NULL;
        size = 0;
    }

    void push(int val){
        Node* t = new Node(val);
        t->next = head;
        head = t;
        size++;
    }
    void pop(){
        if(head == NULL){
            cout<<"Stack is Empty"<<"\n";
            return;
        }
        head = head->next;
        size--;
    }
    int top(){
        if(head == NULL){
            cout<<"Stack is Empty"<<"\n";
            return -1; 
        }
        return head->val;
    }

    // int size(){     // No need inbuilt size use kro
    //     return size;
    // }

    void displayrev(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<"\n";
    }

    void print(Node* temp){    //helper for display
        if(temp==NULL) return;
        print(temp->next);
        cout<<temp->val<<" ";
    }

    void display(){
        Node* temp = head;
        print(temp);
        cout<<"\n";
    }
};

int main(){
    Stack st;
    st.push(5);
    st.push(15);
    st.push(25);
    // cout<<st.size()<<"\n";
    cout<<st.size<<"\n";
    cout<<st.top()<<"\n";

    st.pop();
    cout<<st.size<<"\n";
    cout<<st.top()<<"\n";

    st.push(25);
    st.push(25);
    st.push(25);
    st.displayrev();   //Reverse Display
    st.display();  

}