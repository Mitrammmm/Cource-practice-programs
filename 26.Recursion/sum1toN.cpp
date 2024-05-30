#include<iostream>
using namespace std;

//n to 1
void sum1ton(int sum,int n){
    //base case
    if(n==0){
        cout<<sum;
        return;
    }
    sum1ton(sum+n,n-1);
}
int sum1ton2(int n){
    //base case
    if(n==0) return 0;
    return n + sum1ton2(n-1);
}

int main(){
    int n;
    cin>>n;
    // sum1ton(0,n);
    cout<<sum1ton2(n);

}