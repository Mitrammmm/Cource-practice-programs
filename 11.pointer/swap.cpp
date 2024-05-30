#include<iostream>
using namespace std;

void swap(int x,int y){
    int z = x;
    x = y;
    y = z;
    return;
}

int main(){
    int a,b;
    cin>>a>>b;

    swap(a,b);
    // int z = a;
    // a = b;
    // b = z;

    cout<<a<<" "<<b;
}