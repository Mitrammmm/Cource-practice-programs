#include<iostream>
using namespace std;

class Stack{   //user def. data structure
public:

    int arr[10];
    int idx;
    Stack(){
        idx = -1;
    }

    void push(int val){
        if(idx == sizeof(arr)/sizeof(arr[0]) - 1){
            cout<<"Stack is Full!"<<"\n";
            return;
        }
        idx++;
        arr[idx] = val;
    }

    void pop(){
        if(idx ==-1){
            cout<<"Stack is Empty"<<"\n";
            return;
        }
        idx--;
    }

    int  top(){
        if(idx ==-1){
            cout<<"Stack is Empty!"<<"\n";
            return -1;
        }
        return arr[idx];
    }

    int size(){
        return idx+1;
    }

    void display(){
        for(int i=0;i<=idx;i++){
            cout<<arr[i]<<" ";
        };
        cout<<"\n";
    }
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
    st.push(25);
    st.push(25);
    st.push(25);

    st.display();

}