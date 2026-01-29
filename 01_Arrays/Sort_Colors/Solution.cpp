#include <iostream>
#include <vector>
#include <algorithm> // For swap

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;                 // Boundary for 0s
        int mid = 0;                 // Current element scanner
        int high = nums.size() - 1;  // Boundary for 2s

        while (mid <= high) {
            if (nums[mid] == 0) {
                // Swap 0 to the low region
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } 
            else if (nums[mid] == 1) {
                // 1s are in the middle, just move forward
                mid++;
            } 
            else {
                // Swap 2 to the high region
                swap(nums[mid], nums[high]);
                high--;
                // Note: We do NOT increment mid here, because the swapped 
                // element from 'high' hasn't been checked yet.
            }
        }
    }
};

int main() {
    Solution solver;
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    cout << "--- ⚔️ Quest: Sort Colors (Dutch National Flag) ⚔️ ---" << endl;
    
    solver.sortColors(nums);
    
    cout << "Sorted Colors: ";
    for (int x : nums) cout << x << " ";
    cout << endl;
    // Expected: 0 0 1 1 2 2

    return 0;
}