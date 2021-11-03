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
    vector<vector<int>>ans;
    void calculate(TreeNode* root,int sum,int targetSum,vector<int>&path)
    {
        if(root==NULL)
            return;
        sum=sum+(root->val);
        path.push_back(root->val);
        if(sum==targetSum && root->left==NULL && root->right==NULL)
        {
            ans.push_back(path);
        }
        calculate(root->left,sum,targetSum,path);
        calculate(root->right,sum,targetSum,path);
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
        vector<int>path;
        int sum=0;
        calculate(root,sum,targetSum,path);
        return ans;
    }
};