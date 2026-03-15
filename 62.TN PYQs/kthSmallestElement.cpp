// repeated search me O(nk) & sc-> O(1) but array modify krn od rha INT_MAX rkhna pd rha
// min heap me O(nlogn)  & SC-> O(N)
//mx heap O(nlogk)  & SC-> O(k)                  // best with maxheap


#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int kthSmallest(vector<int>& arr, int k)
{
    priority_queue<int> maxHeap;

    for(int i = 0; i < k; i++)
        maxHeap.push(arr[i]);

    for(int i = k; i < arr.size(); i++)
    {
        if(arr[i] < maxHeap.top())
        {
            maxHeap.pop();
            maxHeap.push(arr[i]);
        }
    }

    return maxHeap.top();
}

int main()
{
    vector<int> arr = {7,10,4,3,20,15};
    int k = 3;

    cout << kthSmallest(arr,k);
}