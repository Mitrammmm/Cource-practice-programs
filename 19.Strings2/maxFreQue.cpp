#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        string s;
        cout<<"enter 1st string"<<"\n";
        getline(cin,s);

        // int max = 0;
        // char x;
        // for(int i=0;i<s.length();i++){
        //     int count = 1;  //already given self count
        //     for(int j=i+1;j<s.length();j++){
        //         if(s[i]==s[j]) count++;
        //     }
        //     if(count>=max){
        //         //x = s[i];    //not app if more tn 1 char has samemax value aabbcc
        //         max = count;
        //     }
        // }

        // for(int i=0;i<s.length();i++){
        //     char x = s[i];
        //     int count = 1; 
        //     for(int j=i+1;j<s.length();j++){
        //         if(s[i]==s[j]) count++;
        //     }
        //     if(count==max) cout<<"max :"<<x<<" "<<max<<"\n";
        // }




        //fastway
        vector<int> v(26,0);

        for(int i=0;i<s.length();i++){
            v[((int)s[i])-97] += 1;
        }

        int max = 0;
    
        for(int i=0;i<v.size();i++){
            if(v[i]>max){
                max = v[i];
            }
        }

        int ch;
        for(int i=0;i<v.size();i++){
            if(v[i]==max){
                ch = i;
                cout<<"max fre is: "<<max<<" & of "<<((char)(ch+97))<<"\n";
            }
        }

        
        
}