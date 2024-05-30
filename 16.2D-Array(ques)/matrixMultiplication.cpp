#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cout<<"enter 1st matrix rows and column"<<"\n";
    cin>>m>>n;

    int p,q;
    cout<<"enter 2nd matrix rows and column"<<"\n";
    cin>>p>>q;

    if(n!=p){
        cout<<"MM not possible";
    }
    else{
        int a[m][n];
        cout<<"enter 1st mat eles"<<"\n";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }

        int b[p][q];
        cout<<"enter 2nd mat eles"<<"\n";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }

        //resultant mat
        int r[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                r[i][j] = 0;
                //main thing
                for(int k=0;k<n;k++){
                    r[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        //printing
        cout<<"MM IS :"<<"\n";
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<r[i][j]<<" ";
            }
            cout<<"\n";
        }

        
    }

}
