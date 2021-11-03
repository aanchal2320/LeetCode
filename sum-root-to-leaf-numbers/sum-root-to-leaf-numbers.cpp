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
    void traverseTree(TreeNode* root,string s,int &ans)
    {
        if(root==NULL)
            return;
        s=s+to_string(root->val);
        if(root->left==NULL && root->right==NULL)
        {
            ans=ans+stoi(s);
        }
        traverseTree(root->left,s,ans);
        traverseTree(root->right,s,ans);
        
    }
    int sumNumbers(TreeNode* root) {
        int ans=0;
        string s="";
        traverseTree(root,s,ans);
        return ans;
    }
};