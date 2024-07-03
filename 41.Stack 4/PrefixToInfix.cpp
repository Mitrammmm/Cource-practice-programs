#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
     
string solve(string v1,string v2,char ch){     // or  string ans =  val1 + val2 + ch ;
    string s = "";
    s += v1;
    s.push_back(ch);  //cant use += on chars
    s += v2;
    return s;
};



int main(){
    //prefix = op v1 v2
    string s = "+*/-24622";

    stack<string> val;

    for(int i=s.length()-1; i>=0; i--){
        if(s[i]>= 48 && s[i]<=57) val.push(to_string(s[i]-48));

        else{ 
            string val1 = val.top();  //**** top wla val2 hee hai "MUST"
            val.pop();
            string val2 = val.top();
            val.pop();
            char ch = s[i];
            
            string ans = solve(val1,val2,ch);
            val.push(ans);
        }

    }

    cout<<val.top();

}