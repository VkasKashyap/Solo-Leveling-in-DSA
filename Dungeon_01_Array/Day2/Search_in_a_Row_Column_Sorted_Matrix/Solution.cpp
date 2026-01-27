#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int low = 0;
        int high = (rows * cols) - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // Map 1D 'mid' back to 2D [row][col]
            int r = mid / cols;
            int c = mid % cols;
            
            int val = matrix[r][c];
            
            if (val == target) {
                return true;
            } else if (val < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return false;
    }
};

int main() {
    Solution solver;
    
    // Sorted Matrix
    vector<vector<int>> matrix = {
        {1,  3,  5,  7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 3;

    cout << "--- ⚔️ Quest: Search 2D Matrix ⚔️ ---" << endl;
    
    bool found = solver.searchMatrix(matrix, target);
    
    if (found) cout << "Target " << target << " found in the matrix!" << endl;
    else cout << "Target " << target << " NOT found." << endl;
    
    return 0;
}