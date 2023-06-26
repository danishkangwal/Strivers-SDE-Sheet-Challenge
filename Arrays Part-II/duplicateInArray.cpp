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
