#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        if (n < 2) return -1; // Not enough elements

        int largest = -1;
        int secondLargest = -1;

        for (int i = 0; i < n; i++) {
            // Case 1: We found a new "King"
            if (arr[i] > largest) {
                secondLargest = largest; // Demote old King
                largest = arr[i];        // Crown new King
            }
            // Case 2: We found a new "Hand" (Better than current 2nd, but not King)
            // CRITICAL: arr[i] != largest (Avoid duplicates)
            else if (arr[i] > secondLargest && arr[i] != largest) {
                secondLargest = arr[i];
            }
        }

        return secondLargest;
    }
};

int main() {
    Solution solver;
    
    // Test Case 1: Standard
    vector<int> arr1 = {12, 35, 1, 10, 34, 1};
    // Test Case 2: Duplicates of Max
    vector<int> arr2 = {10, 5, 10}; 

    cout << "--- ⚔️ Quest: Second Largest Element ⚔️ ---" << endl;
    
    cout << "Test 1 (Expected 34): " << solver.getSecondLargest(arr1) << endl;
    cout << "Test 2 (Expected 5): " << solver.getSecondLargest(arr2) << endl;

    return 0;
}