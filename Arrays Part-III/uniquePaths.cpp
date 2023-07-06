// sol 1
int M,N;
int memo[20][20];
int solve(int r,int c){
	if(r >= M or c >= N)
		return 0;
	if(r == M-1 and c == N-1)
		return 1;
	if(memo[r][c] != -1)
		return memo[r][c];
	int ans = 0;
	ans += solve(r,c+1);
	ans += solve(r+1,c);

	return memo[r][c] = ans;
}

int uniquePaths(int m, int n) {
	M = m;N = n;
	memset(memo,-1,sizeof(memo));
	return solve(0,0);
}

//sol 2
int uniquePaths(int m, int n) {
        int N = m+n-2;
        int r = m-1;
        double res = 1;
        for(int i = 1;i <= r;i++){
            res = res*(N-r+i)/i;
        }
        return int(res);
    }
