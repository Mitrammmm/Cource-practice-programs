#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2;
    v2.push_back(1);
    v2.push_back(2);

    vector<int> v3;
    v3.push_back(1);
    v3.push_back(2);
    v3.push_back(3);
    v3.push_back(1);
    v3.push_back(2);
    v3.push_back(3);

    vector< vector<int> > v;
    //v.push_back(1);  does not work coz its DType is vector
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[0][2]<<"\n";

}