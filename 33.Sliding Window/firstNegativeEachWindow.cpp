#include<iostream>
using namespace std;
int main(){
    int arr[] = {7,6,5,-3,4,1,-2,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);  //right way

    int k=3;
    int nidx =-1,ans[n-k+1];
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            nidx = i;
            break;
        }
    }
    if(nidx=-1) ans[0] = 1;
    else ans[0] = arr[nidx];

    //sliding window algo   
    //O(n+n)
    int i=1,j=k;
    while(j<n){  
        if(nidx>=i) ans[i] = arr[nidx];
        else{
            //O(n+n)
            nidx = -1;
            for(int x=i;x<=j;x++){
                if(arr[x]<0){
                    nidx = x;
                    break;
                }
            }
            if(nidx!=-1) ans[i] = arr[nidx];
            else ans[i] = 1;
        }

        i++,j++;
    }

    for(int q=0;q<n-k+1;q++){
        cout<<ans[q]<<" ";
    }
}

