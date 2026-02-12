# ⚔️ Quest: Max Depth (Height)

### 💡 Intuition
Think of this as a "Post-Order" traversal.
A manager (Root) cannot know their total project timeline until their sub-teams (Left and Right children) report back.
-   Left child reports: "I need 3 days."
-   Right child reports: "I need 5 days."
-   Manager takes the max (5) and adds their own day (1). Total = 6.

### ⚙️ Algorithm
1.  **Base Case:** If `root == NULL`, return 0.
2.  **Recurse Left:** `l = maxDepth(root->left)`.
3.  **Recurse Right:** `r = maxDepth(root->right)`.
4.  **Return:** `1 + max(l, r)`.

### ⏱️ Complexity
-   **Time:** $O(N)$.
-   **Space:** $O(N)$ in worst case (skewed tree), $O(\log N)$ in best case (balanced).