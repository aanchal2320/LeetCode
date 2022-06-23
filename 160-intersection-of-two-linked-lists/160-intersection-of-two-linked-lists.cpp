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
           d1=d1==NULL?h2:d1->next;
           d2=d2==NULL?h1:d2->next;
       }
        return d2;
    }
};