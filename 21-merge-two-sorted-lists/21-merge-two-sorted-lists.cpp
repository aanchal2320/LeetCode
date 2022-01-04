/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        if(a==NULL)
            return b;
        if(b==NULL)
            return a;
        ListNode* head=NULL, *tail=NULL;
        if(a->val<=b->val)
        {
            head=a;
            tail=a;
            a=a->next;
        }
        else
        {
           head=b;
           tail=b;
           b=b->next;
        }
        while(a!=NULL && b!=NULL)
        {
            if(a->val<=b->val)
            {
                tail->next=a;
                tail=tail->next;
                a=a->next;
            }
            else
            {
                tail->next=b;
                tail=tail->next;
                b=b->next;
            }
        }
       if(a==NULL)
       {
         tail->next=b;
       }
        else
        {
            tail->next=a;
        }
        return head;
    }
};