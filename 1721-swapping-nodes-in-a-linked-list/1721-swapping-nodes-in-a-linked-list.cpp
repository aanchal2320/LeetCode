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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp2=head;
        int count=0;
        while(temp2!=NULL)
        {
            count++;
            temp2=temp2->next;
        }
        if(k>count)
        {
            return NULL;
        }
        if(count==1)
        {
            return head;
        }
        ListNode* temp1=head;
        ListNode* temp3=head;
        int t=k-1;
        while(t--)
        {
            temp1=temp1->next;
        }
        temp2=head;
        int p=count-k;
        while(p--)
        {
            temp2=temp2->next;
        }
        int a=temp1->val;
        temp1->val=temp2->val;
        temp2->val=a;
        return head;
    }
};