#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
   int a[] = {0,1,2,4,6,8,12,15,20};
   int n = 8;
   int tg =28;
   int lo = 0;
   int hi = n-1;
   int ans = -1;

   while (lo<=hi){
    int mid = lo + ((hi-lo)/2);
    
    if(a[mid]==mid) lo = mid +1;
    else{
        ans = mid;   //mid means index coz jha match nhi kiya ind with elem vhi missing h
        hi = mid -1;
    }
   }
   cout<<ans;
}