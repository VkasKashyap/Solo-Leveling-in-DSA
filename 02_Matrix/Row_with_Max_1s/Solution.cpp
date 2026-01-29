#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int rowWithMax1s(vector<vector<int>>& v){
        int n = v.size();
        if(n == 0)      return -1;
        int maxRowIndex = -1;

        int r = 0;
        int c = v[0].size()-1;

        while(r < n && c >= 0){
            if(v[r][c] == 1){
                maxRowIndex = r;
                c--;
            }
            else{
                r++;
            }
        }
        return maxRowIndex;
    }
};

int main() {
    Solution solver;
    vector<vector<int>> arr = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1}, // Max 1s here
        {0, 0, 0, 0}
    };

    cout << "--- ⚔️ Quest: Row with Max 1s ⚔️ ---" << endl;
    cout << "Row index: " << solver.rowWithMax1s(arr) << endl; 
    // Expected: 2

    return 0;
}