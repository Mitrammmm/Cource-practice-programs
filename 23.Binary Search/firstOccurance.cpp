#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
   int a[] = {1,2,4,6,8,12,15,20};
   int n = 8;
   int tg =28;
   int lo = 0;
   int hi = n-1;
   bool flag = true; //

        while(lo<=hi){
            int mid = lo + (hi-lo)/2;    //lo+ hi / 2 but it might goes out of int range

            if(a[mid] == tg){
                if(a[mid-1]==a[mid]){
                     hi = mid -1;
                     flag = false;  //
                }
                else cout<<mid;
                break;
            }
            else if(a[mid]<tg) lo = mid +1;
            else{
                hi = mid -1;
            }
        }
        // return -1;
        if(flag == true) cout<<-1;
   
   
}