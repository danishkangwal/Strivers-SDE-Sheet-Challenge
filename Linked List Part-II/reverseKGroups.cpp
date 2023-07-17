// sol 1
ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> a;
        ListNode* t = head;
        while(t){
            a.push_back(t->val);
            t = t->next;
        }
        int i = 0,n=a.size();
        while(i < n){
            if(i+k-1<n){
                reverse(a.begin()+i,a.begin()+i+k);
            }
            i+=k;
        }
        
        t = head;
        i=0;
        while(t){
            t->val = a[i++];
            t=t->next;
        }
        
        return head;
    }

// sol 2
ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy,*curr = head,*next;
        int count = 0;
        while(curr){
            count++;
            curr=curr->next;
        }
        
        while(count>=k){
            curr = prev->next;
            next = curr->next;
            for(int i=0;i<k-1;i++){
                curr->next = next->next;
                next->next = prev->next;
                prev->next = next;
                next = curr->next;
            }
            
            count-=k;
            prev=curr;
        }
        
        return dummy->next;
    }

// sol 3 (Code Studio)
Node *getListAfterReverseOperation(Node *head, int n, int b[]){
    if(head==NULL || head->next==NULL) 
        return head;

	

	Node *dummy = new Node(0);
	dummy->next = head;
	Node *prev = dummy;
	Node *curr=head,*nex;
	int length = 0;
    while(curr){
        length++;
        curr=curr->next;
    }

    
    int i=0;

	while(length>0 && i<n){
		if(b[i]==0){
			i++;
			continue;
		};
		curr = prev->next;
		nex = curr->next;
        int k = min(length,b[i]);

				for(int j=1;j<k;j++){
				curr->next = nex->next;
				nex->next = prev->next;
				prev->next = nex;
				nex = curr->next;
			    }

				prev = curr;
				length-=b[i];
				i++;
		

			
		}

		return dummy->next;
	}
