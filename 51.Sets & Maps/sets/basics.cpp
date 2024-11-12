#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    // vector<int> v;
    // stack<int> s;

    unordered_set<int> s;
    s.insert(1);     //values randomly store hoti h 
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    

    //for each loop t fetch each & every value
    for(int x : s){
        cout<<x<<" ";
    }
    cout<<"\n";


    //******Set Unique ele k hee store krta ha */
    // agar already h to further store nhi krega

    cout<<s.size()<<"\n";
    s.insert(4);
    s.insert(5);
    cout<<s.size()<<"\n";

    
    int tar = 5;
    //s.find()-> it searches in the set & if not found, returns
    // last ele

    // if(s.find()==true)      **totally wrong
    if(s.find(tar)!=s.end()){  //exists !=  , == not exists
        cout<<"exists";
    }
    else cout<<"Not exists";


}