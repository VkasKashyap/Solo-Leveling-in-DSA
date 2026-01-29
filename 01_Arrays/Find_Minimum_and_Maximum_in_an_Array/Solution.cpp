#include <iostream>
#include <vector>
#include <algorithm> // For min/max functions
#include <limits.h>  // For INT_MIN, INT_MAX

using namespace std;

class Solution {
public:
    pair<long long, long long> getMinMax(vector<long long>& arr) {
        // Edge Case: Empty array
        if (arr.empty()) return {0, 0};

        long long minVal = arr[0];
        long long maxVal = arr[0];

        // Linear Scan: O(N)
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < minVal) {
                minVal = arr[i];
            }
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }

        return {minVal, maxVal};
    }
};

int main() {
    Solution solver;
    
    // Test Case
    vector<long long> arr = {3, 2, 1, 56, 10000, 167};
    
    cout << "--- ⚔️ Quest: Find Min and Max ⚔️ ---" << endl;
    
    pair<long long, long long> result = solver.getMinMax(arr);
    
    cout << "Minimum Element: " << result.first << endl;  // Expected: 1
    cout << "Maximum Element: " << result.second << endl; // Expected: 10000

    return 0;
}