#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& c){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        // if(a[i]<b[j]) c[k++] = a[i++];
        if(a[i]<=b[j]) c[k++] = a[i++];   //Became stable!!
        else c[k++] = b[j++];
    }
    if(i==a.size()) while(j<b.size()) c[k++] = b[j++];
    if(j==b.size()) while(i<a.size()) c[k++] = a[i++];
}

int main(){
    int arr[]={1,3,5,6};
    int n1= sizeof(arr)/sizeof(arr[0]);
    
    int brr[]={2,3,4,6,8};
    int n2= sizeof(brr)/sizeof(brr[0]);

    //new thing
    vector<int> v(arr,arr+n1);
    vector<int> w(brr,brr+n2);
    vector<int> res(n1+n2);
    merge(v,w,res);

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}