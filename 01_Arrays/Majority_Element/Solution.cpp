#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for (int num : nums) {
            // Step 1: Pick a new candidate if current count is 0
            if (count == 0) {
                candidate = num;
            }

            // Step 2: Vote (+1 if match, -1 if different)
            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }
        
        return candidate;
    }
};

int main() {
    Solution solver;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    cout << "--- ⚔️ Quest: Majority Element ⚔️ ---" << endl;
    
    int result = solver.majorityElement(nums);
    cout << "Majority Element: " << result << endl; // Expected: 2

    return 0;
}