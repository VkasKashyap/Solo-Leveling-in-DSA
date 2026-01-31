#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution{
public:
    int minSubArrayLen(vector<int>& nums, int target){
        int n = nums.size();
        int sum = 0;
        int minLength = INT_MAX;
        int i=0;
        for(int j=0;j<n;j++){
            sum += nums[j];
            while(sum >= target){
                int currLenght = j-i+1;
                minLength = min(currLenght, minLength);
                sum -= nums[i];
                i++;
            }
        }
        return (minLength == INT_MAX) ? 0 : minLength;
    }
};

int main() {
    Solution solver;
    
    // Test Case: Target 7
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    int target = 7;

    cout << "--- ⚔️ Quest: Minimum Size Subarray Sum ⚔️ ---" << endl;
    
    int result = solver.minSubArrayLen(nums, target);
    
    if (result == 0) {
        cout << "No subarray found with sum >= " << target << endl;
    } else {
        cout << "Minimum subarray length: " << result << endl;
    }
    // Expected: 2 (Subarray [4, 3])

    return 0;
}