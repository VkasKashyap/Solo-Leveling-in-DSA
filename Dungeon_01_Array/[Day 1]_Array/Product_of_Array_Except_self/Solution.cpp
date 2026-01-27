#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n);
        
        // Step 1: Calculate Left (Prefix) Products
        // output[i] will contain the product of everything to the LEFT of i
        output[0] = 1; // Nothing to the left of the first element
        for(int i = 1; i < n; i++) {
            output[i] = output[i - 1] * nums[i - 1];
        }
        
        // Step 2: Calculate Right (Suffix) Products on the fly
        // We don't need a separate array for this. We can use a variable.
        int rightProduct = 1;
        for(int i = n - 1; i >= 0; i--) {
            // Multiply the current Left Product (already in output[i]) by the Right Product
            output[i] = output[i] * rightProduct;
            
            // Update the Right Product for the next iteration (moving leftwards)
            rightProduct = rightProduct * nums[i];
        }
        
        return output;
    }
};

// Main function to run the code locally
int main() {
    Solution solver;
    vector<int> nums = {1, 2, 3, 4};

    cout << "--- ⚔️ Quest: Product of Array Except Self ⚔️ ---" << endl;
    
    vector<int> result = solver.productExceptSelf(nums);
    
    cout << "Result: ";
    for(int x : result) cout << x << " ";
    cout << endl;
    // Expected Output: 24 12 8 6

    return 0;
}