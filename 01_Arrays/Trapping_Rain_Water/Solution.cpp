#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        
        int leftMax = 0;
        int rightMax = 0;
        int totalWater = 0;
        
        while (left <= right) {
            if (height[left] <= height[right]) {
                if (height[left] >= leftMax) {
                    leftMax = height[left]; 
                } else {
                    totalWater += leftMax - height[left]; // Trap water!
                }
                left++;
            } 
            else {
                if (height[right] >= rightMax) {
                    rightMax = height[right]; // Can't trap water here, it's a new peak
                } else {
                    totalWater += rightMax - height[right]; // Trap water!
                }
                right--;
            }
        }
        
        return totalWater;
    }
};

int main() {
    Solution solver;
    
    // Test Case: Elevation Map
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    cout << "--- ⚔️ Quest: Trapping Rain Water ⚔️ ---" << endl;
    
    int result = solver.trap(height);
    
    cout << "Total Water Trapped: " << result << " units" << endl;
    // Expected: 6

    return 0;
}