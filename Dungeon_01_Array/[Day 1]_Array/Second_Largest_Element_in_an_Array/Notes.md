# ⚔️ Quest: Second Largest Element (One Pass)

### 💡 Intuition
Sorting takes $O(N \log N)$. Doing two passes takes $O(2N)$.
We can do this in **one pass** ($O(N)$) by maintaining two variables: `largest` and `secondLargest`.

### ⚙️ Approach: The Hierarchy Update
Initialize `largest = -1` and `secondLargest = -1`.
Iterate through the array:
1.  **If `arr[i] > largest`:**
    * Shift `largest` down to `secondLargest`.
    * Update `largest` to `arr[i]`.
2.  **Else If `arr[i] > secondLargest` AND `arr[i] != largest`:**
    * Update `secondLargest` to `arr[i]`.
    * *Note:* The check `arr[i] != largest` is critical to handle cases like `[10, 10, 5]`. Without it, `secondLargest` might incorrectly become `10`.

### ⏱️ Complexity
- **Time Complexity:** $O(N)$ — Strictly one pass.
- **Space Complexity:** $O(1)$ — Only two variables used.