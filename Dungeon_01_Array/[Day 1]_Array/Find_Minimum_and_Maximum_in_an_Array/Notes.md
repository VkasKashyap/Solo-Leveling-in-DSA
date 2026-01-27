# ⚔️ Quest: Find Min and Max

### 💡 Intuition
To find the extremes of an array, we must look at every element at least once. We assume the first element is both the smallest and the largest, then challenge that assumption against every other number.

### ⚙️ Approach: Linear Scan
1. Set `min = arr[0]` and `max = arr[0]`.
2. Loop from `i = 1` to `n-1`.
3. Compare `arr[i]` with `min` and `max`, updating them if necessary.

### ⏱️ Complexity
- **Time Complexity:** $O(N)$ — Single pass.
- **Space Complexity:** $O(1)$ — Only two variables used.