ListNode* reverseKGroups(ListNode* head,int k){
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
        
        // for(auto i:a)
        //         cout<<i<<' ';
        
        t = head;
        i=0;
        while(t){
            t->val = a[i++];
            t=t->next;
        }
        
        return head;
}
