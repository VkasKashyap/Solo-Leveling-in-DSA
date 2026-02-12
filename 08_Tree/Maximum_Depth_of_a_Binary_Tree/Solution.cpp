#include<iostream>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left, *right;

    TreeNode(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Solution{
public:
    int maxDepth(TreeNode* root){
        if(root == NULL)    return 0;

        int leftHeight = maxDepth(root -> left);
        int rightHeight = maxDepth(root -> right);

        return 1 + max(leftHeight, rightHeight);
    }
};

int main() {
    Solution solver;
    
    /* Constructing a sample tree:
           3
           / \
          9  20
            /  \
           15   7
    */
    
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    
    cout << "--- ⚔️ Quest: Max Depth of Binary Tree ⚔️ ---" << endl;
    cout << "Max Depth: " << solver.maxDepth(root) << endl;
    // Expected: 3
    
    return 0;
}