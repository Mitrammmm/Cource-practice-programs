#include<iostream>
using namespace std;

//n to 1

// int power(int a,int b){
//     if(a==0) return a;
//     int q = 1;
//     for(int i=0;i<b;i++){
//         q *= a;

//     }
//     return q;
// }

int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);

}

int main(){
    cout<<power(2,3);


}