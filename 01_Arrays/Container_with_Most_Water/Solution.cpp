#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
public:
    int maxWater(vector<int>& v){
        int lp = 0;
        int hp = v.size();
        int maxWater = 0;
        while(lp<hp){
            int h = min(v[lp], v[hp]);
            int w = hp-lp;
            int currWater = h*w;
            if(currWater > maxWater){
                maxWater = currWater;
            }
            if(v[lp] > v[hp]){
                hp--;
            }
            else{
                lp++;
            }
        }
        return maxWater;
    }
};

int main() {
    Solution solver;
    
    // Test Case: Standard Example
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << "--- ⚔️ Quest: Container With Most Water ⚔️ ---" << endl;
    
    int result = solver.maxWater(height);
    
    cout << "Max Water Area: " << result << endl;
    // Expected: 49 (Between index 1 (8) and index 8 (7))

    return 0;
}