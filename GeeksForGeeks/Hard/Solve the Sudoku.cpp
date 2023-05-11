https://practice.geeksforgeeks.org/problems/solve-the-sudoku-1587115621/0




class Solution 
{
    public:
    //Function to find a solved Sudoku. 
    bool helper(int grid[N][N],int row,int col,int num)  
    { 
        // Your code here
        for(int i=0;i<N;i++){
            if(grid[row][i] == num)
                return 0;
        }
        
        for(int i=0;i<N;i++){
            if(grid[i][col] == num)
                return 0;
        }
        
        
        int size = sqrt(N);
        int row_start = row - row%size;
        int col_start = col - col%size;
        for(int i = row_start ; i<row_start + size ; i++){
            for(int j=col_start ; j<col_start + size;j++){
                if(grid[i][j] == num)
                    return 0;
            }
        }
        return 1;
    }
    
    bool SolveSudoku(int grid[N][N]){
        
        int row = -1;
        int col = -1;
        
        bool emptyleft = 1;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(grid[i][j] == 0){
                    row = i;
                    col = j;
                    emptyleft = 0;
                    break;
                }
            }
            if(!emptyleft)
                break;
        }
        if(emptyleft)
            return 1;
        
        for(int i=1;i<=N;i++){
            if(helper(grid,row,col,i)){
                grid[row][col] = i;
                if(SolveSudoku(grid))
                    return 1;
                else
                    grid[row][col] = 0;
            }
        }
        return 0;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++)
                cout << grid[i][j] << " ";
        }
    }
};