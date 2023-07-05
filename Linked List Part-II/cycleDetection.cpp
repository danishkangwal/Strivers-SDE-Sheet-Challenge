// sol 1
#include <unordered_map>
bool detectCycle(Node *head)
{   
    unordered_map<Node*,int> mp;
    while(head){
        if(mp[head])
            return 1;
        mp[head]++;
        head = head->next;
    }

    return 0;
}
// sol 2
bool detectCycle(Node *head)
{   
    Node* slow = head,*fast = head;
    while(fast->next and fast->next->next){
        slow=slow->next;
        fast = fast->next->next;
        if(fast == slow)
            return 1;
    }
    return 0;
}
