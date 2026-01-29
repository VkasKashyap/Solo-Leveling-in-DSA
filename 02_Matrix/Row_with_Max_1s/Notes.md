# ⚔️ Quest: Row with Max 1s

### 💡 Intuition
Since the rows are sorted, 1s are always at the end.
We don't need to count all of them. We just need to find the **left-most 1** in the entire matrix.
The row containing the left-most 1 is automatically the row with the max 1s.

### ⚙️ Approach: Top-Right Start
1. Start at `(0, m-1)`.
2. If `arr[r][c] == 1`: Update `ans = r` and move **Left** (`c--`).
3. If `arr[r][c] == 0`: Move **Down** (`r++`).
4. Repeat until you step out of bounds.

### ⏱️ Complexity
- **Time:** $O(N + M)$ — In the worst case, we traverse from top-right to bottom-left.
- **Space:** $O(1)$.