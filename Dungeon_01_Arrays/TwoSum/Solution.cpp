#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (m.count(complement)) {
                return {m[complement], i};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution solver;
    vector<int> testNums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = solver.twoSum(testNums, target);

    if (!result.empty()) {
        cout << "Monster Defeated! Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "Quest Failed: No solution found." << endl;
    }

    return 0;
}