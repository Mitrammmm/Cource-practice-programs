#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& c){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) c[k++] = a[i++];
        else c[k++] = b[j++];
    }
    if(i==a.size()) while(j<b.size()) c[k++] = b[j++];
    if(j==b.size()) while(i<a.size()) c[k++] = a[i++];
}

void mergeSort(vector<int>& v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);
    //copying
    for(int i=0;i<n1;i++){
        a[i] = v[i];
    }
    for(int i=0;i<n2;i++){
        b[i] = v[n1+i];
    }
    //recursion
    mergeSort(a);
    mergeSort(b);
    //merge
    merge(a,b,v);
    //S.C. reduce krne k liye in b/w array/vec t dlt krdo
    // delete array;
    // vector.clear();
    a.clear();
    b.clear();
}

int main(){
    int arr[]={1,7,4,6,89,0,3,3,2,5};
    int n1= sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n1);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    mergeSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}