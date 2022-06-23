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
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
       ListNode* d1=h1;
       ListNode* d2=h2;
       while(d1!=d2)
       {
           if(d1==NULL)
           {
               d1=h2;
           }
           else
           {
               d1=d1->next;
           }
           if(d2==NULL)
           {
               d2=h1;
           }
           else
           {
               d2=d2->next;
           }
       }
        return d2;
    }
};