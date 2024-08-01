https://www.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1




class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        
        vector<int>ans;
        int n=matrix.size();
        int m=matrix[0].size();
         int left=0,top=0;
         int bottom=n-1,right=m-1;
         while(left<=right && top<=bottom){
             
             for(int i=left;i<=right;i++)
             ans.push_back(matrix[top][i]);
             top++;
             for(int j=top;j<=bottom;j++)
             ans.push_back(matrix[j][right]);
             right--;
             
             if(top<=bottom){
                 for(int i=right;i>=left;i--)
                 ans.push_back(matrix[bottom][i]);
                 bottom--;
             }
             if(left<=right){
                 for(int i=bottom;i>=top;i--)
                 ans.push_back(matrix[i][left]);
                 left++;
             }
             
         }
         return ans;
    }
};