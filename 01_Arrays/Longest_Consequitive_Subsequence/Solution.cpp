#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm> // For max

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        unordered_set<int> st(nums.begin(), nums.end());
        
        int longest = 0;
        for (int it : st) {
            if (st.find(it - 1) == st.end()) {
                int currentNum = it;
                int currentStreak = 1;
                while (st.find(currentNum + 1) != st.end()) {
                    currentNum++;
                    currentStreak++;
                }
                
                longest = max(longest, currentStreak);
            }
        }
        
        return longest;
    }
};

int main() {
    Solution solver;
    
    // Test Case:
    // Sequence: 1, 2, 3, 4 (Length 4)
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    cout << "--- ⚔️ Quest: Longest Consecutive Subsequence ⚔️ ---" << endl;
    
    int result = solver.longestConsecutive(nums);
    
    cout << "Longest Consecutive Sequence Length: " << result << endl;
    // Expected: 4

    return 0;
}