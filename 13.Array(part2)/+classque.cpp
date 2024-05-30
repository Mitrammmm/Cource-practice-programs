#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void show(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<< v[i]<<" ";
    }
    cout<<"\n";
}

void change(vector<int>& v,vector<int>& w){
    for(int i=0;i<w.size();i++){
        for(int j=(v.size()-1);j>=0;j--){
            w.push_back(v.at(j));
        }
    }
}

int main(){

    int n;
    cout<<"size: ";
    cin>>n;
    vector<int> v(n);

    cout<<"enter array ekements";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.at(i) = x;
        // v.push_back(x);
    }
    show(v);

    //vector<int> w(n);
    //change(v,w);

    vector<int> w(v.size());
    for(int i=0;i<w.size();i++){
        int j = (v.size() - 1) - i;        // WOWWWW logicccc
        w[i] = v[j]; 
    }

    show(w);

}