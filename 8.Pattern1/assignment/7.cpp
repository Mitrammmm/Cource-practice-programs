#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || j==n || i==1 || i==m) cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
    
}
