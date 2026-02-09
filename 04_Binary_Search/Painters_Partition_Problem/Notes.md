# ⚔️ Quest: Painter's Partition

### 💡 Intuition
We need to split the array into `K` contiguous subarrays such that the largest sum of any subarray is minimized.
This is a classic **"Min-Max"** problem solvable by **Binary Search on Answer**.

### ⚙️ Mapping to Book Allocation
-   In Book Allocation: We minimize the max pages a student reads.
-   In Painter's Partition: We minimize the max time a painter works.
-   The `isPossible()` function logic is **exactly the same**.

### ⏱️ Complexity
-   **Time:** $O(N \times \log(\sum \text{Length}))$.
-   **Space:** $O(1)$.