#include<iostream>
#include<set> 
using namespace std;
int main(){
    set<int> s;

    //khus s sort krke UNIQUE elements k store kr leta h, sorted order m

    s.insert(5);
    s.insert(1);
    for(int x : s) cout<<x<<" ";  //printed in increasing order

    //Note
    // here, insertion, deletion, finding & earasing TC is "logn"!!
}