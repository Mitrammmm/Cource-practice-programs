vector<int> range_bas(vector<int> arr, int low, int high) {
    int n = arr.size();

    unordered_map<int, int> lastPos;
    vector<int> uniqueRange;

    // Step 1: record last occurrence
    for (int i = 0; i < n; i++) {
        if (arr[i] > low && arr[i] <= high) {
            if (lastPos.find(arr[i]) == lastPos.end()) {
                uniqueRange.push_back(arr[i]);
            }
            lastPos[arr[i]] = i;
        }
    }

    // Step 2: sort range elements by last occurrence
    sort(uniqueRange.begin(), uniqueRange.end(),
         [&](int a, int b) {
             return lastPos[a] < lastPos[b];
         });

    // Step 3: rebuild array in place
    int write = 0;

    // non-range elements first
    for (int i = 0; i < n; i++) {
        if (!(arr[i] > low && arr[i] <= high)) {
            arr[write++] = arr[i];
        }
    }

    // range elements ordered by last occurrence
    for (int val : uniqueRange) {
        arr[write++] = val;
    }

    return arr;
}