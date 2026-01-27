#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int> ans;
        map<int, int> mp; // Stores {number, count} in sorted order
        int n = arr.size();

        // Step 1: Count frequency of each number
        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }

        // Step 2: Collect elements that appear more than once
        for (auto it : mp) {
            if (it.second > 1) {
                ans.push_back(it.first);
            }
        }
        
        return ans;
    }
};

int main() {
    Solution solver;
    
    // Test Case: 2 and 3 are repeated
    vector<int> arr = {2, 3, 1, 2, 3}; 

    cout << "--- ⚔️ Quest: Find Duplicates ⚔️ ---" << endl;
    
    vector<int> duplicates = solver.findDuplicates(arr);
    
    if (duplicates.empty()) {
        cout << "No duplicates found." << endl;
    } else {
        cout << "Duplicates found: ";
        for (int x : duplicates) cout << x << " "; // Expected: 2 3
        cout << endl;
    }

    return 0;
}