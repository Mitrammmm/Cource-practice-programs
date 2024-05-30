#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    // string s = "mitra";
    // cout<<s<<"\n";

    // s.push_back('m');
    // cout<<s<<"\n";

    // s.pop_back();
    // cout<<s<<"\n";




    //+ opeator
    // string s = "abcd";
    // string d = "xyz";

    // s = s + d;
    // cout<<s<<"\n";

    // s = "qwer" + d;
    // cout<<s<<"\n";

    // s = "221" + d + "qw12";
    //  cout<<s<<"\n";



    //reverse
    string s = "mitra";

    //reverse(s.begin(),s.end());
    //cout<<s<<"\n";

    //reverse(s.begin()+1,s.end()-1);
    //cout<<s<<"\n";

    reverse(s.begin()+1,s.begin()+4);
    cout<<s<<"\n";

}