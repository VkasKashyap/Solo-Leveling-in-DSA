#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findOnce(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) return arr[0];
        if (arr[0] != arr[1]) return arr[0];
        if (arr[n-1] != arr[n-2]) return arr[n-1];
        int low = 1;
        int high = n - 2;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) {
                return arr[mid];
            }
            if ((mid % 2 == 1 && arr[mid] == arr[mid-1]) || 
                (mid % 2 == 0 && arr[mid] == arr[mid+1])) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        
        return -1; 
    }
};

int main() {
    Solution solver;
    
    // Test Case: 2 is the single element
    // Indices: 0  1  2  3  4  5  6
    // Values:  1, 1, 2, 3, 3, 4, 4
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};
    
    cout << "--- ⚔️ Quest: Single Element in Sorted Array ⚔️ ---" << endl;
    
    int result = solver.findOnce(arr);
    
    cout << "The Single Element is: " << result << endl;
    
    return 0;
}