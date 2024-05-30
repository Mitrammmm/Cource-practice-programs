#include<vector>
#include<iostream>
using namespace std;

void printmax(int arr[],int n,int idx,int max){
    if(idx==n){ 
        cout<<max;
        return;
    }
    if(arr[idx]>max) max = arr[idx];
    printmax(arr,n,idx+1,max);
}

int maxvalue(int arr[],int n,int idx){
    if(n==idx) return INT_MIN;
    return max(arr[idx],maxvalue(arr,n,idx+1));
}
int main(){
    int arr[] = {2,3,4,5,7,8,9};
    // printmax(arr,sizeof(arr)/sizeof(arr[0]),0,INT_MIN);
    cout<<maxvalue(arr,sizeof(arr)/sizeof(arr[0]),0);
}