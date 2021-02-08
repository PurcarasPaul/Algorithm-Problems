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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* copy;
        if(root==NULL)
            return NULL;
        else
        {
            if(val==root->val)
                return root;
            else if(val<root->val)
                copy=searchBST(root->left,val);
            else if(val>root->val)
                copy=searchBST(root->right,val);
        }
        return copy;
    }
};