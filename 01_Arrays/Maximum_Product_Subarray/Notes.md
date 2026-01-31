# ⚔️ Quest: Maximum Product Subarray

### 💡 Intuition
Unlike Sum, where adding a negative number always decreases value, in Product, multiplying by a negative number flips the sign.
* `Positive * Negative = Negative` (Bad)
* `Negative * Negative = Positive` (Good!)

Because of this "flipping", the maximum product must lie either:
1.  Starting from the very **Left** (Prefix).
2.  Starting from the very **Right** (Suffix).
*(Unless there are zeros, which split the array into independent subarrays).*

### ⚙️ Approach: Prefix & Suffix Scan
1.  Initialize `prefix = 1`, `suffix = 1`, `ans = INT_MIN`.
2.  Traverse the array:
    * Multiply `prefix` by `arr[i]`.
    * Multiply `suffix` by `arr[n-1-i]`.
    * Update `ans = max(ans, max(prefix, suffix))`.
    * **Reset:** If `prefix` or `suffix` becomes `0`, reset them to `1` (because we can't multiply by 0 to get the next number).

### ⏱️ Complexity
-   **Time:** $O(N)$ — Single pass.
-   **Space:** $O(1)$ — Only variables used.