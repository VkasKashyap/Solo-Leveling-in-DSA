# ⚔️ Quest: Kth Smallest (QuickSelect)

### 💡 Intuition
We don't need the whole array sorted. We just need the element at index `k-1` to be in its correct sorted position.
Quick Sort's **Partition** function does exactly that: it places one element (the pivot) in its final sorted spot.
We keep partitioning until the pivot lands exactly on `k-1`.

### ⚙️ Algorithm
1.  `pivotIndex = partition(arr, low, high)`.
2.  If `pivotIndex == k - 1`: Return `arr[pivotIndex]`.
3.  If `pivotIndex > k - 1`: Recurse Left (`high = pivotIndex - 1`).
4.  If `pivotIndex < k - 1`: Recurse Right (`low = pivotIndex + 1`).

### ⏱️ Complexity
-   **Time:** Avg $O(N)$, Worst $O(N^2)$ (Rare, sorted array).
-   **Space:** $O(1)$ (Tail recursion optimization).