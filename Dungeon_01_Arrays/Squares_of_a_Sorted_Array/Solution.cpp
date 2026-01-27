#include <iostream>
#include <vector>
#include <cmath> // For abs()

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0;
        int right = n - 1;
        
        // Fill the result array from the back (largest squares first)
        for (int i = n - 1; i >= 0; i--) {
            if (abs(nums[left]) > abs(nums[right])) {
                result[i] = nums[left] * nums[left];
                left++;
            } else {
                result[i] = nums[right] * nums[right];
                right--;
            }
        }
        
        return result;
    }
};

int main() {
    Solution solver;
    vector<int> nums = {-4, -1, 0, 3, 10};

    cout << "--- ⚔️ Quest: Squares of a Sorted Array ⚔️ ---" << endl;
    
    vector<int> result = solver.sortedSquares(nums);
    
    cout << "Squared Sorted: ";
    for (int x : result) cout << x << " ";
    cout << endl;
    // Expected: 0 1 9 16 100

    return 0;
}