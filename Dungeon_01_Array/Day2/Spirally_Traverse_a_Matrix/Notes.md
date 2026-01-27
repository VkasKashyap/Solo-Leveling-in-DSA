# ⚔️ Quest: Spiral Matrix

### 💡 Intuition
Imagine peeling an onion layer by layer.
We go **Right -> Down -> Left -> Up**.
After each pass, we "shrink" the wall we just finished so we don't visit it again.

### ⚙️ Approach: The 4 Walls
We have 4 pointers: `hstart` (top), `hend` (bottom), `vstart` (left), `vend` (right).

1. **Top Row:** Print `vstart` to `vend`. Move `hstart` down.
2. **Right Col:** Print `hstart` to `hend`. Move `vend` left.
3. **Bottom Row:** (Check if row still exists!) Print `vend` to `vstart`. Move `hend` up.
4. **Left Col:** (Check if col still exists!) Print `hend` to `hstart`. Move `vstart` right.

**Key Trick:** Always check `if(hstart <= hend)` before going left/up to avoid printing duplicates in single rows/columns.

### ⏱️ Complexity
- **Time:** $O(N \times M)$ — We visit every number exactly once.
- **Space:** $O(1)$ — Just storing the answer.