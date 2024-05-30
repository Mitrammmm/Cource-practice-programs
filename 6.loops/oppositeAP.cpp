#include<iostream>
using namespace std;
int main(){
    int a,d,n;
    // cout<<"nth num ";
    //  cin>>n;
    cout<<endl;
    cout<<"common diff ";
     cin>>d;
    cout<<endl;
    cout<<"first num ";
     cin>>a;
    cout<<endl;

    int an=a+(n-1)*d;            //*********

    for(int i=a;i>=an&&i>0;i=i+d){
        cout<<i<<" ";
    }
}