# ⚔️ Quest: Ship Packages

### 💡 Intuition
We are balancing between "Speed" (Days) and "Capacity" (Weight).
-   Higher Capacity -> Fewer Days.
-   Lower Capacity -> More Days.
-   Since the relationship is monotonic, we can Binary Search the Capacity.

### ⚙️ Simulation Logic
-   Greedily pack as much as possible into the current day.
-   Once the limit is hit, start a new day.
-   Crucial Edge Case: `low` must start at `max(weights)`, otherwise a single heavy package could never be shipped!

### ⏱️ Complexity
-   **Time:** $O(N \log(\sum \text{Weights}))$.
-   **Space:** $O(1)$.