https://practice.geeksforgeeks.org/problems/boolean-matrix-problem-1587115620/1





class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here
        int m = matrix.size(), n = matrix[0].size();
        bool col = true;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 1){
                    matrix[i][0] = 1;
                    if(j != 0){
                        matrix[0][j] = 1;
                    }
                    else{
                        col = false;
                    }
                }
            }
        }
        
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(matrix[i][0] == 1 || matrix[0][j] == 1){
                    matrix[i][j] = 1;
                }
            }
        }
        
        if(matrix[0][0] == 1){
            for(int j = 0; j < n; j++){
                matrix[0][j] = 1;
            }
        }
        
        if(col == false){
            for(int i = 0; i < m; i++){
                matrix[i][0] = 1;
            }
        }
    }
};