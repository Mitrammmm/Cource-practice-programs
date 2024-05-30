#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;                 //123
    if(n<1){
        n=-1*n;
    }
    
    float d=0;
    float x;
    int sum = 0;
    while(n>0){
        x = n/10.0;        //12.3
        int c;
        c = n/10;           //// 12
        d = x-c;            // 0.3
        d *=10;             //3
        sum +=d;              //LMAO 2 variables use krlo
        n=c;
    }
    cout<<sum;  //loop complete hone k bd k value aegi
}