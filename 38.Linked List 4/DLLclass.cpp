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

class DLL
{ // user defined data structure
public:
    Node *head;
    Node *tail;
    int size;

    DLL()
    { // constructor
        head = tail = NULL;
        size = 0;
    }

    void insertAtTail(int val)
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

    void insertAtHead(int val)
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

    void insertAtIdx(int idx, int val)
    {
        if (idx < 0 || idx > size)
            return;
        else if (idx == 0)
            return insertAtHead(val);
        else if (idx == size)
            return insertAtTail(val);

        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next->prev = t;

            temp->next = t;
            t->prev = temp;

            size++;
        }
    }

    int getAtIdx(int idx)
    { // O(n)
        if (idx < 0 || idx > size - 1)
            return -1;
        else if (idx == 0)
            return head->val;
        else if (idx == size - 1)
            return tail->val;
        else
        {
            if (idx < size / 2)
            {
                Node *temp = head;
                for (int i = 0; i < idx; i++)
                {
                    temp = temp->next;
                }
                return temp->val;
            }
            else{//idx => size/2
                Node* temp = tail;
                for(int i=1;i<size-idx;i++){
                    temp = temp->prev;
                }
                return temp->val;
            }
        }
    }

    void deleteAtHead()
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

    void deleteAtTail()
    {
        if (size == 0)
            cout << "empty";
        else if (size == 1)
            deleteAtHead(); // 90th line
        else
        {
            Node *temp = tail->prev;
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }

    void deleteAtIdx(int idx)
    {
        if (idx < 0 || idx > size)
            return;
        else if (idx == 0)
            return deleteAtHead();
        else if (idx == size)
            return deleteAtTail();

        else
        {
            Node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            { // idx-1 th node m le jaega
                temp = temp->next;
            }
            temp->next = (temp->next)->next;
            (temp->next)->prev = temp; // from above code temp->nxt = tmp->nxt->nxt

            size--;
        }
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main()
{
    DLL ll;
    ll.insertAtHead(10);
    ll.insertAtHead(20);
    ll.insertAtHead(30);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.insertAtTail(7);
    ll.display();
    ll.insertAtIdx(3, 33);
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(2);
    ll.display();
    ll.insertAtTail(66);
    ll.insertAtTail(66);
    ll.display();
    cout<<ll.getAtIdx(2);
    

}