#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
        string s = "123456";
        int x = stoi(s);
        cout<<x*10<<"\n";

        string str = "8989898989";
        long long y = stoll(str);
        cout<<y+1; 
}