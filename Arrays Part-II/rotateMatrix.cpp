// 1st Solution      Rotate clockwise
void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int iu = 0,id = n-1,jl = 0,jr = m-1;
    while (iu < id and jl < jr) {
      int temp = mat[iu][iu];
      for(int j = jl + 1; j <= jr; j++){
          swap(temp, mat[iu][j]);
      }
      for(int i = iu+1;i <= id;i++){
          swap(temp, mat[i][jr]);
      }
      for(int j = jr-1;j >= jl;j--){
          swap(temp, mat[id][j]);
      }
      for(int i = id-1;i >= iu;i--){
          swap(temp, mat[i][jl]);
      }
      
      iu++;id--;jl++;jr--;
    }

}

// 2nd solution   Rotate by 90 degree
void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0;i<n;i++){
            for(int j = 0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
