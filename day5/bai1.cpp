#include <iostream>
#include <vector>
using namespace std;

// Find maximum sum of subarray of size k
int maxSumSubarray(vector<int>& arr, int k) {
    int n = arr.size();
    if (k > n) return -1;
    
    // Calculate sum of first window
    int maxSum = 0;
    for (int i = 0; i < k; i++) {
        maxSum += arr[i];
    }
    
    int currentSum = maxSum;
    
    // Slide the window
    for (int i = k; i < n; i++) {
        currentSum = currentSum - arr[i - k] + arr[i];
        maxSum = max(maxSum, currentSum);
    }
    
    return maxSum;
}

int main() {
    vector<int> arr = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int k = 4;
    
    cout << "Array: ";
    for (int x : arr) cout << x << " ";
    cout << "\nWindow size: " << k << endl;
    cout << "Maximum sum: " << maxSumSubarray(arr, k) << endl;
    
    return 0;
}