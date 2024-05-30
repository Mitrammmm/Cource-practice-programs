
#include<iostream>
using namespace std;
void hanoi(int n,char s,char h,char d){  //here we fixed order sourse,helper,destination
    if(n==0) return;

    hanoi(n-1,s,d,h);
    cout<<s<<"->"<<d<<endl;
    hanoi(n-1,h,s,d);
}
int main(){

    hanoi(2,'A','B','C');
}