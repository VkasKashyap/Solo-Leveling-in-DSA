# ⚔️ Quest: Merge Sort

### 💡 Intuition
Sorting a massive array is hard. Sorting an array of size 1 is trivial (it's already sorted).
Merge Sort breaks the array down until we have N arrays of size 1.
Then, it works backwards, merging pairs of sorted arrays like zipping a zipper.

### ⚙️ Algorithm Steps
1.  **Base Case:** If `left >= right`, return.
2.  **Mid:** `mid = left + (right - left) / 2`.
3.  **Recurse:**
    -   `mergeSort(arr, left, mid)`
    -   `mergeSort(arr, mid + 1, right)`
4.  **Merge:**
    -   Create temp arrays for Left and Right parts.
    -   Compare elements one by one and place the smaller one into the original array.
    -   Copy remaining elements (if any).

### ⏱️ Complexity
-   **Time:** $O(N \log N)$.
-   **Space:** $O(N)$ (Not in-place).