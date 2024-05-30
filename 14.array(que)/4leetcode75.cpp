#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// void sortColoursmethod1(vector<int>& v){
//     //two pass solution
//     int n = v.size();
//     int x=0,y=0,z=0;
//     for(int i=0;i<n;i++){
//         if(v[i]==0) x++;
//         // if(v[i]==1) y++;
//         // if(v[i]==2) z++;
//         else if(v[i]==1) y++;
//         else z++;
//     }
    
//     for(int i=0;i<n;i++){
//         if(i<x) v[i] = 0;               
//         else if(i<(x+y)) v[i] = 1;
//         else v[i] = 2;  
//     }
   
// }

void sortColoursmethod2(vector<int>& v){
    //one pass solution
    int l = 0,m=0,h = v.size()-1;

    while(m<=h){
        if(v[m]==0){
            int temp = v[m];
            v[m] = v[l];
            v[l] = temp;
            m++;
            l++;
        }
        else if(v.at(m)==1){          //else lgega ek sth sbni check hoge
            m++;
        }
        else if(v[m]==2){
            int tem = v[m];
            v[m] = v[h];
            v[h] = tem;
            h--;
        }
    }
    }

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<"\n";

    sortColoursmethod2(v);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<"\n";


    
}