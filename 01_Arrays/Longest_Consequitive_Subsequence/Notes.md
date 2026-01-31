# ⚔️ Quest: Longest Consecutive Subsequence

### 💡 Intuition
We want to find the longest chain like `x, x+1, x+2...`.
Sorting would make this easy ($O(N \log N)$), but we need $O(N)$.
We use a **HashSet** to look up numbers instantly.

### ⚙️ Approach: The "Start of Sequence" Check
1.  Put all unique numbers into a Set.
2.  Iterate through the Set.
3.  **Crucial Logic:** For every number `x`, check if `x-1` exists.
    * **If `x-1` exists:** Then `x` is *not* the start of a chain (it's part of a chain started by someone else). **Skip it.**
    * **If `x-1` does NOT exist:** Then `x` IS the start!
        * Start a `while` loop checking for `x+1`, `x+2`, etc.
        * Count the length.
        * Update `longest`.

### ⏱️ Complexity
-   **Time:** $O(N)$ — Although there is a `while` loop inside a `for` loop, each number is visited at most twice (once to check if it's a start, once inside the while loop).
-   **Space:** $O(N)$ — HashSet storage.