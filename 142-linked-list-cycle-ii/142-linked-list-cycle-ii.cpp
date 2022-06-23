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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* newnode=head;
        int f=0;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
               while(slow!=newnode)
               {
                   slow=slow->next;
                   newnode=newnode->next;
               }
                return newnode;
            }
        }
       return NULL;
    }
};