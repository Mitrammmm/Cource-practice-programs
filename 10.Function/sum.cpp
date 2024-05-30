#include<iostream>
using namespace std;

void sum(int x,int y){
    cout<<x+y<<"\n";
}

bool sum2(int a, int b){
    return (a+b);              //return k bd fun/code khatam
}

int sum3(int a, int b){
    return (a+b);                 // return means aage k codes b ni dkhne, khtm!!
}

int main(){
    sum(6,10.2);
    sum(6,10);

    cout<<sum2(4,5)<<"\n";
    cout<<sum3(4,50);
}