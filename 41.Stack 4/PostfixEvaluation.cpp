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
    string s = "79+4*8/3-";

    stack<int> val;

    for(int i=0;i<s.length();i++){
        if(s[i]>= 48 && s[i]<=57) val.push(s[i]-48);
        else{
            int val2 = val.top();  //**** top wla val2 hee hai "MUST"
            val.pop();
            int val1 = val.top();
            val.pop();
            char ch = s[i];
            
            int ans = solve(val1,val2,ch);
            val.push(ans);
                
            }
        }
    cout<<val.top();
};


