# ⚔️ Quest: Check if Two Arrays are Equal

### 💡 Intuition
To determine if two arrays are identical in content (regardless of order), we must ensure every element appears the same number of times in both. 

### ⚙️ Approach: Frequency Hashing
1. **Initial Check:** If `size(A) != size(B)`, return `false` immediately.
2. **The Map:** Use an `unordered_map` to store the frequency of elements in Array A.
3. **The Validation:** Iterate through Array B and decrement the counts in the map.
4. **Conclusion:** If any count becomes negative or an element isn't found, the arrays are not equal.

### ⏱️ Complexity Analysis
- **Time Complexity:** $O(N)$ — We traverse each array once.
- **Space Complexity:** $O(K)$ — Where $K$ is the number of unique elements.

### 🔑 Key Learning
Using a single map to "balance" counts (increment for A, decrement for B) is a common pattern in **string anagram** and **array permutation** problems.