#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int findCeil(vector<int>& v, int x){
        int s = 0;
        int e = v.size()-1;
        int ans = -1;
        while(s<=e){
            int m = s+(e-s)/2;
            if(v[m]>=x){
                ans = m;
                e = m-1;
            }
            else{
                s = m+1;
            }
        }
        return ans;
    }
};

int main() {
    Solution solver;
    
    // Test Case: X = 5
    // Ceil of 5 should be 8 (Index 2) because 5 is between 2 and 8.
    vector<int> arr = {1, 2, 8, 10, 11, 12, 19};
    int target = 5;
    
    cout << "--- ⚔️ Quest: Ceil in Sorted Array ⚔️ ---" << endl;
    cout << "Target: " << target << endl;
    
    int index = solver.findCeil(arr, target);
    
    if (index != -1) {
        cout << "Ceil found at index: " << index << " (Value: " << arr[index] << ")" << endl;
    } else {
        cout << "Ceil NOT found (All elements < Target)." << endl;
    }
    
    return 0;
}