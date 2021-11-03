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
    void countpath(TreeNode* root,int targetSum,vector<int>&p,int &c)
    {
        int sum=0;
        if(root==NULL)
            return;
        p.push_back(root->val);
        if(root->left!=NULL)
            countpath(root->left,targetSum,p,c);
        if(root->right!=NULL)
            countpath(root->right,targetSum,p,c);
        for(int i=p.size()-1;i>=0;i--)
        {
            sum+=p[i];
            if(sum==targetSum)
            {
                c++;
            }
        }
        p.pop_back();
    }
    int pathSum(TreeNode* root, int targetSum) {
       int count=0;
       vector<int>p;
       countpath(root,targetSum,p,count);
       return count;
    }
};