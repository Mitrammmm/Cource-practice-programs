#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void show(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<"\n";
}

void reversepart(vector<int>& v, int a,int b){
    for(int i=a,j=b;i<j;i++,j--){
        int temp = v[i];
        v.at(i) = v[j];
        v[j] = temp;
    }
}

int main(){
    cout<<"size";
    int n;
    cin>>n;
    vector<int> v(n);

    cout<<"elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v[i] = x;
    }

    show(v);
    
    int k;
    cout<<"ENter how many reverse/rotation steps: ";
    cin>>k;

    if(k>n) k = k%n;
    // while(k>n){
    //     k = k-n;
    // }


    //reverse fun
    reversepart(v,0,n-k-1);
    reversepart(v,n-k,v.size()-1);
    reversepart(v,0,v.size()-1);

    show(v);
}