#include<iostream>
#include<vector>
using namespace std;

class Stack{   //user def. data structure
public:

    vector<int> v;

    void push(int val){
        v.push_back(val);
    }
    void pop(){
        if(v.size()==0){
            cout<<"Stack is Empty"<<"\n";
            return;
        }
        v.pop_back();
    }
    int  top(){
        if(v.size()==0){
            cout<<"Stack is Empty!"<<"\n";
            return -1;
        }
        return v[v.size()-1];
    }
    int size(){
        return v.size();
    }
    // void display(){
    //     for(int i=0;i<arr.length();i++){
    //         cout<<arr[i]<<" ";
    //     };
    //     cout<<"\n";
    // }
};

int main(){
    Stack st;
    st.push(5);
    st.push(15);
    st.push(25);
    cout<<st.size()<<"\n";
    cout<<st.top()<<"\n";

    st.pop();
    cout<<st.size()<<"\n";
    cout<<st.top()<<"\n";

}