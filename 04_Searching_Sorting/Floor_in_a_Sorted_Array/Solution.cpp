#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int findFloor(vector<int>& v, int x){
        int start = 0;
        int end = v.size()-1;
        int result = -1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(v[mid] > x)      end = mid - 1;
            else if(v[mid] <= x){
                result = mid;
                start = mid + 1;
            }
        }
        return result;
    }
};

int main() {
    Solution solver;
    
    // Test Case: X = 5
    // Floor of 5 should be 2 (Index 1)
    vector<int> arr = {1, 2, 8, 10, 11, 12, 19};
    int target = 5;
    
    cout << "--- ⚔️ Quest: Floor in Sorted Array ⚔️ ---" << endl;
    cout << "Target: " << target << endl;
    
    int index = solver.findFloor(arr, target);
    
    if (index != -1) {
        cout << "Floor found at index: " << index << " (Value: " << arr[index] << ")" << endl;
    } else {
        cout << "Floor NOT found (All elements > Target)." << endl;
    }
    
    return 0;
}