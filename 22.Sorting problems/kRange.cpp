#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

float min (float a,float b){
    if(a<b) return a;
    else return b;
}
float max (float a,float b){
    if(a>=b) return a;
    else return b;
}


int main(){
    int  arr[] = {5,3,10,3};
    int n =4;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    float kmax = (float)(INT_MIN);
    float kmin = (float)(INT_MAX);
    bool flag = true;

    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i-1]){  //kmin
            kmin = max(kmin,(arr[i]+arr[i-1])/2.0);
        }
        else{ //kmax
            kmax = min(kmax,(arr[i]+arr[i-1])/2.0);

        }
        if(kmin>kmax){
            flag = false;
            break;
        }
    }
    if(flag==false) cout<<-1;
    else if(kmin==kmax){
        cout<<"there's only one value"<<kmin;
    }
    else{
        if(kmin-(int)kmin>0) kmin = kmin +1;

        cout<<"Range : ["<<kmin<<","<<kmax<<"]";
    }
}