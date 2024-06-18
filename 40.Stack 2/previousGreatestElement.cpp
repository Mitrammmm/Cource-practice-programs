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

    int ans[n];

    //method 2 using stack!!! tc-O(2n) sc-O(0)
    stack<int> st;
    ans[0] = -1;
    st.push(ans[0]);

    for(int i=1;i<n;i++){   //pop ans push
        while(st.size()>0 && st.top()<=arr[i]) st.pop();

        if(st.size()==0) ans[i] = -1;
        else ans[i] = st.top();

        st.push(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}