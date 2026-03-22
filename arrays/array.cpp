#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    
    int arr[100];
    int size = n;
    
    // Input array elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int choice;
    while (true) {
        cout << "\n--- Menu ---\n";
        cout << "1. Display\n2. Sort\n3. Search\n4. Add\n5. Delete\n6. Exit\n";
        cout << "Choose option: ";
        cin >> choice;
        
        if (choice == 1) {
            // Display
            cout << "Array: ";
            for (int i = 0; i < size; i++)
                cout << arr[i] << " ";
            cout << "\n";
        }
        else if (choice == 2) {
            // Sort
            sort(arr, arr + size);
            cout << "Array sorted!\n";
        }
        else if (choice == 3) {
            // Search
            int val;
            cout << "Enter value to search: ";
            cin >> val;
            for (int i = 0; i < size; i++) {
                if (arr[i] == val) {
                    cout << "Found at index: " << i << "\n";
                    break;
                }
            }
        }
        else if (choice == 4) {
            // Add
            int val;
            cout << "Enter value to add: ";
            cin >> val;
            arr[size++] = val;
            cout << "Added!\n";
        }
        else if (choice == 5) {
            // Delete
            int idx;
            cout << "Enter index to delete: ";
            cin >> idx;
            for (int i = idx; i < size - 1; i++)
                arr[i] = arr[i + 1];
            size--;
            cout << "Deleted!\n";
        }
        else if (choice == 6) {
            break;
        }
    }
    
    return 0;
}