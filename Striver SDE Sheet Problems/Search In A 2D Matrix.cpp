https://www.codingninjas.com/codestudio/problems/search-in-a-2d-matrix_980531?topList=striver-sde-sheet-problems&leftPanelTab=0




bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size();
        int n = mat[0].size();
        int i=0;
        int j=m-1;
        while(i<=j){
            int mid = i + (j-i)/2;
            if(mat[mid][0] > target)
                j = mid - 1;
            else if(mat[mid][n-1] < target)
                i = mid + 1;
            else{
                i = mid;
                break;
            }
        }
        if(i>j)
            return 0;
        int q = 0;
        j = n-1;
        while(q <= j){
            int mid = q + (j-q)/2;
            if(mat[i][mid] == target)
                return 1;
            else if(mat[i][mid] > target)
                j = mid - 1;
            else
                q = mid + 1;
        }
        return 0;
}