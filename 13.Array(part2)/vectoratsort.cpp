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

    cout<<v[3]<<endl;
    cout<<v.at(3)<<endl;

    v.at(1) = 11;
    cout<<v[1]<<endl;
    cout<<v.at(1)<<endl;

    //sort
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<"\n";

    sort(v.begin(),v.end());       //sorts in ascending order

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<"\n";

    //opposite test
    sort(v.end(),v.begin());       //doesn't work

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }





}