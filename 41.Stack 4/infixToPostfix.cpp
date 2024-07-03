#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
     
string solve(string v1,string v2,char ch){     // or  string ans =  val1 + val2 + ch ;
    string s = "";
    s += v1;
    s += v2;
    s.push_back(ch);  //cant use += on chars
    return s;
};
int prio(char ch){
    if(ch=='+') return 1;
    else if(ch=='-') return 1;
    else if(ch=='*') return 2;
    else return 2;
}


int main(){
    //prefix = op v1 v2
    string s = "(2+4)*6/2-2"; 

    stack<string> val;
    stack<char> opr;

    for(int i=0;i<s.length();i++){
        // int aasci = (int)s[i];
        if(s[i]>= 48 && s[i]<=57) val.push(to_string(s[i]-48));
        else{
            if(opr.size()==0 ){
                opr.push(s[i]);
            }
            else if(s[i]=='(' || opr.top()=='(') opr.push(s[i]);     //NEW
            else if(s[i]==')'){                                      //NEW                       
                while(opr.top()!='('){
                    string val2 = val.top();  //**** top wla val2 hee hai "MUST"
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    char ch = opr.top();
                    opr.pop();
                    
                    // string ans = ch + val1 + val2;
                    string ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                opr.pop(); // '(' ko uda do!! coz kaam ho gya
            }
            else if(prio(s[i])>prio(opr.top())) opr.push(s[i]);

            else{  //prio(s[i])  <=  prio(opr.top()) 
                while( opr.size()>0 && prio(s[i])  <=  prio(opr.top()) ){
                    string val2 = val.top();  //**** top wla val2 hee hai "MUST"
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    char ch = opr.top();
                    opr.pop();
                    
                    string ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                opr.push(s[i]);
            }
        }

    }
    while(opr.size()>0){
        string val2 = val.top();  //**** top wla val2 hee hai "MUST"
        val.pop();
        string val1 = val.top();
        val.pop();
        char ch = opr.top();
        opr.pop();
                    
        string ans = solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top();

}