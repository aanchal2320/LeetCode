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
    TreeNode* leftmost(TreeNode* node) {
        while (node && node->left) node = node->left;
        return node;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return NULL;
        
        if (key < root->val) root->left = deleteNode(root->left, key);
        else if (key > root->val) root->right = deleteNode(root->right, key);
        
        else {
            if (root->left == NULL) {
                TreeNode* tmp = root->right;
                delete root;
                return tmp;
            }
            
            else if (root->right == NULL) {
                TreeNode* tmp = root->left;
                delete root;
                return tmp;
            }
            
            else {
                TreeNode* tmp = leftmost(root->right);
                root->val = tmp->val;
                root->right = deleteNode(root->right, tmp->val);
            }
        }
        
        return root;
    }
};