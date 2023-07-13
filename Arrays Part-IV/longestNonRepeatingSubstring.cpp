// sol 1
int uniqueSubstrings(string s)
{
    if(s.size()==1)
        return 1;
    int res = INT_MIN;
    int n = s.size();
    unordered_set<int> st;
    
    int l = 0;
    for(int r = 0;r < n;r++){
        if(st.count(s[r])>0){
            while(l < r and st.count(s[r])>0){
                st.erase(s[l]);
                l++;
            }
        }  
        st.insert(s[r]);
        res = max(res,r-l+1);
    }
    
    return res;
}
// sol 2
int uniqueSubstrings(string s)
{
    
    int res = INT_MIN;
    
    vector<int> mp(256,-1);
    int l = 0;
    for(int r = 0;r < s.size();r++){
        if(mp[s[r]] != -1){
            l = max(mp[s[r]]+1,l);
        }
        mp[s[r]] = r;
        res = max(res,r-l+1);
    }
    
    return res;
}
