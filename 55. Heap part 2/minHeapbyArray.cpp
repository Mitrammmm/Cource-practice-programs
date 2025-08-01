#include<iostream>
using namespace std;

class Minheap{
public:
    int arr[50];
    // vector<int> v(50);       //does not work
    int idx;

    Minheap(){
        idx = 1;
    }

    int top(){
        return arr[1];
    }

    void push(int x){
        arr[idx] = x;
        int i = idx;
        idx++;
        
        while(i!=1){
            int parent = i/2;
            if(arr[i] < arr[parent])
                swap(arr[i],arr[parent]);
            else break;
            i = parent;  // i= i/2;
        }

    }

    void pop(){
        idx--;
        arr[1] = arr[idx];

        int i = 1; //index 1 m aega na

        while(true){
            int l = 2*i;
            int r = 2*i + 1;

            if(l > idx-1) break;

            if(r > idx-1){
                if(arr[i]>arr[l]){
                    swap(arr[i],arr[l]);
                    i = l;
                }
                break;
            }
    
            if(arr[l] < arr[r]){
               if(arr[i] > arr[l]){
                    swap(arr[i],arr[l]);
                    i = l;
               }
               else break;
            }
            else {
                if(arr[i] > arr[r]){
                    swap(arr[i],arr[r]);
                    i = r;
                }
                else break;
            }
            

        }
    }

    int size(){
        return idx-1;
    }

    void display(){
        for(int i=1;i<=idx-1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};   //class wli end lin m b lgta h ";"

int main(){
    Minheap pq;
    pq.push(10);
    pq.push(13);
    pq.push(14);
    pq.push(16);
    pq.push(9);
    cout<<pq.size()<<endl;
    pq.display();

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    pq.display();


}