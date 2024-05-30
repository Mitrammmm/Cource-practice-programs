#include<iostream>
using namespace std;

void swap(int &x,int &y){  //pass by reference
    int z = x;
    x = y;
    y = z;
    return;
}

int main(){
    int a,b;
    cin>>a>>b;

    swap(a,b);

    cout<<a<<" "<<b;
}