class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        if (!head || !head->next) {
        // If the list is empty or has only one element, no need to swap.
        return head;
    }

    Node* newHead = head->next;
    Node* prev = nullptr;
    Node* current = head;

    while (current && current->next) {
        Node* firstNode = current;
        Node* secondNode = current->next;

        // Swapping
        if (prev) {
            prev->next = secondNode;
        }

        firstNode->next = secondNode->next;
        secondNode->next = firstNode;
        
        prev = firstNode;
        current = firstNode->next;
    }

    return newHead;

    }
};
