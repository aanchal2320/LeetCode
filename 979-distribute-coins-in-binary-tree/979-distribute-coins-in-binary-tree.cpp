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
    int distributeCoins(TreeNode* root) {
        int moves=0;
        find(root,root,moves);
        return moves;
    }
    void find(TreeNode* parent,TreeNode* child,int &moves)
    {
        if(!child)
        {
            return;
        }
        find(child,child->left,moves);
        find(child,child->right,moves);
        if(child->val>1)
        {
            int extra=child->val-1;
            child->val=1;
            parent->val+=extra;
            moves+=extra;
        }
        else if(child->val<1)
        {
            int need=1+abs(child->val);
            child->val=1;
            parent->val-=need;
            moves+=need;
        }
    }
};