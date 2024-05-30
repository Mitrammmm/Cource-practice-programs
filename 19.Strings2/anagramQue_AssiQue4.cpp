#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
        string s;
        cout<<"enter 1st string"<<"\n";
        getline(cin,s);

        string t;
        cout<<"enter 2nd string"<<"\n";
        getline(cin,t);

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        cout<<s<<"\n"<<t<<"\n";

        if(s==t) cout<< " Yes";
}