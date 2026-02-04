# ⚔️ Quest: Floor Square Root

### 💡 Intuition
We don't need a math library. The answer lies in the range `[1, N]`.
Since the square function $f(x) = x^2$ is **monotonic** (always increasing), we can use Binary Search to find the target `N`.

### ⚙️ The Overflow Trap
-   Mid calculation: `s + (e-s)/2` prevents index overflow.
-   Square calculation: `mid * mid` can exceed `2^31 - 1`.
    -   *Solution:* Cast `mid` to `long long` before multiplying: `(long long)mid * mid`.

### ⏱️ Complexity
-   **Time:** $O(\log N)$ — We cut the search space (0 to N) in half each time.
-   **Space:** $O(1)$.