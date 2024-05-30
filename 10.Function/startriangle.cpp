#include<iostream>
using namespace std;

void strtrg(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

int main(){
    strtrg(4);
    strtrg(6);
}