# ⚔️ Quest: First Repeated Element

### 💡 Intuition
We need the first element that occurs more than once.
A naive approach (Nested Loops) would be $O(N^2)$.
We can optimize this to $O(N)$ using a **Hash Map** to store frequencies.

### ⚙️ Approach: Two-Pass Hashing
1. **Pass 1:** Iterate through the array and store the count of every number in a Map.
2. **Pass 2:** Iterate through the **Array** (not the map).
   - The first number we encounter that has `count > 1` in our map is the answer.
   - We scan the array (not the map) to ensure we find the *first occurring* duplicate.

### ⏱️ Complexity
- **Time Complexity:** $O(N)$ — Two linear scans.
- **Space Complexity:** $O(N)$ — To store the frequency map.