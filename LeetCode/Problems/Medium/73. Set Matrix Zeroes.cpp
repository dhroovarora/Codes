https://leetcode.com/problems/set-matrix-zeroes/




class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        long long int k = pow(2,31) - 1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == k){
                    k--;
                    i=0;
                    j=0;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == 0){
                    for(int z=0;z<n;z++){
                        if(matrix[i][z] != 0)
                            matrix[i][z] = k;
                    }
                    for(int z=0;z<m;z++){
                        if(matrix[z][j] != 0)
                            matrix[z][j] = k;
                    }
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == k){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};