# ⚔️ Quest: Search Rotated Array

### 💡 Intuition
Standard Binary Search fails because the order is broken.
However, the array is not random. It consists of **two sorted subarrays**.
At any point `mid`, either the left side `[low...mid]` or the right side `[mid...high]` is sorted.
We identify the sorted side first, then check if our target fits inside that sorted range.

### ⚙️ Algorithm
1.  `mid = (low + high) / 2`.
2.  If `arr[mid] == target`, return `mid`.
3.  **Is Left Sorted?** (`arr[low] <= arr[mid]`)
    - If `target` is between `arr[low]` and `arr[mid]`: Eliminate Right (`high = mid - 1`).
    - Else: Eliminate Left (`low = mid + 1`).
4.  **Else (Right is Sorted):**
    - If `target` is between `arr[mid]` and `arr[high]`: Eliminate Left (`low = mid + 1`).
    - Else: Eliminate Right (`high = mid - 1`).

### ⏱️ Complexity
-   **Time:** $O(\log N)$.
-   **Space:** $O(1)$.