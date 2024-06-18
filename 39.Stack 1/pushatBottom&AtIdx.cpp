#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> s){
    while(s.size()>0){
        cout<<s.top()<<" ";
        s.pop();
    }
}
void pushatbottom(stack<int>& s,int val){
    int n = s.size()+1;
    int arr[n], i=1;
    // arr[0] = val;
    arr[n] = val;
    while(s.size()>0){
        arr[i] = s.top();  //val a b c d
        s.pop();
        i++;
    }

    // for(int i=0;i<n;i++){
    //     s.push(arr[i]);
    // }

    for(int i=n;i>0;i--){
        s.push(arr[i]);
    }

}

void pushAtIndex(stack<int>& s,int idx, int val){
    stack<int> temp;
    while(s.size()>idx){
        temp.push(s.top());
        s.pop();
    }
    s.push(val);
    while(temp.size()>0){
        s.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(5);
    st.push(15);
    st.push(25);
    st.push(35);
    st.push(45);
    st.push(55);
    print(st);
    cout<<"\n";

    pushatbottom(st,100);
    print(st);
    cout<<"\n";

    pushAtIndex(st,2,22);
    print(st);
    cout<<"\n";
    


    
}