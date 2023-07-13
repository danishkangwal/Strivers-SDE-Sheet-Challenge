Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    Node<int>* head = new Node<int>(0);
    Node<int>* tail = head;
    while(first and second){
        if(first->data < second->data){
            tail->next = first;
            first=first->next;
        }
        else{
            tail->next = second;
            second = second->next;
        }
        tail = tail->next;
    }
    while(first){
        tail->next = first;
        tail = tail->next;
        first = first->next;
    }
    while(second){
        tail->next = second;
        tail = tail->next;
        second = second->next;
    }

    return head->next;
}
