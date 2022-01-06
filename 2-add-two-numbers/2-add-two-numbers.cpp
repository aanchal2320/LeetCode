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
    ListNode* addTwoNumbers(ListNode* a, ListNode* b) {
       if(a==NULL)
           return b;
        if(b==NULL)
            return a;
        ListNode* c=new ListNode();
        ListNode* temp=c;
        int carry=0;
        while(a!=NULL||b!=NULL||carry!=0)
        {
            int sum=0;
            if(a!=NULL)
            {
                sum=sum+a->val;
                a=a->next;
            }
            if(b!=NULL)
            {
                sum=sum+b->val;
                b=b->next;
            }
            sum=sum+carry;
            carry=sum/10;
            ListNode *newnode=new ListNode(sum%10);
            temp->next=newnode;
            temp=temp->next;
        }
        return c->next;
    }
    
};