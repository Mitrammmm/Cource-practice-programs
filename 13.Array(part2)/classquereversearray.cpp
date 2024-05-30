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

    // int i = 0;
    // int j = v.size()-1;
    // while(i<j){                 //as i=j; break; coz its the middle/last swap
    //     int temp = v.at(j);
    //     v[j] = v.at(i);
    //     v[i] = temp;
        
    //     i++;
    //     j--;
    // }

    for(int i = 0,j =v.size()-1; i<j; i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
  
    //reverse(v.begin(),v.end());              //buildin function
    show(v);

}