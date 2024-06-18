#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> s){
    while(s.size()>0){
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main(){
    stack<int> st;
    st.push(5);
    st.push(15);
    st.push(25);
    st.push(35);
    st.push(45);
    st.push(55);
    print(st);

    //reversing using 2 new stack
    stack<int> a;
    stack<int> b;
    //st ->a
    while(st.size()>0){
        a.push(st.top());
        st.pop();
    }
    //a->b
    while(a.size()>0){
        b.push(a.top());
        a.pop();
    }
    //b->st
    while(b.size()>0){
        st.push(b.top());
        b.pop();
    }

    cout<<endl;
    print(st);

    //Method -2
    //reversing using array/linked list/ vector

}