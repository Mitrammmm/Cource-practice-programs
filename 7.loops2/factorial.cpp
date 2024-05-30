#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fac=1;;

    for(int i=1;i<=n;i++){         //for n=0 condition ni chk rhi and direct fac=1 show krega LOL!!
        fac *=i;
    }
    cout<<fac;
}