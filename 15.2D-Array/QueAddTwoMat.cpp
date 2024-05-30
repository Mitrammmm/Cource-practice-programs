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
     cout<<"\n";

     //2nd matrices
    cout<<"2nd matrices"<<"\n";
    int r2,c2;
    cin>>r2>>c2;

    int arr[r2][c2];

    //input
    for(int i=0;i<r2;i++){
        cout<<i+1<<"th Row elements"<<"\n";
        for(int j=0;j<c2;j++){
            cin>>arr[i][j];
        }
    }
     cout<<"\n";
    
    if(r==r2 && c==c2){
        int arr1[r][c];
        // calculation
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr1[i][j] = arr[i][j] + arr3[i][j];
            }
        }
        //print
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<arr1[i][j];
            }
            cout<<"\n";
        }

        
    }
    else{
        cout<<"order is same thus addition not possible!!";
    }
    


}