#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> commonElements(vector<int> &A, vector<int> &B, vector<int> &C) {
        vector<int> ans;
        int i = 0, j = 0, k = 0;
        int n1 = A.size(), n2 = B.size(), n3 = C.size();
        
        while (i < n1 && j < n2 && k < n3) {
            if (A[i] == B[j] && B[j] == C[k]) {
                if (ans.empty() || ans.back() != A[i]) {
                    ans.push_back(A[i]);
                }
                i++; j++; k++;
            }
            else if (A[i] < B[j]) {
                i++;
            }
            else if (B[j] < C[k]) {
                j++;
            }
            else {
                k++;
            }
        }
        return ans;
    }
};

int main() {
    Solution solver;
    
    vector<int> A = {1, 5, 10, 20, 40, 80};
    vector<int> B = {6, 7, 20, 80, 100};
    vector<int> C = {3, 4, 15, 20, 30, 70, 80, 120};

    cout << "--- ⚔️ Quest: Common Elements in 3 Sorted Arrays ⚔️ ---" << endl;
    
    vector<int> result = solver.commonElements(A, B, C);
    
    cout << "Common Elements: ";
    if (result.empty()) cout << "None";
    for (int x : result) cout << x << " ";
    cout << endl;
    // Expected: 20 80

    return 0;
}