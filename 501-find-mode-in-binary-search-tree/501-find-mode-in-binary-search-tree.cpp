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
    vector<int>ans;
    unordered_map<int,int>mp;
    void freq(TreeNode* root)
    {
        if(root==NULL)return;
        mp[root->val]++;
        freq(root->left);
        freq(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        if(root->left==NULL && root->right==NULL)
        {
            ans.push_back(root->val);
            return ans;
        }
        freq(root);
        int max=0;
        for(auto x:mp)
        {
            if(x.second>max)
            {
                max=x.second;
            }
        }
        for(auto y: mp)
        {
            if(y.second==max)
            {
                ans.push_back(y.first);
            }
        }
        return ans;
    }
};