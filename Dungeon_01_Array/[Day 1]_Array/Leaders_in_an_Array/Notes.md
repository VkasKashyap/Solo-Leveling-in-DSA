# ⚔️ Quest: Leaders in an Array

### 💡 Intuition
A brute-force approach compares each element with everything to its right ($O(N^2)$). By scanning from **right to left**, we can keep track of the maximum element seen so far. If the current element is $\ge$ `max_so_far`, it must be a leader.

### ⚙️ Approach: Right-to-Left Scan
1. Start from the last element (always a leader).
2. Maintain a `maxi` variable to track the highest value encountered from the right.
3. If `arr[i] >= maxi`, add it to the result and update `maxi`.
4. Reverse the result array at the end to restore the original relative order.

### ⏱️ Complexity
- **Time Complexity:** $O(N)$ — Single pass through the array.
- **Space Complexity:** $O(1)$ — Excluding the space used for the output list.