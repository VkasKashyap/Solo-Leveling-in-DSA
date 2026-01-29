#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& a) {
        // The array has n elements, range is 1 to n+1
        int n = a.size(); 
        int xorSum = 0;

        // Step 1: XOR all numbers from 1 to n+1
        for (int i = 1; i <= n + 1; i++) {
            xorSum ^= i;
        }

        // Step 2: XOR all elements present in the array
        for (int x : a) {
            xorSum ^= x;
        }

        // The remaining value is the missing number
        return xorSum;
    }
};

int main() {
    Solution solver;

    // Test Case: n = 4, range is 1 to 5. Missing number is 3.
    vector<int> testArray = {1, 2, 4, 5};

    cout << "--- ⚔️ Solo Leveling: Day 1 Final Quest ⚔️ ---" << endl;
    
    int result = solver.missingNumber(testArray);

    cout << "Array Content: {1, 2, 4, 5}" << endl;
    cout << "Detected Missing Number: " << result << endl;

    if (result == 3) {
        cout << "[SUCCESS] Monster Slain! The missing rune was found." << endl;
    } else {
        cout << "[FAILED] The monster escaped. Check the XOR logic." << endl;
    }

    return 0;
}