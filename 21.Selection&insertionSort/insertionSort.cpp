#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
   int a[] = {2,5,6,4,3,1,99};
   int n = 7;

   for(int ele: a){
    cout<<ele<<" ";
   }

   //insertion sort
   for(int i=1;i<n;i++){   //n-1 
   
      int j = i;
//    while(j>=1){
//     if(a[j]>a[j-1]) break;
//     else{
//         swap(a[j],a[j-1]);
//         j--;
//     }
//    }

      while(j>=1 && a[j]<a[j-1]){
        swap(a[j],a[j-1]);
        j--;
      }

   }

   cout<<"\n";
   for(int ele: a){
    cout<<ele<<" ";
   }
}