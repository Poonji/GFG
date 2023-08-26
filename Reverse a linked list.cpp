class Solution
{
    public:
    void reverse(Node*&head,Node*curr,Node*prev){
        if(curr==NULL)
        {
            head=prev;
            return;
        }
        Node*forward=curr->next;
        reverse(head,forward,curr);
        curr->next=prev;
    }
    struct Node* reverseList(struct Node *head)
    {
        Node*curr=head;
        Node*prev=NULL;
        reverse(head,curr,prev);
        return head;
    }
    
};
