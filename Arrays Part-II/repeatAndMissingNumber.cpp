// sol 1
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int> p = {-1,-1};
	int freq[n+1] = {0};
	for(auto i:arr)
		freq[i]++;

	for(int i = 1;i <= n;i++){
		if(freq[i]==0)
			p.first = i;
		if(freq[i] > 1)
			p.second = i;
		if(p.first != -1 and p.second != -1)
			break;
	}	
	return p;
}

// sol 2
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	long long sn = 0,s2n = 0,s = 0,s2 = 0;
	sn = (1LL * n*(n+1))/2;
	s2n = (n*(n+1)*1LL*(2*n + 1))/6;

	for(int i = 0;i < n;i++){
		s += arr[i];
		s2 += 1LL*arr[i]*arr[i];
	}
	
	long long XplusY = (s2-s2n) / (s - sn);
	long long x = (s- sn + XplusY)/2;
	long long y = x - s + sn;
	
	return {int(y),int(x)};
}
