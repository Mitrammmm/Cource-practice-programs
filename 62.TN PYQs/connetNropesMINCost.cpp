// 1️⃣ Problem Description
// You are given N ropes, each having a certain length.
// You want to connect all the ropes into one single rope.
// Rule
// You can connect any two ropes at a time.
// The cost of connecting two ropes is equal to the sum of their lengths.
// After connecting two ropes, the resulting rope becomes available to connect with other ropes.
// Goal
// Find the minimum total cost required to connect all the ropes into one rope

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int mincost(vector<int> ropes){
    priority_queue<int, vector<int>, greater<int> > pq;   //sc-> O(n)

    for(auto X : ropes) pq.push(X);    // n * logn

    int ans = 0;
    while(pq.size()>1){    // n * log n 
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        
        int sum = a+b;

        pq.push(sum);
        ans += (sum);
    }

    return ans;
}

int main(){
    return 0;
}