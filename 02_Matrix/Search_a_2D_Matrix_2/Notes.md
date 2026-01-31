# ⚔️ Quest: Search a 2D Matrix II

### 💡 Intuition
This matrix is sorted across rows and columns, but **not strictly grid-sorted** (the end of row 1 isn't necessarily smaller than start of row 2).
We cannot use Binary Search on the whole matrix.
Instead, we use the **Staircase Search** strategy.

### ⚙️ The "Top-Right" Trick
Why start at `(0, m-1)` (Top-Right)?
Because from this corner:
1.  **Left:** Numbers get **Smaller**.
2.  **Down:** Numbers get **Bigger**.

This gives us a perfect decision tree:
* If `matrix[r][c] > target`: We need smaller -> Move **Left** (eliminate column).
* If `matrix[r][c] < target`: We need bigger -> Move **Down** (eliminate row).

### ⏱️ Complexity
-   **Time Complexity:** $O(M + N)$ — In the worst case, we walk from the top-right to the bottom-left corner.
-   **Space Complexity:** $O(1)$ — No extra storage.