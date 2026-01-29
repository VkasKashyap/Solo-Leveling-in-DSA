#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
public:
    vector<vector<int>> threeSum(vector<int>& v){
        int n = v.size();
        if(n < 3)   return {};
        vector<vector<int>> ans;
        sort(v.begin(), v.end());
        for(int i=0;i<n;i++){
            if(v[i] > 0)    break;
            if(i > 0 && v[i] == v[i-1])     continue;
            int s = i+1;
            int e = n-1;
            while(s < e){
                int sum = v[i] + v[s] + v[e];

                if(sum < 0){
                    s++;
                }
                else if(sum > 0){
                    e--;
                }
                else{
                    ans.push_back({v[i], v[s++], v[e--]});
                    while(s<e && v[s] == v[s-1])    s++;
                    while(s<e && v[e] == v[e-1])    e--;
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution solver;
    
    // Test Case: Contains duplicates and zero sums
    vector<int> arr = {-1, 0, 1, 2, -1, -4};

    cout << "--- ⚔️ Quest: 3 Sum ⚔️ ---" << endl;
    
    vector<vector<int>> result = solver.threeSum(arr);
    
    cout << "Unique Triplets:" << endl;
    for (const auto& triplet : result) {
        cout << "[ ";
        for (int num : triplet) cout << num << " ";
        cout << "]" << endl;
    }
    // Expected Output:
    // [ -1 -1 2 ]
    // [ -1 0 1 ]

    return 0;
}