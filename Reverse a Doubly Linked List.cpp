class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        Node*curr=head;
        Node*next=NULL;
        Node*prev=NULL;
        
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            curr->prev=next;
            prev=curr;
            curr=next;
        }
        head=prev;
        
        return head;
    }
};
