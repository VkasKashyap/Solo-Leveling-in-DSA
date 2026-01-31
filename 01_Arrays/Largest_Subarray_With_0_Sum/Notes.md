# ⚔️ Quest: Largest Subarray with 0 Sum

### 💡 Intuition
A brute force approach checks all subarrays ($O(N^2)$). We need $O(N)$.
The magic trick is **Prefix Sum**.
If the cumulative sum at index `j` is `S`, and later at index `i` the cumulative sum is *also* `S`:
* It means the numbers added **between** `j` and `i` must sum to `0` (since the total didn't change).
* Length of this zero-sum subarray = `i - j`.

### ⚙️ Approach: HashMap (Prefix Sum)
1.  Initialize `sum = 0` and `maxLen = 0`.
2.  Use a Map to store `{Sum : Index}`.
3.  Iterate through the array:
    * Add current element to `sum`.
    * **Check 1:** If `sum == 0`, the whole array from start is valid. `maxLen = i + 1`.
    * **Check 2:** If `sum` exists in Map, we found a loop!
        * Calculate `len = i - map[sum]`.
        * `maxLen = max(maxLen, len)`.
    * **Check 3:** If `sum` is NOT in Map, store it: `map[sum] = i`.
        * *Note:* Do not update the index if it already exists. We want the *left-most* index to get the *longest* distance.

### ⏱️ Complexity
-   **Time:** $O(N)$ — One pass using HashMap operations.
-   **Space:** $O(N)$ — To store prefix sums.