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
    int findpath(TreeNode* root,int &max_val)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left=max(0,findpath(root->left,max_val));
        int right=max(0,findpath(root->right,max_val));
        max_val=max(max_val,left+right+root->val);
        return max(left,right)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int max_val=INT_MIN;
        findpath(root,max_val);
        return max_val;
    }
};