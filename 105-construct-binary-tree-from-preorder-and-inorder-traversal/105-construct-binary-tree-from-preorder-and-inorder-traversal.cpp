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
    TreeNode* constructTree(vector<int>& preorder,int pre_start,int pre_end, vector<int>&                                     inorder,int in_start,int in_end,unordered_map<int,int>&mp)
    {
        if(pre_start>pre_end || in_start>in_end)
        {
            return NULL;
        }
        TreeNode* root=new TreeNode(preorder[pre_start]);
        int inroot=mp[root->val];
        int numsleft=inroot-in_start;
        root->left=constructTree(preorder,pre_start+1,pre_start+numsleft,inorder,in_start,
                                 inroot-1,mp);
        root->right=constructTree(preorder,pre_start+numsleft+1,pre_end,inorder,
                             inroot+1,in_end,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>mp;
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        TreeNode* root=constructTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
        return root;
    }
};