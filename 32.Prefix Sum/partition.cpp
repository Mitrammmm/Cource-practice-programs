#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,5,1,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=1;i<n;i++){
        arr[i] += arr[i-1];
    }

    //checking if num exists
    int idx = -1;
    for(int i=0;i<n;i++){
        if(2*arr[i] == arr[n-1]){
            idx = i;
            break;
        } 
    }

    if(idx ==-1) cout<<"can't be divided!";
    else cout<<"partitioned at "<<idx;
}