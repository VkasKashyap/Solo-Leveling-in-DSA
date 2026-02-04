# ⚔️ Quest: Floor in a Sorted Array

### 💡 Intuition
Standard Binary Search looks for an exact match.
Here, we are looking for a **Range Condition**: `val <= X`.
Since we want the *largest* value that satisfies this, we don't stop when we find one match. We store it and keep looking to the **Right** to see if a better (larger) candidate exists.

### ⚙️ Algorithm Steps
1.  Initialize `start = 0`, `end = n-1`, `ans = -1`.
2.  While `start <= end`:
    -   `mid = start + (end - start) / 2`.
    -   **If `arr[mid] > X`**: Value is too large. Move Left (`end = mid - 1`).
    -   **If `arr[mid] <= X`**: Value is valid.
        -   Update `ans = mid`.
        -   Move Right to check for larger valid values (`start = mid + 1`).
3.  Return `ans`.

### ⏱️ Complexity
-   **Time:** $O(\log N)$.
-   **Space:** $O(1)$.