#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        if (a.size() != b.size()) return false;

        unordered_map<int, int> countMap;

        // Populate map from array A
        for (int num : a) {
            countMap[num]++;
        }

        // Check against array B
        for (int num : b) {
            if (countMap.find(num) == countMap.end()) {
                return false;
            }
            countMap[num]--;
        }

        // Traditional Loop: Works on all C++ versions
        // We use an iterator to check if any count is not zero
        for (auto it = countMap.begin(); it != countMap.end(); it++) {
            if (it->second != 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution solver;
    
    vector<int> arr1 = {1, 2, 5, 4, 0};
    vector<int> arr2 = {0, 4, 5, 2, 1};

    cout << "--- ⚔️ Solo Leveling: Battle Log ⚔️ ---" << endl;

    if (solver.checkEqual(arr1, arr2)) {
        cout << "[SUCCESS] Monster Slain! Arrays are equal." << endl;
    } else {
        cout << "[FAILED] Arrays are not equal." << endl;
    }

    return 0;
}