#include <iostream>
#include <vector>
#include <algorithm>
#include <climits> // For INT_MIN, INT_MAX

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) return findMedianSortedArrays(nums2, nums1);
        
        int n1 = nums1.size();
        int n2 = nums2.size();
        int low = 0, high = n1;
        
        while (low <= high) {
            int cut1 = (low + high) >> 1; 
            int cut2 = (n1 + n2 + 1) / 2 - cut1;
            int l1 = (cut1 == 0) ? INT_MIN : nums1[cut1 - 1];
            int r1 = (cut1 == n1) ? INT_MAX : nums1[cut1];
            int l2 = (cut2 == 0) ? INT_MIN : nums2[cut2 - 1];
            int r2 = (cut2 == n2) ? INT_MAX : nums2[cut2];
            if (l1 <= r2 && l2 <= r1) {
                if ((n1 + n2) % 2 != 0)
                    return max(l1, l2);
                else
                    return (max(l1, l2) + min(r1, r2)) / 2.0;
            }
            else if (l1 > r2) {
                high = cut1 - 1;
            } else {
                low = cut1 + 1;
            }
        }
        return 0.0;
    }
};

int main() {
    Solution solver;
    
    // Test Case 1 (Odd Total): Median is 2
    // Merged: [1, 2, 3]
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    cout << "--- ⚔️ Quest: Median of Two Sorted Arrays ⚔️ ---" << endl;
    cout << "Median 1: " << solver.findMedianSortedArrays(nums1, nums2) << endl;
    
    // Test Case 2 (Even Total): Median is (2+3)/2 = 2.5
    // Merged: [1, 2, 3, 4]
    vector<int> n1 = {1, 2};
    vector<int> n2 = {3, 4};
    cout << "Median 2: " << solver.findMedianSortedArrays(n1, n2) << endl;
    
    return 0;
}