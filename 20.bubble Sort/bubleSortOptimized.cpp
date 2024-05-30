#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {2,1,3,4,5};

    int n = 5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    //bubble sort
    for(int i=0;i<n-1;i++){  //n-1 passes

    bool flag = false;

    // for(int j=0;j<n-1;j++){
    for(int j=0;j<n-i-1;j++){       // -i to reduce unnecessary comparisons in each pass

        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag = true;
        }
    }
    if(flag == false){  //swap did'nt happen!
        break;
    }
    
    }

    //print
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}