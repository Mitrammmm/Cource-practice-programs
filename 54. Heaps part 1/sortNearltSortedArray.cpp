#include<iostream>
#include<queue>
using namespace std;
int main(){

    int arr[] = {6,5,3,2,8,10,9};
    int k =3;

    int n = sizeof(arr)/4;
    priority_queue< int ,vector<int> ,greater<int> > pq;
    // vector<int> ans;
    int idx = 0;

    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k+1){
            // ans.push_back(pq.top());
            arr[idx++] = pq.top();
            pq.pop();
        };
    }
    while(pq.size()!=0){
        // ans.push_back(pq.top());
        arr[idx++] = pq.top();
        pq.pop();
    }   
    for(auto x : arr){
        cout<<x<<" ";
    }

}
