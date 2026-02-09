#include <iostream>
#include <vector>
#include <algorithm> // For swap

using namespace std;

class Solution {
public:
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[high];
        int i = (low - 1);   
        
        for (int j = low; j <= high - 1; j++) {
            if (arr[j] < pivot) {
                i++; 
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return (i + 1);
    }
    void quickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }
};

int main() {
    Solution solver;
    
    // Test Case
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    
    cout << "--- ⚔️ Quest: Quick Sort ⚔️ ---" << endl;
    cout << "Unsorted Array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    
    solver.quickSort(arr, 0, arr.size() - 1);
    
    cout << "Sorted Array:   ";
    for (int x : arr) cout << x << " ";
    cout << endl;
    
    return 0;
}