// sol 1
int subarraysXor(vector<int> &arr, int x)
{
    int n = arr.size();
    int res = 0;
    for(int i = 0;i < n;i++){
        for(int j = i;j < n;j++){
            int xr = 0;
            for(int k = i;k <= j;k++){
                xr = xr ^ arr[k];
            }
            if(xr == x)
                res++;
        }
    }
    return res;
}

// sol 2
int subarraysXor(vector<int> &arr, int x)
{
    int n = arr.size();
    int res = 0;
    for(int i = 0;i < n;i++){
        int xr = 0;
        for(int j = i;j < n;j++){
            xr = xr ^ arr[j];
            if(xr == x)
                res++;
        }
    }
    return res;
}

// sol 3
int subarraysXor(vector<int> &arr, int k)
{
    int n = arr.size();
    unordered_map<int,int> mp;
    int xr = 0;
    mp[xr]++;
    
    int res = 0;
    for(int i = 0;i < n;i++){
        xr ^= arr[i];
        int x = xr^k;
        res += mp[x];
        mp[xr]++;
    }
    
    return res;
}
