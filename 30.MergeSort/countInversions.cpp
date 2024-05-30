#include<iostream>
#include<vector>
using namespace std;

int cou =0; //global var

int inversions(vector<int>& a,vector<int>& b){
    int i=0,j=0,count=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){

            
            count += (a.size()-i);
            j++;
        }
        else i++;
    }
    return count;
}

void merge(vector<int>& a,vector<int>& b,vector<int>& c){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) c[k++] = a[i++];
        else c[k++] = b[j++];
    }
    if(i==a.size()) while(j<b.size()) c[k++] = b[j++];
    if(j==b.size()) while(i<a.size()) c[k++] = a[i++];
}

int mergeSort(vector<int>& v){
    int count =0;
    int n=v.size();
    if(n==1) return 0;
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
    count +=mergeSort(a);
    count +=mergeSort(b);
    //counting
    count += inversions(a,b);
    //merge
    merge(a,b,v);

    a.clear();
    b.clear();

    return count;
}

int main(){
    //method 1 BRUTE/NAIVE  O(n2)   O(1)
    // int arr[]={1,3,4,5};
    // int n1= sizeof(arr)/sizeof(arr[0]);
    // vector<int> v(arr,arr+n1);

    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<"\n";
    // int count = 0;
    // for(int i=0;i<n1-1;i++){
    //     for(int j=0;j<n1;j++){
    //         if(v[i]>v[j]) count++;
    //     }
    // }
    // cout<<count;

    int arr[]={3,2,1};
    int n1= sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n1);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    cout<<mergeSort(v);

    // cout<<cou;
}