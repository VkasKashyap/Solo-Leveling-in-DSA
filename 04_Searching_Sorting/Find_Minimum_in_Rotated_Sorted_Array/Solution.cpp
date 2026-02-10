#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        
        if (nums[low] <= nums[high]) return nums[low];
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            }
            else {
                high = mid; 
            }
        }
        return nums[low];
    }
};

int main() {
    Solution solver;
    
    // Test Case 1: Rotated
    vector<int> arr1 = {3, 4, 5, 1, 2};
    cout << "--- ⚔️ Quest: Find Minimum in Rotated Sorted Array ⚔️ ---" << endl;
    cout << "Arr1 Min: " << solver.findMin(arr1) << endl; // Expected: 1
    
    // Test Case 2: Not Rotated
    vector<int> arr2 = {11, 13, 15, 17};
    cout << "Arr2 Min: " << solver.findMin(arr2) << endl; // Expected: 11
    
    return 0;
}