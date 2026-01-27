# ⚔️ Quest: Squares of a Sorted Array

### 💡 Intuition
The input array is sorted, but it may contain negative numbers.
Squaring a negative number makes it positive, meaning the "largest" squares are at the **edges** of the array (e.g., `-9` becomes `81`, `10` becomes `100`).
Instead of squaring and sorting ($O(N \log N)$), we use two pointers to pick the largest squares from the ends and fill our result array from right to left.

### ⚙️ Approach: Two Pointers (Inward)
1. **Pointers:** `left` at start, `right` at end.
2. **Comparison:** Compare `abs(nums[left])` vs `abs(nums[right])`.
3. **Placement:** Place the square of the larger absolute value at the current end of the `result` array.
4. **Move:** Move the pointer of the chosen element inward.

### ⏱️ Complexity
- **Time Complexity:** $O(N)$ — Single pass.
- **Space Complexity:** $O(N)$ — Output array.