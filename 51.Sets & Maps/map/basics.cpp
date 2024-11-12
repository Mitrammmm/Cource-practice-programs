#include<iostream>
#include<unordered_map>
using namespace std;

// class couple{
//    public:
//     string f;
//     int se;
// }

int main(){
    unordered_map<string,int> m;  //stores pair; key & value

    pair<string,int> p1;   //built in pair {first,second}
    p1.first = "mitra";
    p1.second = 353;
    m.insert(p1);

    // couple c1;
    // c1.f = "mitram";
    // c1.se = 300;
    // m.insert(c1);

    pair<string,int> p2;   
    p2.first = "mra";
    p2.second = 53;
    m.insert(p2);

    //Second method

    // m[key] = value  {first,second}
    m["saumitra"] = 100;
    m["sau"] = 1700;
    m["smita"] = 10;

   
   for(pair<string,int> ele : m){ //Note to use: for(auto ele : m)
    cout<<ele.first<<" "<<ele.second<<"\n";
   }
   cout<<"\n"<<m.size()<<"\n";

   //m.erase(key);
   m.erase("smita");

   cout<<"\n"<<m.size()<<"\n";

   cout<<endl<<m["sau"]; //value
   
}