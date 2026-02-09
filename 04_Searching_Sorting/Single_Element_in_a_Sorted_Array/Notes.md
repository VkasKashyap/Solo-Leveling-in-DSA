# ⚔️ Quest: Single Element (Sorted)

### 💡 Intuition
We want to find the **Break Point** where the pair structure changes.
-   **Left Side:** `arr[even] == arr[odd]` (e.g., indices 0==1, 2==3).
-   **Right Side:** `arr[even] != arr[odd]` (because the single element shifted everything).

### ⚙️ Edge Cases
-   If `n == 1`: Return `arr[0]`.
-   If `arr[0] != arr[1]`: Single element is first.
-   If `arr[n-1] != arr[n-2]`: Single element is last.
-   **Main Loop:** Search from `1` to `n-2` to avoid index out of bounds.

### ⏱️ Complexity
-   **Time:** $O(\log N)$.
-   **Space:** $O(1)$.