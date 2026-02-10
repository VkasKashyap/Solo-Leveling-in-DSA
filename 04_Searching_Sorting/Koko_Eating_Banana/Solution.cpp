#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    long long calculateHours(vector<int>& piles, int k) {
        long long totalHours = 0;
        for (int pile : piles) {
            totalHours += (pile + k - 1) / k;
        }
        return totalHours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end()); 
        int ans = high;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            long long hoursTaken = calculateHours(piles, mid);
            
            if (hoursTaken <= h) {
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
    
    // Test Case: Piles = [3, 6, 7, 11], H = 8
    // Speeds:
    // k=3 -> 1+2+3+4 = 10 hrs (>8)
    // k=4 -> 1+2+2+3 = 8 hrs (==8) -> Valid
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    
    cout << "--- ⚔️ Quest: Koko Eating Bananas ⚔️ ---" << endl;
    cout << "Piles: ";
    for(int p : piles) cout << p << " ";
    cout << endl;
    
    int result = solver.minEatingSpeed(piles, h);
    
    cout << "Minimum Speed K: " << result << endl;
    
    return 0;
}