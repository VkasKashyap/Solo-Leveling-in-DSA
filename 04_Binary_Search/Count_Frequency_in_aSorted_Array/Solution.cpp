#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countFreq(vector<int>& arr, int target) {
        int n = arr.size();
        
        // --- Step 1: Find First Occurrence (low) ---
        int s = 0, e = n - 1;
        int low = -1;
        
        while (s <= e) {
            int m = s + (e - s) / 2;
            
            if (arr[m] == target) {
                low = m;      // Found it! Record index.
                e = m - 1;    // Try to find one to the LEFT
            }
            else if (arr[m] > target) {
                e = m - 1;
            }
            else {
                s = m + 1;
            }
        }
        
        // Optimization: If element not found at all, return 0 immediately
        if (low == -1) return 0;

        // --- Step 2: Find Last Occurrence (up) ---
        s = 0; e = n - 1; // Reset pointers
        int up = -1;
        
        while (s <= e) {
            int m = s + (e - s) / 2;
            
            if (arr[m] == target) {
                up = m;       // Found it! Record index.
                s = m + 1;    // Try to find one to the RIGHT
            }
            else if (arr[m] > target) {
                e = m - 1;
            }
            else {
                s = m + 1;
            }
        }
        
        // --- Step 3: Calculate Count ---
        return up - low + 1;
    }
};

int main() {
    Solution solver;
    
    // Test Case: Target = 2
    vector<int> arr = {1, 1, 2, 2, 2, 2, 3};
    int target = 2;
    
    cout << "--- ⚔️ Quest: Count Frequency ⚔️ ---" << endl;
    cout << "Target: " << target << endl;
    
    int count = solver.countFreq(arr, target);
    
    cout << "Frequency: " << count << endl;
    // Expected Output: 4
    
    return 0;
}