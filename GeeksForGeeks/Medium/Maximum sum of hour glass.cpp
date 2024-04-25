https://www.geeksforgeeks.org/problems/maximum-sum-of-hour-glass3842/1




class Solution {
  public:
    int findMaxSum(int n, int m, vector<vector<int>> mat) {
        int ans=-1, first=1, second=mat[0].size()-1, third=mat.size()-1;
        for(int i=1; i<third; i++){
            for(int j=1; j<second; j++){
                int ss=mat[i][j]+mat[i-1][j-1]+mat[i-1][j]+mat[i+1][j+1]+mat[i-1][j+1]+mat[i+1][j-1]+mat[i+1][j];
                ans=max(ans, ss);
            }
        }
        return ans;
    }
};