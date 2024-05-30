#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v; 
    v.push_back(1); 
    v.push_back(3);  
    v.push_back(5);
    v.push_back(8);
    v.push_back(11);

    int x,a;
    a = -1;
    bool b = false;
    cin>>x;

    for(int i = v.size();i>0;i--){
        if(v.at(i-1) == x){
            a = (i-1);
            b = true;
            break;
        }
    }

    if( b = true)  cout<<"index is : "<<a;
    //if( b = false) cout<<"not present";
}