#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
   int a[] = {5,0,1,3,0,0,4};
   int n=7;


   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }

   for(int i=0;i<6;i++){
    bool flag = false;

    for(int j=0;j<n-1-i;j++){
        if(a[j]==0){
            swap(a[j],a[j+1]);
            flag = true;
        }
    }
    if(flag==false){
        break;
    }
   }

   cout<<"\n";
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }
}