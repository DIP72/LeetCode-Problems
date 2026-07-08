#include <bits/stdc++.h>
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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        // map<column, map<row, node_values>>
        map<int, map<int, multiset<int>>> mpp;
        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push({root, {0, 0}});
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            TreeNode *temp = p.first;
            int x = p.second.first, y = p.second.second;
            mpp[x][y].insert(temp->val);
            if(temp->left)
                q.push({temp->left, {x-1, y+1}});
            if(temp->right){
                q.push({temp->right, {x+1, y+1}});
            }
        }

        for(auto a : mpp){
            vector<int> col;
            for(auto b : a.second){
                col.insert(col.end(), b.second.begin(), b.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};