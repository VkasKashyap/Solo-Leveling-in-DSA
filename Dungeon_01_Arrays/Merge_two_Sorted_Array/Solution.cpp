#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;      // Pointer for end of valid nums1
        int j = n - 1;      // Pointer for end of nums2
        int k = m + n - 1;  // Pointer for end of the buffer in nums1

        // Reverse Zipper: Compare largest elements and place at the end
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // Edge Case: If nums2 still has elements left, fill them in.
        // Note: We don't need to check if nums1 is left, because they are 
        // already in place.
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};

int main() {
    Solution solver;
    
    // Test Case: nums1 has buffer space (0s)
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    cout << "--- ⚔️ Quest: Merge Sorted Array (In-Place) ⚔️ ---" << endl;
    
    solver.merge(nums1, m, nums2, n);
    
    cout << "Merged Array: ";
    for (int x : nums1) cout << x << " "; 
    // Expected: 1 2 2 3 5 6
    cout << endl;

    return 0;
}