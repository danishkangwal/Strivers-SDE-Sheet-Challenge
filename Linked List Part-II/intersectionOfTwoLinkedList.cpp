// sol 1
int getDiff(Node* firstHead,Node* secondHead){
    int len1=0,len2=0;
    while(firstHead or secondHead){
        if(firstHead){
            len1++;firstHead=firstHead->next;
        }
        if(secondHead){
            len2++;secondHead=secondHead->next;
        }
    }
    return len1-len2;
}

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    int diff = getDiff(firstHead,secondHead);
    if(diff < 0){
        while(diff++ != 0)
            secondHead = secondHead->next;        
    }
    else{
        while(diff-- != 0)
            firstHead = firstHead->next;
    }
    while(firstHead and secondHead){
        if(firstHead == secondHead)
            return  firstHead;
        firstHead = firstHead->next;
        secondHead = secondHead->next;
    }
    return  NULL;
    
}

// sol 2
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    Node*n1 = firstHead,*n2 = secondHead;
    while(n1 != n2){
        n1 = n1==NULL?secondHead:n1->next;
        n2 = n2==NULL?firstHead:n2->next;
    }
    return n1;
}
