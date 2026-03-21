#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    // Min heap using priority_queue
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    // Insert elements
    vector<int> arr = {9, 5, 6, 2, 3, 7, 1, 4, 8};
    
    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n\n";
    
    // Push all elements to min heap
    for (int x : arr) {
        minHeap.push(x);
    }
    
    // Extract elements in sorted order (ascending)
    cout << "Min heap sort (ascending): ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << "\n";
    
    // Alternative: using make_heap
    cout << "\nUsing make_heap:\n";
    vector<int> arr2 = {9, 5, 6, 2, 3, 7, 1, 4, 8};
    make_heap(arr2.begin(), arr2.end(), greater<int>());
    
    cout << "Min heap: ";
    for (int x : arr2) cout << x << " ";
    cout << "\n";
    
    sort_heap(arr2.begin(), arr2.end(), greater<int>());
    cout << "After sort_heap: ";
    for (int x : arr2) cout << x << " ";
    cout << "\n";
    
    return 0;
}