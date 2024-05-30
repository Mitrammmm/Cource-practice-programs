#include<iostream>
using namespace std;
int main(){
    // int x=11;
    // int* ptr = &x;
    // cout<<ptr<<"\n";        //0x61feb8  
   
    // ptr = ptr + 1;               //  1Value of integer add hua h i.e,4BYTES
    // cout<<ptr<<"\n";      //0x61febc




    // bool a = true;
    // bool* p = &a;

    // cout<<p<<"\n";          //0x61febb  
    // p = p+1;                   // 1Value of BOOL add hua h i.e,1BYTE1
    // cout<<p;                 //0x61febc



    int v = 45;
    int* ptr =&v;

    cout<<*ptr<<"\n";         //45
    //*ptr++ 
    (*ptr)++;
    cout<<*ptr<<"\n";           //46
 
    cout<<ptr<<"\n";         //0x61feb8
    ptr++;                 
    cout<<ptr<<"\n";           //0x61febc

}