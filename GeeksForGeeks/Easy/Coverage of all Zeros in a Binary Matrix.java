https://www.geeksforgeeks.org/problems/coverage-of-all-zeros-in-a-binary-matrix4024/1




class Solution {
    public int findCoverage(int[][] matrix) {
        // code here
        int coverage = 0;
        for(int i=0; i<matrix.length; i++){
            for(int j=0; j<matrix[i].length; j++){
                if(matrix[i][j] == 0){
                    //horizontal left check
                    if(j>0 && matrix[i][j-1] == 1){
                        coverage++;
                    }
                    //horizontal right check
                    if(j<(matrix[i].length-1) && matrix[i][j+1] == 1){
                        coverage++;
                    }
                    //vertical up check
                    if(i>0 && matrix[i-1][j] == 1){
                        coverage++;
                    }
                    //vertical down check
                    if(i<(matrix.length-1) && matrix[i+1][j] == 1){
                        coverage++;
                    }
                }else{
                    continue;
                }
            }
        }
        
        return coverage;
    }
}