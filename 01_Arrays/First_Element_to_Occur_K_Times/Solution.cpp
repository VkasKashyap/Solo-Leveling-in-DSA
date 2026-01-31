#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int firstElementKTime(int n, int k, int a[]) {
        unordered_map<int, int> mpp;
        
        // Iterate once. As soon as a number's count hits K, return it.
        for (int i = 0; i < n; i++) {
            mpp[a[i]]++;
            if (mpp[a[i]] == k) {
                return a[i];
            }
        }
        
        return -1;
    }
};

int main() {
    Solution solver;
    int arr[] = {1, 7, 4, 3, 4, 8, 7};
    int n = 7;
    int k = 2;

    cout << "--- ⚔️ Quest: First Element to Occur K Times ⚔️ ---" << endl;
    cout << "First element to reach count " << k << " is: " << solver.firstElementKTime(n, k, arr) << endl;
    // Expected: 4 (It hits count 2 before 7 does)
    
    return 0;
}