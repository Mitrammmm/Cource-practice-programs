#include<iostream>
#include<vector>
using namespace std;
//only works in unique elements nt with dublicate
void subArray(vector<int> v,int arr[],int n,int idx){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<"\n";
        return;
    }
    subArray(v,arr,n,idx+1);
    if(v.size()==0 || arr[idx-1]==v[v.size()-1]){
       v.push_back(arr[idx]);
       subArray(v,arr,n,idx+1);
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);

    // for(int i=0;i<n;i++){  // strting
    //     for(int j=i;j<n;j++){  //no of rounds
    //         for(int k=i;k<=j;k++){
    //             cout<<arr[k];
    //         }
    //         cout<<"\n";
    //     }
    // }

    vector<int> v;
    subArray(v,arr,n,0);
}