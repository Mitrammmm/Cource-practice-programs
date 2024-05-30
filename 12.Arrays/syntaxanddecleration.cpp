#include<iostream>
using namespace std;
int main(){

    int x[] = {10,11,12,13,14,15};
    int y[6];
   // int z[];    ya toh size btao y ohir elements dalo

   y[0] = 20;    //0th index s start
   y[1] = 21;
   y[2] = 22;


   cout<<x[0]<<" "<<x[1]<<" ";
   cout<<x[2]<<" "<<x[3]<<" ";
   cout<<x[4]<<" "<<x[5]<<"\n";

   for(int i=1;i<=6;i++){         //i=0;i<=5
    cout<<x[i-1]<<" ";
   }
   cout<<endl;

   //input
   //cin>>y[3];
   cout<<"enter array ele(3)"<<"\n";
   for(int i=3;i<=5;i++){
    cin>>y[i];
   }

   for(int i=0;i<=5;i++){
    cout<<y[i]<<" ";
   }



}