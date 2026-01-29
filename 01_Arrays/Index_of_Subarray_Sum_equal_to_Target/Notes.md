# ⚔️ Quest: Subarray with Given Sum

### 💡 Intuition
We need a contiguous block of numbers that sums to `S`.
Instead of checking every possible subarray ($O(N^2)$), we can use a **Sliding Window**.
Think of it like a caterpillar:
- It eats (expands right) to grow larger.
- If it gets too fat (sum > S), it poops (shrinks left) to get smaller.

### ⚙️ Approach: Sliding Window
1. **Expand:** Add `arr[right]` to `currentSum`.
2. **Shrink:** While `currentSum > S`, subtract `arr[left]` and increment `left`.
3. **Check:** If `currentSum == S`, we found it! Return indices `{left+1, right+1}`.

### ⚠️ Constraint
This logic works for **Non-Negative Integers** only. If the array contains negative numbers, you must use a Hash Map (Prefix Sum) approach.

### ⏱️ Complexity
- **Time Complexity:** $O(N)$ — Each element is added once and removed at most once.
- **Space Complexity:** $O(1)$ — No extra data structures used.