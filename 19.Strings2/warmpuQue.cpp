#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
        string str;
        getline(cin,str);

        int count = 0;
        for(int i=0;i<str.length();i++){
                if(str[i+1]==str[i] && str[i]==str[i+2]){
                        count++;
                }
                if(str[i+1]==str[i]){
                        count++;
                        i++;
                }
        }
        cout<<"matching :"<<count<<" times.";
}