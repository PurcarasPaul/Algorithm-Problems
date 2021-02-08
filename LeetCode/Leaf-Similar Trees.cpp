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
    void preorder(TreeNode* root,vector<int> &vroot)
    {
        if(root)
        {
            if(root->left)
                preorder(root->left,vroot);
            if(root->right)
                preorder(root->right,vroot);
            if(!root->left&&!root->right)
                vroot.push_back(root->val);
        }
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> vroot1,vroot2;
        preorder(root1,vroot1);
        preorder(root2,vroot2);
        if(vroot1.size()!=vroot2.size())
            return false;
        for(int i=0;i<vroot1.size();i++)
            if(vroot1[i]!=vroot2[i])
                return false;
        return true;
    }
};