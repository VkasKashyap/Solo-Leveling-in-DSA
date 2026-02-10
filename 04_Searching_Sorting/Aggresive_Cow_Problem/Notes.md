# ⚔️ Quest: Magnetic Force (Aggressive Cows)

### 💡 Intuition
We want to spread the balls out as much as possible.
Instead of trying every combination, we guess the answer:
-   "Can we place them with at least distance 5?" -> No.
-   "Can we place them with at least distance 3?" -> Yes.
-   Since we want the *maximum* min distance, if 3 works, we try 4. If 5 fails, we try 2.

### ⚙️ Algorithm
1.  **Sort the positions** (Crucial Step!).
2.  Binary Search on the distance `d` from `1` to `(max - min)`.
3.  **`canPlace(d)` Logic:**
    -   Place ball 1 at index 0.
    -   Traverse sorted array. If `arr[i] - lastPos >= d`:
        -   Place ball. Update `lastPos`.
        -   Increment count.
    -   If `count == M`: Return True.

### ⏱️ Complexity
-   **Time:** $O(N \log N)$ (Sorting) + $O(N \log(\text{Range}))$ (Binary Search).
-   **Space:** $O(1)$.