https: // www.geeksforgeeks.org/problems/toeplitz-matrix/1




bool isToeplitz(vector<vector<int>>& mat) 
{
    vector<int> temp = mat[0];
    for (int i=1;i<mat.size();i++)
    {
        temp.pop_back();
        temp.insert(temp.begin(), mat[i][0]);
        if (temp != mat[i])
        {
            return false;   
        }
    }
    return true;
}