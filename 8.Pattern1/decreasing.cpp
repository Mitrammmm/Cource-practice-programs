#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int b;
    // b = n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=b;j++){
    //         cout<<j;
    //         //cout<<"*";
    //     }
    //     b--;
    //     cout<<"\n";
    // }
    int n;
    cin>>n;   //4
    for(int i=1;i<=n;i++){          //1  2    3
        for(int j=1;j<=n+1-i;j++){        //5-1      5-2      5-3
            cout<<j;                    //****      ***       **
            //cout<<"*";
        }
        cout<<"\n";
    }
}