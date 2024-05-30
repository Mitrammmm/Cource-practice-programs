#include<iostream>
using namespace std;
int pow(int a,int b){
   if(b==0) return 1;
   else if(b==1) return a;

   int ans = pow(a,b/2);
   if(b%2!=0) return (ans*ans)*a;
   else return ans*ans;
}
int main(){
    cout<<pow(9,0);
}