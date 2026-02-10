# ⚔️ Quest: Median of Two Sorted Arrays

### 💡 Intuition
We don't need to sort the combined array. We just need to find the **Boundary Line** that separates the smallest 50% from the largest 50%.
Since the arrays are already sorted, this boundary cuts through both arrays at specific points.
We Binary Search on the **Smaller Array** to find the correct cut position.

### ⚙️ The Algorithm (Partitioning)
1.  Ensure `nums1` is the smaller array (swap if needed) to minimize search space.
2.  `low = 0`, `high = n1`.
3.  `cut1 = (low + high) / 2`.
4.  `cut2 = (n1 + n2 + 1) / 2 - cut1`.
5.  Define `l1, l2, r1, r2`. (Handle edge cases with `INT_MIN` / `INT_MAX`).
6.  **Check:**
    -   If `l1 <= r2` && `l2 <= r1`: **Found It!** Calculate Median.
    -   If `l1 > r2`: Left side of `nums1` is too big. Move Left (`high = cut1 - 1`).
    -   Else: Left side of `nums1` is too small. Move Right (`low = cut1 + 1`).

### ⏱️ Complexity
-   **Time:** $O(\log(\min(N, M)))$.
-   **Space:** $O(1)$.