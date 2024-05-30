#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;

    int arr3[r][c];
    // // ROW-WISE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!1
    // //input
    // for(int i=0;i<r;i++){
    //     if(i==0) cout<<"enter roll nums"<<"\n";
    //     else cout<<"marks";
    //     for(int j=0;j<c;j++){
    //         cin>>arr3[i][j];
    //     }
    // }

    // //print
    // cout<<"\n";
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         cout<<arr3[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

    //COLUMN-WISE!!!!!!!!!!!!!!!!!!!!!!!!!
    //input
    for(int i=0;i<c;i++){
            if(i==0) cout<<"roll no"<<"\n";
            else cout<<"marks"<<"\n";
        for(int j=0;j<r;j++){
            cin>>arr3[j][i];
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