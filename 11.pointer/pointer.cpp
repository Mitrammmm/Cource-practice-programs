#include<iostream>
using namespace std;

int main(){
   int x=5;
   int *p = &x;

   float y=5.9;
  float *q = &y;

   bool z=5;
   bool *r = &z;

   cout<<&x<<"\n"<<p<<"\n";
   cout<<&y<<"\n"<<q<<"\n";
   cout<<&z<<"\n"<<r<<"\n";
}