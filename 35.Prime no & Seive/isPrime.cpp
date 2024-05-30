#include<iostream>
#include<cmath>
using namespace std;
int fac = -1;

bool isprime(int n){
    if(n==1) return false;  //prime no has 2 factors

    // for(int i=2;i<n-1;i++){  //O(n)
    for(int i=2;i <= sqrt(n) ;i++){  //O(root n)
        if(n%i==0){  // any num b/w completely divides then non prime
          fac = i;
          return false;
        }
    }
    return true;
}

void printfactors(int n){
    // for(int i=1;i<=sqrt(n) ;i++){
    //     if(n%i==0){
    //         if(i == n/i) cout<<i <<" "; 
    //         else cout<<i <<" "<<n/i<<" ";
    //     }
    // }

    for(int i=1;i<sqrt(n) ;i++){
        if(n%i==0) cout<<i<<" "; 
    }
    for(int i=sqrt(n);i>=1 ;i--){
        if(n%i==0) cout<<n/i<<" "; 
    }
}
int main(){
    cout<<isprime(49)<<"\n"<<fac;
    // printfactors(28);
}