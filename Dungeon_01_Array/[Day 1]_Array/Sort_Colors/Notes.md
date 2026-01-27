# ⚔️ Quest: Sort Colors (Dutch National Flag Algo)

### 💡 Intuition
We need to group 0s, 1s, and 2s.
Imagine three regions:
1. **Red (0):** From `0` to `low-1`
2. **White (1):** From `low` to `high`
3. **Blue (2):** From `high+1` to `end`

We use a scanner pointer (`mid`) to place elements into their correct regions.

### ⚙️ Approach: Three Pointers
1. **Setup:** `low = 0`, `mid = 0`, `high = n-1`.
2. **Loop:** While `mid <= high`:
   - If `nums[mid] == 0`: Swap with `low`. Increment both `low` and `mid`.
   - If `nums[mid] == 1`: Correct place. Just increment `mid`.
   - If `nums[mid] == 2`: Swap with `high`. Decrement `high`. **Do not move `mid`** (we need to check what we just swapped in).

### ⏱️ Complexity
- **Time Complexity:** $O(N)$ — Single pass.
- **Space Complexity:** $O(1)$ — In-place sorting.