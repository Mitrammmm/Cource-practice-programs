#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0;i<=3;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return;
}
void change(int b[]){
    b[0] = 10;
    b[2] = 22;
}
int main(){
    int arr[] = {1,2,3,4};
    display(arr);
    change(arr);
    display(arr);
}