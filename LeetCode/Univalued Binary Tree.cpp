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
    void dfs(TreeNode* root,vector<int> &array)
    {
        if(root!=NULL)
            array.push_back(root->val);
        if(root->left!=NULL)
            dfs(root->left,array);
        if(root->right!=NULL)
            dfs(root->right,array);
    }
    
    bool isUnivalTree(TreeNode* root) {
        vector<int> array;
        dfs(root,array);
        for(int i=0;i<array.size();i++)
            if(array[0]!=array[i])
                return false;
        return true;
    }
};