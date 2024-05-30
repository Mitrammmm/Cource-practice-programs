#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> merge(vector<int>& arr1,vector<int>& arr2){
    int n = arr1.size();
    int m = arr2.size();
    vector<int> vv;
    int i=0,j=0,k=0;
    while(i<=n-1 && j<=m-1){
        if(arr1[i] < arr2[j]){
            vv[k] = arr1[i];
            i++;
        }
        else{
            vv[k] = arr2[j];
            j++;
        }
        k++;
    }

    if(i==n){
        while(j<=m-1){
            vv[k] = arr2[j];
            j++;
            k++;
        }
    }
    if(j==m){
        while(i<=n-1){
            vv[k] = arr1[i];
            i++;
            k++;
        }
    }

    return vv;
}

int main(){

    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<"\n";
    vector<int> w;
    w.push_back(2);
    w.push_back(3);
    w.push_back(4);
    w.push_back(6);
    w.push_back(8);
    w.push_back(10);
    w.push_back(11);

    for(int i=0;i<w.size();i++){
        cout<<w.at(i)<<" ";
    }
    cout<<"\n";

    // algorithm
    int n = v.size() + w.size();
    vector<int> x;

    int i=0,j=0;
    while(i+j<n-1){     // or <=n-1

    if(i==v.size()-1){
        x.push_back(w[j]);
        j++;
        continue;
    }
    if(j==w.size()-1){
        x.push_back(v[i]);
        i++;
        continue;
    }
    

        if(v[i] < w[j]){
             x.push_back(v[i]);
             i++;
        }
        else{
            x.push_back(w[j]);
            j++;
        }
    }

    for(int i=0;i<x.size();i++){
        cout<<x.at(i)<<" ";
    }
    cout<<"\n";

    // vector<int> x = merge(v,w);

    // for(int i=0;i<x.size();i++){
    //     cout<<x[i]<<" ";
    // }
    // cout<<"\n";
    



}