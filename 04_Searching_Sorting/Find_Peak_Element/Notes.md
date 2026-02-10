# ⚔️ Quest: Find Peak Element

### 💡 Intuition
We don't need a global sort. We just need local information.
Binary Search works here because of the **"Promise of a Peak"**:
- If you are climbing up (`mid < mid+1`), and the world ends at $-\infty$, you are guaranteed to hit a peak if you keep moving forward.
- If you are going down, the peak was behind you.

### ⚙️ Algorithm
1.  Initialize `low = 0`, `high = n - 1`.
2.  While `low < high`:
    -   `mid = low + (high - low) / 2`.
    -   If `nums[mid] < nums[mid+1]`:
        -   Rising slope. Peak is to the right. `low = mid + 1`.
    -   Else:
        -   Falling slope or Peak. Keep `mid` as a candidate. `high = mid`.
3.  Return `low`.

### ⏱️ Complexity
-   **Time:** $O(\log N)$.
-   **Space:** $O(1)$.