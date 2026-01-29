#include <iostream>
#include <vector>
#include <climits> // For INT_MIN

using namespace std;

class Solution {
public:
    // Function to find the sum of contiguous subarray with maximum sum.
    long long int maximumSubarraySum(vector<int>& v) {
        long long int sum = 0;
        long long int maxi = LLONG_MIN; // Handle negative numbers
        int n = v.size();

        for (int i = 0; i < n; i++) {
            sum += v[i];

            // Update max before resetting sum (Handling all-negative case)
            if (sum > maxi) {
                maxi = sum;
            }

            // If sum becomes negative, it's not useful, reset it
            if (sum < 0) {
                sum = 0;
            }
        }
        return maxi;
    }
};

int main() {
    Solution solver;
    
    // Test Case 1: Standard Mixed Array
    vector<int> arr1 = {1, 2, 3, -2, 5}; 
    // Subarray: {1, 2, 3, -2, 5} Sum = 9
    
    // Test Case 2: All Negatives (Crucial Check)
    vector<int> arr2 = {-2, -3, -4, -1};
    // Subarray: {-1} Sum = -1

    cout << "--- ⚔️ Quest: Kadane's Algorithm ⚔️ ---" << endl;
    
    cout << "Max Sum (Arr 1): " << solver.maximumSubarraySum(arr1) << endl; // Expected: 9
    cout << "Max Sum (Arr 2): " << solver.maximumSubarraySum(arr2) << endl; // Expected: -1

    return 0;
}