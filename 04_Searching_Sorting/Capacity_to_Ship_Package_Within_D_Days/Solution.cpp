#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool canShip(vector<int>& weights, int daysLimit, int capacity) {
        int daysNeeded = 1;
        int currentLoad = 0;
        
        for (int w : weights) {
            if (currentLoad + w > capacity) {
                daysNeeded++;
                currentLoad = w; 
            } else {
                currentLoad += w; 
            }
        }
        
        return daysNeeded <= daysLimit;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0;
        int high = 0;
        
        for (int w : weights) {
            low = max(low, w);
            high += w;
        }
        
        int ans = high;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (canShip(weights, days, mid)) {
                ans = mid;     
                high = mid - 1;
            } else {
                low = mid + 1; 
            }
        }
        
        return ans;
    }
};

int main() {
    Solution solver;
    
    // Test Case: weights = [1,2,3,4,5,6,7,8,9,10], D = 5
    // Optimal: 15 (Split: 1+2+3+4+5=15, 6+7=13, 8, 9, 10) -> 5 Days
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;
    
    cout << "--- ⚔️ Quest: Capacity To Ship Packages ⚔️ ---" << endl;
    cout << "Weights: ";
    for(int w : weights) cout << w << " ";
    cout << endl;
    
    int result = solver.shipWithinDays(weights, days);
    
    cout << "Minimum Capacity: " << result << endl;
    
    return 0;
}