# ⚔️ Quest: Common Elements in 3 Sorted Arrays

### 💡 Intuition
Finding intersection of unsorted arrays requires Hashing ($O(N)$ Space).
Since these are **Sorted**, we can use pointers to synchronize them.
If `x` is smaller than `y`, `x` can never equal `y` unless we increase `x`.

### ⚙️ Approach: 3-Pointer Dance
1.  Initialize `i, j, k` at 0.
2.  If `A[i] == B[j] == C[k]`:
    * Add to result (check for duplicates).
    * `i++, j++, k++`.
3.  Else:
    * Find the smallest of the three values.
    * Move that pointer forward (it's the only way to catch up).

### ⏱️ Complexity
-   **Time:** $O(n1 + n2 + n3)$ — In worst case, we traverse all arrays once.
-   **Space:** $O(1)$ — Only output storage used.