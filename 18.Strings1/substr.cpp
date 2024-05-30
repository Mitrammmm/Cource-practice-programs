#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "abcdefgh"; //01234567

    cout<<s.substr()<<"\n";

    cout<<s.substr(2)<<"\n";

    cout<<s.substr(4)<<"\n";


    cout<<s.substr(2,4)<<"\n";

    cout<< s.substr(3,1)<<"\n";

    cout<<s.substr(1,5)<<"\n";

    cout<<s.substr(0,4)<<"\n";


}