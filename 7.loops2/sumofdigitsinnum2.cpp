#include<iostream>
using namespace std;
int main(){
    // num %10 = last digit.
    int n;
    cin>>n;            //123

    int sum=0;
    while(n>0){               //123  12    1
        int c = n%10;        //3     2    1
        n /=10;              //12    1    0
        sum +=c;             //0+3   3+2  5+1

    }
    cout<<sum;


}