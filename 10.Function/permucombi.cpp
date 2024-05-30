#include<iostream>
using namespace std;

int fact(int x){
    int a=1;
    for(int i=2;i<=x;i++){
        a *=i;
    }
    return a;
}

int combination(int n,int r){
    int z = fact(n)/(fact(r)*fact(n-r));
    return z;
}
int permu(int n,int r){
    int z = fact(n)/fact(n-r);
    return z;
}


int main(){
int n,r,ncr,nr;

cin>>n>>r;
cout<<"\n";

//ncr= fact(n)/(fact(r) * fact(n-r));     

 ncr = combination(n,r);
 int npr = permu(n,r);

cout<<ncr<<"\n";
cout<<npr;
}