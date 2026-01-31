#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        
        long long prefix = 1;
        long long suffix = 1;
        long long maxProd = INT_MIN;
        
        for (int i = 0; i < n; i++) {
            if (prefix == 0) prefix = 1;
            if (suffix == 0) suffix = 1;
            
            prefix = prefix * nums[i];
            suffix = suffix * nums[n - i - 1]; 
            maxProd = max(maxProd, max(prefix, suffix));
        }
        
        return (int)maxProd;
    }
};

int main() {
    Solution solver;
    
    // Test Case:
    // Subarray [2, 3] = 6
    // Subarray [-2, 4] = -8
    // Subarray [-2, 4, -2] = 16 (Max!)
    vector<int> nums = {2, 3, -2, 4, -2};

    cout << "--- ⚔️ Quest: Maximum Product Subarray ⚔️ ---" << endl;
    
    int result = solver.maxProduct(nums);
    
    cout << "Maximum Product: " << result << endl;
    // Expected: 6 (Wait... 2*3=6. Then 6*-2=-12. Then -12*4=-48. Then -48*-2 = 96?
    // Let's trace carefully: 
    // Prefix: 2, 6, -12, -48, 96. Max is 96.
    // Suffix: -2, -8, 16, 48, 96. Max is 96.
    // Answer is 96. (Actually wait, the test case above {2,3,-2,4} -> 2*3=6. 4 is alone. -2*4=-8. 
    // My manual math above was for the {2,3,-2,4,-2} case.
    
    return 0;
}