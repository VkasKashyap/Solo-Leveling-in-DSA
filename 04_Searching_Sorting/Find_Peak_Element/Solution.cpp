#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] < nums[mid + 1]) {
                low = mid + 1;
            }
            else {
                high = mid;
            }
        }
        return low;
    }
};

int main() {
    Solution solver;
    
    // Test Case: Peak is 6 (Index 2)
    // Visualization: 1 -> 2 -> 3 (Peak) -> 1
    vector<int> arr = {1, 2, 3, 1};
    
    cout << "--- ⚔️ Quest: Find Peak Element ⚔️ ---" << endl;
    cout << "Array: ";
    for(int x : arr) cout << x << " ";
    cout << endl;
    
    int peakIndex = solver.findPeakElement(arr);
    
    cout << "Peak Found at Index: " << peakIndex << " (Value: " << arr[peakIndex] << ")" << endl;
    
    return 0;
}