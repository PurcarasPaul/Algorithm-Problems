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
    int max_depth=0;
public:
    void preorder(TreeNode* root,int i)
    {
        if(!root->left&&!root->right)
        {
            i++;
            max_depth=max(max_depth,i);
            i=0;
        }
        else
        {
            if(root)
                i++;
            if(root->left)
                preorder(root->left,i);
            if(root->right)
                preorder(root->right,i);
        }
    }
    
    int maxDepth(TreeNode* root) {
        int i=0;
        if(root)
            preorder(root,i);
        return max_depth;
    }
};