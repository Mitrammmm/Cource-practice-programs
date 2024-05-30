#include<iostream>
#include<vector>

using namespace std;
int main(){
    // vector<int> v;

    // for(int i=0;i<5;i++){      //random size coz initial size = 0
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }

    // for(int i=0;i<5;i++){
    //     cout<<v[i]<<" ";
    // }



  vector<int> v(5);

    for(int i=0;i<v.size();i++){      //v,size() coz initial size is given
        int x;                       // not working coz as it exceeds limit vector doubles its size
        cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


}