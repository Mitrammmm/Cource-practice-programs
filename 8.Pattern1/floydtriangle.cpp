#include<iostream>
using namespace std;
int main(){
    int n,m,o;
    cin>>n;
    m=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<m;
            m++;
        }
    cout<<"\n";
}
}