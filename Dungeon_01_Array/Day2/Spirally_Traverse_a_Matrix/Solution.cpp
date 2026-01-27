#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        int hstart = 0;
        int hend = mat.size() - 1;
        int vstart = 0;
        int vend = mat[0].size() - 1;
        vector<int> ans;

        while(hstart <= hend && vstart <= vend){
            
            // 1. Top Row (Left -> Right)
            int i = vstart;
            while(i <= vend){
                ans.push_back(mat[hstart][i]);
                i++;
            }
            hstart++; // Done with top row

            // 2. Right Col (Top -> Bottom)
            int j = hstart;
            while(j <= hend){
                ans.push_back(mat[j][vend]);
                j++;
            }
            vend--; // Done with right col

            // 3. Bottom Row (Right -> Left)
            if(hstart <= hend){
                int k = vend;
                while(k >= vstart){
                    ans.push_back(mat[hend][k]);
                    k--;
                }
                hend--; // Done with bottom row
            }
            
            // 4. Left Col (Bottom -> Top)
            if(vstart <= vend){
                int l = hend;
                while(l >= hstart){
                    ans.push_back(mat[l][vstart]);
                    l--;
                }
                vstart++; // Done with left col
            }
        }
        return ans;
    }
};

int main() {
    Solution solver;
    
    // Test Case: 3x4 Matrix
    vector<vector<int>> mat = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };

    cout << "--- ⚔️ Quest: Spiral Matrix ⚔️ ---" << endl;
    
    vector<int> result = solver.spirallyTraverse(mat);
    
    for(int x : result) cout << x << " ";
    cout << endl;
    // Expected: 1 2 3 4 8 12 11 10 9 5 6 7

    return 0;
}