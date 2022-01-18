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
    ListNode* mergesort(ListNode* l1,ListNode* l2)
    {
        ListNode* dummyNode = new ListNode(-1);
    ListNode* p3  = dummyNode;
    
    while(l1 != NULL && l2 != NULL)
    {
        if(l1->val < l2->val){
            p3->next = l1;
            l1 = l1->next;
        }
        else{
            p3->next = l2;
            l2 = l2->next;
        }
        
        p3 = p3->next;
    }
    
    while(l1!=NULL){
        p3->next = l1;
        l1 = l1->next;
        p3 = p3->next;
    }
    
    while(l2!=NULL){
        p3->next = l2;
        l2 = l2->next;
        p3 = p3->next;
    }
    
    return dummyNode->next;
    
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode *slow=head, *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* l2=slow->next;
        slow->next=NULL;
        ListNode* l1=head;
        l1=sortList(l1);
        l2=sortList(l2);
        ListNode* ans=mergesort(l1,l2);
        return ans;
    }
};