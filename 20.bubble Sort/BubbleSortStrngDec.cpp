#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s = "ABCDXDFYSDXZCZXY";
    string str;

    for(int i=0;i<s.size();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }

    sort(str.begin(),str.end());
    reverse(str.begin(),str.end());

    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
}