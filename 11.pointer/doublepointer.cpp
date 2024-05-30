#include<iostream>
using namespace std;
int main(){
    int x =11;
    int* ptr1 = &x;
    int** ptr2 = &ptr1;
    int*** ptr3 = &ptr2;
   
    cout<<x<<"\n";      
    cout<<&x<<"\n";       
    cout<<ptr1<<"\n";  
    cout<<&ptr1<<"\n";  
    cout<<ptr2<<"\n";      
    cout<<&ptr2<<"\n";       
    cout<<ptr3<<"\n";  
    cout<<&ptr3<<"\n";

    cout<<*ptr1<<"\n";      
    cout<<*ptr2<<"\n";       
    cout<<*ptr3<<"\n";   

    cout<<**ptr2<<"\n";      
    cout<<**ptr3<<"\n";

    cout<<***ptr3<<"\n";    
}