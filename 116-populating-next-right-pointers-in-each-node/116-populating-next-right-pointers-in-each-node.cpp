/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    void bfs(Node* root)
    {
        while(root->left!=NULL)
        {
            Node* temp=root->left;
            root->left->next=root->right;
        while(root->next!=NULL)
        {
           root->right->next=root->next->left;
           root=root->next;
           root->left->next=root->right;
        }
        root=temp;
        }
        return;
    }
    Node* connect(Node* root) {
        if(root==NULL)
            return NULL;
        bfs(root);
        return root;
    }
};