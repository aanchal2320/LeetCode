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
    // Node(int value)
    // {
    //     val=value;
    //     next=NULL;
    //     random=NULL;
    // }
    Node* copyRandomList(Node* head) {
        
        Node* temp=head;
        Node* curr=head;
        while(temp!=NULL)
        {
            curr=temp->next;
            Node* copy=new Node(temp->val);
            temp->next=copy;
            copy->next=curr;
            temp=curr;
        }
       temp=head;
        while(temp!=NULL)
        {
            if(temp->random!=NULL)
            {
            temp->next->random=temp->random->next;
            }
             temp=temp->next->next;
        }
       temp=head;
       Node* newnode=new Node(0);
       Node* copy=newnode;
       while(temp!=NULL)
       {
           curr=temp->next->next;
           copy->next=temp->next;
           temp->next=curr;
           copy=copy->next;
           temp=curr;
       }
        return newnode->next;
        
    }
};