#include<iostream>
using namespace std;
int main(){
    int std[10];

    cout<<"enter stu marks"<<"\n";

    for(int i=0;i<=9;i++){
        cin>>std[i];
    }

    for(int i=0;i<=9;i++){
        if( std[i] < 35) cout<<i<<" "; 
    }

}