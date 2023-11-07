https://www.geeksforgeeks.org/problems/sum-of-upper-and-lower-triangles-1587115621/1



class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        vector<int> ans;
        int upper =0,lower=0;
        for(int i=0;i<n;++i){
            for(int j=i;j<n;++j){
                upper += matrix[i][j];
            }
        }
        ans.push_back(upper);
        for(int i=0;i<n;++i){
            for(int j=0;j<=i;++j){
                lower += matrix[i][j];
            }
        }
        ans.push_back(lower);
        return ans;
    }
};