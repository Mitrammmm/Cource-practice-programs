// 🧩 Problem Statement (Binary Ratio Subarray Problem)

//  You are given a binary array (0 and 1).
//  Find the number of subarrays in which:

// C0/C1 == X/Y 

// where C0 == count of zeroes in the subarray [i..j] 
// where C1 == count of ones in the subarray [i..j] 

// A = [1,0,1,1,1,1,1], X/Y = 1/2 

// Valid subarrays = 2
// → [1,0,1], [0,1,1]

// 📌 Example 2

// A = [1,0,0,1,1,1,1], X/Y = 1/2 
// Valid subarrays = 3 
// → [3..5], [1..6], [2..7]

                                    //Solution    brute-force (O(n3))
// get all possible subarray -> count 0 & 1s and check RATIO -> IF = add to final arra -> return final array

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v  = {1,0,0,1,1,1,1};
    float ratio = 0.5;

    int z = 0,nz=0;
    int cnt = 0;   //abhi k liye cnt return kr tha hu
    for(int i=0;i<v.size();i++){    //O(n)
        for(int j=i;j<v.size();j++){    //talk ideally here -> O(n)

            for(int k=i;k<=j;k++){      // sometimes 1 ,2 ,3 --- n   but opverall we take as O(n)
                if(v[k] == 1) nz++;
                if(v[k]==0) z++;                
            }
            float rt = (float)z/(float)nz;
            if(rt == ratio) cnt++;
            z = 0,nz=0;
        }
    }
    cout<<"Our Ans is : "<<cnt;
    
    return 0;
}

                        //solution