#include<iostream>
#include<stack>
using namespace std;

// void displayrev(stack<int> s){
//     if(s.size()==0) return;
//     cout<<s.top()<<" ";
//     s.pop();
//     displayrev(s);
// }

void displayrev(stack<int>& s){  //by reference
    if(s.size()==0) return;
    int x = s.top();
    cout<<s.top()<<" ";
    s.pop();
    displayrev(s);
    s.push(x);
}

// void display(stack<int> s){
//     if(s.size()==1) return;
//     s.pop();
//     display(s);
//     cout<<s.top()<<" ";
// }

void display(stack<int>& s){  //by reference
    if(s.size()==0) return;
    int x = s.top();
    s.pop();
    display(s);
    cout<<x<<" ";
    s.push(x);
}

void pushAtBottom(stack<int>& s,int val){  //by reference
    if(s.size()==0){
        s.push(val);
        return;   
    }
    int x = s.top();
    s.pop();
    pushAtBottom(s,val);
    s.push(x);
}

void reverseStack(stack<int>& s){  //by reference
    if(s.size()==1) return;
    int x =s.top();
    s.pop();
    reverseStack(s);
    pushAtBottom(s,x);
}

int main(){
    stack<int> st;
    st.push(5);
    st.push(15);
    st.push(25);
    st.push(35);
    st.push(45);
    st.push(55);

    displayrev(st);
    cout<<endl;
    display(st);
;
    pushAtBottom(st,99);
    cout<<endl;
    display(st);

    reverseStack(st);
    cout<<endl<<"revStack: ";
    display(st);

    


    
}