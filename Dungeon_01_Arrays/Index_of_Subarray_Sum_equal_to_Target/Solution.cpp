#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
    vector<int> subarraySum(vector<int>& v, int target){
        int sum = 0;
        int n = v.size();
        int i=0;
        for(int j=0;j<n;j++){
            sum += v[j];
            while(sum > target && i <= j){
                sum -= v[i];
                i++;
            }
            if(sum == target){
                return {i+1, j+1};
            }
        }
        return {-1};
    }
};

int main() {
    Solution solver;
    
    // Test Case:
    // Subarray {2, 3, 7} adds up to 12. Indices (1-based): 2 to 4.
    vector<int> arr = {1, 2, 3, 7, 5};
    int target = 12;

    cout << "--- ⚔️ Quest: Subarray with Given Sum ⚔️ ---" << endl;
    
    vector<int> result = solver.subarraySum(arr, target);
    
    if (result.size() == 1 && result[0] == -1) {
        cout << "No subarray found." << endl;
    } else {
        cout << "Sum found between indices: " << result[0] << " and " << result[1] << endl;
        // Expected Output: 2 and 4
    }

    return 0;
}