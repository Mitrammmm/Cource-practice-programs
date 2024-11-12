#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;   //default maxheap  {java -> minheap}
    pq.push(-10);
    pq.push(-1);
    pq.push(-45);
    pq.push(100);
    pq.push(91);

    //only top ele is max ele, rest random or maybe sorted not necessary!
    
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();


}
