#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int solve(int v1,int v2,char ch){
    if(ch=='+') return v1+v2;
    else if(ch=='-') return v1-v2;
    else if(ch=='*') return v1*v2;
    else return v1/v2;
};

int main(){
    string s = "-/*+79483";

    stack<int> val;

    for(int i=s.length()-1; i>=0; i--){

        if(s[i]>= 48 && s[i]<=57) val.push(s[i]-48);
        else{
            int val1 = val.top();  //**** ulta chl rhe to 1st val 1
            val.pop();
            int val2 = val.top();
            val.pop();
            char ch = s[i];
            
            int ans = solve(val1,val2,ch);
            val.push(ans);
                
            }
        }
    cout<<val.top();
};


