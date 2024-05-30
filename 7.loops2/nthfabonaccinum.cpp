#include<iostream>
using namespace std;
int main(){
    int a,b,n,c;
    cin>>a;
    cin>>b;
    cout<<"nth"<<endl;
    cin>>n;

    int i=3;
    if(n==1) c=a;
    if(n==2) c=b;
    while(i<=n){
        c = a+b;
        a=b;
        b=c;
        i++;
    }
    cout<<c;


}