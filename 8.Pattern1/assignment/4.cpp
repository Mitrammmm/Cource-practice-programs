#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a = n+1;
    for(int i=1;i<=n;i++){
      a--;
        for(int j=1;j<=n+3;j++){

          if(j<a || j>(a+3)) cout<<" ";
          else cout<<"*";
        
        }
        cout<<"\n";
}
}