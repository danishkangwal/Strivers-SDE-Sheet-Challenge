// sol 1
double myPow(double x, int n) {
        double ans = 1;
        long long N = n;
        if(N < 0)
            N = -1*N;
        while(N){
            if(N%2){
                ans = ans*x;
                N--;
            }
            else{
                x *= x;
                N /= 2;
            }
        }
        if(n < 0)
            return 1.0 / ans;
        return ans;
    }

// sol 2
double myPow(double x, int n) {
        double res = 1;
        
        while(n) {
            if (n % 2 !=0) 
                res = ((n > 0) ? res * x : res / x);
            x = x * x;
            n /= 2;
        }
        return res;
    }

// sol 3
int modularExponentiation(int x, int n, int m) {
	int res = 1;
	while(n){
		if(n%2){
			res = (1LL*res*x)%m;
		}
		x = (1LL*x*x)%m;
		n /= 2;
	}

	return res;
}
