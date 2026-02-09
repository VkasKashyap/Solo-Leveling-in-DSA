# ⚔️ Quest: Minimum Swaps to Sort

### 💡 Intuition
We can't just simulate swaps (too slow). We need to count the "disorder".
The array can be visualized as a **Directed Graph** where an edge exists from `Current Position` -> `Target Position`.
-   This graph consists of several disjoint **Cycles**.
-   A cycle of `N` nodes needs `N-1` swaps to place everyone correctly.
-   Total Swaps = $\sum (\text{CycleLength} - 1)$.

### ⚙️ Algorithm Steps
1.  Create `vector<pair<int, int>>` to store values and original indices.
2.  Sort this vector. Now `vec[i].second` tells us where the element at index `i` *came from* (and where it needs to go back to if we view it as a permutation).
3.  Use a `visited` array.
4.  For every unvisited node `i`:
    -   Start a cycle traversal: `j = i`.
    -   While `!visited[j]`: Mark `j`, move to `vec[j].second`.
    -   Count nodes.
    -   Add `nodes - 1` to answer.

### ⏱️ Complexity
-   **Time:** $O(N \log N)$.
-   **Space:** $O(N)$.