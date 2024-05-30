//leetcode 118
#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    int n;
    cout<<"enter n;"<<"\n";
    cin>>n;

    vector< vector<int> > v;

    //creating columns(vectors)
    for(int i=1;i<=n;i++){
        vector<int> a(i);
        v.push_back(a);
    }

    //generation
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(j==0 || i==j ){
                v[i][j] = 1;
            }
            else{
                v[i][j] = v[i-1][j] + v[i-1][j-1];
            }
        }
    }
    //printing
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }


    // int n;
    // cout<<"enter n;"<<"\n";
    // cin>>n;

    // vector< vector<int> > v(n);
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         if(j==0 || i==j ){
    //             v[i].push_back(1);
    //         }
    //     }
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         if(i!=j && j!=0){
    //             v[i].push_back(v[i-1][j] + v[i-1][j-1]);
    //         }        
    //     }
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    
}