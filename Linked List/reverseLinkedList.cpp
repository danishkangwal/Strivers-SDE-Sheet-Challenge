LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int>* next = NULL;
    LinkedListNode<int>* prev = NULL;

    while(head){
        next =  head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}

// sol 2
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int>* newHead = NULL;

    while(head){
        LinkedListNode<int>* next = head->next;
        head->next = newHead;
        newHead = head;
        head = next;
    }
    return newHead;
}
