# ⚔️ Quest: Search a 2D Matrix

### 💡 Intuition
The matrix is sorted in a specific way:
`[1, 3, 5] -> [7, 10, 11] -> [16, 20, 23]`
If we flatten this 2D grid into a 1D line, it is a perfectly sorted array.
Therefore, we can use **Binary Search** ($O(\log(MN))$).

### ⚙️ The Coordinate Trick
We don't actually flatten the array (that takes extra space). We calculate the 2D coordinates on the fly.
Imagine indices from `0` to `(m*n) - 1`.
- **Row:** `index / cols`
- **Col:** `index % cols`

### ⏱️ Complexity
- **Time Complexity:** $O(\log(M \times N))$ — Extremely fast.
- **Space Complexity:** $O(1)$ — No extra space used.