#include<iostream>
using namespace std;
int main(){
    // int arr[] = {7,6,5,3,4,1,2,8,9};
    // int n = sizeof(arr)/sizeof(arr[0]);  //right way

    // int k=3;
    // int maxsum = INT_MIN;
    // //normal way O(kn)
    // for(int i=0;i<=n-k;i++){
    //     int sum = 0;
    //     for(int j=i;j<=i+k-1;j++){
    //         sum += arr[j]; 
    //     }
    //     maxsum = max(maxsum,sum);
    // }
    // cout<<maxsum; 


    //sliding window
    
    int arr[] = {7,6,5,3,4,1,2,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);  //right way

    int k=3;
    int maxsum,currsum=0,curridx=-1;
    for(int i=0;i<k;i++){
        currsum += arr[i];
    }
    maxsum = currsum;

    //sliding window algo   
    //O(n)
    int i=1,j=k;//indexing 0 s hai so k means k+1
    while(j<n){  
        currsum = currsum + arr[j] - arr[i-1];
        if(currsum>=maxsum){
            maxsum = currsum;
            curridx = i;
        }
        i++,j++;
    }

    cout<<maxsum<<"\n"<<curridx; 
}

