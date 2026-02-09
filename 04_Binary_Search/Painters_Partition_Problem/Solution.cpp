#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isPossible(vector<int>& arr, int n, int k, long long timeLimit) {
        int painterCount = 1;
        long long currentSum = 0;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] > timeLimit) return false;
            
            if (currentSum + arr[i] <= timeLimit) {
                currentSum += arr[i];
            } else {
                painterCount++;
                currentSum = arr[i];
                if (painterCount > k) return false;
            }
        }
        return true;
    }

    long long minTime(vector<int>& arr, int n, int k) {
        long long low = *max_element(arr.begin(), arr.end());
        long long high = accumulate(arr.begin(), arr.end(), 0LL);
        long long ans = high;
        
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            
            if (isPossible(arr, n, k, mid)) {
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
    
    // Test Case: 
    // Boards: [5, 10, 30, 20, 15]
    // Painters: 3
    // Partition: [5, 10], [30], [20, 15] -> Sums: 15, 30, 35. Max is 35.
    vector<int> boards = {5, 10, 30, 20, 15};
    int k = 3;
    
    cout << "--- ⚔️ Quest: Painter's Partition ⚔️ ---" << endl;
    
    long long result = solver.minTime(boards, boards.size(), k);
    
    cout << "Minimum Time required: " << result << endl;
    
    return 0;
}