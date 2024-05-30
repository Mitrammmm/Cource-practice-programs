#include<iostream>
using namespace std;
int main(){
    int arr3[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<arr3[2][3]<<"\n";

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<"\n";
    }

}