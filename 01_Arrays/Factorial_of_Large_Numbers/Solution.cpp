#include <iostream>
#include <vector>
#include <algorithm> // For reverse

using namespace std;

class Solution {
public:
    vector<int> factorial(int N) {
        vector<int> digits;
        digits.push_back(1); 
        for (int x = 2; x <= N; x++) {
            int carry = 0;
            for (int i = 0; i < digits.size(); i++) {
                int product = digits[i] * x + carry;
                
                digits[i] = product % 10; // Store the last digit
                carry = product / 10;     // Carry the rest
            }
            
            while (carry) {
                digits.push_back(carry % 10);
                carry /= 10;
            }
        
        }
        reverse(digits.begin(), digits.end());
        return digits;
    }
};

int main() {
    Solution solver;
    
    // Test Case: 10!
    // 3,628,800
    int N = 100; // Try 100! for a massive number

    cout << "--- ⚔️ Quest: Factorials of Large Numbers ⚔️ ---" << endl;
    
    vector<int> result = solver.factorial(N);
    
    cout << "Factorial of " << N << " is: " << endl;
    for (int digit : result) {
        cout << digit;
    }
    cout << endl;

    return 0;
}