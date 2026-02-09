# ⚔️ Quest: Book Allocation

### 💡 Intuition
We want to minimize the workload (pages) of the most burdened student.
Instead of trying combinations, we **Guess the Answer**.
-   "Can we do it if the max load is 100?" -> No (Too small, need more students).
-   "Can we do it if the max load is 200?" -> Yes.
-   Since we want the *minimum* max load, if 200 works, try 190. If 100 fails, try 150.
-   This monotonic property (False...False...True...True) allows Binary Search.

### ⚙️ Algorithm
1.  **Search Space:** `low = max(arr)`, `high = sum(arr)`.
2.  **Binary Search:**
    -   `mid = low + (high - low) / 2`.
    -   If `isPossible(mid)`: Valid! Store `ans = mid`, try smaller (`high = mid - 1`).
    -   Else: Invalid (Capacity too low), need higher capacity (`low = mid + 1`).
3.  **Helper `isPossible(barrier)`:**
    -   Count students needed if max capacity is `barrier`.
    -   If `count > M`, return `False`.

### ⏱️ Complexity
-   **Time:** $O(N \times \log(\sum A[i]))$.
-   **Space:** $O(1)$.