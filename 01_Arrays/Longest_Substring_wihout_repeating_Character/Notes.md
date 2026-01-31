# ⚔️ Quest: Longest Substring Without Repeating Characters

### 💡 Intuition
We want the longest stretch of unique characters.
Instead of checking every substring ($O(N^2)$), we carry a **Map** that remembers the last position of every character.

### ⚙️ Algorithm: Optimized Sliding Window
1.  **Expand:** Move `right` pointer forward.
2.  **Check Duplicate:** If `s[right]` exists in our Map and is **inside the current window** (`index >= left`):
    * This means we hit a snag.
    * **Teleport `left`** to `map[s[right]] + 1`. (Skip past the problem).
3.  **Update Map:** Save the new index of `s[right]`.
4.  **Track Max:** `len = max(len, right - left + 1)`.

### ⏱️ Complexity
-   **Time:** $O(N)$ — We pass through the string once.
-   **Space:** $O(1)$ — The map size is fixed (256 ASCII characters), regardless of string length.