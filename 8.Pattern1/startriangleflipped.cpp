#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a = n;
    for(int i=1;i<=n;i++){
        // for(int j=1;j<=n;j++){
        //     if(j>=a) cout<<"*";
        //     else cout<<" ";
        // }
        // cout<<"\n";
        // a--;


        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //stars
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<"\n";
}
}