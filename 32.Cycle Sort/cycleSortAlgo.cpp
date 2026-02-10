#include<iostream>
using namespace std;

int main(){
    // int arr[] = {1,5,3,2,1,4};
    // int arr[] = {1,5,3,2,99,4};
    int arr[] = {1,5,3,2,6,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    //cycle sort                // here sorting ele in O(n) TC   
    int i=0;
    while(i<n){
        int corridx = arr[i]-1; //index 0 se start h
        if(corridx==i) i++;
        else swap(arr[i],arr[corridx]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}