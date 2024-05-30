#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    // int n;
    // cout<<"enter size"<<"\n";
    // cin>>n;
    //     vector<string> v;
    //     cout<<"enter values:";
    //     for(int i=0;i<n;i++){
    //         string x;
    //         cin>>x;
    //         v.push_back(x);
    //     }

    //     vector<int> result;
    //     for(int i=0;i<n;i++){
    //         result.push_back(stoi(v[i]));
    //     }

    //     sort(result.begin(),result.end());

    //     cout<<"max num is :"<<result[n-1];


    string arr[]= {"122","141","0091","0099909"};
    int max = stoi(arr[0]);
    string maxs;

    for(int i=0;i<4;i++){
        int x = stoi(arr[i]);
        
        if(x>max){
            max = x;
            maxs = arr[i];
        }
    }

    cout<<max<<" of "<<maxs;

}