#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    bool searchMatrix(vector<vector<int>>& v, int target){
        int m = v.size();
        int n = v[0].size();

        int i=0;
        int j=n-1;

        while(i<m && j >=0){
            if(v[i][j] == target)   return true;
            else if(v[i][j] < target)   i++;
            else                        j--;
        }
        return false;
    }
};

int main() {
    Solution solver;
    
    // LeetCode 240 Example Matrix
    // Rows are sorted left-to-right
    // Columns are sorted top-to-bottom
    vector<vector<int>> matrix = {
        {1,   4,  7, 11, 15},
        {2,   5,  8, 12, 19},
        {3,   6,  9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    
    int target = 5;

    cout << "--- ⚔️ Quest: Search in 2D Matrix II ⚔️ ---" << endl;
    
    bool found = solver.searchMatrix(matrix, target);
    
    if (found) cout << "Target " << target << " found in the matrix!" << endl;
    else cout << "Target " << target << " NOT found." << endl;
    
    return 0;
}