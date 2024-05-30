#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
        // string s;
        // getline(cin,s);
        
        // stringstream ss(s);
        // vector<string> v;

        // string temp;
        // while(ss>>temp){
        //     v.push_back(temp);
        // }

        // sort(v.begin(),v.end());

        // cout<<"sorted:"<<"\n";
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<"\n";
        // }

        // cout<<"\n"<<"biggest :"<<v[0];


        //for lexographically max
        string s;
        getline(cin,s);
        stringstream ss(s);

        string temp;
        int z=0;
        while(ss>>temp){
            if(temp.size()>=z){
                 z = temp.size();
            }     
        }

        stringstream sss(s);
        string temp2;
        while(sss>>temp2){
            if(temp2.size()==z) cout<<temp2<<"\n";    
        }
        



}