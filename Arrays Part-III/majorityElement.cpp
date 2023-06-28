// sol 1
int findMajorityElement(int arr[], int n) {
	unordered_map<int,int> mp;
	for(int i = 0;i < n;i++){
		mp[arr[i]]++;
	}
	for(auto &it:mp){
		if(it.second > floor(n/2))
			return it.first;
	}
	return -1;
}

// sol 2
int findMajorityElement(int arr[], int n) {
	int element;
	int cnt = 0;
	for(int i = 0;i < n;i++){
          if (cnt == 0) {
            cnt++;
            element = arr[i];
          } else if (arr[i] == element)
            cnt++;
          else
            cnt--;
		
	}
	int cnt1 = 0;
	for(int i = 0;i < n;i++)
		if(arr[i]==element)
			cnt1++;

	return (cnt1 > n/2?element:-1);
}
