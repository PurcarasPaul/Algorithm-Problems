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
    vector<int> answer_helper;
public:
    void preorder(TreeNode* root)
    {
        if(!root)
            return;
        else
        {
            answer_helper.push_back(root->val);
            if(root->left)
                preorder(root->left);
            if(root->right)
                preorder(root->right);
        }
    }
    
    int kthSmallest(TreeNode* root, int k) {
        preorder(root);
        sort(answer_helper.begin(),answer_helper.end());
        return answer_helper[k-1];
        return 0;
    }
};