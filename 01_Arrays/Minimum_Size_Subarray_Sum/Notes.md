# ⚔️ Quest: Minimum Size Subarray Sum

### 💡 Intuition
We need the smallest contiguous subarray with a sum $\ge$ target.
A Brute Force approach checking all subarrays is $O(N^2)$, which is too slow.
We use the **Sliding Window** technique ($O(N)$).

### ⚙️ Algorithm: Caterpillar Method
Imagine a caterpillar stretching and shrinking:
1.  **Eat (Expand):** Move `right` pointer to eat numbers and increase `sum`.
2.  **Digest (Shrink):** While `sum >= target`:
    * Record the current length (`right - left + 1`).
    * Subtract `nums[left]` from `sum`.
    * Move `left` forward to see if a smaller window also works.

### ⏱️ Complexity
-   **Time Complexity:** $O(N)$ — Each element is added once and removed once.
-   **Space Complexity:** $O(1)$ — Only a few variables used.