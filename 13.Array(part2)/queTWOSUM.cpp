#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void twosum(vector<int>& v,int x){
    int a,b;
    for(int i=0;i<v.size();i++){
        for(int j=(i+1);j<v.size();j++){      //two diff  num not same num
            if(  v.at(j)  + v[i] == x ){
                a = i;
                b = j;
                cout<<a<<"&"<<b<<endl;
            }   
        }
        
    }
}

int main(){
    vector<int> v;
    v.push_back(1);//0 
    v.push_back(3);  
    v.push_back(5);
    v.push_back(8);  //3
    v.push_back(11);
    v.push_back(4); 
    v.push_back(2);  //6
    v.push_back(5);
    v.push_back(2);
    v.push_back(1);//9 

    int x,a,b;
    cin>>x;

    twosum(v,x);
    
}