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

   //selection sort
   for(int i=0;i<n-1;i++){   //n-1 hee chahie last m already sorted ho jaega

    int min = INT_MAX;
    int mindx  = -1;

       for(int j=i;j<n;j++){   //compare krege sbhi ele t get min ele
        if(a[j]<min){
          min = a[j];
          mindx = j;
         }
        }
        swap(a[i],a[mindx]);
   }

   cout<<"\n";
   for(int ele: a){
    cout<<ele<<" ";
   }
}