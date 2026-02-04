#include<iostream>
#include<vector>
using namespace std;

class Solution{
public: 
    int binarySearch(vector<int>& v, int target){
        int start = 0;
        int end = v.size()-1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(v[mid] == target)        return mid;
            else if(v[mid] < target)    start = mid+1;
            else                        end = mid-1;
        }
        return -1;
    }
};

int main() {
    Solution solver;
    
    // Test Case: Sorted Array
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 4;
    
    cout << "--- ⚔️ Quest: Binary Search ⚔️ ---" << endl;
    cout << "Target: " << target << endl;
    
    int result = solver.binarySearch(arr, target);
    
    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target NOT found." << endl;
    }
    
    return 0;
}