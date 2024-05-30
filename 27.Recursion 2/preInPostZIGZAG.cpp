
#include<iostream>
using namespace std;
void zinzag(int n){
    if(n==0) return;
    cout<<n;
    zinzag(n-1);
    cout<<n;
    zinzag(n-1);
    cout<<n;

}
int main(){
   zinzag(3);
}