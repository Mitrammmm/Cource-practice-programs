#include<iostream>
using namespace std;
int main(){

    int arr[3][2];
    arr[0][0] = 13;
    cout<<arr[0][0]<<"\n";

    int arr2[2][3] = {{1,2,3},{4,5,6}};
    cout<<arr2[1][2]<<"\n";

    int arr3[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<arr3[2][3]<<"\n";

    int arr4[][4] = {1,2,3,4,5,6,7,8,9,10,11,12}; //khud s 4-4 k coll ko row bna liya
    cout<<arr4[2][0]<<"\n";
}