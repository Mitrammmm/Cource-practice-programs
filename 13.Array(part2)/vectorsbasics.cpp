#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; //no need t mention size
    v.push_back(1);  //**size bna r/skta h
    // v.push_back(2);
    // v.push_back(3);
    
    v.push_back(3);  
    v.push_back(5);
    v.push_back(8);
    v.push_back(11);  

     v[0] = 2;
     v[2] = 3;
     v[3] = 8;
    // v[4] = 9;
    
     cout<<v.size()<<"\n";
     cout<<v.capacity()<<"\n";

    v.pop_back();
    v.pop_back();

    cout<<v.size()<<"\n";
    cout<<v.capacity()<<"\n";

    v.push_back(11);
    v.push_back(17);
    v.push_back(32);

    cout<<v.size()<<"\n";
    cout<<v.capacity()<<"\n";

    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    // cout<<v[4]<<" ";

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}