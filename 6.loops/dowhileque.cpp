#include<iostream>
using namespace std;
int main(){
    char i='A';
    do{
        cout<<i<<" "<<(int)i<<endl;
        (int)i++;
    }while((int)i<91);
}