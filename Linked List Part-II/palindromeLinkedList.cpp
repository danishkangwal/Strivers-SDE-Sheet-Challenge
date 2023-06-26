bool isPalindrome(LinkedListNode<int> *head) {
    if(!head)
        return 1;
    vector<int> v;
    while(head){
        v.push_back(head->data);
        head = head->next;
    }
    int i = 0,j = v.size()-1;
    while(i < j){
        if(v[i] != v[j])
            return 0;
        i++;j--;
    }
    return 1;
}

// sol 2
LinkedListNode<int>* reverse(LinkedListNode<int> *head){
    LinkedListNode<int> *next = NULL, *prev = NULL;
    while(head){
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}

bool isPalindrome(LinkedListNode<int> *head) {
    if(!head or !head->next)
        return 1;
    
    LinkedListNode<int>* slow = head,*fast = head;
    while(fast->next and fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = reverse(slow->next);
    slow = slow->next;
    LinkedListNode<int>* tmp = head;
    while(slow){
        if(tmp->data != slow->data)
            return 0;
        tmp = tmp->next;
        slow = slow->next;
    }
    
    return 1;
}
