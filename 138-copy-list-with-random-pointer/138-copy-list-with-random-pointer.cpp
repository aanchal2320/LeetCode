/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       Node* curr=head,*next;
        while(curr!=NULL)
        {
            next=curr->next;
            Node* copy=new Node(curr->val);
            curr->next=copy;
            copy->next=next;
            curr=next;
        }
        curr=head;
        while(curr!=NULL)
        {
            if(curr->random!=NULL)
            {
                curr->next->random=curr->random->next;
            }
            curr=curr->next->next;
        }
        curr=head;
        Node* dummy=new Node(0);
        Node* copy,*copytail=dummy;
        while(curr!=NULL)
        {
            next=curr->next->next;
            copy=curr->next;
            copytail->next=copy;
            copytail=copy;
            curr->next=next;
            curr=next;
        }
        return dummy->next;
    }
};