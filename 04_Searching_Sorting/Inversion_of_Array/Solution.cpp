#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    long long int mergeAndCount(long long arr[], long long temp[], int left, int mid, int right) {
        int i = left;   
        int j = mid + 1; 
        int k = left;    
        long long int inv_count = 0;
        while ((i <= mid) && (j <= right)) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
                inv_count = inv_count + (mid - i + 1); 
            }
        }

        while (i <= mid) {
            temp[k++] = arr[i++];
        }

        while (j <= right) {
            temp[k++] = arr[j++];
        }

        for (i = left; i <= right; i++) {
            arr[i] = temp[i];
        }

        return inv_count;
    }

    long long int mergeSortAndCount(long long arr[], long long temp[], int left, int right) {
        long long int mid, inv_count = 0;
        if (right > left) {
            mid = left + (right - left) / 2;

            inv_count += mergeSortAndCount(arr, temp, left, mid);

            inv_count += mergeSortAndCount(arr, temp, mid + 1, right);

            inv_count += mergeAndCount(arr, temp, left, mid, right);
        }
        return inv_count;
    }

    long long int inversionCount(long long arr[], long long N) {
        long long temp[N]; 
        return mergeSortAndCount(arr, temp, 0, N - 1);
    }
};

int main() {
    Solution solver;
    
    // Test Case: [2, 4, 1, 3, 5]
    // Inversions: (2,1), (4,1), (4,3) -> Total 3
    long long arr[] = {2, 4, 1, 3, 5};
    long long n = 5;
    
    cout << "--- ⚔️ Quest: Inversion of Array ⚔️ ---" << endl;
    cout << "Array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    
    long long int result = solver.inversionCount(arr, n);
    
    cout << "Total Inversions: " << result << endl;
    
    return 0;
}