#include<iostream>
using namespace std;
int main(){

    int r1,c1;
    cin>>r1>>c1;
    int arr1[r1][c1];

    //input
    for(int i=0;i<r1;i++){
        cout<<"enter"<<i+1<<"th row element";
        for(int j=0;j<c1;j++){
            cin>>arr1[i][j];
        }
    }

    //display
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<"\n";
    }

    //transpose
    int arr2[c1][r1];
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            arr2[i][j] = arr1[j][i]; 
        }
    }

    //print transpose
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<"\n";
    }
}