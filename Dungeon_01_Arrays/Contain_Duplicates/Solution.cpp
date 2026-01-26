#include <iostream>
#include <vector>
#include <unordered_set> // <--- NEW WEAPON

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        
        for (int num : nums) {
            // If the number is already in the set, we found a duplicate!
            if (seen.count(num)) {
                return true;
            }
            // Otherwise, add it to the set for future checks
            seen.insert(num);
        }
        
        return false; // No duplicates found
    }
};

int main() {
    Solution solver;
    vector<int> arr = {1, 2, 3, 1}; // Duplicate: 1

    cout << "--- ⚔️ Quest: Contains Duplicate ⚔️ ---" << endl;
    
    if (solver.containsDuplicate(arr)) {
        cout << "Result: True (Duplicate Detected)" << endl;
    } else {
        cout << "Result: False (All Unique)" << endl;
    }

    return 0;
}