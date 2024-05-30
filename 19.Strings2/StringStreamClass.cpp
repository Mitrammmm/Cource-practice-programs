#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
        string s;
        cout<<"enter 1st string"<<"\n";
        getline(cin,s);

        stringstream ss(s);
        string temp;

        while(ss>>temp){
            cout<<temp<<"\n";
        }
}