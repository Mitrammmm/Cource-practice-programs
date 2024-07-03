#include<iostream>
#include<vector>
using namespace std;

class Queue{
public:   
    int f;
    int b;    
    // int arr[7];
    // Queue(){   //constructor
    //     f = 0;
    //     b = 0;
    // }

    vector<int> arr;
    Queue(int size){   //constructor
        f = 0;
        b = 0;
        vector<int> v(size);
        arr = v;
    }

    void push(int val){
        // if(b== 7){
        if(b==arr.size()){
            cout<<"queue is full!"<<"\n";
            return;
        }
        arr[b] = val;  //value back s insert hoti & front s pop
        b++;           //Always (last+1)th index m
    }
    
    void pop(){
        if(b-f == 0){   //size = b-f
            cout<<"queue is empty!"<<"\n";
            return;
        }
        f++;
    }

    int front(){
        if(b-f == 0){
            cout<<"queue is empty!"<<"\n";
            return -1;
        }
        return arr[f];
    }

    int back(){
        if(b-f == 0){
            cout<<"queue is empty!"<<"\n";
            return -1;
        }
        return arr[b-1];
    }

    int size(){
        return b-f;
    }

    bool empty(){
        if(b-f == 0) return true;
        else return false;
    }

    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";

    }

};

int main(){
    // Queue q;
    Queue q(7);  

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.display();
    q.push(6);
    q.push(7);
    q.push(8);
    q.display();
    q.pop();
    q.display();
    cout<<q.front()<<"\n";
    cout<<q.back()<<"\n";
    cout<<q.empty()<<"\n";
    cout<<q.size()<<"\n";

}
