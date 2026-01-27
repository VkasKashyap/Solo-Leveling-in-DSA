# ⚔️ Quest: Maximum Subarray Sum (Kadane's Algorithm)

### 💡 Intuition
We want the largest sum possible. If our current running sum (`sum`) becomes negative, it is dragging us down. It is better to drop that "baggage" and start fresh from 0.

### ⚙️ Approach: Kadane's Algorithm
1. Iterate through the array, adding `arr[i]` to `currentSum`.
2. Update `maxSum` if `currentSum` is higher.
3. If `currentSum` drops below 0, reset it to 0.

### ⏱️ Complexity
- **Time:** $O(N)$
- **Space:** $O(1)$