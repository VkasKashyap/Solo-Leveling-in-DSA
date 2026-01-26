# ⚔️ Quest: Find Duplicates in Array

### 💡 Intuition
We need to identify numbers that appear more than once. 
Using a **Hash Map** allows us to count occurrences. Using `std::map` specifically (instead of `unordered_map`) ensures our output is **sorted**, which is a common requirement for this problem.

### ⚙️ Approach: Frequency Map
1. Create a `map<int, int>`.
2. Iterate through the array and increment the count for each number: `mp[num]++`.
3. Iterate through the map. If `frequency > 1`, add the number to the answer list.

### ⏱️ Complexity
- **Time Complexity:** $O(N \log N)$ — Map insertion takes $O(\log N)$, performed $N$ times.
- **Space Complexity:** $O(N)$ — To store the unique elements in the map.