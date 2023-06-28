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

// sol 3
bool searchMatrix(vector<vector<int>>& mat, int target) {
    int low = 0,high = (mat.size()*mat[0].size())-1;
    if(mat.empty())
        return 0;
    while(low <= high){
        int mid = low + (high-low)/2;
        int num = mat[mid / mat[0].size()][mid % mat[0].size()];
        if(num == target)
            return 1;
        else if(num < target)
            low = mid+1;
        else
            high = mid-1; 
    }
    return 0;
}
