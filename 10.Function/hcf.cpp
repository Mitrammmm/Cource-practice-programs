#include<iostream>
using namespace std;

// int hcf(int x,int y){
//     int z;
//     for(int i=1;i<=min(x,y);i++){
//         if(x%i==0 && y%i==0) z=i; 
//     }
//     return z;
// }


int hcf(int x,int y){              //better to use
    int z;
    for(int i=min(x,y);i>=1;i--){
        if(x%i==0 && y%i==0){
             z=i;
             break;
        }
    // break;              // no not here
    }
    return z;
}

int main(){
   int a,b;
   cin>>a;
   cin>>b;

   cout<<hcf(a,b);
}