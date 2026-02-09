# ⚔️ Quest: Count Inversions

### 💡 Intuition
An "Inversion" indicates how far the array is from being sorted. 
If we use Merge Sort, the array gets progressively sorted. We just need to count how many "jumps" an element makes to the left during the merge phase.



### ⚙️ The Counting Formula
During the `merge()` function, we have two pointers: `i` for Left Half, `j` for Right Half.
-   If `Left[i] <= Right[j]`: No inversion. `i++`.
-   If `Left[i] > Right[j]`: **Inversion Found!**
    -   Because `Left` is sorted, everything from `i` to the end of the Left half (`mid`) is greater than `Right[j]`.
    -   `count += (mid - i + 1)`.
    -   `j++`.

### ⏱️ Complexity
-   **Time:** $O(N \log N)$
-   **Space:** $O(N)$