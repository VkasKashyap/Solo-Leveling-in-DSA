#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    // Function to return the position of the first repeating element.
    // Returns 1-based index.
    int firstRepeated(vector<int> &arr) {
        unordered_map<int, int> mp;
        
        // Step 1: Build the Frequency Map
        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }
        
        // Step 2: Scan array again to find the first element with frequency > 1
        for (int i = 0; i < arr.size(); i++) {
            if (mp[arr[i]] > 1) {
                return i + 1; // Return 1-based index
            }
        }
        
        return -1; // No repeated elements found
    }
};

int main() {
    Solution solver;
    
    // Test Case:
    // 5 repeats, 3 repeats. 
    // But 5 appears at index 2, 3 appears at index 3.
    // So 5 is the "First Repeated" element.
    vector<int> arr = {1, 5, 3, 4, 3, 5, 6};

    cout << "--- ⚔️ Quest: First Repeated Element ⚔️ ---" << endl;
    
    int result = solver.firstRepeated(arr);
    
    if (result != -1) {
        cout << "First Repeated Element is at Index: " << result << endl; // Expected: 2 (Value 5)
        cout << "Value: " << arr[result - 1] << endl;
    } else {
        cout << "No repeated elements found." << endl;
    }

    return 0;
}