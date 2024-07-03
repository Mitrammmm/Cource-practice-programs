#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int>& q){
    int n = q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<"\n";
}

void reverse(queue<int>& q){
    stack<int> st;
    while(q.size()){
        st.push(q.front());
        q.pop();
    }
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
}

int main(){
    queue<int> q;
    //push   pop   front  back  rear  size  empty
    q.push(1);
    q.push(12);
    q.push(13);
    q.push(17);

    cout<<q.front()<<"\n";
    // cout<<q.rear()<<"\n";   //not available
    cout<<q.back()<<"\n";
    cout<<q.size()<<"\n";
    cout<<q.empty()<<"\n";    //Boolean 


    q.pop();   //1st element nikla!!
    cout<<"after pop; "<<q.front()<<"\n";
    cout<<q.back()<<"\n";
    display(q);
    reverse(q);
    display(q);


}
