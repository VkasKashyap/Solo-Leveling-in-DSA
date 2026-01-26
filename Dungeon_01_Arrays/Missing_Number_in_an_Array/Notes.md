# ⚔️ Quest: Find the Missing Number

### 💡 Intuition
We are given an array of size $N$ containing numbers from $1$ to $N+1$. One number is missing. While we could use sorting, it would take $O(N \log N)$. Summation is $O(N)$ but can lead to **Integer Overflow** if $N$ is very large. 

**Bitwise XOR** is the optimal "S-Rank" solution because it is fast, uses $O(1)$ space, and never overflows.

### ⚙️ The XOR Strategy
This approach relies on two powerful properties of XOR (`^`):
1.  **Self-Cancellation:** $X \oplus X = 0$
2.  **Identity:** $X \oplus 0 = X$

**Steps:**
1. Initialize `xorSum = 0`.
2. Iterate from $1$ to $N+1$ and XOR every number into `xorSum`.
3. Iterate through the given array and XOR every element into the same `xorSum`.
4. Every number present in both the range and the array will pair up and become $0$. The only number left standing is the missing one.



### ⏱️ Complexity Analysis
- **Time Complexity:** $O(N)$ — We perform two linear passes (which can be combined into one).
- **Space Complexity:** $O(1)$ — We only use one integer variable to store the XOR result.

### 🔑 Key Learning
XOR is a "Magic Eraser" for duplicates. Whenever a problem asks you to find a unique element among pairs or a missing element in a sequence, think **XOR** first.