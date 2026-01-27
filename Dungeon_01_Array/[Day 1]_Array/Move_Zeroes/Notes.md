# ⚔️ Quest: Move Zeroes

### 💡 Intuition
We need to push all zeros to the back while keeping the non-zero elements in their original relative order.
Instead of counting zeros and rebuilding the array (which feels clunky), we can simply "pull" all the non-zero elements to the front.

### ⚙️ Approach: The Two-Pointer Swap
1. **Pointers:** - `j`: The Scout. It iterates through every element.
   - `i`: The Anchor. It marks the position where the next non-zero element should go.
2. **Logic:**
   - Whenever `j` finds a non-zero number, we swap it with the number at `i`.
   - Then we advance `i` to get ready for the next one.
   - If `j` sees a zero, we just ignore it and keep moving.

### ⏱️ Complexity
- **Time Complexity:** $O(N)$ — Single pass through the array.
- **Space Complexity:** $O(1)$ — No extra arrays used, everything is in-place.