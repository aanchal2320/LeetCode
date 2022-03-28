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
    void dfs(TreeNode* root)
    {
        if(root==NULL)
            return;
        TreeNode* a=NULL;
            a=root->left;
            root->left=root->right;
            root->right=a;
        dfs(root->left);
        dfs(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        dfs(root);
        return root;
    }
};