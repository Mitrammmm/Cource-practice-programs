#include<iostream>
using namespace std;

int pivotleftrightsetting(int arr[],int si,int ei){
    // int piele = arr[si];
    int piele = arr[(si+ei)/2]; //randomized pivot element
    int count = 0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;   //skip count
        if(arr[i]<=piele) count++;
    }
    int pi = si + count;   //0+4 ,4+2
    swap(arr[(si+ei)/2],arr[pi]);
    
    int i=si,j=ei;
    while(i<pi && j>pi){
        if(arr[i]<=arr[pi]) i++;
        if(arr[j]>arr[pi]) j--;
        else if(arr[i]>arr[pi] && arr[j]<arr[pi]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pi;
}

void quickSort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi = pivotleftrightsetting(arr,si,ei);

    quickSort(arr,si,pi-1);
    quickSort(arr,pi+1,ei);


}

int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}