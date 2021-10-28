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
    int countNodes(TreeNode* root) {
        int l_nodes=1;
        if(root==NULL)
            return 0;
        TreeNode* l=root->left;
        while(l!=NULL)
        {
            l=l->left;
            l_nodes++;
        }
        TreeNode* r=root->right;
        int r_nodes=1;
        while(r!=NULL)
        {
            r=r->right;
            r_nodes++;
        }
        if(l_nodes==r_nodes)
            return pow(2,l_nodes)-1;
        else
            return 1+countNodes(root->left)+countNodes(root->right);
    }
};