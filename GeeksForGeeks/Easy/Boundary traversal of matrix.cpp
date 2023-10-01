https://practice.geeksforgeeks.org/problems/boundary-traversal-of-matrix-1587115620/1




class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int>ans;
        for(int j=0; j<m; j++)
            ans.push_back(matrix[0][j]);
        for(int i=1; i<n; i++)
            ans.push_back(matrix[i][m-1]);
        if(n==1)
            return ans;
        for(int j=m-2; j>=0; j--)
            ans.push_back(matrix[n-1][j]);
        if(m==1) 
            return ans;
        for(int i=n-2; i>=1; i--)
            ans.push_back(matrix[i][0]);
        return ans;
    }
};