# ⚔️ Quest: Trapping Rain Water

### 💡 Intuition
To trap water at index `i`, we need a tall wall on the left and a tall wall on the right.
The amount of water is: `min(LeftMax, RightMax) - height[i]`.

### ⚙️ Approach: Optimized Two Pointers
Instead of pre-calculating the Max arrays ($O(N)$ space), we calculate them on the fly.
1.  Initialize `left = 0`, `right = n-1`.
2.  Compare `height[left]` and `height[right]`.
3.  **If Left is Smaller:**
    * We know the water level is bottlenecked by `LeftMax` (because `RightMax` is guaranteed to be taller somewhere on the right).
    * Update `LeftMax`. If `height[left] < LeftMax`, add the difference to `total`.
    * Move `left++`.
4.  **If Right is Smaller:**
    * We know the water level is bottlenecked by `RightMax`.
    * Update `RightMax`. If `height[right] < RightMax`, add difference.
    * Move `right--`.

### ⏱️ Complexity
-   **Time Complexity:** $O(N)$ — Single pass.
-   **Space Complexity:** $O(1)$ — Only variables used.