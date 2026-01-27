#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void segregate0and1(vector<int> &arr) {
        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {
            // Step 1: Skip all 0s from the left (they are safe)
            while (arr[left] == 0 && left < right) {
                left++;
            }

            // Step 2: Skip all 1s from the right (they are safe)
            while (arr[right] == 1 && left < right) {
                right--;
            }

            // Step 3: If we are stuck (Left is 1, Right is 0), SWAP
            if (left < right) {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
    }
};

int main() {
    Solution solver;
    vector<int> arr = {1, 0, 1, 0, 1, 0, 1};

    cout << "--- ⚔️ Quest: Segregate 0s and 1s ⚔️ ---" << endl;
    cout << "Before: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    solver.segregate0and1(arr);

    cout << "After:  ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}