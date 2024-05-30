#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"enter 1st matrix rows and column"<<"\n";
    cin>>m>>n;

    int a[m][n];
        cout<<"enter 1st mat eles"<<"\n";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
    int minr,minc,maxr,maxc;
    minr = 0;
    maxr = m-1;
    minc = 0;
    maxc = n-1;

    //spiral
    while(minr <= maxr && minc <= maxc){
        for(int j=minc;j<=maxc;j++){
            cout<<a[minr][j]<<" ";
        }
         minr++;

        for(int i=minr;i<=maxr;i++){
            cout<<a[i][maxc]<<" ";
        }
         maxc--;

        //bottom left
        if(minr <= maxr){ 
        for(int j=maxc;j>=minc;j--){
            cout<<a[maxr][j]<<" ";
        }  
        maxr--;
        }

        //top
        if(minc <= maxc){
        for(int i=maxr;i>=minr;i--){
            cout<<a[i][minc]<<" ";
        }
        minc++;
        }
    }    
}        