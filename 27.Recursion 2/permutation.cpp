#include<iostream>
#include<string>
using namespace std;
void permutation(string ori,string ans){
    if(ori==""){
        cout<<ans<<"\n";
        return;
    }
    for(int i=0;i<ori.size();i++){
        char ch = ori[i];
        string left = ori.substr(0,i);
        string right = ori.substr(i+1);

        permutation(left+right,ans+ch);
    }
}

int main(){
    string str = "abc";
    // cout<<str.substr(1,1);  //(a,b) a se start kro{including it} & b length tk print kro

    permutation(str,"");
}

