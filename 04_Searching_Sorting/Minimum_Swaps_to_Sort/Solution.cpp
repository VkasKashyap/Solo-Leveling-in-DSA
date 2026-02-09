#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        
        vector<pair<int, int>> vec(n);
        for (int i = 0; i < n; i++) {
            vec[i] = {nums[i], i};
        }
        sort(vec.begin(), vec.end());
        
        vector<bool> visited(n, false);
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            if (visited[i] || vec[i].second == i) {
                continue;
            }
            
            int cycle_size = 0;
            int j = i;
            
            while (!visited[j]) {
                visited[j] = true;
                j = vec[j].second;
                cycle_size++;
            }
            
            if (cycle_size > 0) {
                ans += (cycle_size - 1);
            }
        }
        
        return ans;
    }
};

int main() {
    Solution solver;
    
    // Test Case: [4, 3, 2, 1] -> [1, 2, 3, 4]
    // Cycle 1: 4 -> 1 -> 4 (Size 2, Swaps 1)
    // Cycle 2: 3 -> 2 -> 3 (Size 2, Swaps 1)
    // Total Swaps: 2
    vector<int> arr = {4, 3, 2, 1};
    
    cout << "--- ⚔️ Quest: Minimum Swaps to Sort ⚔️ ---" << endl;
    cout << "Original Array: ";
    for(int x : arr) cout << x << " ";
    cout << endl;
    
    int result = solver.minSwaps(arr);
    
    cout << "Minimum Swaps: " << result << endl;
    
    return 0;
}