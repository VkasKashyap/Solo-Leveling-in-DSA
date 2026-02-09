#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[high];
        int i = (low - 1);
        
        for (int j = low; j <= high - 1; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return (i + 1);
    }

    int kthSmallest(vector<int>& arr, int l, int r, int k) {
        if (k > 0 && k <= r - l + 1) {
            int pos = partition(arr, l, r);
            
            if (pos - l == k - 1)
                return arr[pos];
            
            if (pos - l > k - 1)
                return kthSmallest(arr, l, pos - 1, k);
            
            return kthSmallest(arr, pos + 1, r, k - (pos - l + 1));
        }
        
        return -1; 
    }
};

int main() {
    Solution solver;
    
    // Test Case: Find 3rd smallest
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 3;
    
    cout << "--- ⚔️ Quest: Kth Smallest Element ⚔️ ---" << endl;
    cout << "Array: ";
    for(int x : arr) cout << x << " ";
    cout << endl;
    
    // QuickSelect logic
    int result = solver.kthSmallest(arr, 0, arr.size() - 1, k);
    
    cout << k << "rd Smallest Element is: " << result << endl;
    // Expected: 7 (Sorted: 3, 4, 7, 10, 15, 20)
    
    return 0;
}