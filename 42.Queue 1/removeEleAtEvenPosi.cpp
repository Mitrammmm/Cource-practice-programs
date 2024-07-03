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

void remove(queue<int>& q){
    int n = q.size();
    for(int i=0;i<n;i++){
        if(i%2!=0) q.push(q.front());
        q.pop();
    }
}

int main(){
    queue<int> q;
    //push   pop   front  back  rear  size  empty
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    display(q);
    remove(q);
    display(q);


}
