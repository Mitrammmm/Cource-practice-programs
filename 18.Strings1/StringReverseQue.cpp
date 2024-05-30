#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    string s;
    getline(cin,s);
    if(s.size()%2 != 0)  s.pop_back();

    //1st half reverse
    reverse(s.begin(),s.begin()+(s.length()/2));  //mitram 012345 & n/2= 3 i.e, r k phle tk reverse krna h
    cout<<s<<"\n";                               //overall indexing dekhte h joki "0" s strt hti h!!

    //2nd half by substr()
    cout<<s.substr(s.length()/2);

}