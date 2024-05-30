#include<iostream>
using namespace std;
int main(){
   int a,b;               // only works when a & b are +ve
   cin>>a;      //3
   cin>>b;        //2


   int c=1;
   for(int i=1;i<=b;i++){
    c *=a;         //3  3*3
   }

   if(b==0) c==1;
   cout<<c;

}