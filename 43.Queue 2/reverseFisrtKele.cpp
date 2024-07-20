#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void display(queue<int> q){
    int n = q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<"\n";
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    int n = q.size();
    //printing
    display(q);

    int k = 2;

    stack<int> st;
    for(int i=1;i<=k;i++){
        st.push(q.front());
        q.pop();
    }

    while(st.size()){
        q.push(st.top());
        st.pop();
    }

    for(int i=1; i<=(n-k);i++){
        int x =q.front();
        q.pop();
        q.push(x);
    }

    //printing
    display(q);
}