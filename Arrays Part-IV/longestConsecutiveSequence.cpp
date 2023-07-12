// sol 1
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    unordered_set<int> st;
    for(auto i:arr)
        st.insert(i);


    int ans = 0;
    
    for(int i = 0;i < n;i++){
        if(st.find(arr[i]-1)!=st.end())
            continue;
        else{
            int j = arr[i];
            while(st.find(j)!=st.end())
                j++;
                
            ans = max(ans,j-arr[i]);
        }
    }

    return ans;
}

// sol 2
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    priority_queue<int,vector<int>,greater<int>> pq;
    for(auto i:arr)
        pq.push(i);
    
    int prev = pq.top();
    pq.pop();
 
    int c = 1;
    int max = 1;
    while (!pq.empty()) {
        if (pq.top() - prev > 1) {
            c = 1;
            prev = pq.top();
            pq.pop();
        }
        else if (pq.top() - prev == 0) {
            prev = pq.top();
            pq.pop();
        }
        else {
            c++;
            prev = pq.top();
            pq.pop();
        }
        if (max < c) {
            max = c;
        }
    }
    
    return max;    
}

// sol 3
int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
    if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(), nums.end());

        vector<int>dp(n);
        dp[0]=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
            dp[i]=dp[i-1]+1;
            }
            else if(nums[i]==nums[i-1]){
                dp[i]=dp[i-1];
            }
            else{
                dp[i]=1;
            }
        }
       int res=0;
       for(int i=0;i<n;i++){
           if(dp[i]>res){
               res=dp[i];
           }
       }
       return res;
}
