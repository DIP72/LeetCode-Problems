class Solution {
private:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // if (!p && !q) return true;
        if (!p || !q) return p == q;
        if (p->val != q->val) return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }

    bool helper(TreeNode* p, TreeNode* q) {
        if (!p) return false;
        if (isSameTree(p, q)) return true;
        return helper(p->left, q) || helper(p->right, q);
    }

public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return helper(root, subRoot);
    }
};