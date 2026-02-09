# ⚔️ Quest: Ceil in a Sorted Array

### 💡 Intuition
We are looking for the "Smallest Number" that is still "Greater than or Equal to Target".
Standard Binary Search stops at equality. Here, we don't stop.
- If we find a number `>= X`, it might be the answer, OR there might be a tighter answer to its left.
- We record it and keep shrinking the search space to the left.

### ⚙️ Algorithm Steps
1.  Initialize `s = 0`, `e = n-1`, `result = -1`.
2.  While `s <= e`:
    -   `mid = s + (e - s) / 2`.
    -   **If `arr[mid] < X`**: Too small. Move Right (`s = mid + 1`).
    -   **If `arr[mid] >= X`**: Valid Candidate.
        -   Update `result = mid`.
        -   Move Left to find a smaller valid value (`e = mid - 1`).
3.  Return `result`.

### ⏱️ Complexity
-   **Time:** $O(\log N)$.
-   **Space:** $O(1)$.