# ⚔️ Quest: First Element to Occur K Times

### 💡 Intuition
We need to find the "winner of the race" — the first number to reach a frequency of `k`.
We cannot wait to count everything first; we must check the count **as we go**.

### ⚙️ Approach: HashMap on the Fly
1.  Create an empty Hash Map `mpp`.
2.  Iterate through the array:
    * Increment the count of `arr[i]` in the map.
    * **Immediately check:** `if (mpp[arr[i]] == k)`?
    * If yes, **Return `arr[i]`**. This is our winner.
3.  If loop finishes, return -1.

### ⏱️ Complexity
-   **Time Complexity:** $O(N)$ — We traverse the array once. map operations are $O(1)$ on average.
-   **Space Complexity:** $O(N)$ — To store the frequency map.