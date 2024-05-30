#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;

    int arr3[r][c];

    //input
    for(int i=0;i<r;i++){
        cout<<i+1<<"th Row elements"<<"\n";
        for(int j=0;j<c;j++){
            cin>>arr3[i][j];
        }
    }

    //print
    cout<<"\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<"\n";
    }
}