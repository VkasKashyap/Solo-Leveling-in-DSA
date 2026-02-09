#include <iostream>

using namespace std;

class Solution {
public:
    long long int floorSqrt(long long int n) {
        long long int s = 0;
        long long int e = n;
        long long int ans = -1;
        
        while (s <= e) {
            long long int mid = s + (e - s) / 2;
            
            long long int square = mid * mid;
            
            if (square == n) {
                return mid; // Perfect square
            }
            else if (square < n) {
                ans = mid;    // Store potential floor answer
                s = mid + 1;  // Try to find a larger root
            }
            else {
                e = mid - 1;  // mid^2 is too large
            }
        }
        return ans;
    }
};

int main() {
    Solution solver;
    
    long long int n = 8;
    cout << "--- ⚔️ Quest: Floor Square Root ⚔️ ---" << endl;
    cout << "Number: " << n << endl;
    
    cout << "Floor Sqrt: " << solver.floorSqrt(n) << endl;
    // Expected: 2 (since 2*2 = 4 < 8, and 3*3 = 9 > 8)
    
    return 0;
}