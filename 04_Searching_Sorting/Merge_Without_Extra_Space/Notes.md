# ⚔️ Quest: Merge Without Extra Space

### 💡 Intuition
Merging usually requires copying data to a temp array. We can't do that.
The **Gap Method** is based on **Shell Sort**.
It compares elements that are far apart and swaps them to fix the "macro" order first.
As the gap reduces, it fixes the "micro" order.

### ⚙️ The Pointer Trick
We have two arrays, but we treat them as one continuous line.
-   If index `< N`: It is in `arr1`.
-   If index `>= N`: It is in `arr2` (at index `idx - N`).
-   We iterate pointers `i` and `j` separated by `gap`.
    -   Case 1: Both in `arr1`.
    -   Case 2: One in `arr1`, one in `arr2`.
    -   Case 3: Both in `arr2`.

### ⏱️ Complexity
-   **Time:** $O((N+M) \times \log(N+M))$.
-   **Space:** $O(1)$.