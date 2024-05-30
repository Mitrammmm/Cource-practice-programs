#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){

    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<"\n";


    // sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++){
    //     cout<<v.at(i)<<" ";
    // }
    // cout<<"\n";

    // sort(v.end(),v.begin()); //does'nt work
    // for(int i=0;i<v.size();i++){
    //     cout<<v.at(i)<<" ";
    // }

    int x=0,y = 0;
    for(int i=0;i<v.size();i++){
        if (v[i]==0) x++;
        if(v[i]==1) y++;
    }    

    for(int j=1;j<=x;j++){
        cout<<0<<" ";
    }
    for(int j=1;j<=y;j++){
        cout<<1<<" ";
    }
}