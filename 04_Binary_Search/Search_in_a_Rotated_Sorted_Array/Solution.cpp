#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size() - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] == target) return mid;
            if (arr[low] <= arr[mid]) {
                if (arr[low] <= target && target < arr[mid]) {
                    high = mid - 1; 
                } else {
                    low = mid + 1;  
                }
            }
            else {
                if (arr[mid] < target && target <= arr[high]) {
                    low = mid + 1;  
                } else {
                    high = mid - 1; 
                }
            }
        }
        
        return -1; 
    }
};

int main() {
    Solution solver;
    
    // Test Case: Rotated at pivot 7
    // Indices: 0  1  2  3  4  5  6
    // Values:  4, 5, 6, 7, 0, 1, 2
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    
    cout << "--- ⚔️ Quest: Search in Rotated Array ⚔️ ---" << endl;
    cout << "Target: " << target << endl;
    
    int index = solver.search(arr, target);
    
    if (index != -1) {
        cout << "Found at Index: " << index << endl;
    } else {
        cout << "Target NOT Found." << endl;
    }
    
    return 0;
}