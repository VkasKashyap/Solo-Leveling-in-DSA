# ⚔️ Quest: Value Equal to Index

### 💡 Intuition
The problem asks for elements where the value matches its position. 
**Crucial Detail:** Most competitive platforms (like GFG) use **1-based indexing** for this specific problem.

### ⚙️ Approach: Linear Scan
1. Iterate through the array from `i = 0` to `n-1`.
2. Check if `arr[i] == i + 1`.
   - `i` is the 0-based index (computer logic).
   - `i + 1` is the 1-based index (problem logic).
3. If true, add to the answer list.

### ⏱️ Complexity
- **Time Complexity:** $O(N)$ — We visit every element once.
- **Space Complexity:** $O(1)$ — Excluding the space for the output vector.