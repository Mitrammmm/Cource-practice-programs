#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

string removeDuplicates(string s){
    if(s.length()<=1) return s;

    stack<char> st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(s[i] == st.top()) continue;
        else st.push(s[i]);
    }
    string str = "";
    while(st.size()!=0){
        str += st.top();
        st.pop();
    }

    // sort(str.begin(),str.end());  //no way sort kr dega abcde
    reverse(str.begin(),str.end());
    return str;
}

int main(){
    string s = "aaabbaabbaacdefff";
    cout<<removeDuplicates(s);
}