#include<iostream>
using namespace std;

class Node{    //user defined data type
public:
   
    int val;
    Node* next;  //its a pointer of Node class objs.

    Node(int v){
        // val = v;
        this->val = v;
        this->next = NULL;
    }
};

class Queue{ //user defined data structure
public:
    Node* head;
    Node* tail;
    int size;

    Queue(){   //constructor
        head = tail = NULL;
        size = 0;
    }

    void push(int val){    //O(1)
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void pop(){
        if(size==0) cout<<"empty";
        else{
            Node* yt = head;   //*** */
            head = head->next;
            size--;
            delete(yt);       //*** */
        }
    }

    int front(){
        if(size==0){
            return -1;
        }
        return head->val;
    }

    int back(){
        if(size==0){
            return -1;
        }
        return tail->val;
    }
  
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<"\n";
    }

    bool empty(){
        if(size==0) return true;
        else return false;
    }
    
};

int main(){
    Queue q;
    q.empty();
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.display();
    q.pop();
    q.display();
    cout<<q.size;
    q.empty();


}