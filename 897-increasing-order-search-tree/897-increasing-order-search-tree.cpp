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
    TreeNode* res=new TreeNode(0);
    void inorder(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
       inorder(root->left);
       root->left=NULL;
       res->right=root;
       res=root;
       inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* ans=res;
        inorder(root);
         return ans->right;
    }
};