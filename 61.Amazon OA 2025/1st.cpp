// A delivery team wants to analyze performance by checking continuous groups of packages where the average package weight is greater than or equal to K.

// Your task is to find the number of such continuous subarrays that satisfy this condition.
// Example:

// Input:
// N = 5, K = 4
// arr = [3, 4, 5, 6, 2]

// Output:
// 12
// Explanation:
//  Some of the contiguous groups of packages with average weight ≥ 4 are:
//  [3,4,5], [4,5], [4,5,6], [5,6], [6], [3,4,5,6], [5,6,2], [3,4,5,6,2] ... and more like them exist 

// 📏 Constraints :
// 1 ≤ N ≤ 100000
// 1 ≤ arr[i], K ≤ 10⁹



// solution
#include <bits/stdc++.h>
using namespace std;
using ll = long long;


long long countSubarraysWithAvgAtLeastK(const vector<long long>& arr, long long K) {
    // YOUR IMPLEMENTATION HERE     ***********************************
    long long cnt = -1;
    long long sum = 0;
    if(arr.size() == 0 ) return -1;
    if(rr.size() == 1 ) return (arr[0] < k) -1 : 1;

    int n = arr.size();
    int nm = 1;
    for(int i=0;i<n;i++){
        if(arr[i] > k || arr[i] == k) cnt++;
        sum += arr[i]/nm;
        nm++;
        if(sum >= k){
            int j = i;
            int cm = nm;
            
        }

    }

}

/* Simple brute-force expected value calculator (for verifying tests)
   This is only used to compute expected outputs for the builtin tests.
   It's O(n^2) and not intended as the submission solution.
*/
long long brute_force_expected(const vector<long long>& a, long long K){
    int n = (int)a.size();
    long long cnt = 0;
    for(int i=0;i<n;i++){
        long long s = 0;
        for(int j=i;j<n;j++){
            s += a[j];
            // check average >= K  -> s/(j-i+1) >= K  <=> s >= K*(len)
            long long len = j - i + 1;
            if (s >= K * len) cnt++;
        }
    }
    return cnt;
}

/* Built-in tests (2 example-like + 3 extra good tests)
   You can add/modify tests here.
*/
void run_builtin_tests(){
    struct Test {
        vector<long long> a;
        long long K;
        string note;
    };
    vector<Test> tests = {
        // Example-like (from your explanation)
        {{3,4,5,6,2}, 4, "Example: [3,4,5,6,2], K=4"},

        // Another small example
        {{1,2,3}, 2, "Small example: [1,2,3], K=2"},

        // Extra: repeated equal elements
        {{4,4,4,4}, 4, "All equal to K: [4,4,4,4], K=4"},

        // Extra: single element greater than K
        {{5}, 4, "Single element > K: [5], K=4"},

        // Extra: mixed numbers including a larger outlier
        {{0, -1, 10, 3, 4}, 3, "Mixed values: [0,-1,10,3,4], K=3"}
    };

    cout << "Running built-in tests (" << tests.size() << "):\n\n";
    for(size_t i=0;i<tests.size();++i){
        auto &t = tests[i];
        long long expected = brute_force_expected(t.a, t.K);
        long long got = countSubarraysWithAvgAtLeastK(t.a, t.K);
        cout << "Test #" << i+1 << " - " << t.note << "\n";
        cout << " array = [";
        for(size_t j=0;j<t.a.size();++j){ if(j) cout<<", "; cout<<t.a[j]; }
        cout << "], K=" << t.K << "\n";
        cout << " expected (bruteforce) = " << expected << "\n";
        if(got == -1) {
            cout << " your output = (not implemented)\n";
            cout << " => Implement countSubarraysWithAvgAtLeastK(...) and re-run.\n\n";
        } else {
            cout << " your output = " << got << (got == expected ? "  ✅\n\n" : "  ❌\n\n");
        }
    }
}

/* Input mode:
   If input is provided, the program reads T testcases in this format:
     T
     N K
     a1 a2 ... aN
   and prints answers (one per line) using your function.
   If no input provided (stdin EOF), builtin tests run.
*/
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Check if there's input on stdin
    cin >> std::ws;
    if (cin.peek() == EOF) {
        run_builtin_tests();
        return 0;
    }

    int T;
    if (!(cin >> T)) {
        // Fallback to builtin tests
        run_builtin_tests();
        return 0;
    }

    while(T--){
        int N;
        long long K;
        cin >> N >> K;
        vector<long long> arr(N);
        for(int i=0;i<N;i++) cin >> arr[i];
        cout << countSubarraysWithAvgAtLeastK(arr, K) << '\n';
    }
    return 0;
}
