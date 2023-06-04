vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> v(n,vector<long long int>(n,0));
    v[0][0] = 1;
    for(int i = 1;i < n;i++){
        for(int j = 0;j <= i;j++){
            if(j == 0){
                v[i][0] = 1;
                continue;
            }
            v[i][j] = v[i-1][j-1]+v[i-1][j];

        }
    }
    for(int i = 0;i < n;i++){
        v[i].erase(v[i].begin()+1+i,v[i].end());
    }

    return v;
}

//Kth row
vector<long long> kthRow(long long k) 
{
	vector<long long> row(k);
	row[0] = 1;
	long long res = 1;
	for(int i = 1;i < k;i++){
		res *= (k-i);
		res /= i;
		row[i] = res;
	}
	
	
	return row;
} 

//first N rows
vector<int> generate(int rows){
    vector<int> ans;
    ans.push_back(1);
    int res = 1;
    for(int col = 1;col < rows;col++){
        res *= (rows-col);
        res /= col;
        ans.push_back(res);
    }
    return ans;
}

vector<vector<int>> pascalTriangle(int N) {
    vector<vector<int>> ans;
    for(int i = 1;i <= N;i++){
        ans.push_back(generate(i));
    }
    return ans;
}
