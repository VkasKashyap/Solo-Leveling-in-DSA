# ⚔️ Quest: Rotate Array by One (Cyclic)

### 💡 Intuition
We need to shift every element to the right by one position. The last element, which "falls off" the end, must be brought back to the start (index 0).

### ⚙️ Approach: The "Shift and Place"
1. **Store:** Save the last element (`arr[n-1]`) in a temporary variable.
2. **Shift:** Iterate from the **second-to-last** element down to the first (`n-2` to `0`).
   - Move `arr[i]` to `arr[i+1]`.
   - *Why Backwards?* If we went forwards, we would overwrite `arr[1]` with `arr[0]` before we could move `arr[1]`.
3. **Place:** Assign the stored variable to `arr[0]`.

### ⏱️ Complexity
- **Time Complexity:** $O(N)$ — We touch every element once to shift it.
- **Space Complexity:** $O(1)$ — We only use one integer variable (`lastElement`) for storage.