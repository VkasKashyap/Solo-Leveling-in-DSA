# ⚔️ Quest: Minimize the Sum of Product

### 💡 Intuition
To minimize the total sum, we want to "neutralize" large numbers by multiplying them with the smallest possible numbers available.
If we multiplied two large numbers together, the result would skyrocket. 

### ⚙️ Approach: Greedy Sorting
1. Sort Array A in **Ascending** order.
2. Sort Array B in **Descending** order.
3. Multiply `A[i] * B[i]` and add to total.

### ⏱️ Complexity
- **Time Complexity:** $O(N \log N)$ — Dominated by the sorting step.
- **Space Complexity:** $O(1)$ — If we are allowed to modify the input arrays; otherwise $O(N)$ for copies.