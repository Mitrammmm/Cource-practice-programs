#include<iostream>
#include<queue>
using namespace std;

int main(){

    int arr[] = {6,5,3,2,8,10,9};
    int n = sizeof(arr)/4;
    priority_queue <int, vector<int>, greater<int> > pq;

    for(int s : arr) pq.push(s);

    int x;
    int cost = 0;
    while(pq.size()>1){
        x = pq.top();
        pq.pop();

        x = x + pq.top();      //if equal so '0' push hota hai!  CHIll no issue
        cost += x;
        pq.pop();
        pq.push(x);
    }        

    cout<<"cost: "<<cost;
}