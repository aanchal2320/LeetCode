/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
       ListNode* temp;
       node->val=node->next->val;
       temp=node->next;
       node->next=node->next->next;
       delete temp;
    }
};