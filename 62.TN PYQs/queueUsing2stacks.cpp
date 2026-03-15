#include <iostream>
#include <stack>
using namespace std;

class MyQueue {

    stack<int> s1;
    stack<int> s2;

public:

    void enqueue(int x)
    {
        s1.push(x);
    }

    int dequeue()
    {
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int val = s2.top();
        s2.pop();

        return val;
    }

    int front()
    {
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }

    bool empty()
    {
        return s1.empty() && s2.empty();
    }
};

int main()
{
    MyQueue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << q.dequeue() << endl; // 1
    cout << q.front() << endl;   // 2
}