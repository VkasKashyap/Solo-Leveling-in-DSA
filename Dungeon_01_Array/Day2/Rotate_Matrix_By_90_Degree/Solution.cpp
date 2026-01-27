#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
public:
    void rotate(vector<vector<int>>& v){
        int row = v.size();
        int col = v[0].size();
        for(int i=0;i<row;i++){
            for(int j=i+1;j<col;j++){
                swap(v[i][j], v[j][i]);
            }
        }
        for(int i=0;i<row;i++){
            reverse(v[i].begin(), v[i].end());
        }
    }
};

int main() {
    Solution solver;
    
    // 3x3 Matrix
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "--- ⚔️ Quest: Rotate Image 90 Degrees ⚔️ ---" << endl;
    
    cout << "Original:" << endl;
    for (const auto& row : mat) {
        for (int num : row) cout << num << " ";
        cout << endl;
    }

    solver.rotate(mat);
    
    cout << "\nRotated (Clockwise):" << endl;
    for (const auto& row : mat) {
        for (int num : row) cout << num << " ";
        cout << endl;
    }
    // Expected:
    // 7 4 1
    // 8 5 2
    // 9 6 3

    return 0;
}
