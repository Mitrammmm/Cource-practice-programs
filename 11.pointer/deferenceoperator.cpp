#include<iostream>
using namespace std;

int main(){
    int x = 9;
    int* p = &x;

    cout<<x<<" "<<&x<<" "<<p<<"\n";

    *p = 7;  // pointer p k address m jo value h vo change/store hogi

    cout<<x<<" "<<&x<<" "<<p;

    cout<<"\n"<<"sum from deference"<<"\n";

    int a,b;
    int* q = &a;
    int* w = &b;

    cin>>*q;
    cin>>*w;

    cout<< a + b;

}