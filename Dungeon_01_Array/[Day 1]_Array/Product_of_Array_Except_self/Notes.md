# ⚔️ Quest: Product of Array Except Self

### 💡 Intuition
We need to find the product of all elements *except* the current one.
Since division is forbidden (`TotalProduct / nums[i]`), we must use multiplication.
For any element at index `i`, the answer is:
`(Product of all numbers to the Left) * (Product of all numbers to the Right)`

### ⚙️ Approach: Prefix and Suffix Products
1. **Pass 1 (Left to Right):**
   - Create an `output` array.
   - `output[i]` stores the product of elements from index `0` to `i-1`.
2. **Pass 2 (Right to Left):**
   - Maintain a `rightProduct` variable (accumulator).
   - Multiply `output[i]` by `rightProduct` to combine the left and right sides.
   - Update `rightProduct` by multiplying it with the current number `nums[i]`.

### ⏱️ Complexity
- **Time Complexity:** $O(N)$ — Two linear passes.
- **Space Complexity:** $O(1)$ — The output array does not count as extra space (per problem constraints).