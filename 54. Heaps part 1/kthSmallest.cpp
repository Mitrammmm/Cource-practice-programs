#include<iostream>
#include<queue>
using namespace std;
int main(){
    //NOTE ;- Smallest ->maxhep ,Largest->minheap

    int arr[] = {10,20,-4,6,18,2,105,118};
    int k =3;

    int n = sizeof(arr)/4;
    priority_queue<int> pq;

    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }  

    cout<<"kth smallest ele is : "<<pq.top();

}
