#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s = to_string(n);

    cout<<"int as num :"<<s<<"\n";
    cout<<"digits in it!! :"<<s.length();
}