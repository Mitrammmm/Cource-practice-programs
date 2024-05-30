#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    //  int value = 0;
    // for(int i=1;i<=n;i++){           //1     2     3
       
    //     if(i%2==0){
    //         value -=i;                //1-2      
    //     }else{
    //         value +=i;        //1        "-1+3"
    //     }
        
    // }
    // cout<<value;


    //simple
   if(n%2==0) cout<<-1*(n/2);
   else cout<<-1*(n/2) + n;
}