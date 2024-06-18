#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {100,80,60,75,81,60};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    int pgi[n];

    //method 2 using stack!!! tc-O(2n) sc-O(0)
    stack<int> st;
    pgi[0] = -1;
    st.push(0);

    for(int i=1;i<n;i++){   //pop pgi push
        while(st.size()>0 && arr[st.top()] <= arr[i]) st.pop();

        if(st.size()==0) pgi[i] = -1;
        else pgi[i] = st.top();

        st.push(i);
    }

    for(int i=0;i<n;i++){
        cout<<i-pgi[i]<<" ";
    }
    cout<<"\n";
}