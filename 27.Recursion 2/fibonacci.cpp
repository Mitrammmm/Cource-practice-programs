#include<iostream>
using namespace std;
int fibo(int n){
    if(n == 1 || n == 2) return 1;

    // int left = fibo(n-1);
    // int right = fibo(n-2);
    // return left + right;

    return fibo(n-1)+fibo(n-2);    //phle 1st poora chlga value lekr aega then right wla(nxt) chlg & vlue lega!!
}
int main(){
    fibo(6);
}