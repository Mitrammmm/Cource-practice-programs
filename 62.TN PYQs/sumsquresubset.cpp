// Problem
// Given an array arr, consider all possible subsets.
// For each subset:
// Find the sum of elements
// Square that sum
// Add all these values
// Return the total sum.


#include <iostream>
#include <vector>
using namespace std;

long long sumsquaresubset(vector<int>& arr){        // TC  O(n * 2pown)   & SC O(1)
    long long ans = 0;

    int n = arr.size();
    int sbsets = 1<<n;
    int sum = 0;

    for(int num = 0;num < sbsets;num++){
        for(int i=0;i<n;i++){
            if(num & (1<<i)) sum += arr[i];
        }
        ans += sum*sum;
        sum = 0;
    }
    return ans;
}

int main(){
    vector<int> v = {1,2};
    cout<<sumsquaresubset(v);

    return 0;
};


                                //Optimized solution        Time: O(n²)
#include <iostream>
#include <vector>
using namespace std;

long long sumSquareSubsets(vector<int>& arr) {

    int n = arr.size();
    long long ans = 0;

    long long single = 1LL << (n-1);
    long long pairc = (n >= 2) ? 1LL << (n-2) : 0;

    for(int i = 0; i < n; i++)            //O(n)
        ans += arr[i] * arr[i] * single;

    for(int i = 0; i < n; i++)              //O(n2)
        for(int j = i+1; j < n; j++)
            ans += 2LL * arr[i] * arr[j] * pairc;

    return ans;
}