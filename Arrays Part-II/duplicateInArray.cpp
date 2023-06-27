// sol 1
int findDuplicate(vector<int> &arr, int n){
	sort(arr.begin(),arr.end());
	for(int i = 1;i < n;i++){
		if(arr[i-1]==arr[i])
			return arr[i];
	}
	return -1;
}

// sol 2
int findDuplicate(vector<int> &arr, int n){
  int freq[n] = { 0 };
  for (int i = 0; i < n; i++) {
    if(freq[arr[i]]==0)
		freq[arr[i]]++;
	else
		return arr[i];
  }
  return -1;
}

// sol 3
int findDuplicate(vector<int> &nums, int n){
    int slow = nums[0];
        int fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
        fast = nums[0];
        while(fast != slow){
            slow = nums[slow];
            fast = nums[fast];
        }
        return fast;
}
