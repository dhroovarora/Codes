https://www.geeksforgeeks.org/problems/find-duplicate-rows-in-a-binary-matrix/1




class Solution
{   
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        // Your code here
        vector<int>ans;
        map<vector<int>, int>mpp;
        for(int i=0; i<M; i++){
            if(mpp.find(matrix[i])==mpp.end()){
                mpp[matrix[i]]++;
            }else{
                ans.push_back(i);
            }
        }
        return ans;
    } 
};