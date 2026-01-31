# ⚔️ Quest: Factorials of Large Numbers

### 💡 Intuition
Data types like `long long` can only store values up to $\approx 9 \times 10^{18}$ (approx `20!`).
`100!` has 158 digits!
To store this, we use a **Vector** where each index holds one digit of the number.

### ⚙️ Approach: Grade School Math
1.  Initialize a vector with `[1]`.
2.  Loop `val` from `2` to `N`.
3.  **Multiply `val` with the current number:**
    * Iterate through the vector (digit by digit).
    * `prod = digit * val + carry`.
    * Update digit: `prod % 10`.
    * Update carry: `prod / 10`.
4.  **Push Carry:** If `carry > 0` after the loop, push its digits into the vector.
5.  **Reverse:** The vector stores the number backwards (1s place at index 0). Reverse it to print.

### ⏱️ Complexity
-   **Time:** $O(N \times \text{Size of Factorial})$ — roughly $O(N^2)$ since size grows with $N$.
-   **Space:** $O(\text{Digits in N!})$ — To store the result.