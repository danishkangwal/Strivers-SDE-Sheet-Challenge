// sol 1
#include <bits/stdc++.h>
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    set<vector<int>> st;
    int n = nums.size();

    for(int i = 0;i < n;i++){
        for(int j = i+1;j < n;j++){
            unordered_set<int> hashSet;
            for(int k = j+1;k < n;k++){
                long long sum = (nums[i]+nums[j]+nums[k]);
                int fourth = target-sum;
                if(hashSet.find(fourth)!=hashSet.end()){
                    vector<int> tmp = {nums[i],nums[j],nums[k],fourth};
                    sort(tmp.begin(),tmp.end());
                    st.insert(tmp);
                }

                hashSet.insert(nums[k]);
            }
        }
    }
    

    vector<vector<int>> res(st.begin(),st.end());
    return res;
    
}

// sol 2
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> res;
    sort(nums.begin(),nums.end());
    int n = nums.size();

    for(int i = 0;i < n;i++){
        if(i > 0 and nums[i]==nums[i-1]) continue;
        for(int j = i+1;j < n;j++){
            if(j != i+1 and nums[j]==nums[j-1]) continue;
            
            int k = j+1,l = n-1;
            while(k < l){
                long long sum = nums[i]+nums[j];
                sum += nums[k];
                sum += nums[l];
                if(sum == target){
                    res.push_back({nums[i],nums[j],nums[k],nums[l]});
                    k++;l--;
                    while(k < l and nums[k]==nums[k-1]) 
                        k++;
                    while(k < l and nums[l]==nums[l+1])
                        l--;
                }
                else if(sum < target)
                    k++;
                else
                    l--;
            }
        }
    }
    
    
    return res;
}
