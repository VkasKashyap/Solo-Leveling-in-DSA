#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Function to rotate an array by one position in clock-wise direction.
    void rotate(vector<int> &arr) {
        int n = arr.size();
        
        // Edge Case: If array has 0 or 1 element, rotation changes nothing.
        if (n <= 1) return;

        // Step 1: Store the last element (The "King" needs to move to the front)
        int lastElement = arr[n - 1];

        // Step 2: Shift all elements one step to the Right
        // We iterate BACKWARDS to avoid overwriting values we still need to move.
        // Example: arr[4] becomes arr[3], arr[3] becomes arr[2]...
        for (int i = n - 2; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }

        // Step 3: Place the stored last element at the front (Index 0)
        arr[0] = lastElement;
    }
};

int main() {
    Solution solver;
    
    // Test Case: Standard array
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "--- ⚔️ Quest: Cyclic Rotate by One ⚔️ ---" << endl;
    
    cout << "Before Rotation: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    solver.rotate(arr);

    cout << "After Rotation:  ";
    for (int x : arr) cout << x << " "; // Expected: 5 1 2 3 4
    cout << endl;

    // Validation Check
    if (arr[0] == 5 && arr[1] == 1) {
        cout << "[SUCCESS] Array rotated successfully!" << endl;
    } else {
        cout << "[FAILED] Rotation logic is incorrect." << endl;
    }

    return 0;
}