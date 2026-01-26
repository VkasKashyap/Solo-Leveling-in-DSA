#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int firstNonRepeating(vector<int>& arr) {
        unordered_map<int, int> mp;
        
        // Step 1: Count frequency of each number
        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }
        
        // Step 2: Scan the ARRAY again to find the first element with count == 1
        for (auto x : arr) {
            if (mp[x] == 1) {
                return x;
            }
        }
        
        return 0; // Return 0 if no unique element exists
    }
};

int main() {
    Solution solver;
    
    // Test Case:
    // - 9 appears twice
    // - 4 appears once (First unique!)
    // - 9 appears again
    // - 6 appears once (Second unique)
    // - 7 appears once (Third unique)
    vector<int> arr = {-1, 2, -1, 3, 2};

    cout << "--- ⚔️ Quest: First Non-Repeating Element ⚔️ ---" << endl;
    
    int result = solver.firstNonRepeating(arr);
    
    cout << "First Non-Repeating Value: " << result << endl; // Expected: 3

    return 0;
}