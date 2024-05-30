#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;

    //string s[n];
    char s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    for(int i=0;i<n;i+=2){  // s[i]!='\0'
        s[i] = 'a';   
    }

    cout<<s;
}