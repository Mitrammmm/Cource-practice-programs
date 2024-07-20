#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Deque
{ // user defined data structure
public:
    Node *head;
    Node *tail;
    int size;

    Deque()
    { // constructor
        head = tail = NULL;
        size = 0;
    }

    void push_back(int val)
    { // O(1)
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            temp->prev = tail; // extra from LLclass
            tail = temp;
        }
        size++;
    }

    void push_front(int val)
    {
        Node *temp = new Node(val);

        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head->prev = temp; // extra
            head = temp;       // both are pointers swapping pointers nt values
        }
        size++;
    }

    void pop_front()
    {
        if (size == 0)
            cout << "empty";
        else
        {
            head = head->next;
            if (head)
                head->prev = NULL; // HEAD!=null
            if (head == NULL)
                tail = NULL;
            size--;
        }
    }

    void pop_back()
    {
        if (size == 0)
            cout << "empty";
        else if (size == 1)
            pop_front(); // 90th line
        else
        {
            Node *temp = tail->prev;
            temp->next = NULL;
            tail = temp;
            size--;
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
    Deque q;
    q.push_back(6);
    q.push_back(7);
    q.push_back(8);
    q.display();
    q.push_back(99);
    q.display();
    q.push_front(66);
    q.display();
    q.pop_back();
    q.display();
    q.pop_front();
    q.display();
    cout<<q.size<<"\n";
    q.empty();



}
