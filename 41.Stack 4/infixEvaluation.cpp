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
int prio(char ch){
    if(ch=='+') return 1;
    else if(ch=='-') return 1;
    else if(ch=='*') return 2;
    else return 2;
}


int main(){
    string s = "2+4*6/2-2";

    stack<int> val;
    stack<char> opr;

    for(int i=0;i<s.length();i++){
        // int aasci = (int)s[i];
        if(s[i]>= 48 && s[i]<=57) val.push(s[i]-48);
        else{
            if(opr.size()==0 || prio(s[i])>prio(opr.top())){
                opr.push(s[i]);
            }
            else{  //prio(s[i])  <=  prio(opr.top()) 
                while( opr.size()>0 && prio(s[i])  <=  prio(opr.top()) ){
                    int val2 = val.top();  //**** top wla val2 hee hai "MUST"
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    char ch = opr.top();
                    opr.pop();
                    
                    int ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                opr.push(s[i]);
            }
        }

    }
    while(opr.size()>0){
        int val2 = val.top();  //**** top wla val2 hee hai "MUST"
        val.pop();
        int val1 = val.top();
        val.pop();
        char ch = opr.top();
        opr.pop();
                    
        int ans = solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top();
}