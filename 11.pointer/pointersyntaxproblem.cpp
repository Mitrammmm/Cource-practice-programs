#include<iostream>
using namespace std;

int main(){
    int x=9,y=10,z=11,v=23;

    // int* p = &x , q = &y;
    int* p = &x , q = y;           //1st pointer 2nd var
    int *r,s;                      //1st pointer 2nd var
    r = &z;

    //s = &v
    s = v;
    

    
}