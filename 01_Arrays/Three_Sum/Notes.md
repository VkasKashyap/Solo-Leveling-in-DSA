# ⚔️ Quest: 3 Sum

### 💡 Intuition
Finding 3 numbers `A + B + C = 0` is hard.
But if we **fix one number (A)**, the problem becomes finding 2 numbers `B + C = -A`.
This is just the **2 Sum** problem!

### ⚙️ Approach: Sort + Two Pointers
1.  **Sort** the array ($O(N \log N)$).
2.  Iterate `i` from `0` to `n`. This is our fixed number `A`.
3.  Set `left = i + 1` and `right = n - 1`.
4.  If `sum < 0`: Need bigger numbers -> `left++`.
5.  If `sum > 0`: Need smaller numbers -> `right--`.
6.  If `sum == 0`: **Jackpot!** Save triplet, move both pointers, and **SKIP DUPLICATES** loop.

### ⚠️ Trap: The Clone Attack
The input `[-1, -1, 0, 1]` can generate `[-1, 0, 1]` twice if you don't skip the second `-1`.
* **Fix 1:** `if (i > 0 && arr[i] == arr[i-1]) continue;`
* **Fix 2:** Inside the match found block, `while (s < e && arr[s] == arr[s-1]) s++;`

### ⏱️ Complexity
-   **Time:** $O(N^2)$ — Outer loop runs $N$ times, inner loop runs $N$ times.
-   **Space:** $O(1)$ — (ignoring output storage).