# ⚔️ Quest: First Non-Repeating Element

### 💡 Intuition
We need to find the first element that appears exactly once. 
Since we need to know the total count of every number before we can decide if it is unique, we must traverse the array at least twice (conceptually).

### ⚙️ Approach: Two-Pass Hashing
1. **Pass 1 (Counting):** Iterate through the array and fill a Hash Map (`unordered_map`) with frequencies.
2. **Pass 2 (Verification):** Iterate through the **original array** from the start.
   - Check the map: `if (mp[arr[i]] == 1)`.
   - The first one that satisfies this condition is our answer.

### ⏱️ Complexity
- **Time Complexity:** $O(N)$ — Two linear passes.
- **Space Complexity:** $O(N)$ — To store the frequency map.