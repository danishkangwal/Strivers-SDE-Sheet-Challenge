Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node* head = new Node();
    Node* t = head;

    int carry = 0;
    while(num1 or num2 or carry){
        int sum = carry;
        if(num1){
            sum += num1->data;
            num1=num1->next;
        }
        if(num2){
            sum+=num2->data;
            num2=num2->next;
        }
        carry = sum/10;
        t->next = new Node(sum%10);
        t=t->next;
    }



    return head->next;
}
