// sol 1
bool searchMatrix(vector<vector<int>>& mat, int target) {
    for(int i = 0;i < mat.size();i++){
        for(int j = 0;j < mat[0].size();j++){
            if(target == mat[i][j])
                return 1;
        }
    }
    return 0;
}

// sol 2
bool searchMatrix(vector<vector<int>>& mat, int target) {
    int row = 0;
    while(row < mat.size()-1 and target >= mat[row+1][0])
        row++;
    
    for(int j = 0;j < mat[0].size();j++){
        if(target == mat[row][j]){
            return 1;
        }
    }

    return 0;
}
