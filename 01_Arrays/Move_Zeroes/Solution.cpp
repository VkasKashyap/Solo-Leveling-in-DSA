#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int n = v.size();
        int i = 0;
        for(int j = 0; j < n; j++) {
            // Checks if value is non-zero (Fixed logic error here)
            if(v[j] != 0) {
                swap(v[i++], v[j]); 
            }
        }
    }
};

int main() {
    Solution solver;
    vector<int> v = {0, 1, 0, 3, 12};

    cout << "Before: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    solver.moveZeroes(v);

    cout << "After: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    return 0;
}