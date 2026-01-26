# ⚔️ Quest: Contains Duplicate

### 💡 Intuition
We just need to know if any number appears twice. We don't need to count them.
Instead of a Hash Map (which stores Key + Count), we use a **Hash Set** (which stores only Keys).

### ⚙️ Approach: The HashSet Check
1. Initialize an empty `unordered_set`.
2. Iterate through the array.
3. For every number, check `if (set.count(num))`.
   - If **Yes**: We found a duplicate. Return `true` immediately.
   - If **No**: Insert the number into the set.
4. If the loop finishes, return `false`.

### ⏱️ Complexity
- **Time:** $O(N)$
- **Space:** $O(N)$