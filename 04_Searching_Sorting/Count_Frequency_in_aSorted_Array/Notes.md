# ⚔️ Quest: Count Occurrences

### 💡 Intuition
Since the array is sorted, all duplicates of `target` are grouped together (e.g., `... 1, 2, 2, 2, 3 ...`).
We need to find the **Start** and **End** of this group.
1.  **First Occurrence:** Standard Binary Search, but when we find `target`, we don't stop. We record the position and try to find an even earlier one to the **Left**.
2.  **Last Occurrence:** When we find `target`, we record position and try to find a later one to the **Right**.

### ⚙️ Edge Case
- If `target` is not present, `First Index` (or `low`) remains `-1`. Return `0`.

### ⏱️ Complexity
-   **Time:** $O(\log N + \log N) \approx O(\log N)$.
-   **Space:** $O(1)$.