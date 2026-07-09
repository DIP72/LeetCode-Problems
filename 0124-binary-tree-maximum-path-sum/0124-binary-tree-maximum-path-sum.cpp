/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int maxPath(TreeNode *root, int &maxx){
        if(!root) return 0;
        int lh = max(0, maxPath(root->left, maxx));
        int rh = max(0, maxPath(root->right, maxx));
        maxx = max(maxx, root->val + lh + rh);
        return max(lh, rh) + root->val;
    }
    
public:
    int maxPathSum(TreeNode* root) {
        int maxx = INT_MIN;
        maxPath(root, maxx);
        return maxx;
    }
};