# ⚔️ Quest: Container With Most Water

### 💡 Intuition
We want the **max area**. Area depends on two things:
1.  **Height:** Determined by the *shorter* of the two lines.
2.  **Width:** Distance between the lines.

We start with the **widest possible container** (first and last line).
From there, we must shrink the width to check other pairs.
To have a chance at a larger area, we must **discard the shorter line**.

### ⚙️ Approach: Two Pointers (Greedy)
1.  Place `lp` at the start, `hp` at the end.
2.  Calculate area: `min(height[lp], height[hp]) * (hp - lp)`.
3.  Update `maxWater`.
4.  **The Decision:**
    * If `height[lp] < height[hp]`: Move `lp` right. (The left wall is the bottleneck).
    * Else: Move `hp` left.
5.  Repeat until `lp` meets `hp`.

### ⏱️ Complexity
-   **Time:** $O(N)$ — We touch each element at most once.
-   **Space:** $O(1)$ — Only two pointers used.