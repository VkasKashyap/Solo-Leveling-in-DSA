#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        long long int totalFineAmount = 0;
        int n = car.size();
        
        // S-Rank Logic: One loop to rule them all
        for (int i = 0; i < n; i++) {
            // If date is Even (0) and Car is Odd (1) -> 0 != 1 (True) -> Fine
            // If date is Odd (1) and Car is Even (0) -> 1 != 0 (True) -> Fine
            if (date % 2 != car[i] % 2) {
                totalFineAmount += fine[i];
            }
        }
        
        return totalFineAmount;
    }
};

// --- Test Bench for VS Code ---
int main() {
    Solution solver;
    
    // Test Case: Odd Date (17), so Even cars get fined
    int date = 17;
    vector<int> cars = {23, 2, 4, 7}; // Even cars: 2, 4
    vector<int> fines = {200, 300, 400, 500}; // Fines for them: 300, 400
    
    cout << "--- ⚔️ Quest: Calculate Total Fine ⚔️ ---" << endl;
    
    long long int result = solver.totalFine(date, cars, fines);
    
    cout << "Date: " << date << endl;
    cout << "Total Fine Collected: " << result << endl; // Expected: 700

    if (result == 700) {
        cout << "[SUCCESS] Calculation Accurate!" << endl;
    } else {
        cout << "[FAILED] Math error." << endl;
    }

    return 0;
}