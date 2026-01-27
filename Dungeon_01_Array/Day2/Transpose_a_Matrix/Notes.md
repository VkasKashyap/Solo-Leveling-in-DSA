# ⚔️ Quest: Transpose Matrix (Square)

### 💡 Intuition
Transposing means flipping the matrix over its main diagonal.
Rows become columns, and columns become rows.
For a **Square Matrix**, we can do this without extra space by just swapping elements.

### ⚙️ Approach: Diagonal Swap
1.  Iterate through the rows (`i` from `0` to `n-1`).
2.  Iterate through the columns starting from the diagonal (`j` from `i+1` to `n-1`).
3.  **Swap** `mat[i][j]` with `mat[j][i]`.
4.  *Note:* We start `j` at `i+1` (upper triangle) so we don't swap the same pair twice, which would revert the matrix back to original.

### ⏱️ Complexity
- **Time Complexity:** $O(N^2)$ — We touch roughly half the elements.
- **Space Complexity:** $O(1)$ — In-place modification.