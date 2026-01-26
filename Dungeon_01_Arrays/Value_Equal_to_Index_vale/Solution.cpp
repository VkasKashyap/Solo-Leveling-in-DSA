#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        // Linear Scan: Check every element
        for (int i = 0; i < n; i++) {
            // Using i+1 because the problem assumes 1-based indexing
            if (arr[i] == i + 1) {
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};

int main() {
    Solution solver;
    
    // Test Case:
    // Index (1-based): 1   2   3   4   5
    // Value:          15   2  45  12   7
    // Match:               ^ (2 == 2)
    vector<int> arr = {15, 2, 45, 12, 7};

    cout << "--- ⚔️ Quest: Value Equal to Index ⚔️ ---" << endl;
    
    vector<int> result = solver.valueEqualToIndex(arr);

    if (!result.empty()) {
        cout << "Matches found: ";
        for (int x : result) cout << x << " ";
        cout << endl;
    } else {
        cout << "No matches found." << endl;
    }

    return 0;
}