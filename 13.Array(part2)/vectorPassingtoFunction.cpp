#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void changebyvalue(vector<int> vec){    //new vector vec is created
    vec[0] = 11;                 // in vec
    vec.at(1)  ==22;             // in vec
}

void changebyrefe(vector<int>& vec){             //passed by reference
    vec[0] = 11;
    vec.at(1) = 22;

}

int main(){
    vector<int> v; 
    v.push_back(1); 
    v.push_back(3);  
    v.push_back(5);
    v.push_back(8);
    v.push_back(11);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    } 
    cout<<"\n";

    changebyvalue(v);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    } 
    cout<<"\n";

     changebyrefe(v);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    } 
    cout<<"\n";

    
}