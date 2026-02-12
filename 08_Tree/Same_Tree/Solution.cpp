#include<iostream>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left, * right;

    TreeNode(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Solution{
public:
    bool isSameTree(TreeNode* p, TreeNode* q){
        if(p == NULL && q == NULL)  return true;

        if(p == NULL || q == NULL || p->data != q->data)    return false;

        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

int main() {
    Solution solver;
    
    /* Tree 1:   1
                / \
               2   3
    */
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);
    
    /* Tree 2:   1
                / \
               2   3
    */
    TreeNode* q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(3);
    
    cout << "--- ⚔️ Quest: Same Tree ⚔️ ---" << endl;
    
    if (solver.isSameTree(p, q)) {
        cout << "Result: The trees are Identical." << endl;
    } else {
        cout << "Result: The trees are DIFFERENT." << endl;
    }
    
    return 0;
}