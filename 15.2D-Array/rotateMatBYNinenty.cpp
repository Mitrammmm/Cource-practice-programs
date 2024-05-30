#include<iostream>
using namespace std;
int main(){

    int r1;
    cin>>r1;
    int arr1[r1][r1];

    //input
    for(int i=0;i<r1;i++){
        cout<<"enter"<<i+1<<"th row element";
        for(int j=0;j<r1;j++){
            cin>>arr1[i][j];
        }
    }

    //display
    for(int i=0;i<r1;i++){
        for(int j=0;j<r1;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";


    //transpose
    int x = 0;
    for(int i =0+x;i<r1;i++){
        for(int j=0+x;j<r1;j++){
            if(i!=j){
                int temp = arr1[i][j];
                arr1[i][j] = arr1[j][i];
                arr1[j][i] = temp;
            }
        }
        x=x+1;
    }

    //  OR  (much better)
    // for(int i=0;i<r1;i++){
    //     for(int j=i+1;j<r1;j++){
    //             int temp = arr1[i][j];
    //             arr1[i][j] = arr1[j][i];
    //             arr1[j][i] = temp;
    //     }
    // }

    //aage-pichhe
    for(int i =0;i<r1;i++){
        for(int j=0;j<r1;j++){

            while(j+1<=(r1)/2){
                int temp = arr1[i][j];
                arr1[i][j] = arr1[i][r1-1];
                arr1[i][r1-1] = temp;
                j++;
                r1--;
            }
            }
        }
    // or (better way)
    // for(int k=0;k<r1;k++){
    //     int i=0;
    //     int j = r1-1;
    //     while(i<=j){
    //         int temp = arr1[i][j];
    //         arr1[i][j] = arr1[j][i];
    //         arr1[j][i] = temp;
    //         i++;
    //         j--;
    //     }
    // }
    


    //display
    for(int i=0;i<r1;i++){
        for(int j=0;j<r1;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<"\n";
    }
}
