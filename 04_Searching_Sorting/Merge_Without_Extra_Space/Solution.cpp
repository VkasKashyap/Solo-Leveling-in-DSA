#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
public:
    void merge(long long arr1[], long long arr2[], int n, int m) {
        int len = n + m;
        
        int gap = (len / 2) + (len % 2);
        
        while (gap > 0) {
            int left = 0;
            int right = left + gap;
            
            while (right < len) {
                if (left < n && right < n) {
                    if (arr1[left] > arr1[right]) {
                        swap(arr1[left], arr1[right]);
                    }
                }
                else if (left < n && right >= n) {
                    if (arr1[left] > arr2[right - n]) {
                        swap(arr1[left], arr2[right - n]);
                    }
                }
                else if (left >= n && right >= n) {
                    if (arr2[left - n] > arr2[right - n]) {
                        swap(arr2[left - n], arr2[right - n]);
                    }
                }
                
                left++;
                right++;
            }
            
            if (gap == 1) break;
            
            gap = (gap / 2) + (gap % 2);
        }
    }
};

int main() {
    Solution solver;
    
    // Test Case
    long long arr1[] = {1, 3, 5, 7};
    long long arr2[] = {0, 2, 6, 8, 9};
    int n = 4;
    int m = 5;
    
    cout << "--- ⚔️ Quest: Merge Without Extra Space ⚔️ ---" << endl;
    
    solver.merge(arr1, arr2, n, m);
    
    cout << "Arr1: ";
    for(int i=0; i<n; i++) cout << arr1[i] << " ";
    cout << endl;
    
    cout << "Arr2: ";
    for(int i=0; i<m; i++) cout << arr2[i] << " ";
    cout << endl;
    
    return 0;
}