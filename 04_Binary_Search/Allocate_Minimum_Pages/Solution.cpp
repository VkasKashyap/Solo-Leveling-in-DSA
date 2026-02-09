#include <iostream>
#include <vector>
#include <numeric> // For accumulate
#include <algorithm> // For max_element

using namespace std;

class Solution {
public:
    // Helper function to check if allocation is possible with max pages = barrier
    bool isPossible(vector<int>& arr, int n, int m, int barrier) {
        int studentCount = 1;
        int pagesSum = 0;
        
        for (int i = 0; i < n; i++) {
            // If a single book is larger than barrier, allocation is impossible
            if (arr[i] > barrier) return false;
            
            if (pagesSum + arr[i] <= barrier) {
                // Add book to current student
                pagesSum += arr[i];
            } else {
                // Assign to next student
                studentCount++;
                pagesSum = arr[i]; // Start new count with current book
                
                // If we need more students than available, return false
                if (studentCount > m) return false;
            }
        }
        return true;
    }

    // Function to find minimum number of pages
    int findPages(vector<int>& arr, int n, int m) {
        // Edge Case: More students than books
        if (n < m) return -1;
        
        // Step 1: Define Search Space
        int low = *max_element(arr.begin(), arr.end()); // Minimum possible max pages
        int high = accumulate(arr.begin(), arr.end(), 0); // Maximum possible max pages
        int ans = -1;
        
        // Step 2: Binary Search on Answer
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (isPossible(arr, n, m, mid)) {
                ans = mid;      // Possible answer, but try to minimize it
                high = mid - 1; // Look for smaller max pages
            } else {
                low = mid + 1;  // Not possible, need more capacity
            }
        }
        return ans;
    }
};

int main() {
    Solution solver;
    
    // Test Case: 4 books, 2 students
    // Books: [12, 34, 67, 90]
    // Optimal: St1 [12, 34, 67] (Sum 113), St2 [90] -> Max is 113.
    vector<int> books = {12, 34, 67, 90};
    int students = 2;
    
    cout << "--- ⚔️ Quest: Allocate Minimum Pages ⚔️ ---" << endl;
    
    int result = solver.findPages(books, books.size(), students);
    
    cout << "Minimum Max Pages: " << result << endl;
    
    return 0;
}