#include<string>
#include<iostream>
using namespace std;

// int main(){
//     string str = "mitram singham";
//     string s= "";

//     for(int i=0;i<str.size();i++){
//         if(str[i]!= 'a'){
//             // s += str[i];
//              s.push_back(str[i]);
//         }     
//     }
//     cout<<s;
// }

// void skipachara(string ori,string final){
//     if(ori.length()==0){
//         cout<<final;
//         return;
//     }
//     char ch = ori[0];
//     if(ch=='a')  skipachara(ori.substr(1),final);
//     else skipachara(ori.substr(1),final+ch);
// }

void skipachara2(string ori,string final,int idx){  //better interms of space complexicity
    if(ori.length()==idx){
        cout<<final;
        return;
    }
    char ch = ori[idx];
    if(ch=='a')  skipachara2(ori,final,idx+1);
    else skipachara2(ori,final+ch,idx+1);
}

int main(){
    string str = "mitra singh";
    // skipachara(str,"");
    skipachara2(str,"",0);

}