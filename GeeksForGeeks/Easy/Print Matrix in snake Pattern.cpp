https://www.geeksforgeeks.org/problems/print-matrix-in-snake-pattern-1587115621/1




class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        int n = matrix.size();
        vector<int> v;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i%2 ==0){
                    v.push_back(matrix[i][j]);
                }
                else{
                v.push_back(matrix[i][n - j-1]);
                }
            }
        }
        return v;
    }
};