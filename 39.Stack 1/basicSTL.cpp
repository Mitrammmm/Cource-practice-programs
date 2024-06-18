#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;

    cout<<st.size()<<"\n";
    st.push(5);
    st.push(15);
    st.push(25);
    st.push(35);
    cout<<st.size()<<"\n";
    st.pop();          //35 gone
    cout<<st.size()<<"\n";
    cout<<st.top()<<"\n";   //25 15 5


    //****
    //printing in reverse order ->emptying stack
    st.push(45);
    st.push(55);
    st.push(65);
    cout<<"\n";

    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    
    //with extra space & reviving original stack
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<"\n"<<st.size();


    //****
    //printing bottom to top using extra space
    // stack<int> temp;
    // while(st.size()>0){
    //     temp.push(st.top());
    //     st.pop();
    // }
    // while(temp.size()>0){
    //     cout<<temp.top()<<" ";
    //     st.push(temp.top());
    //     temp.pop();
    // }
    // cout<<"\n"<<st.size();



}