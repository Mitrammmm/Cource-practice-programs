#include<iostream>
#include<vector>
using namespace std;

class Queue{
public:   
    int f;
    int b;   
    int s; 
    vector<int> arr;
    Queue(int size){   //constructor
        f = 0;
        b = 0;
        s = 0;
        vector<int> v(size);
        arr = v;
    }

    void push(int val){
        if(b==arr.size()){
            cout<<"queue is full!"<<"\n";
            return;
        }
        arr[b] = val;  //value back s insert hoti & front s pop
        b++;           //Always (last+1)th index m
        s++;
        return true;
    }
    
    void pop(){
        if(s == 0){   //size = b-f
            cout<<"queue is empty!"<<"\n";
            return;
        }
        f++;
        s--;
    }

    int front(){
        if(s == 0){
            cout<<"queue is empty!"<<"\n";
            return -1;
        }
        return arr[f];
    }

    int back(){
        if(s == 0){
            cout<<"queue is empty!"<<"\n";
            return -1;
        }
        return arr[b-1];
    }

    int size(){
        return s;
    }

    bool empty(){
        if(s == 0) return true;
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
