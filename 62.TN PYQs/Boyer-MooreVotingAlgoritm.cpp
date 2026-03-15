#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {

    int candidate = 0;
    int count = 0;

    // Phase 1: Find candidate
    for(int num : nums){
        if(count == 0)
            candidate = num;

        if(num == candidate)
            count++;
        else
            count--;
    }

    // Phase 2: Verification
    count = 0;
    for(int num : nums){
        if(num == candidate)
            count++;
    }

    if(count > nums.size()/2)
        return candidate;
    else
        return -1; // no majority element
}

int main(){

    vector<int> arr = {2,2,1,1,1,2,2};

    cout << majorityElement(arr);

    return 0;
}