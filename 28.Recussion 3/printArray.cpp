#include<vector>
#include<iostream>
using namespace std;
void print(int arr[],int n,int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    print(arr,n,idx+1);
}
void print2(vector<int>& v,int idx){//& use krne s new vec no bnta whi use hota h
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    print2(v,idx+1);
}
int main(){
    int arr[] = {2,3,4,5,7,8,9};
    //print(arr,sizeof(arr)/sizeof(arr[0]),0);

    vector<int> v = {2,3,4,5,6,7};

    print2(v,0);
}