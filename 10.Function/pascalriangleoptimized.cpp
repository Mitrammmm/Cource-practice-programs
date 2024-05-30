#include<iostream>
using namespace std;

// int fact(int x){
//     int a=1;
//     for(int i=2;i<=x;i++){
//         a *=i;
//     }
//     return a;
// }

// int combination(int n,int r){
//     int z = fact(n)/(fact(r)*fact(n-r));
//     return z;
// }
// int permu(int n,int r){
//     int z = fact(n)/fact(n-r);
//     return z;
// }

// int optimi(int n,int r){
//     int x = combination(n,r-1)*(n-r/r+1);      //hahahahaha i,j not n,r
//     return x;
// }


int main(){
int n;
cin>>n;

// for(int i=0;i<=n;i++){
//     for(int j=0;j<=i;j++){
//        if(j=0)  cout<<combination(i,j)<<" ";
//        else cout<<combination(i,j)*(i-j/j+1);   
//     }
//     cout<<"\n";
// }

for(int i=0;i<=n;i++){
    int curr =1;
    for(int j=0;j<=i;j++){
        cout<<curr<<" ";
        int next = curr * (i-j)/(j+1);
        curr = next;
    }
    cout<<"\n";
}
}