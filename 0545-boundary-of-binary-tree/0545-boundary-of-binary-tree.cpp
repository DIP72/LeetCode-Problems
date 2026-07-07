#include <bits/stdc++.h>

/************************************************************

    Following is the Binary Tree node structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode()
        {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
bool isLeaf(TreeNode<int> *root){
    if(root->left == NULL && root->right == NULL) return true;
    return false;
}

void addLeftBoundary(TreeNode<int> *root, vector<int> &ans){
    TreeNode<int> *temp = root->left;
    while(temp){
        if(!isLeaf(temp)) ans.push_back(temp->data);
        if(temp->left) temp = temp->left;
        else temp = temp->right;
    }
}

void addRightBoundary(TreeNode<int> *root, vector<int> &ans){
    TreeNode<int> *temp = root->right;
    stack<int> st;
    while(temp){
        if(!isLeaf(temp)) st.push(temp->data);
        if(temp->right) temp = temp->right;
        else temp = temp->left;
    }

    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
}

void addLeafNodes(TreeNode<int> *root, vector<int> &ans){
    if(isLeaf(root)){
        ans.push_back(root->data);
        return;
    } 
    if(root->left) addLeafNodes(root->left, ans);
    if(root->right) addLeafNodes(root->right, ans);
}


vector<int> traverseBoundary(TreeNode<int> *root)
{
	vector<int> ans;
    if(!root) return ans;
    if(!isLeaf(root)) ans.push_back(root->data);
    addLeftBoundary(root, ans);
    addLeafNodes(root, ans);
    addRightBoundary(root, ans);
}
