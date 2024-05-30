#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
        string s;
        cout<<"enter 1st string"<<"\n";
        getline(cin,s);

        stringstream ss(s);
        string temp;

        vector<string> v;
        while(ss>>temp){
            v.push_back(temp);
        }
        
        //sort ni krte to alg alg jgh same vlue hoti jo maybe repeat kr
        //jti for having max frequency 
        sort(v.begin(),v.end());

        int max = 0;
        int count = 1;
        for(int i=0;i<v.size();i++){
            if(v[i]==v[i+1]) count++;
            else count = 1;

            if(count>max) max = count;
            //max = max(max,count);
        }


        int ct = 1;
        for(int i=0;i<v.size();i++){
            if(v[i]==v[i+1]) ct++;
            else count = 1;
            if(ct==max){
                cout<<"max fre is "<<max<<" of "<<v[i];
            }
        }

        
}