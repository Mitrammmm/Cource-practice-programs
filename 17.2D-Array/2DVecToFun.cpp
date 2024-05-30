#include<iostream>
#include<vector>
using namespace std;

void change(int arr[][2]){  //must to mention size!!
    arr[0][0] = 100;
}

void changevec(vector< vector<int> > &v){  //no need fr size
    v[0][2] = 99;
}
int main(){
    int arr[3][2] ={{1,2},{3,4},{5,6}};

    cout<<arr[0][0]<<"\n";
    change(arr);
    cout<<arr[0][0]<<"\n";

    //now for vector
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
    changevec(v);
    cout<<v[0][2];
    
}