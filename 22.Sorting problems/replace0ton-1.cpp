#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
   int a[] = {2,5,6,4,3,1,99};
   int n = 7;
   vector<int> v(n,0);

   for(int ele: a){
    cout<<ele<<" ";
   }

   int x = 0;
   for(int i=0;i<n;i++){
    int min = INT_MAX;
    int mindx = -1;
    for(int j=0;j<n;j++){
        if(v[j]==1) continue;    //visited
        else{
            if(min>a[j]) {
                min = a[j];
                mindx = j;
            }
        }
    }
    a[mindx] = x;
    x++;
    v[mindx] =1;
   }

   

   cout<<"\n";
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }
}