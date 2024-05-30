#include<iostream>
using namespace std;
int main(){
    int* ptr1 = NULL;
    int* ptr2 = 0;
    //int* ptr3 = '\0';   //'\0'-> null character

    cout<<ptr1<<"\n";       //stored reserved address
    cout<<ptr2<<"\n";       //stored reserved address
   // cout<<ptr3<<"\n";

   cout<<&ptr1<<"\n";   //khud k address
    cout<<&ptr2<<"\n";  //pointer k address
}