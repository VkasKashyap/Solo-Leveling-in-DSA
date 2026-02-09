# ⚔️ Quest: Quick Sort

### 💡 Intuition
Quick Sort is like organizing a messy room.
1.  Pick one item (the "Pivot").
2.  Throw everything smaller to the left corner.
3.  Throw everything bigger to the right corner.
4.  The Pivot is now in its perfect, final spot.
5.  Repeat for the piles in the corners.

### ⚙️ Partition Algorithm (Lomuto Scheme)
-   `pivot = arr[high]`.
-   `i` (Index of smaller element) starts at `low - 1`.
-   Iterate `j` from `low` to `high - 1`.
-   If `arr[j] < pivot`:
    -   Increment `i`.
    -   Swap `arr[i]` and `arr[j]`.
-   Finally, swap `arr[i+1]` with `arr[high]` (Pivot).
-   Return `i+1` (Partition Index).

### ⏱️ Complexity
-   **Time:** Avg $O(N \log N)$, Worst $O(N^2)$.
-   **Space:** $O(\log N)$ stack space.