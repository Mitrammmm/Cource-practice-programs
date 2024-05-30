#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void sortme2(vector<int>& v){

    int i=0;
    int j =v.size()-1;
   while(i<j){
    if(v[i]==0) i++;
    if(v[j]==1) j--;
    if(i>=j) break;
    if(v[i]==1 && v[j]==0){
        v[i] = 0;
        v[j] = 1;
    i++;
    j--;
    }
   }
}
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

    sortme2(v);

    for(int i=0 ;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<"\n";

}