#include <iostream>
#include <stack>
using namespace std;

class myqueue {                     // SC O(n)  due to recursive stack space !!!
    stack<int> st;
public:
    void push(int v){    //O(1)
        st.push(v);
    }

    int pop(){   // O(n)
        if(st.empty()) return -1; //starting m check only
        
        int x = st.top();
        st.pop();

        if(st.empty()) return x;

        int val = pop();
        st.push(x);

        return val;
    }
};

int main(){
    return 0;
}