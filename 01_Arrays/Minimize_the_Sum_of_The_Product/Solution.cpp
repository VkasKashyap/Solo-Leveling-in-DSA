#include <iostream>
#include <vector>
#include <algorithm> // For sort

using namespace std;

class Solution {
public:
    long long minValue(vector<int> a, vector<int> b, int n) {
        // Sort A in Ascending Order (Small to Large)
        sort(a.begin(), a.end());
        
        // Sort B in Descending Order (Large to Small)
        // You can sort ascending and traverse backwards, or use a custom comparator
        sort(b.begin(), b.end(), greater<int>());
        
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += (long long)a[i] * b[i];
        }
        
        return sum;
    }
};

int main() {
    Solution solver;
    
    // Test Case:
    // A: {3, 1, 1} -> Sorted: {1, 1, 3}
    // B: {6, 5, 4} -> Sorted: {6, 5, 4}
    // Pairs: (1*6) + (1*5) + (3*4) = 6 + 5 + 12 = 23
    vector<int> a = {3, 1, 1};
    vector<int> b = {6, 5, 4};
    int n = 3;

    cout << "--- ⚔️ Quest: Minimize Sum of Product ⚔️ ---" << endl;
    
    long long result = solver.minValue(a, b, n);
    
    cout << "Minimum Sum: " << result << endl; // Expected: 23

    return 0;
}