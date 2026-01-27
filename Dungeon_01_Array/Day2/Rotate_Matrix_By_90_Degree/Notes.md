# ⚔️ Quest: Rotate Image (90° Clockwise)

### 💡 Intuition
We need to rotate an $N \times N$ matrix by 90 degrees **in-place** (without creating a new matrix).
Moving elements directly in a cycle is complex.
Instead, we use Linear Algebra properties:
**Rotate 90° Clockwise = Transpose + Reverse Rows**

### ⚙️ Approach: Transpose & Reverse
1.  **Transpose:** Convert rows to columns.
    * Iterate through the upper triangle.
    * Swap `matrix[i][j]` with `matrix[j][i]`.
2.  **Reverse:** Flip the matrix horizontally.
    * Iterate through every row.
    * Reverse the row using `std::reverse`.

### ⏱️ Complexity
- **Time Complexity:** $O(N^2)$ — We process every cell twice (swap + reverse).
- **Space Complexity:** $O(1)$ — Done entirely in-place.