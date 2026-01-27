# ⚔️ Quest: Majority Element (Moore's Voting Algo)

### 💡 Intuition
If a number appears more than `N/2` times, it is the "Majority".
Imagine a battle: Every number fights a different number and both die.
The Majority Element is so numerous that it will be the only one left standing at the end.

### ⚙️ Approach: Moore's Voting Algorithm
1. **Candidate Selection:** Maintain a `count` and a `candidate`.
2. **Voting:**
   - If `count == 0`, set the current number as the new `candidate`.
   - If the current number is the `candidate`, increment `count`.
   - If it is different, decrement `count`.
3. **Result:** The variable `candidate` holds the majority element.

### ⏱️ Complexity
- **Time Complexity:** $O(N)$ — One pass.
- **Space Complexity:** $O(1)$ — No extra space.