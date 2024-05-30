#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
   int a[] = {1,2,4,6,8,12,15,20};
   int n = 8;
   int tg =8;

   int lo = 0;
   int hi = n-1;
   bool flag = true;
   while(lo<=hi){
    int mid = lo + (hi-lo)/2;
    if(a[mid] == tg){
          cout<<a[mid-1]<<"\n"<<a[mid+1];
          flag = false;
          break;
    }
    else if(a[mid]<tg) lo = mid+1;
    else hi = mid -1;
   }

   if(flag == true){
   cout<<" lower bound is"<<a[hi]<<"\n";
   cout<<" upper bound is"<<a[lo];

   }
}