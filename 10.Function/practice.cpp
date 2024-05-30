#include<iostream>
using namespace std;

int fact(int x){
    int a=1;
    for(int i=2;i<=x;i++){
        a *=i;
    }
    return a;
}

int main(){
   int x = fact(6)/(fact(2)*fact(3));
   cout<<x;
}