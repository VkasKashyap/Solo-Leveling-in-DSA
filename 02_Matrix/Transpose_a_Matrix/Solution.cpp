#include <iostream>
#include <vector>
#include <utility> // For swap

using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        int n = mat.size();
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }
        return mat;
    }
};

int main() {
    Solution solver;
    
    // Test Case: 3x3 Square Matrix
    vector<vector<int>> mat = {
        {1, 1, 1},
        {2, 2, 2},
        {3, 3, 3}
    };

    cout << "--- ⚔️ Quest: Transpose Matrix ⚔️ ---" << endl;
    
    cout << "Original:" << endl;
    for(const auto& row : mat) {
        for(int val : row) cout << val << " ";
        cout << endl;
    }

    solver.transpose(mat);

    cout << "\nTransposed:" << endl;
    for(const auto& row : mat) {
        for(int val : row) cout << val << " ";
        cout << endl;
    }
    // Expected:
    // 1 2 3
    // 1 2 3
    // 1 2 3

    return 0;
}