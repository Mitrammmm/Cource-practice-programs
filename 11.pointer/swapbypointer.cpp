#include<iostream>
using namespace std;
void swap(int* x,int* y){  //pass by reference
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}


int main(){
//  int a,b;
//  cin>>a>>b;
//  swap(&a,&b);
//  cout<<a<<" "<<b;


 int a,b;
 cin>>a>>b;
 int* x=&a;
 int* y=&b;
 swap(x,y);
 cout<<a<<" "<<b;
}