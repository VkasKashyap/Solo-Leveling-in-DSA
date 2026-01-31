#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm> // For max

using namespace std;

class Solution {
public:
    int maxLen(vector<int>& arr, int n) {
        unordered_map<int, int> mpp;
        
        int maxLen = 0;
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (sum == 0) {
                maxLen = i + 1;
            } 
            else {
                if (mpp.find(sum) != mpp.end()) {
                    int prevIndex = mpp[sum];
                    maxLen = max(maxLen, i - prevIndex);
                } 
                else {
                    mpp[sum] = i;
                }
            }
        }
        return maxLen;
    }
};

int main() {
    Solution solver;
    
    // Test Case:
    // Subarray with 0 sum: {-2, 2, -8, 1, 7} sum is 0. Length 5.
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};
    int n = arr.size();

    cout << "--- ⚔️ Quest: Largest Subarray with 0 Sum ⚔️ ---" << endl;
    
    int result = solver.maxLen(arr, n);
    
    cout << "Length of largest subarray with 0 sum: " << result << endl;
    // Expected: 5 (Indices 1 to 5: -2, 2, -8, 1, 7)

    return 0;
}