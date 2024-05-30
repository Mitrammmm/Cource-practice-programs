#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<1){
        n=-1*n;
    }
    
     int i=0;
    // while(n!=0){
    //     n/=10; 
    //     i++;
    //     if(n==0) cout<<i;
    // }

    while(n!=0){
        n/=10; 
        i++;
    }
    cout<<i;   //jb loop s bhr aega tb n cout krega!!!!
}