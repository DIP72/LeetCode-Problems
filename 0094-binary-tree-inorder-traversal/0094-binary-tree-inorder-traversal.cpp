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
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == nullptr) return {};
        TreeNode *temp = root;
        vector<int> ans; 
        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty()){
            if(temp != nullptr){
                st.push(temp);
                temp = temp->left;
            }
            else {
                temp = st.top();
                st.pop();
                ans.push_back(temp->val);
                temp = temp->right;
            }
        }
        ans.pop_back();
        return ans;
    }
};