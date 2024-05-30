#include<iostream>
using namespace std;

//n to 1
void print(int n){
    //base case
    if(n==0) return;
    cout<<n<<"\n";
    print(n-1);
}
// 1  to n

// void print(int n){
//     //base case
//     if(n==0) return;
//     print(n-1);
//     cout<<n<<"\n";
// }
int main(){
    int n;
    cin>>n;
    print(n);
}