#include<iostream>
#include<stack>
using namespace std;

bool isbalanced(string s){
    if(s.length()%2 != 0) return false;

    stack<char> st;
    for(int i=0;i<s.length();i++){

        if(s[i]=='(') st.push('(');
        else{ //s[i]==')'
            if(st.top()=='(') st.pop(); 
            else return false; //stack empty! nothing on top 
        }
        
    }
    if(st.size()==0) return true;
    else return false;
}

int main(){
    string s = "()()((())";
    cout<<isbalanced(s);
}