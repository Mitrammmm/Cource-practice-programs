#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;

    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

        for(int k=1;k<=i;k++){
            cout<<"*";
        }

        for(int l=1;l<=i-1;l++){
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }

        int x=n+1;
        for(int k=1;k>=x;k++){
            cout<<"*";
        }
        cout<<"\n";
        x-=2;
    }


}
