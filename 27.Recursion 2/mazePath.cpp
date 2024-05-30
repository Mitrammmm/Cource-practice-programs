// either 1 or 2 jumps or 3 jumps
#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sc>ec || sr>er) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways = maze(sr,sc+1,er,ec);
    int downways = maze(sr+1,sc,er,ec);
    return (rightways+downways);
}

int maze2(int er,int ec){  //better way as starting t 0,0 y 1,1 hee hoga
    if(ec<0 || er<0) return 0;
    if(er==0 && ec==0) return 1;
    int rightways = maze2(er,ec-1); //right
    int downways = maze2(er-1,ec); //down
    return (rightways+downways);
}

void printpath(int sr,int sc,int er,int ec,string s){
    if(sc>ec || sr>er) return;
    if(sr==er && sc==ec){
        cout<<s<<"\n";
        return;
    }
    printpath(sr,sc+1,er,ec,s+"R");
    printpath(sr+1,sc,er,ec,s+"D");
}

void printpath2(int er,int ec,string s){
    if(ec<0 || er<0) return;
    if(0==er && 0==ec){
        cout<<s<<"\n";
        return;
    }
    printpath2(er-1,ec,s+"R");
    printpath2(er,ec-1,s+"D");
}


int main(){
    //  cout<<maze(0,0,2,2);
    //  cout<<maze2(2,2);
    //printpath(0,0,2,2,"");
    printpath2(2,2,"");

}