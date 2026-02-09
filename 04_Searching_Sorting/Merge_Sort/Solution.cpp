#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& arr, int l, int m, int r) {
        vector<int> temp;
        
        int left = l;   
        int right = m + 1;
        
        while (left <= m && right <= r) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } else {
                temp.push_back(arr[right]);
                right++;
            }
        }
        
        while (left <= m) {
            temp.push_back(arr[left]);
            left++;
        }
        
        while (right <= r) {
            temp.push_back(arr[right]);
            right++;
        }
        
        for (int i = 0; i < temp.size(); i++) {
            arr[l + i] = temp[i];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        if (l >= r) return;
        
        int m = l + (r - l) / 2;
        
        mergeSort(arr, l, m);     
        mergeSort(arr, m + 1, r); 
        
        merge(arr, l, m, r);
    }
};

int main() {
    Solution solver;
    
    // Test Case
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    
    cout << "--- ⚔️ Quest: Merge Sort ⚔️ ---" << endl;
    cout << "Original Array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    
    solver.mergeSort(arr, 0, arr.size() - 1);
    
    cout << "Sorted Array:   ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    
    return 0;
}