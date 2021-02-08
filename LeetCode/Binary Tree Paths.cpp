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
    void preorder(TreeNode* root,vector<string> &answer,string path)
    {
        if(!root->left&&!root->right)
        {
            path+=to_string(root->val);
            answer.push_back(path);
            return;
        }
        else
        {
            path+=to_string(root->val)+"->";
            if(root->left)
                preorder(root->left,answer,path);
            if(root->right)
                preorder(root->right,answer,path);
        }
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> answer;
        string path;
        if(root)
            preorder(root,answer,path);
        return answer;
    }
};