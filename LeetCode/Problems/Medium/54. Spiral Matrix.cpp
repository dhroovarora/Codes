https://leetcode.com/problems/spiral-matrix/description/




class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans;
        int count = 0;
        int row_start = 0;
        int col_start = 0;
        int row_end = m-1;
        int col_end = n-1;
        while(ans.size() != (m*n)){
            if(count%4 == 0){
                for(int i = col_start;i<=col_end;i++){
                    ans.push_back(matrix[row_start][i]);
                }
                ++row_start;
                ++count;
            }
            else if(count%4 == 1){
                for(int i=row_start;i<=row_end;i++){
                    ans.push_back(matrix[i][col_end]);
                }
                --col_end;
                ++count;
            }
            else if(count%4 == 2){
                for(int i=col_end;i>=col_start;i--){
                    ans.push_back(matrix[row_end][i]);
                }
                --row_end;
                ++count;
            }
            else{
                for(int i=row_end;i>=row_start;i--){
                    ans.push_back(matrix[i][col_start]);
                }
                ++col_start;
                ++count;
            }
        }
        return ans;
    }
};