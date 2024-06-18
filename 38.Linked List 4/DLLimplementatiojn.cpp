#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void display(Node* head){
    while(head){    //means true as head = null -> 0 -> false
       cout<<head->val<<" ";
       head = head->next;
    }
    cout<<"\n";
}

void displayrev(Node* tail){
    while(tail){    //means true as head = null -> 0 -> false
       cout<<tail->val<<" ";
       tail = tail->prev;
    }
    cout<<"\n";
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;
    display(a);
    displayrev(d);

}