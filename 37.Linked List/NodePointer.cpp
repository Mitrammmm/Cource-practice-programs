#include<iostream>
using namespace std;

class Node{    //Linked List Node!!!
public:
   
    int val;
    Node* next;  //its a pointer of Node class objs.

    Node(int v){
        // val = v;
        this->val = v;
        this->next = NULL;
    }
};

void display(Node* head){     //tc O(n)   sc O(1)
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        // temp->next == (*(temp)).next
        temp = temp->next;   // 10,b  20,c  30,d  40,NULL  
    }
}

void size(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;   // 10,b  20,c  30,d  40,NULL  
    }
    cout<<count;
}

void displayrec(Node* head){     //tc O(n)   sc O(n)
    if(head == NULL) return;    //head is a pointer !
    cout<<head->val<<" ";
    displayrec(head->next);
}

void revdisplay(Node* head){
    if(head == NULL) return;
    revdisplay(head->next);
    cout<<head->val<<" ";
}

int main(){
    Node* a = new Node(10);  //bidu, a b c d pointers h jo constructor k call kr 
    Node* b = new Node(20);  //rhe h having their own specific values!
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    cout<<a->next->val<<"\n"; //b
    cout<<a->next->next->next->val<<"\n"; //d

    display(a);         //tc O(n)   sc O(1)
    // Node* temp = a;
    // while(temp != NULL){
    //     cout<<temp->val<<" ";
    //     // temp->next == (*(temp)).next
    //     temp = temp->next;   // 10,b  20,c  30,d  40,NULL  
    // }

    cout<<"\n";
    size(a);
    
    cout<<"\n";
    displayrec(a);      //tc O(n)   sc O(n)

    cout<<"\n";
    revdisplay(a);
    

}