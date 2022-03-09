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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return 0;
        if(head -> next==NULL)
            return head;
        int temp = head ->val;
        ListNode *newnode = head -> next;
        if(newnode -> val != temp)
        {
            head -> next = deleteDuplicates(newnode);
            return head;
        }
        else
        {
			
           while(newnode && newnode -> val == temp)
            {
                ListNode *p = newnode;
                newnode = newnode->next;
                delete p;
            }
            return deleteDuplicates(newnode);
        }
    }
};