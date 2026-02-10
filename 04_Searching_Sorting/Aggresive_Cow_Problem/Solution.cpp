#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool canPlace(vector<int>& position, int n, int m, int minDist) {
        int ballsPlaced = 1;
        int lastPos = position[0]; 
        
        for (int i = 1; i < n; i++) {
            if (position[i] - lastPos >= minDist) {
                ballsPlaced++;
                lastPos = position[i];
                
                if (ballsPlaced == m) return true;
            }
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        
        int n = position.size();
        
        int low = 1; 
        int high = position[n - 1] - position[0]; 
        int ans = 0;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (canPlace(position, n, m, mid)) {
                ans = mid;      
                low = mid + 1;  
            } else {
                high = mid - 1; 
            }
        }
        return ans;
    }
};

int main() {
    Solution solver;
    
    // Test Case: positions = [1, 2, 3, 4, 7], m = 3
    // Optimal: 1, 4, 7 -> Distance 3
    vector<int> positions = {1, 2, 3, 4, 7};
    int m = 3;
    
    cout << "--- ⚔️ Quest: Magnetic Force (Aggressive Cows) ⚔️ ---" << endl;
    cout << "Baskets: ";
    for(int x : positions) cout << x << " ";
    cout << endl;
    
    int result = solver.maxDistance(positions, m);
    
    cout << "Maximized Minimum Distance: " << result << endl;
    
    return 0;
}