#include<iostream>
#include<vector>
using namespace std;
int main(){

    int m,n;
    cout<<"enter 1st matrix rows and column"<<"\n";
    cin>>m>>n;

    int a[m][n];
        cout<<"enter 1st mat eles"<<"\n";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }

    //printing
    // for(int i=0;i<m;i++){
    //     if(i%2==0){
    //     for(int j=0;j<n;j++){
    //         cout<<a[i][j]<<" ";            
    //     }
    //     }
    //     else{
    //         for(int j=n-1;j>=0;j--){
    //             cout<<a[i][j]<<" ";
    //         }
    //     }
    // }    



    // for(int i=m-1;i>=0;i--){
    //     if(i%2==0){
    //     for(int j=0;j<n;j++){
    //         cout<<a[i][j]<<" ";            
    //     }
    //     }
    //     else{
    //         for(int j=n-1;j>=0;j--){
    //             cout<<a[i][j]<<" ";
    //         }
    //     }
    // }    


    for(int j=0;j<n;j++){
        if(j%2==0){
        for(int i=0;i<m;i++){
            cout<<a[i][j]<<" ";            
        }
        }
        else{
            for(int i=m-1;i>=0;i--){
                cout<<a[i][j]<<" ";
            }
        }
    }    
}        