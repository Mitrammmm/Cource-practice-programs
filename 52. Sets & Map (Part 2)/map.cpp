#include<iostream>
#include<map>// here, insertion, deletion, finding & earasing TC is "logn"!!
using namespace std;
int main(){
    map<int,int> m;

    //keys ko sorted & unique order m store krta h!

    m[3] = 45;
    m[4] = 66;
    m[2] = 78;
    
    for(auto x : m) cout<<x.first<<" ";  //printed in increasing order
    cout<<"\n";


    map<string,int> mm;

    mm["mitra"] = 45;
    mm["aa"] = 66;
    mm["ab"] = 78;
    
    for(auto x : mm) cout<<x.first<<" "; 
    
    //Note
    // here, insertion, deletion, finding & earasing TC is "logn"!!
}