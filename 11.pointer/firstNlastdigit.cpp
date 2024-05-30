#include<iostream>
using namespace std;

// int doo(int x){
//     while(x>10){
//         x= x / 10;
//     }
//     return x;
// }
// int dooo(int x){
//     while(x>10){
//         x = x % 10;
//     }
//     return x;
// }

// int main(){
//     int n;
//     cout<<"enter no"<<"\n";
//     cin>>n;
//     cout<<"1st digit:";
//     cout<<doo(n);
//     cout<<"\n"<<"last digit:";
//     cout<<dooo(n);

// }


void fun(int x,int* a,int* b){
     *b = x%10;  //last

    while(x>=10){     //x>9
        x /= 10;
        *a = x;           //first
    }

    // while(x>10){
    //     x = x % 10;
    //     *b = x;
    // }
    return;
}
int main(){
    int n,f,l;
    cout<<"enter no"<<"\n";
    cin>>n;
    int* ptr1 = &f;
    int *ptr2 = &l;
    fun(n,ptr1,ptr2); 

    cout<<f<<" "<<l;

}