#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T dat)
        {
            this->data = dat;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root)
{
    vector<int> ans;
    if(root == NULL) return ans;
    map<int, int> mpp;
    queue<pair<TreeNode<int>*, int>> q;
    q.push({root, 0});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        TreeNode<int> *temp = it.first;
        int line = it.second;

        if(mpp.find(line) == mpp.end()) mpp[line] = temp->data;
        
        if(temp->left) q.push({temp->left, line-1});
        if(temp->right) q.push({temp->right, line+1});
    }

    for(auto it: mpp)
        ans.push_back(it.second);
    
    return ans;
}
