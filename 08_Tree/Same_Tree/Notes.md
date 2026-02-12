# ⚔️ Quest: Same Tree (Identical Trees)

### 💡 Intuition
We need to traverse both trees simultaneously.
At every single node, we ask three questions:
1.  **Are both NULL?** -> Yes (Match found, return True).
2.  **Is one NULL but not the other?** -> Yes (Mismatch, return False).
3.  **Are values different?** -> Yes (Mismatch, return False).

If we pass these checks, we recursively verify the Left Subtree AND the Right Subtree.

### ⚙️ Algorithm
-   **Base Case:** `if (!p && !q) return true;`
-   **Structure Check:** `if (!p || !q) return false;`
-   **Value Check:** `if (p->val != q->val) return false;`
-   **Recursion:** `return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);`

### ⏱️ Complexity
-   **Time:** $O(N)$. We visit every node once.
-   **Space:** $O(H)$ (Height of the tree) for recursion stack.