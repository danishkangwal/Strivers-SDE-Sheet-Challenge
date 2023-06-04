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
