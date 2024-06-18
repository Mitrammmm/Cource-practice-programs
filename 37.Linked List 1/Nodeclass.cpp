#include<iostream>
using namespace std;

class Node{    //Linked List Node!!!
public:
   
    int val;
    //int* ptr;
    Node* next;  //its a pointer of Node class objs.

    Node(int v){
        // val = v;
        this->val = v;
        this->next = NULL;
    }
};

int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    a.next = &b;
    b.next = &c;
    c.next = &d;
    
    // cout<<(*(a.next)).val;
    cout<<(a.next)->val<<"\n";
    (a.next)->val = 100;
    cout<<(a.next)->val<<"\n";

    cout<<((a.next)->next)->val<<"\n";
    cout<<(*((*((*(a.next)).next)).next)).val<<"\n";

    Node temp = a;
    while(3){   //true
      cout<<temp.val<<" ";
      if(temp.next == NULL) break;
      temp = *(temp.next);
    }
    



}