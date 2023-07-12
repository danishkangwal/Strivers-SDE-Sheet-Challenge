int LongestSubsetWithZeroSum(vector < int > arr) {
  unordered_map<int,int> mp;
  int ans = 0,sum = 0;
  for(int i = 0;i < arr.size();i++){
    sum += arr[i];
    if(sum==0){
      ans = i+1;
    }
    else{
      if(mp[sum]){
        ans = max(ans , i-mp[sum]);
      }
      else{
        mp[sum] = i;
      }
    }
  }
  return ans;
}
