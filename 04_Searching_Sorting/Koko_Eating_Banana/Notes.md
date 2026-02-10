# ⚔️ Quest: Koko Eating Bananas

### 💡 Intuition
We want the *minimum* speed.
-   If Koko eats at speed 1, it takes huge time.
-   If Koko eats at speed `Max(Piles)`, it takes `N` hours (minimum possible time).
-   Since the time taken is inversely proportional to speed (Monotonic), we can Binary Search the speed `k`.

### ⚙️ The Ceiling Trick
We need `ceil(pile / k)` hours.
Instead of using `double` and `ceil()` function (which is slow/messy), use integer math:
`hours = (pile + speed - 1) / speed`
Example: Pile 10, Speed 3. `(10 + 2) / 3 = 12 / 3 = 4`. Correct.

### ⏱️ Complexity
-   **Time:** $O(N \log(\text{MaxPile}))$.
-   **Space:** $O(1)$.