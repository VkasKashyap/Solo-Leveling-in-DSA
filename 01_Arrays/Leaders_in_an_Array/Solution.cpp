#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        if (n == 0) return ans;

        int maxi = arr[n - 1]; // Rightmost is always a leader
        ans.push_back(maxi);

        // Scan from right to left
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= maxi) {
                ans.push_back(arr[i]);
                maxi = arr[i];
            }
        }

        // Reverse to maintain original order
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution solver;
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    
    vector<int> result = solver.leaders(arr);
    
    cout << "Leaders: ";
    for (int x : result) cout << x << " "; // Output: 17 5 2
    cout << endl;

    return 0;
}