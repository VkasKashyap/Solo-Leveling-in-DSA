# ⚔️ Quest: Merge Sorted Array (LeetCode Variant)

### 💡 Intuition
We have two sorted arrays, but `nums1` has extra space at the end to hold `nums2`.
If we start merging from the front, we would overwrite elements in `nums1` that we haven't processed yet.
**Solution:** Start from the back! The largest numbers go to the end of the array, which is empty anyway.

### ⚙️ Approach: The Reverse Zipper
1. **Pointers:**
   - `i`: Last valid element of `nums1`.
   - `j`: Last element of `nums2`.
   - `k`: Last position in `nums1` (the write pointer).
2. **Loop:** Compare `nums1[i]` and `nums2[j]`. Place the **larger** one at `nums1[k]` and decrement the pointers.
3. **Cleanup:** If `nums2` runs out first, we are done (since `nums1` is already in place). If `nums1` runs out first, copy the rest of `nums2`.

### ⏱️ Complexity
- **Time Complexity:** $O(M + N)$ — Single pass.
- **Space Complexity:** $O(1)$ — In-place modification.