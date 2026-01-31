#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // For max

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mpp(256, -1);
        
        int left = 0;
        int right = 0;
        int maxLen = 0;
        int n = s.size();
        
        while (right < n) {
            char currentChar = s[right];
            if (mpp[currentChar] != -1 && mpp[currentChar] >= left) {
                left = mpp[currentChar] + 1;
            }
            mpp[currentChar] = right;
            maxLen = max(maxLen, right - left + 1);
            
            right++;
        }
        
        return maxLen;
    }
};

int main() {
    Solution solver;
    
    // Test Case
    string s = "abcabcbb";

    cout << "--- ⚔️ Quest: Longest Substring Without Repeating Characters ⚔️ ---" << endl;
    cout << "Input: " << s << endl;
    
    int result = solver.lengthOfLongestSubstring(s);
    
    cout << "Length: " << result << endl;
    // Expected: 3 ("abc")

    return 0;
}