#include<iostream>
using namespace std;
int main(){
    // int n,o;
    // cin>>n;                                        
    // cin>>o;                               
    // //char m =(int)n;                                        
    // //int z = m+o-1;  //68

    // for(int i=1;i<=o-1;i++){

    //     char m =(int)n;  
    //     int z = m+o-1;
                                   
    // for(m;m<=z;m++){                 // 65<68   69>68 no printing                        
    //     cout<<m;                                          
    // }
    // cout<<endl;                                                           
    // }



    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<"\n";
    }
}