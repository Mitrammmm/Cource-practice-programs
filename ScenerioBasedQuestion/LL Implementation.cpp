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

class LinkedList{ //user defined data structure
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList(){   //constructor
        head = tail = NULL;
        size = 0;
    }

    void insertAtTail(int val){    //O(1)
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val){
        Node* temp = new Node(val);

        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            // temp = head;
            head = temp;       // both are pointers swapping pointers nt values
        }
        size++;
    }

    void insertAtIdx(int idx,int val){
        if(idx<0 || idx>size) return;
        else if(idx == 0) return insertAtHead(val);
        else if(idx==size) return insertAtTail(val);
        
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=0;i<idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;  
            temp->next = t;

            size++;
        }
    }

    int getAtIdx(int idx){      //O(n)
        if(idx<0 || idx>size-1) return -1;
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i=0;i<idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }

    void deleteAtHead(){
        if(size==0) cout<<"empty";
        else{
            head = head->next;
            size--;
        }
    }

    void deleteAtTail(){
        if(size==0) cout<<"empty";
        else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }

    void deleteAtIdx(int idx){
        if(idx<0 || idx>size) return;
        else if(idx == 0) return deleteAtHead();
        else if(idx==size) return deleteAtTail();
        
        else{
            Node* temp = head;
            for(int i=0;i<idx-1;i++){   //idx -1 th node m le jaega
                temp = temp->next;
            }
            temp->next = (temp->next)->next;

            size--;
        }
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<"\n";
    }

    void revdisplay(Node* head){    //O(n) space due to recursion     !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    if(head == NULL) return;
        revdisplay(head->next);
        cout<<head->val<<" ";
    }
};

int main(){
    LinkedList ll;
    ll.insertAtTail(10);  //O(1)
    ll.display();
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.display();
    cout<<ll.size<<"\n";

    ll.insertAtHead(5);
    ll.display();
    cout<<ll.size<<"\n";

    ll.insertAtIdx(0,22);
    ll.display();
    cout<<ll.size<<"\n";
    cout<<ll.getAtIdx(3)<<"\n";

    ll.deleteAtHead();
    ll.display();
    cout<<ll.size<<"\n";
    ll.deleteAtTail();
    ll.display();
    cout<<ll.size<<"\n";

    ll.deleteAtIdx(1);
    ll.display();
    cout<<ll.size<<"\n";

}