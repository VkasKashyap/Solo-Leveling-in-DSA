# ⚔️ Quest: Segregate 0s and 1s

### 💡 Intuition
We want all `0`s on the left and all `1`s on the right. 
Instead of counting the 0s and rewriting the array (which requires 2 passes), we can do it in a **single pass** using Two Pointers.

### ⚙️ Approach: The "Seek and Swap"
1. **Left Pointer:** Moves forward, skipping `0`s until it finds a misplaced `1`.
2. **Right Pointer:** Moves backward, skipping `1`s until it finds a misplaced `0`.
3. **The Swap:** When both pointers are stuck on misplaced elements, we swap them and continue.

### ⏱️ Complexity
- **Time Complexity:** $O(N)$ — We touch each element at most once.
- **Space Complexity:** $O(1)$ — In-place modification.