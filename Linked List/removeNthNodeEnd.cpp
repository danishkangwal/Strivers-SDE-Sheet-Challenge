Node* removeKthNode(Node* head, int K)
{
    Node* start = new Node();
    start->next = head;
    Node* slow = start,*fast = start;
    
    for(int i = 0;i < K;i++)
        fast = fast->next;

    while(fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;
    
    return start->next;
}
