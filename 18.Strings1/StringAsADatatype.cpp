#include<iostream>
using namespace std;
#include<string>
int main(){
    string str = "aloo gobhi";
    string str2 = "aloo";
    cout<<str<<"\n"<<str2<<"\n";
    
    // string s; 
    // cin>>s; // when given string has no spaces
    // cout<<s;

    string name;
    getline(cin,name);  //string with spaces 
    cout<<name;
}