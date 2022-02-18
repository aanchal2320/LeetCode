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
    int ans;
    void inorder(TreeNode* root,int k,int &ind)
    {
        if(root==NULL)
            return;
        inorder(root->left,k,ind);
        ind++;
        if(ind==k)
        {
            ans=root->val;
            return;
        }
        inorder(root->right,k,ind);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ind=0;
        inorder(root,k,ind);
        return ans;
    }
};
