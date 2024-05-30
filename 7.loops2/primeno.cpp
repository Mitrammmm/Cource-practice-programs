#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for(int i=2;i<n;i++){
    //     if(n%i==!0){
    //         cout<<"Prime";
    //         break;
    //     }
    //     else{
    //         cout<<"not prime";
    //         break;
    //     }
    // }
    bool flag = true;
    for(int i=2;i<n;i++){
        if(n%i==!0){
            flag = false;
            break;
        }
    }
    if(n==1) cout<<"neither prime nor composite";
    else if(flag==false) cout<<"prime";
    else cout<<"composite";
}