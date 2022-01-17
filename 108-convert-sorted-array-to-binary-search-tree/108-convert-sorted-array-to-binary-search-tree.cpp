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
        TreeNode *root = NULL; 
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int l = 0, h = nums.size()-1;
        bst(nums, l, h);
        return root;
    }
    
    TreeNode* bst(vector<int>& nums, int l, int h) {
        if(l<=h) {
            int mid = l + (h-l)/2;
            TreeNode *node = new TreeNode(nums[mid]);
            if(root == NULL) root = node;
            node->left = bst(nums, l, mid-1);
            node->right = bst(nums, mid+1, h);
            return node;
        }
        return NULL;
    }
};