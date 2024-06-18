#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {2,3,5,1,7,4,53,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    int nge[n];

    // //method 1 brute force  tc-O(n sqr) sc-O(1)
    // for(int i=0;i<n;i++){
    //     nge[i] = -1;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]>arr[i]) {
    //             nge[i] = arr[j];
    //             break;
    //         }
    //     }
    // }

    //method 2 using stack!!! tc-O(2n) sc-O(0)
    stack<int> st;
    nge[n-1] = -1;
    st.push(nge[n-1]);

    for(int i=n-2;i>=0;i--){   //pop ans push
        while(st.size()>0 && st.top()<=arr[i]) st.pop();

        if(st.size()==0) nge[i] = -1;
        else nge[i] = st.top();

        st.push(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<"\n";
}