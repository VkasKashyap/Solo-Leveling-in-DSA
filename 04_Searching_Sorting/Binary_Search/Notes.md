## Binary Search
- **Prerequisite:** Array MUST be sorted.
- **Logic:** continuously split the search space in half.
- **Midpoint Formula:** `mid = start + (end - start) / 2`.
    - *Why not `(start + end) / 2`?* To avoid Integer Overflow when `start + end` > `INT_MAX`.
- **Complexity:**
    - Time: $O(\log N)$ (Base 2).
    - Space: $O(1)$ (Iterative).