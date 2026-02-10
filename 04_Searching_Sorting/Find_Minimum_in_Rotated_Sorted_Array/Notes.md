# ⚔️ Quest: Min in Rotated Array

### 💡 Intuition
A rotated array is just two sorted subarrays appended together.
The minimum element is the only element that is smaller than its previous element.
We use Binary Search to find the "Point of Change".

### ⚙️ Visual Logic
Compare `mid` against `high` (or `low`).
-   If `arr[mid] > arr[high]`:
    -   The cliff is to the right. e.g., `[4, 5, 6, 7, 0, 1, 2]` (mid=7, high=2).
    -   `low = mid + 1`.
-   If `arr[mid] < arr[high]`:
    -   The cliff is to the left, or we are on the slope rising from min. e.g., `[7, 0, 1, 2, 4, 5, 6]` (mid=2, high=6).
    -   `high = mid` (Preserve mid, it might be the answer).

### ⏱️ Complexity
-   **Time:** $O(\log N)$.
-   **Space:** $O(1)$.