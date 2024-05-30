#include<iostream>
using namespace std;
int main(){
    float cp,sp;
    cout<<"cost price";cin>>cp;
    cout<<"selling price";cin>>sp;
    float d = sp-cp;
    if(d<0){
        d=-d;
         cout<<"loss"<<" of "<<d;
    }

    if(d>0){
         cout<<"profit"<<" of "<<d;
    }
    if(d=0)
    {cout<<"no profit no loss";}
    return 0;

    
}