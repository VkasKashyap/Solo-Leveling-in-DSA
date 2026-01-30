# ⚔️ Quest: Set Matrix Zeroes

### 💡 Intuition
If we set zeros immediately, we lose the history of which zeros were "original" and which were "created".
Instead of using extra space for markers, we use the **First Row** and **First Column** of the matrix itself as markers.

### ⚙️ Approach: The "Header" Strategy
1.  **Marking:** Iterate through the matrix. If `mat[i][j] == 0`:
    * Set `mat[i][0] = 0` (Row Marker)
    * Set `mat[0][j] = 0` (Col Marker)
    * *Special Case:* If `j == 0`, we can't use `mat[0][0]` for both row and col status. So we use a separate variable `col0`.
2.  **Zeroing:** Iterate from `(1,1)` to the end. If the row marker OR col marker is 0, set cell to 0.
3.  **Cleanup:**
    * If `mat[0][0] == 0`, zero out the **First Row**.
    * If `col0 == 0`, zero out the **First Column**.

### ⏱️ Complexity
-   **Time:** $O(2 \times N \times M) \approx O(NM)$ — Two passes.
-   **Space:** $O(1)$ — No extra arrays used.